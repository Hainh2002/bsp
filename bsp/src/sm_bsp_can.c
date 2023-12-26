#include "sm_bsp_peripherals.h"
#include "sm_hal_adc.h"

sm_hal_can_t *can_port = sm_hal_can_init(&can_func, &g_can0);

static void can_recive_handle();

int32_t sm_bsp_can_init(){

    /*...*/

    return sm_hal_can_open(can_port);
}

int32_t sm_bsp_can_send(uint32_t id, uint8_t *tx_buffer, uint8_t len){
    sm_hal_can_mgs_t msg;
    msg.id = id;
    memcpy(msg.data, tx_buffer, len);
    return sm_hal_can_write(can_port, &msg);
}

void sm_bsp_can_set_recive_handle(){
    sm_hal_can_set_rx_callback(can_port, can_recive_handle);
}

static void can_recive_handle(){
    /*...*/
}
