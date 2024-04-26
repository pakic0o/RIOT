/*
 * Copyright (C) 2024 Francisco Javier Acosta Padilla <francisco.acosta@instagrid.co>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_dm320118
 * @{
 *
 * @file
 * @brief       Board specific definitions for the DM320118 CryptoAuth Trust Platform
 *              development kit
 *
 * @author      Francisco Acosta <francisco.acosta@instagrid.co>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"
#include "periph_conf.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    xtimer configuration
 * @{
 */
#define XTIMER_DEV          TIMER_DEV(1)
#define XTIMER_CHAN         (0)
/** @} */

/**
 * @name   LED pin definitions and handlers
 * @{
 */
#define LED0_PIN            GPIO_PIN(PA, 2)

#define LED_PORT            PORT->Group[PA]
#define LED0_MASK           (1 << 2)

#define LED0_ON             (LED_PORT.OUTCLR.reg = LED0_MASK)
#define LED0_OFF            (LED_PORT.OUTSET.reg = LED0_MASK)
#define LED0_TOGGLE         (LED_PORT.OUTTGL.reg = LED0_MASK)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
