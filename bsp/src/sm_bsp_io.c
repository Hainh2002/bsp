#include "sm_bsp_io.h"
#include "sm_hal_io.h"
#include <stdio.h>
#include <stdlib.h>
#include "sm_porting.h"

typedef enum
{
// IN pins
    IN_KEY                  = IOPORT_PORT_04_PIN_08,
    IN_HORN                 = IOPORT_PORT_04_PIN_07,
    IN_PHASE_LIGHT          = IOPORT_PORT_04_PIN_09,
    IN_HEAD_LIGHT           = IOPORT_PORT_02_PIN_00,
    IN_TURN_LEFT_LIGHT      = IOPORT_PORT_03_PIN_01,
    IN_TURN_RIGHT_LIGHT     = IOPORT_PORT_00_PIN_15,
    IN_ECO_SPORT            = IOPORT_PORT_02_PIN_06,
    IN_PARKING              = IOPORT_PORT_02_PIN_07,
// OUT pins
    OUT_PHASE_LIGHT         = IOPORT_PORT_00_PIN_00,
    OUT_TURN_LEFT_LIGHT     = IOPORT_PORT_04_PIN_02,
    OUT_TURN_RIGHT_LIGHT    = IOPORT_PORT_01_PIN_09,
    OUT_HORN                = IOPORT_PORT_00_PIN_01,
    OUT_CHARGER             = IOPORT_PORT_00_PIN_02,
    OUT_MC_POWER            = IOPORT_PORT_00_PIN_14,
    OUT_CAN_MODE            = IOPORT_PORT_02_PIN_01,
    OUT_SW_12V              = IOPORT_PORT_01_PIN_00,
    OUT_NODE_ID1            = IOPORT_PORT_01_PIN_11,
    OUT_NODE_ID2            = IOPORT_PORT_01_PIN_04,
    OUT_NODE_ID3            = IOPORT_PORT_01_PIN_12,
    OUT_ABP_CHARGE          = IOPORT_PORT_03_PIN_02

} BSP_IO;

sm_hal_io_t *in_key                 = sm_hal_io_init (&io_func, &g_ioport, IN_KEY);
sm_hal_io_t *in_horn                = sm_hal_io_init (&io_func, &g_ioport, IN_HORN);
sm_hal_io_t *in_phase_light         = sm_hal_io_init (&io_func, &g_ioport, IN_PHASE_LIGHT);
sm_hal_io_t *in_head_light          = sm_hal_io_init (&io_func, &g_ioport, IN_HEAD_LIGHT);
sm_hal_io_t *in_turn_left_light     = sm_hal_io_init (&io_func, &g_ioport, IN_TURN_LEFT_LIGHT);
sm_hal_io_t *in_turn_right_light    = sm_hal_io_init (&io_func, &g_ioport, IN_TURN_RIGHT_LIGHT);
sm_hal_io_t *in_eco_sport           = sm_hal_io_init (&io_func, &g_ioport, IN_ECO_SPORT);
sm_hal_io_t *in_parking             = sm_hal_io_init (&io_func, &g_ioport, IN_PARKING);

sm_hal_io_t *out_phase_light        = sm_hal_io_init (&io_func, &g_ioport, OUT_PHASE_LIGHT);
sm_hal_io_t *out_turn_left_light    = sm_hal_io_init (&io_func, &g_ioport, OUT_TURN_LEFT_LIGHT);
sm_hal_io_t *out_turn_right_light   = sm_hal_io_init (&io_func, &g_ioport, OUT_TURN_RIGHT_LIGHT);
sm_hal_io_t *out_horn               = sm_hal_io_init (&io_func, &g_ioport, OUT_HORN);
sm_hal_io_t *out_charger            = sm_hal_io_init (&io_func, &g_ioport, OUT_CHARGER);
sm_hal_io_t *out_mc_power           = sm_hal_io_init (&io_func, &g_ioport, OUT_MC_POWER);
sm_hal_io_t *out_can_mode           = sm_hal_io_init (&io_func, &g_ioport, OUT_CAN_MODE);
sm_hal_io_t *out_sw_12v             = sm_hal_io_init (&io_func, &g_ioport, OUT_SW_12V);
sm_hal_io_t *out_node_id1           = sm_hal_io_init (&io_func, &g_ioport, OUT_NODE_ID1);
sm_hal_io_t *out_node_id2           = sm_hal_io_init (&io_func, &g_ioport, OUT_NODE_ID2);
sm_hal_io_t *out_node_id3           = sm_hal_io_init (&io_func, &g_ioport, OUT_NODE_ID3);
sm_hal_io_t *out_abp_charger        = sm_hal_io_init (&io_func, &g_ioport, OUT_ABP_CHARGE);

int32_t sm_bsp_io_get_value_key(){
    sm_hal_io_open(in_key, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_key);
}

int32_t sm_bsp_io_get_value_horn(){
    sm_hal_io_open(in_horn, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_horn);
}
int32_t sm_bsp_io_get_value_phase_light(){
    sm_hal_io_open(in_phase_light, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_phase_light);
}
int32_t sm_bsp_io_get_value_head_light(){
    sm_hal_io_open(in_head_light, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_head_light);
}
int32_t sm_bsp_io_get_value_turn_left_light(){
    sm_hal_io_open(in_turn_left_light, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_turn_left_light);
}
int32_t sm_bsp_io_get_value_turn_right_light(){
    sm_hal_io_open(in_turn_right_light, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_turn_right_light);
}
int32_t sm_bsp_io_get_value_eco_sport(){
    sm_hal_io_open(in_eco_sport, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_eco_sport);
}
int32_t sm_bsp_io_get_value_parking(){
    sm_hal_io_open(in_parking, SM_HAL_IO_INPUT);
    return sm_hal_io_get_value(in_parking);
}


int32_t sm_bsp_io_set_value_phase_light(uint16_t _level){
    sm_hal_io_open(out_phase_light, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_phase_light, _level);
}

int32_t sm_bsp_io_set_value_turn_left_light(uint16_t _level){
    sm_hal_io_open(out_turn_left_light, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_turn_left_light, _level);
}
int32_t sm_bsp_io_set_value_turn_right_light(uint16_t _level){
    sm_hal_io_open(out_turn_right_light, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_turn_right_light, _level);
}
int32_t sm_bsp_io_set_value_horn(uint16_t _level){
    sm_hal_io_open(out_horn, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_horn, _level);
}
int32_t sm_bsp_io_set_value_charger(uint16_t _level){
    sm_hal_io_open(out_charger, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_charger, _level);
}
int32_t sm_bsp_io_set_value_mc_power(uint16_t _level){
    sm_hal_io_open(out_mc_power, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_mc_power, _level);
}
int32_t sm_bsp_io_set_value_can_mode(uint16_t _level){
    sm_hal_io_open(out_can_mode, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_can_mode, _level);
}
int32_t sm_bsp_io_set_value_abp_charger(uint16_t _level){
    sm_hal_io_open(out_abp_charger, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_abp_charger, _level);
}
int32_t sm_bsp_io_set_value_node_id_1(uint16_t _level){
    sm_hal_io_open(out_node_id1, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_node_id1, _level);
}
int32_t sm_bsp_io_set_value_node_id_2(uint16_t _level){
    sm_hal_io_open(out_node_id2, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_node_id2, _level);
}
int32_t sm_bsp_io_set_value_node_id_3(uint16_t _level){
    sm_hal_io_open(out_node_id3, SM_HAL_IO_OUTPUT);
    return sm_hal_io_set_value(out_node_id3, _level);
}
