/*
 * sm_bsp_peripherals.h
 *
 *  Created on: Dec 25, 2023
 *      Author: hainh
 */

#ifndef BSP_INCLUDE_SM_BSP_PERIPHERALS_H_
#define BSP_INCLUDE_SM_BSP_PERIPHERALS_H_

#include <stdint.h>
#include <stdlib.h>

/* ADC */
/**
 * @fn sm_bsp_adc_init()
 * @brief
 *
 * @param
 * @return
 */
void sm_bsp_adc_init();
/**
 * @fn sm_bsp_adc_read_charger_voltage()
 * @brief
 *
 * @param
 * @return
 */
uint16_t sm_bsp_adc_read_charger_voltage();
/**
 * @fn sm_bsp_adc_read_charger_voltage()
 * @brief
 *
 * @param
 * @return
 */
uint16_t sm_bsp_adc_read_abp_voltage();

/* CAN */
/**
 * @fn sm_bsp_can_init()
 * @brief
 *
 * @param
 * @return
 */
void sm_bsp_can_init();
/**
 * @fn sm_bsp_can_send(uint32_t id, uint8_t *tx_buffer, uint8_t len)
 * @brief
 *
 * @param id
 * @param tx_buffer
 * @param len
 * @return 0 success | -1 error
 */
int32_t sm_bsp_can_send(uint32_t id, uint8_t *tx_buffer, uint8_t len);
/**
 * @fn sm_bsp_can_set_receive_handle(sm_hal_can_t *_can,void (*_handler)(sm_hal_can_t *_can))
 * @brief
 *
 * @param _can
 * @param _handler
 * @return
 */
void sm_bsp_can_set_receive_handle(sm_hal_can_t *_can,void (*_handler)(sm_hal_can_t *_can));

/* UART */
/**
 * @fn sm_bsp_uart_init(uint32_t _baudrate, uint32_t _databit, uint32_t _parity)
 * @brief
 *
 * @param _baudrate
 * @param _databit
 * @param _parity
 * @return
 */
void sm_bsp_uart_init(uint32_t _baudrate, uint32_t _databit, uint32_t _parity);
/**
 * @fn sm_bsp_uart_send(uint8_t *tx_buffer, uint8_t len)
 * @brief
 *
 * @param tx_buffer
 * @param len
 * @return 0 success | -1 error
 */
int32_t sm_bsp_uart_send(uint8_t *tx_buffer, uint8_t len);
/**
 * @fn sm_bsp_uart_set_receive_handle(sm_hal_uart_t *_uart, void (*_handler)(sm_hal_uart_t *_uart))
 * @brief
 *
 * @param _uart
 * @param _handler
 * @return
 */
void sm_bsp_uart_set_receive_handle(sm_hal_uart_t *_uart, void (*_handler)(sm_hal_uart_t *_uart));

/* TIMER */
/**
 * @fn sm_bsp_timer_init()
 * @brief
 *
 * @param
 * @return
 */
void sm_bsp_timer_init();
/**
 * @fn sm_bsp_timer_set_irq_handle(sm_hal_timer_t  *_timer, void (*_handler)(void))
 * @brief
 *
 * @param _timer
 * @param _handler
 * @return
 */
void sm_bsp_timer_set_irq_handle(sm_hal_timer_t  *_timer, void (*_handler)(void));

/* IWDG */
/**
 * @fn sm_bsp_iwdg_open(sm_hal_iwdg_t *_iwdg)
 * @brief
 *
 * @param _iwdg
 * @return
 */
void sm_bsp_iwdg_open(sm_hal_iwdg_t *_iwdg);
/**
 * @fn sm_bsp_iwdg_close()
 * @brief
 *
 * @param _iwdg
 * @return
 */
void sm_bsp_iwdg_close(sm_hal_iwdg_t *_iwdg);
/**
 * @fn sm_bsp_iwdg_reset()
 * @brief
 *
 * @param _iwdg
 * @return
 */
void sm_bsp_iwdg_reset(sm_hal_iwdg_t *_iwdg);

/* PWM */

/* SPI */

/* IIC */

/* SPI */

/* USB */

#endif /* BSP_INCLUDE_SM_BSP_PERIPHERALS_H_ */
