/*
 * sm_bsp_io.h
 *
 *  Created on: Dec 25, 2023
 *      Author: hainh
 */

#ifndef SM_BSP_IO_H
#define SM_BSP_IO_H

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>
#include <stdlib.h>

/**
 * @fn sm_bsp_io_get_value_key()
 * @brief
 * sm_bsp_io_get_value_key
 * @param
 * @return 0 | 1
 */
int32_t sm_bsp_io_get_value_key();
/**
 * @fn sm_bsp_io_get_value_horn()
 * @brief
 * sm_bsp_io_get_value_horn
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_horn();
/**
 * @fn sm_bsp_io_get_value_phase_light()
 * @brief
 * sm_bsp_io_get_value_phase_light
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_phase_light();
/**
 * @fn sm_bsp_io_get_value_head_light()
 * @brief
 * sm_bsp_io_get_value_head_light
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_head_light();
/**
 * @fn sm_bsp_io_get_value_turn_left_light()
 * @brief
 * sm_bsp_io_get_value_turn_left_light
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_turn_left_light();
/**
 * @fn sm_bsp_io_get_value_turn_right_light()
 * @brief
 * sm_bsp_io_get_value_turn_right_light
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_turn_right_light();
/**
 * @fn sm_bsp_io_get_value_eco_sport()
 * @brief
 * sm_bsp_io_get_value_eco_sport
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_eco_sport();
/**
 * @fn sm_bsp_io_get_value_parking()
 * @brief
 * sm_bsp_io_get_value_parking
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_parking();
/**
 * @fn sm_bsp_io_get_value_abp_charger()
 * @brief
 * sm_bsp_io_get_value_abp_charger
 * @param
 * @return
 */
int32_t sm_bsp_io_get_value_abp_charger();

/**
 * @fn sm_bsp_io_set_value_phase_light(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_phase_light
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_phase_light(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_turn_left_light(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_turn_left_light
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_turn_left_light(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_turn_right_light(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_turn_right_light
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_turn_right_light(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_horn(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_horn
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_horn(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_charger(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_charger
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_charger(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_mc_power(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_mc_power
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_mc_power(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_can_mode(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_can_mode
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_can_mode(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_abp_charger(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_abp_charger
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_abp_charger(uint16_t _level);
/**
 * @fn  sm_bsp_io_set_value_node_id_1(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_node_id_1
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_node_id_1(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_node_id_2(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_node_id_2
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_node_id_2(uint16_t _level);
/**
 * @fn sm_bsp_io_set_value_node_id_3(uint16_t _level)
 * @brief
 * sm_bsp_io_set_value_node_id_3
 * @param _level
 * @return
 */
int32_t sm_bsp_io_set_value_node_id_3(uint16_t _level);


#ifdef __cplusplus
};
#endif

#endif //SM_BSP_IO_H
