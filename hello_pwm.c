/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Output PWM signals on pins 0 and 1

#include "pico/stdlib.h"
#include "hardware/pwm.h"

int main() {
    /// \tag::setup_pwm[]

    // Tell GPIO 0 it is allocated to the PWM
    gpio_set_function(0, GPIO_FUNC_PWM);

    // Find out which PWM slice is connected to GPIO 0 (it's slice 0)
    uint slice_num = pwm_gpio_to_slice_num(0);

    // Set the PWM frequency to 50 Hz
    // The system clock is typically 125 MHz, so we need to divide it down
    // 125,000,000 Hz / 50 Hz = 2,500,000
    // We need to set the wrap value to 2,500,000 / 4096 (max duty cycle resolution)
    uint32_t clock_div = 2500000 / 4096;
    pwm_set_clkdiv(slice_num, clock_div);

    // Set period of 4096 cycles (for 12-bit resolution)
    pwm_set_wrap(slice_num, 4095);

    // Set the duty cycle for the servo position
    // THIS IS WHAT VALUE TO EDIT
    pwm_set_chan_level(slice_num, PWM_CHAN_A, 800); // between 1200 and 100? 
  
    // Set the PWM running
    pwm_set_enabled(slice_num, true);

    // Keep the program running
    while (true) {
        tight_loop_contents();
    }
}
