#include <sm_bsp_peripherals.h>
#include <sm_hal_adc.h>
#include <stdlib.h>

sm_hal_adc_t* in_charger  = sm_hal_adc_init(&adc_func, &g_adc0, 1);
sm_hal_adc_t* in_abp      = sm_hal_adc_init(&adc_func, &g_adc0, 1);

void sm_bsp_adc_init(){
    sm_hal_adc_open(in_charger);
    sm_hal_adc_open(in_abp);
}
uint16_t sm_bsp_adc_read_charger_voltage(){
    return sm_hal_adc_read(in_charger, ADC_CHANNEL_16);
}

uint16_t sm_bsp_adc_read_abp_voltage(){
    return sm_hal_adc_read(in_abp, ADC_CHANNEL_11);
}
