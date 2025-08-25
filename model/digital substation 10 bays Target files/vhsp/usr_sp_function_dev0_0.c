// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines





































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



// const variables

//@cmp.var.start
// variables
X_Int32 _bay_1_cb_close__out;
X_Int32 _bay_1_cb_open__out;
double _bay_1_constant1__out = 1.0;
double _bay_1_constant2__out = 0.0;
double _bay_1_constant4__out = 1.0;
double _bay_1_constant5__out = 0.0;
double _bay_1_constant6__out = 1.0;
double _bay_1_constant7__out = 0.0;
X_Int32 _bay_1_dc1_close__out;
X_Int32 _bay_1_dc1_open__out;
X_Int32 _bay_1_dc2_close__out;
X_Int32 _bay_1_dc2_open__out;
double _bay_1_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_1_sr_flip_flop2__out;
X_Int32 _bay_1_sr_flip_flop2__out_n;
X_Int32 _bay_1_sr_flip_flop4__out;
X_Int32 _bay_1_sr_flip_flop4__out_n;
double _bay_1_sr_flip_flop5__out;
double _bay_1_sr_flip_flop5__out_n;
X_UnInt32 _bay_1_sv_publisher1_iq__out[4];
X_UnInt32 _bay_1_sv_publisher1_vq__out[4];
X_Int32 _bay_1_step1__out;
X_Int32 _bay_1_step2__out;
X_Int32 _bay_1_step3__out;
X_Int32 _bay_10_cb_close__out;
X_Int32 _bay_10_cb_open__out;
double _bay_10_constant1__out = 1.0;
double _bay_10_constant2__out = 0.0;
double _bay_10_constant4__out = 1.0;
double _bay_10_constant5__out = 0.0;
double _bay_10_constant6__out = 1.0;
double _bay_10_constant7__out = 0.0;
X_Int32 _bay_10_dc1_close__out;
X_Int32 _bay_10_dc1_open__out;
X_Int32 _bay_10_dc2_close__out;
X_Int32 _bay_10_dc2_open__out;
double _bay_10_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_10_sr_flip_flop2__out;
X_Int32 _bay_10_sr_flip_flop2__out_n;
X_Int32 _bay_10_sr_flip_flop4__out;
X_Int32 _bay_10_sr_flip_flop4__out_n;
double _bay_10_sr_flip_flop5__out;
double _bay_10_sr_flip_flop5__out_n;
X_UnInt32 _bay_10_sv_publisher1_iq__out[4];
X_UnInt32 _bay_10_sv_publisher1_vq__out[4];
X_Int32 _bay_10_step1__out;
X_Int32 _bay_10_step2__out;
X_Int32 _bay_10_step3__out;
X_Int32 _bay_2_cb_close__out;
X_Int32 _bay_2_cb_open__out;
double _bay_2_constant1__out = 1.0;
double _bay_2_constant2__out = 0.0;
double _bay_2_constant4__out = 1.0;
double _bay_2_constant5__out = 0.0;
double _bay_2_constant6__out = 1.0;
double _bay_2_constant7__out = 0.0;
X_Int32 _bay_2_dc1_close__out;
X_Int32 _bay_2_dc1_open__out;
X_Int32 _bay_2_dc2_close__out;
X_Int32 _bay_2_dc2_open__out;
double _bay_2_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_2_sr_flip_flop2__out;
X_Int32 _bay_2_sr_flip_flop2__out_n;
X_Int32 _bay_2_sr_flip_flop4__out;
X_Int32 _bay_2_sr_flip_flop4__out_n;
double _bay_2_sr_flip_flop5__out;
double _bay_2_sr_flip_flop5__out_n;
X_UnInt32 _bay_2_sv_publisher1_iq__out[4];
X_UnInt32 _bay_2_sv_publisher1_vq__out[4];
X_Int32 _bay_2_step1__out;
X_Int32 _bay_2_step2__out;
X_Int32 _bay_2_step3__out;
X_Int32 _bay_3_cb_close__out;
X_Int32 _bay_3_cb_open__out;
double _bay_3_constant1__out = 1.0;
double _bay_3_constant2__out = 0.0;
double _bay_3_constant4__out = 1.0;
double _bay_3_constant5__out = 0.0;
double _bay_3_constant6__out = 1.0;
double _bay_3_constant7__out = 0.0;
X_Int32 _bay_3_dc1_close__out;
X_Int32 _bay_3_dc1_open__out;
X_Int32 _bay_3_dc2_close__out;
X_Int32 _bay_3_dc2_open__out;
double _bay_3_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_3_sr_flip_flop2__out;
X_Int32 _bay_3_sr_flip_flop2__out_n;
X_Int32 _bay_3_sr_flip_flop4__out;
X_Int32 _bay_3_sr_flip_flop4__out_n;
double _bay_3_sr_flip_flop5__out;
double _bay_3_sr_flip_flop5__out_n;
X_UnInt32 _bay_3_sv_publisher1_iq__out[4];
X_UnInt32 _bay_3_sv_publisher1_vq__out[4];
X_Int32 _bay_3_step1__out;
X_Int32 _bay_3_step2__out;
X_Int32 _bay_3_step3__out;
X_Int32 _bay_4_cb_close__out;
X_Int32 _bay_4_cb_open__out;
double _bay_4_constant1__out = 1.0;
double _bay_4_constant2__out = 0.0;
double _bay_4_constant4__out = 1.0;
double _bay_4_constant5__out = 0.0;
double _bay_4_constant6__out = 1.0;
double _bay_4_constant7__out = 0.0;
X_Int32 _bay_4_dc1_close__out;
X_Int32 _bay_4_dc1_open__out;
X_Int32 _bay_4_dc2_close__out;
X_Int32 _bay_4_dc2_open__out;
double _bay_4_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_4_sr_flip_flop2__out;
X_Int32 _bay_4_sr_flip_flop2__out_n;
X_Int32 _bay_4_sr_flip_flop4__out;
X_Int32 _bay_4_sr_flip_flop4__out_n;
double _bay_4_sr_flip_flop5__out;
double _bay_4_sr_flip_flop5__out_n;
X_UnInt32 _bay_4_sv_publisher1_iq__out[4];
X_UnInt32 _bay_4_sv_publisher1_vq__out[4];
X_Int32 _bay_4_step1__out;
X_Int32 _bay_4_step2__out;
X_Int32 _bay_4_step3__out;
X_Int32 _bay_5_cb_close__out;
X_Int32 _bay_5_cb_open__out;
double _bay_5_constant1__out = 1.0;
double _bay_5_constant2__out = 0.0;
double _bay_5_constant4__out = 1.0;
double _bay_5_constant5__out = 0.0;
double _bay_5_constant6__out = 1.0;
double _bay_5_constant7__out = 0.0;
X_Int32 _bay_5_dc1_close__out;
X_Int32 _bay_5_dc1_open__out;
X_Int32 _bay_5_dc2_close__out;
X_Int32 _bay_5_dc2_open__out;
double _bay_5_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_5_sr_flip_flop2__out;
X_Int32 _bay_5_sr_flip_flop2__out_n;
X_Int32 _bay_5_sr_flip_flop4__out;
X_Int32 _bay_5_sr_flip_flop4__out_n;
double _bay_5_sr_flip_flop5__out;
double _bay_5_sr_flip_flop5__out_n;
X_UnInt32 _bay_5_sv_publisher1_iq__out[4];
X_UnInt32 _bay_5_sv_publisher1_vq__out[4];
X_Int32 _bay_5_step1__out;
X_Int32 _bay_5_step2__out;
X_Int32 _bay_5_step3__out;
X_Int32 _bay_6_cb_close__out;
X_Int32 _bay_6_cb_open__out;
double _bay_6_constant1__out = 1.0;
double _bay_6_constant2__out = 0.0;
double _bay_6_constant4__out = 1.0;
double _bay_6_constant5__out = 0.0;
double _bay_6_constant6__out = 1.0;
double _bay_6_constant7__out = 0.0;
X_Int32 _bay_6_dc1_close__out;
X_Int32 _bay_6_dc1_open__out;
X_Int32 _bay_6_dc2_close__out;
X_Int32 _bay_6_dc2_open__out;
double _bay_6_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_6_sr_flip_flop2__out;
X_Int32 _bay_6_sr_flip_flop2__out_n;
X_Int32 _bay_6_sr_flip_flop4__out;
X_Int32 _bay_6_sr_flip_flop4__out_n;
double _bay_6_sr_flip_flop5__out;
double _bay_6_sr_flip_flop5__out_n;
X_UnInt32 _bay_6_sv_publisher1_iq__out[4];
X_UnInt32 _bay_6_sv_publisher1_vq__out[4];
X_Int32 _bay_6_step1__out;
X_Int32 _bay_6_step2__out;
X_Int32 _bay_6_step3__out;
X_Int32 _bay_7_cb_close__out;
X_Int32 _bay_7_cb_open__out;
double _bay_7_constant1__out = 1.0;
double _bay_7_constant2__out = 0.0;
double _bay_7_constant4__out = 1.0;
double _bay_7_constant5__out = 0.0;
double _bay_7_constant6__out = 1.0;
double _bay_7_constant7__out = 0.0;
X_Int32 _bay_7_dc1_close__out;
X_Int32 _bay_7_dc1_open__out;
X_Int32 _bay_7_dc2_close__out;
X_Int32 _bay_7_dc2_open__out;
double _bay_7_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_7_sr_flip_flop2__out;
X_Int32 _bay_7_sr_flip_flop2__out_n;
X_Int32 _bay_7_sr_flip_flop4__out;
X_Int32 _bay_7_sr_flip_flop4__out_n;
double _bay_7_sr_flip_flop5__out;
double _bay_7_sr_flip_flop5__out_n;
X_UnInt32 _bay_7_sv_publisher1_iq__out[4];
X_UnInt32 _bay_7_sv_publisher1_vq__out[4];
X_Int32 _bay_7_step1__out;
X_Int32 _bay_7_step2__out;
X_Int32 _bay_7_step3__out;
X_Int32 _bay_8_cb_close__out;
X_Int32 _bay_8_cb_open__out;
double _bay_8_constant1__out = 1.0;
double _bay_8_constant2__out = 0.0;
double _bay_8_constant4__out = 1.0;
double _bay_8_constant5__out = 0.0;
double _bay_8_constant6__out = 1.0;
double _bay_8_constant7__out = 0.0;
X_Int32 _bay_8_dc1_close__out;
X_Int32 _bay_8_dc1_open__out;
X_Int32 _bay_8_dc2_close__out;
X_Int32 _bay_8_dc2_open__out;
double _bay_8_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_8_sr_flip_flop2__out;
X_Int32 _bay_8_sr_flip_flop2__out_n;
X_Int32 _bay_8_sr_flip_flop4__out;
X_Int32 _bay_8_sr_flip_flop4__out_n;
double _bay_8_sr_flip_flop5__out;
double _bay_8_sr_flip_flop5__out_n;
X_UnInt32 _bay_8_sv_publisher1_iq__out[4];
X_UnInt32 _bay_8_sv_publisher1_vq__out[4];
X_Int32 _bay_8_step1__out;
X_Int32 _bay_8_step2__out;
X_Int32 _bay_8_step3__out;
X_Int32 _bay_9_cb_close__out;
X_Int32 _bay_9_cb_open__out;
double _bay_9_constant1__out = 1.0;
double _bay_9_constant2__out = 0.0;
double _bay_9_constant4__out = 1.0;
double _bay_9_constant5__out = 0.0;
double _bay_9_constant6__out = 1.0;
double _bay_9_constant7__out = 0.0;
X_Int32 _bay_9_dc1_close__out;
X_Int32 _bay_9_dc1_open__out;
X_Int32 _bay_9_dc2_close__out;
X_Int32 _bay_9_dc2_open__out;
double _bay_9_goose_subscriber1_goose_data_out__out[4];
X_Int32 _bay_9_sr_flip_flop2__out;
X_Int32 _bay_9_sr_flip_flop2__out_n;
X_Int32 _bay_9_sr_flip_flop4__out;
X_Int32 _bay_9_sr_flip_flop4__out_n;
double _bay_9_sr_flip_flop5__out;
double _bay_9_sr_flip_flop5__out_n;
X_UnInt32 _bay_9_sv_publisher1_iq__out[4];
X_UnInt32 _bay_9_sv_publisher1_vq__out[4];
X_Int32 _bay_9_step1__out;
X_Int32 _bay_9_step2__out;
X_Int32 _bay_9_step3__out;
X_Int32 _dynamic_grid_fault1_fault_select__out;
X_Int32 _fault_q10_fault_select__out;
X_Int32 _fault_q3_fault_select__out;
X_Int32 _fault_q7_fault_select__out;
X_Int32 _faultbb_fault_select__out;
X_Int32 _hv_bay_1_cb_close__out;
X_Int32 _hv_bay_1_cb_open__out;
double _hv_bay_1_constant1__out = 1.0;
double _hv_bay_1_constant2__out = 0.0;
double _hv_bay_1_constant4__out = 1.0;
double _hv_bay_1_constant5__out = 0.0;
double _hv_bay_1_constant6__out = 1.0;
double _hv_bay_1_constant7__out = 0.0;
X_Int32 _hv_bay_1_dc1_close__out;
X_Int32 _hv_bay_1_dc1_open__out;
X_Int32 _hv_bay_1_dc2_close__out;
X_Int32 _hv_bay_1_dc2_open__out;
X_Int32 _hv_bay_1_sr_flip_flop2__out;
X_Int32 _hv_bay_1_sr_flip_flop2__out_n;
X_Int32 _hv_bay_1_sr_flip_flop4__out;
X_Int32 _hv_bay_1_sr_flip_flop4__out_n;
X_Int32 _hv_bay_1_sr_flip_flop5__out;
X_Int32 _hv_bay_1_sr_flip_flop5__out_n;
X_UnInt32 _hv_bay_1_sv_publisher1_iq__out[4];
X_UnInt32 _hv_bay_1_sv_publisher1_vq__out[4];
X_Int32 _hv_bay_1_step1__out;
X_Int32 _hv_bay_1_step2__out;
X_Int32 _hv_bay_1_step3__out;
double _sv_setup1__out;
double _three_phase_meter1_ia_ia2__out;
double _three_phase_meter1_ib_ia2__out;
double _three_phase_meter1_ic_ia2__out;
double _three_phase_meter1_pll_lpf_lpf__out;
double _three_phase_meter1_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter1_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter1_pll_lpf_lpf__a_sum;
double _three_phase_meter1_pll_lpf_lpf__b_sum;
double _three_phase_meter1_pll_lpf_lpf__delay_line_in;
double _three_phase_meter1_pll_pid_integrator1__out;
double _three_phase_meter1_pll_pid_integrator2__out;
double _three_phase_meter1_pll_unit_delay1__out;
double _three_phase_meter1_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter1_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter1_vab_va2__out;
double _three_phase_meter1_van_va2__out;
double _three_phase_meter1_vbc_va2__out;
double _three_phase_meter1_vbn_va2__out;
double _three_phase_meter1_vca_va2__out;
double _three_phase_meter1_vcn_va2__out;
double _three_phase_meter1_zero__out = 0.0;
double _three_phase_meter10_ia_ia2__out;
double _three_phase_meter10_ib_ia2__out;
double _three_phase_meter10_ic_ia2__out;
double _three_phase_meter10_pll_lpf_lpf__out;
double _three_phase_meter10_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter10_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter10_pll_lpf_lpf__a_sum;
double _three_phase_meter10_pll_lpf_lpf__b_sum;
double _three_phase_meter10_pll_lpf_lpf__delay_line_in;
double _three_phase_meter10_pll_pid_integrator1__out;
double _three_phase_meter10_pll_pid_integrator2__out;
double _three_phase_meter10_pll_unit_delay1__out;
double _three_phase_meter10_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter10_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter10_vab_va2__out;
double _three_phase_meter10_van_va2__out;
double _three_phase_meter10_vbc_va2__out;
double _three_phase_meter10_vbn_va2__out;
double _three_phase_meter10_vca_va2__out;
double _three_phase_meter10_vcn_va2__out;
double _three_phase_meter10_zero__out = 0.0;
double _three_phase_meter11_ia_ia2__out;
double _three_phase_meter11_ib_ia2__out;
double _three_phase_meter11_ic_ia2__out;
double _three_phase_meter11_pll_lpf_lpf__out;
double _three_phase_meter11_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter11_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter11_pll_lpf_lpf__a_sum;
double _three_phase_meter11_pll_lpf_lpf__b_sum;
double _three_phase_meter11_pll_lpf_lpf__delay_line_in;
double _three_phase_meter11_pll_pid_integrator1__out;
double _three_phase_meter11_pll_pid_integrator2__out;
double _three_phase_meter11_pll_unit_delay1__out;
double _three_phase_meter11_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter11_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter11_vab_va2__out;
double _three_phase_meter11_van_va2__out;
double _three_phase_meter11_vbc_va2__out;
double _three_phase_meter11_vbn_va2__out;
double _three_phase_meter11_vca_va2__out;
double _three_phase_meter11_vcn_va2__out;
double _three_phase_meter11_zero__out = 0.0;
double _three_phase_meter2_ia_ia2__out;
double _three_phase_meter2_ib_ia2__out;
double _three_phase_meter2_ic_ia2__out;
double _three_phase_meter2_pll_lpf_lpf__out;
double _three_phase_meter2_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter2_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter2_pll_lpf_lpf__a_sum;
double _three_phase_meter2_pll_lpf_lpf__b_sum;
double _three_phase_meter2_pll_lpf_lpf__delay_line_in;
double _three_phase_meter2_pll_pid_integrator1__out;
double _three_phase_meter2_pll_pid_integrator2__out;
double _three_phase_meter2_pll_unit_delay1__out;
double _three_phase_meter2_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter2_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter2_vab_va2__out;
double _three_phase_meter2_van_va2__out;
double _three_phase_meter2_vbc_va2__out;
double _three_phase_meter2_vbn_va2__out;
double _three_phase_meter2_vca_va2__out;
double _three_phase_meter2_vcn_va2__out;
double _three_phase_meter2_zero__out = 0.0;
double _three_phase_meter3_ia_ia2__out;
double _three_phase_meter3_ib_ia2__out;
double _three_phase_meter3_ic_ia2__out;
double _three_phase_meter3_pll_lpf_lpf__out;
double _three_phase_meter3_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter3_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter3_pll_lpf_lpf__a_sum;
double _three_phase_meter3_pll_lpf_lpf__b_sum;
double _three_phase_meter3_pll_lpf_lpf__delay_line_in;
double _three_phase_meter3_pll_pid_integrator1__out;
double _three_phase_meter3_pll_pid_integrator2__out;
double _three_phase_meter3_pll_unit_delay1__out;
double _three_phase_meter3_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter3_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter3_vab_va2__out;
double _three_phase_meter3_van_va2__out;
double _three_phase_meter3_vbc_va2__out;
double _three_phase_meter3_vbn_va2__out;
double _three_phase_meter3_vca_va2__out;
double _three_phase_meter3_vcn_va2__out;
double _three_phase_meter3_zero__out = 0.0;
double _three_phase_meter4_ia_ia2__out;
double _three_phase_meter4_ib_ia2__out;
double _three_phase_meter4_ic_ia2__out;
double _three_phase_meter4_pll_lpf_lpf__out;
double _three_phase_meter4_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter4_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter4_pll_lpf_lpf__a_sum;
double _three_phase_meter4_pll_lpf_lpf__b_sum;
double _three_phase_meter4_pll_lpf_lpf__delay_line_in;
double _three_phase_meter4_pll_pid_integrator1__out;
double _three_phase_meter4_pll_pid_integrator2__out;
double _three_phase_meter4_pll_unit_delay1__out;
double _three_phase_meter4_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter4_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter4_vab_va2__out;
double _three_phase_meter4_van_va2__out;
double _three_phase_meter4_vbc_va2__out;
double _three_phase_meter4_vbn_va2__out;
double _three_phase_meter4_vca_va2__out;
double _three_phase_meter4_vcn_va2__out;
double _three_phase_meter4_zero__out = 0.0;
double _three_phase_meter5_ia_ia2__out;
double _three_phase_meter5_ib_ia2__out;
double _three_phase_meter5_ic_ia2__out;
double _three_phase_meter5_pll_lpf_lpf__out;
double _three_phase_meter5_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter5_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter5_pll_lpf_lpf__a_sum;
double _three_phase_meter5_pll_lpf_lpf__b_sum;
double _three_phase_meter5_pll_lpf_lpf__delay_line_in;
double _three_phase_meter5_pll_pid_integrator1__out;
double _three_phase_meter5_pll_pid_integrator2__out;
double _three_phase_meter5_pll_unit_delay1__out;
double _three_phase_meter5_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter5_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter5_vab_va2__out;
double _three_phase_meter5_van_va2__out;
double _three_phase_meter5_vbc_va2__out;
double _three_phase_meter5_vbn_va2__out;
double _three_phase_meter5_vca_va2__out;
double _three_phase_meter5_vcn_va2__out;
double _three_phase_meter5_zero__out = 0.0;
double _three_phase_meter6_ia_ia2__out;
double _three_phase_meter6_ib_ia2__out;
double _three_phase_meter6_ic_ia2__out;
double _three_phase_meter6_pll_lpf_lpf__out;
double _three_phase_meter6_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter6_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter6_pll_lpf_lpf__a_sum;
double _three_phase_meter6_pll_lpf_lpf__b_sum;
double _three_phase_meter6_pll_lpf_lpf__delay_line_in;
double _three_phase_meter6_pll_pid_integrator1__out;
double _three_phase_meter6_pll_pid_integrator2__out;
double _three_phase_meter6_pll_unit_delay1__out;
double _three_phase_meter6_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter6_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter6_vab_va2__out;
double _three_phase_meter6_van_va2__out;
double _three_phase_meter6_vbc_va2__out;
double _three_phase_meter6_vbn_va2__out;
double _three_phase_meter6_vca_va2__out;
double _three_phase_meter6_vcn_va2__out;
double _three_phase_meter6_zero__out = 0.0;
double _three_phase_meter7_ia_ia2__out;
double _three_phase_meter7_ib_ia2__out;
double _three_phase_meter7_ic_ia2__out;
double _three_phase_meter7_pll_lpf_lpf__out;
double _three_phase_meter7_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter7_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter7_pll_lpf_lpf__a_sum;
double _three_phase_meter7_pll_lpf_lpf__b_sum;
double _three_phase_meter7_pll_lpf_lpf__delay_line_in;
double _three_phase_meter7_pll_pid_integrator1__out;
double _three_phase_meter7_pll_pid_integrator2__out;
double _three_phase_meter7_pll_unit_delay1__out;
double _three_phase_meter7_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter7_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter7_vab_va2__out;
double _three_phase_meter7_van_va2__out;
double _three_phase_meter7_vbc_va2__out;
double _three_phase_meter7_vbn_va2__out;
double _three_phase_meter7_vca_va2__out;
double _three_phase_meter7_vcn_va2__out;
double _three_phase_meter7_zero__out = 0.0;
double _three_phase_meter8_ia_ia2__out;
double _three_phase_meter8_ib_ia2__out;
double _three_phase_meter8_ic_ia2__out;
double _three_phase_meter8_pll_lpf_lpf__out;
double _three_phase_meter8_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter8_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter8_pll_lpf_lpf__a_sum;
double _three_phase_meter8_pll_lpf_lpf__b_sum;
double _three_phase_meter8_pll_lpf_lpf__delay_line_in;
double _three_phase_meter8_pll_pid_integrator1__out;
double _three_phase_meter8_pll_pid_integrator2__out;
double _three_phase_meter8_pll_unit_delay1__out;
double _three_phase_meter8_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter8_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter8_vab_va2__out;
double _three_phase_meter8_van_va2__out;
double _three_phase_meter8_vbc_va2__out;
double _three_phase_meter8_vbn_va2__out;
double _three_phase_meter8_vca_va2__out;
double _three_phase_meter8_vcn_va2__out;
double _three_phase_meter8_zero__out = 0.0;
double _three_phase_meter9_ia_ia2__out;
double _three_phase_meter9_ib_ia2__out;
double _three_phase_meter9_ic_ia2__out;
double _three_phase_meter9_pll_lpf_lpf__out;
double _three_phase_meter9_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _three_phase_meter9_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _three_phase_meter9_pll_lpf_lpf__a_sum;
double _three_phase_meter9_pll_lpf_lpf__b_sum;
double _three_phase_meter9_pll_lpf_lpf__delay_line_in;
double _three_phase_meter9_pll_pid_integrator1__out;
double _three_phase_meter9_pll_pid_integrator2__out;
double _three_phase_meter9_pll_unit_delay1__out;
double _three_phase_meter9_pll_abc_to_dq_lpf_d__out;
double _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _three_phase_meter9_pll_abc_to_dq_lpf_q__out;
double _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _three_phase_meter9_vab_va2__out;
double _three_phase_meter9_van_va2__out;
double _three_phase_meter9_vbc_va2__out;
double _three_phase_meter9_vbn_va2__out;
double _three_phase_meter9_vca_va2__out;
double _three_phase_meter9_vcn_va2__out;
double _three_phase_meter9_zero__out = 0.0;
double _bay_1_bus_split6__out;
double _bay_1_bus_split6__out1;
double _bay_1_bus_split6__out2;
double _bay_1_bus_split6__out3;
float _bay_1_digital_probe3__tmp;
X_Int32 _bay_1_logical_operator19__out;
float _bay_1_digital_probe5__tmp;
X_Int32 _bay_1_logical_operator18__out;
float _bay_1_digital_probe6__tmp;
double _bay_1_logical_operator9__out;
X_UnInt32 _bay_1_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_1_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_1_logical_operator15__out;
X_Int32 _bay_1_logical_operator17__out;
double _bay_10_bus_split6__out;
double _bay_10_bus_split6__out1;
double _bay_10_bus_split6__out2;
double _bay_10_bus_split6__out3;
float _bay_10_digital_probe3__tmp;
X_Int32 _bay_10_logical_operator19__out;
float _bay_10_digital_probe5__tmp;
X_Int32 _bay_10_logical_operator18__out;
float _bay_10_digital_probe6__tmp;
double _bay_10_logical_operator9__out;
X_UnInt32 _bay_10_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_10_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_10_logical_operator15__out;
X_Int32 _bay_10_logical_operator17__out;
double _bay_2_bus_split6__out;
double _bay_2_bus_split6__out1;
double _bay_2_bus_split6__out2;
double _bay_2_bus_split6__out3;
float _bay_2_digital_probe3__tmp;
X_Int32 _bay_2_logical_operator19__out;
float _bay_2_digital_probe5__tmp;
X_Int32 _bay_2_logical_operator18__out;
float _bay_2_digital_probe6__tmp;
double _bay_2_logical_operator9__out;
X_UnInt32 _bay_2_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_2_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_2_logical_operator15__out;
X_Int32 _bay_2_logical_operator17__out;
double _bay_3_bus_split6__out;
double _bay_3_bus_split6__out1;
double _bay_3_bus_split6__out2;
double _bay_3_bus_split6__out3;
float _bay_3_digital_probe3__tmp;
X_Int32 _bay_3_logical_operator19__out;
float _bay_3_digital_probe5__tmp;
X_Int32 _bay_3_logical_operator18__out;
float _bay_3_digital_probe6__tmp;
double _bay_3_logical_operator9__out;
X_UnInt32 _bay_3_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_3_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_3_logical_operator15__out;
X_Int32 _bay_3_logical_operator17__out;
double _bay_4_bus_split6__out;
double _bay_4_bus_split6__out1;
double _bay_4_bus_split6__out2;
double _bay_4_bus_split6__out3;
float _bay_4_digital_probe3__tmp;
X_Int32 _bay_4_logical_operator19__out;
float _bay_4_digital_probe5__tmp;
X_Int32 _bay_4_logical_operator18__out;
float _bay_4_digital_probe6__tmp;
double _bay_4_logical_operator9__out;
X_UnInt32 _bay_4_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_4_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_4_logical_operator15__out;
X_Int32 _bay_4_logical_operator17__out;
double _bay_5_bus_split6__out;
double _bay_5_bus_split6__out1;
double _bay_5_bus_split6__out2;
double _bay_5_bus_split6__out3;
float _bay_5_digital_probe3__tmp;
X_Int32 _bay_5_logical_operator19__out;
float _bay_5_digital_probe5__tmp;
X_Int32 _bay_5_logical_operator18__out;
float _bay_5_digital_probe6__tmp;
double _bay_5_logical_operator9__out;
X_UnInt32 _bay_5_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_5_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_5_logical_operator15__out;
X_Int32 _bay_5_logical_operator17__out;
double _bay_6_bus_split6__out;
double _bay_6_bus_split6__out1;
double _bay_6_bus_split6__out2;
double _bay_6_bus_split6__out3;
float _bay_6_digital_probe3__tmp;
X_Int32 _bay_6_logical_operator19__out;
float _bay_6_digital_probe5__tmp;
X_Int32 _bay_6_logical_operator18__out;
float _bay_6_digital_probe6__tmp;
double _bay_6_logical_operator9__out;
X_UnInt32 _bay_6_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_6_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_6_logical_operator15__out;
X_Int32 _bay_6_logical_operator17__out;
double _bay_7_bus_split6__out;
double _bay_7_bus_split6__out1;
double _bay_7_bus_split6__out2;
double _bay_7_bus_split6__out3;
float _bay_7_digital_probe3__tmp;
X_Int32 _bay_7_logical_operator19__out;
float _bay_7_digital_probe5__tmp;
X_Int32 _bay_7_logical_operator18__out;
float _bay_7_digital_probe6__tmp;
double _bay_7_logical_operator9__out;
X_UnInt32 _bay_7_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_7_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_7_logical_operator15__out;
X_Int32 _bay_7_logical_operator17__out;
double _bay_8_bus_split6__out;
double _bay_8_bus_split6__out1;
double _bay_8_bus_split6__out2;
double _bay_8_bus_split6__out3;
float _bay_8_digital_probe3__tmp;
X_Int32 _bay_8_logical_operator19__out;
float _bay_8_digital_probe5__tmp;
X_Int32 _bay_8_logical_operator18__out;
float _bay_8_digital_probe6__tmp;
double _bay_8_logical_operator9__out;
X_UnInt32 _bay_8_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_8_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_8_logical_operator15__out;
X_Int32 _bay_8_logical_operator17__out;
double _bay_9_bus_split6__out;
double _bay_9_bus_split6__out1;
double _bay_9_bus_split6__out2;
double _bay_9_bus_split6__out3;
float _bay_9_digital_probe3__tmp;
X_Int32 _bay_9_logical_operator19__out;
float _bay_9_digital_probe5__tmp;
X_Int32 _bay_9_logical_operator18__out;
float _bay_9_digital_probe6__tmp;
double _bay_9_logical_operator9__out;
X_UnInt32 _bay_9_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _bay_9_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _bay_9_logical_operator15__out;
X_Int32 _bay_9_logical_operator17__out;
X_Int32 _dynamic_grid_fault1_control_state_machine__in;

X_Int32 _dynamic_grid_fault1_control_state_machine__Ca;
X_Int32 _dynamic_grid_fault1_control_state_machine__Cb;
X_Int32 _dynamic_grid_fault1_control_state_machine__Cc;
X_Int32 _dynamic_grid_fault1_control_state_machine__Cn;

X_Int32 _fault_q10_control_state_machine__in;

X_Int32 _fault_q10_control_state_machine__Ca;
X_Int32 _fault_q10_control_state_machine__Cb;
X_Int32 _fault_q10_control_state_machine__Cc;
X_Int32 _fault_q10_control_state_machine__Cn;

X_Int32 _fault_q3_control_state_machine__in;

X_Int32 _fault_q3_control_state_machine__Ca;
X_Int32 _fault_q3_control_state_machine__Cb;
X_Int32 _fault_q3_control_state_machine__Cc;
X_Int32 _fault_q3_control_state_machine__Cn;

X_Int32 _fault_q7_control_state_machine__in;

X_Int32 _fault_q7_control_state_machine__Ca;
X_Int32 _fault_q7_control_state_machine__Cb;
X_Int32 _fault_q7_control_state_machine__Cc;
X_Int32 _fault_q7_control_state_machine__Cn;

X_Int32 _faultbb_control_state_machine__in;

X_Int32 _faultbb_control_state_machine__Ca;
X_Int32 _faultbb_control_state_machine__Cb;
X_Int32 _faultbb_control_state_machine__Cc;
X_Int32 _faultbb_control_state_machine__Cn;

float _hv_bay_1_digital_probe3__tmp;
X_Int32 _hv_bay_1_logical_operator19__out;
float _hv_bay_1_digital_probe5__tmp;
X_Int32 _hv_bay_1_logical_operator18__out;
float _hv_bay_1_digital_probe6__tmp;
X_Int32 _hv_bay_1_logical_operator9__out;
X_UnInt32 _hv_bay_1_sv_publisher1_iq_byte_swap__out[4];
X_UnInt32 _hv_bay_1_sv_publisher1_vq_byte_swap__out[4];
X_Int32 _hv_bay_1_logical_operator15__out;
X_Int32 _hv_bay_1_logical_operator17__out;
X_Int32 _hv_bay_1_logical_operator20__out;
double _three_phase_meter1_sumin__out;
double _three_phase_meter1_pll_to_hz__out;
double _three_phase_meter1_pll_sin__out;
double _three_phase_meter1_pll_normalize__in1;
double _three_phase_meter1_pll_normalize__in2;

double _three_phase_meter1_pll_normalize__in2_pu;
double _three_phase_meter1_pll_normalize__pk;

double _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter1_sumvn__out;
double _three_phase_meter1_extra_output_bus__out[12];
double _three_phase_meter10_sumin__out;
double _three_phase_meter10_pll_to_hz__out;
double _three_phase_meter10_pll_sin__out;
double _three_phase_meter10_pll_normalize__in1;
double _three_phase_meter10_pll_normalize__in2;

double _three_phase_meter10_pll_normalize__in2_pu;
double _three_phase_meter10_pll_normalize__pk;

double _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter10_sumvn__out;
double _three_phase_meter10_extra_output_bus__out[12];
double _three_phase_meter11_sumin__out;
double _three_phase_meter11_pll_to_hz__out;
double _three_phase_meter11_pll_sin__out;
double _three_phase_meter11_pll_normalize__in1;
double _three_phase_meter11_pll_normalize__in2;

double _three_phase_meter11_pll_normalize__in2_pu;
double _three_phase_meter11_pll_normalize__pk;

double _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter11_sumvn__out;
double _three_phase_meter11_extra_output_bus__out[12];
double _three_phase_meter2_sumin__out;
double _three_phase_meter2_pll_to_hz__out;
double _three_phase_meter2_pll_sin__out;
double _three_phase_meter2_pll_normalize__in1;
double _three_phase_meter2_pll_normalize__in2;

double _three_phase_meter2_pll_normalize__in2_pu;
double _three_phase_meter2_pll_normalize__pk;

double _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter2_sumvn__out;
double _three_phase_meter2_extra_output_bus__out[12];
double _three_phase_meter3_sumin__out;
double _three_phase_meter3_pll_to_hz__out;
double _three_phase_meter3_pll_sin__out;
double _three_phase_meter3_pll_normalize__in1;
double _three_phase_meter3_pll_normalize__in2;

double _three_phase_meter3_pll_normalize__in2_pu;
double _three_phase_meter3_pll_normalize__pk;

double _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter3_sumvn__out;
double _three_phase_meter3_extra_output_bus__out[12];
double _three_phase_meter4_sumin__out;
double _three_phase_meter4_pll_to_hz__out;
double _three_phase_meter4_pll_sin__out;
double _three_phase_meter4_pll_normalize__in1;
double _three_phase_meter4_pll_normalize__in2;

double _three_phase_meter4_pll_normalize__in2_pu;
double _three_phase_meter4_pll_normalize__pk;

double _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter4_sumvn__out;
double _three_phase_meter4_extra_output_bus__out[12];
double _three_phase_meter5_sumin__out;
double _three_phase_meter5_pll_to_hz__out;
double _three_phase_meter5_pll_sin__out;
double _three_phase_meter5_pll_normalize__in1;
double _three_phase_meter5_pll_normalize__in2;

double _three_phase_meter5_pll_normalize__in2_pu;
double _three_phase_meter5_pll_normalize__pk;

double _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter5_sumvn__out;
double _three_phase_meter5_extra_output_bus__out[12];
double _three_phase_meter6_sumin__out;
double _three_phase_meter6_pll_to_hz__out;
double _three_phase_meter6_pll_sin__out;
double _three_phase_meter6_pll_normalize__in1;
double _three_phase_meter6_pll_normalize__in2;

double _three_phase_meter6_pll_normalize__in2_pu;
double _three_phase_meter6_pll_normalize__pk;

double _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter6_sumvn__out;
double _three_phase_meter6_extra_output_bus__out[12];
double _three_phase_meter7_sumin__out;
double _three_phase_meter7_pll_to_hz__out;
double _three_phase_meter7_pll_sin__out;
double _three_phase_meter7_pll_normalize__in1;
double _three_phase_meter7_pll_normalize__in2;

double _three_phase_meter7_pll_normalize__in2_pu;
double _three_phase_meter7_pll_normalize__pk;

double _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter7_sumvn__out;
double _three_phase_meter7_extra_output_bus__out[12];
double _three_phase_meter8_sumin__out;
double _three_phase_meter8_pll_to_hz__out;
double _three_phase_meter8_pll_sin__out;
double _three_phase_meter8_pll_normalize__in1;
double _three_phase_meter8_pll_normalize__in2;

double _three_phase_meter8_pll_normalize__in2_pu;
double _three_phase_meter8_pll_normalize__pk;

double _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter8_sumvn__out;
double _three_phase_meter8_extra_output_bus__out[12];
double _three_phase_meter9_sumin__out;
double _three_phase_meter9_pll_to_hz__out;
double _three_phase_meter9_pll_sin__out;
double _three_phase_meter9_pll_normalize__in1;
double _three_phase_meter9_pll_normalize__in2;

double _three_phase_meter9_pll_normalize__in2_pu;
double _three_phase_meter9_pll_normalize__pk;

double _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _three_phase_meter9_sumvn__out;
double _three_phase_meter9_extra_output_bus__out[12];
double _bay_1_bus_join10__out[2];
double _bay_1_logical_operator7__out;
double _bay_1_logical_operator8__out;
float _bay_1_digital_probe2__tmp;
double _bay_1_sum3__out;
float _bay_1_digital_probe4__tmp;
double _bay_1_sum4__out;
float _bay_1_digital_probe1__tmp;
double _bay_1_sum1__out;
X_UnInt32 _bay_1_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_1_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_1_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_1_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_1_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_1_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_1_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_1_sv_publisher1_vq_bus_split__out3;
double _bay_10_bus_join10__out[2];
double _bay_10_logical_operator7__out;
double _bay_10_logical_operator8__out;
float _bay_10_digital_probe2__tmp;
double _bay_10_sum3__out;
float _bay_10_digital_probe4__tmp;
double _bay_10_sum4__out;
float _bay_10_digital_probe1__tmp;
double _bay_10_sum1__out;
X_UnInt32 _bay_10_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_10_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_10_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_10_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_10_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_10_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_10_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_10_sv_publisher1_vq_bus_split__out3;
double _bay_2_bus_join10__out[2];
double _bay_2_logical_operator7__out;
double _bay_2_logical_operator8__out;
float _bay_2_digital_probe2__tmp;
double _bay_2_sum3__out;
float _bay_2_digital_probe4__tmp;
double _bay_2_sum4__out;
float _bay_2_digital_probe1__tmp;
double _bay_2_sum1__out;
X_UnInt32 _bay_2_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_2_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_2_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_2_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_2_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_2_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_2_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_2_sv_publisher1_vq_bus_split__out3;
double _bay_3_bus_join10__out[2];
double _bay_3_logical_operator7__out;
double _bay_3_logical_operator8__out;
float _bay_3_digital_probe2__tmp;
double _bay_3_sum3__out;
float _bay_3_digital_probe4__tmp;
double _bay_3_sum4__out;
float _bay_3_digital_probe1__tmp;
double _bay_3_sum1__out;
X_UnInt32 _bay_3_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_3_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_3_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_3_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_3_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_3_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_3_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_3_sv_publisher1_vq_bus_split__out3;
double _bay_4_bus_join10__out[2];
double _bay_4_logical_operator7__out;
double _bay_4_logical_operator8__out;
float _bay_4_digital_probe2__tmp;
double _bay_4_sum3__out;
float _bay_4_digital_probe4__tmp;
double _bay_4_sum4__out;
float _bay_4_digital_probe1__tmp;
double _bay_4_sum1__out;
X_UnInt32 _bay_4_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_4_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_4_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_4_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_4_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_4_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_4_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_4_sv_publisher1_vq_bus_split__out3;
double _bay_5_bus_join10__out[2];
double _bay_5_logical_operator7__out;
double _bay_5_logical_operator8__out;
float _bay_5_digital_probe2__tmp;
double _bay_5_sum3__out;
float _bay_5_digital_probe4__tmp;
double _bay_5_sum4__out;
float _bay_5_digital_probe1__tmp;
double _bay_5_sum1__out;
X_UnInt32 _bay_5_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_5_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_5_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_5_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_5_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_5_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_5_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_5_sv_publisher1_vq_bus_split__out3;
double _bay_6_bus_join10__out[2];
double _bay_6_logical_operator7__out;
double _bay_6_logical_operator8__out;
float _bay_6_digital_probe2__tmp;
double _bay_6_sum3__out;
float _bay_6_digital_probe4__tmp;
double _bay_6_sum4__out;
float _bay_6_digital_probe1__tmp;
double _bay_6_sum1__out;
X_UnInt32 _bay_6_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_6_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_6_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_6_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_6_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_6_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_6_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_6_sv_publisher1_vq_bus_split__out3;
double _bay_7_bus_join10__out[2];
double _bay_7_logical_operator7__out;
double _bay_7_logical_operator8__out;
float _bay_7_digital_probe2__tmp;
double _bay_7_sum3__out;
float _bay_7_digital_probe4__tmp;
double _bay_7_sum4__out;
float _bay_7_digital_probe1__tmp;
double _bay_7_sum1__out;
X_UnInt32 _bay_7_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_7_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_7_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_7_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_7_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_7_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_7_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_7_sv_publisher1_vq_bus_split__out3;
double _bay_8_bus_join10__out[2];
double _bay_8_logical_operator7__out;
double _bay_8_logical_operator8__out;
float _bay_8_digital_probe2__tmp;
double _bay_8_sum3__out;
float _bay_8_digital_probe4__tmp;
double _bay_8_sum4__out;
float _bay_8_digital_probe1__tmp;
double _bay_8_sum1__out;
X_UnInt32 _bay_8_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_8_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_8_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_8_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_8_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_8_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_8_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_8_sv_publisher1_vq_bus_split__out3;
double _bay_9_bus_join10__out[2];
double _bay_9_logical_operator7__out;
double _bay_9_logical_operator8__out;
float _bay_9_digital_probe2__tmp;
double _bay_9_sum3__out;
float _bay_9_digital_probe4__tmp;
double _bay_9_sum4__out;
float _bay_9_digital_probe1__tmp;
double _bay_9_sum1__out;
X_UnInt32 _bay_9_sv_publisher1_iq_bus_split__out;
X_UnInt32 _bay_9_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _bay_9_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _bay_9_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _bay_9_sv_publisher1_vq_bus_split__out;
X_UnInt32 _bay_9_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _bay_9_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _bay_9_sv_publisher1_vq_bus_split__out3;
float _hv_bay_1_digital_probe2__tmp;
double _hv_bay_1_sum3__out;
float _hv_bay_1_digital_probe4__tmp;
double _hv_bay_1_sum4__out;
float _hv_bay_1_digital_probe1__tmp;
double _hv_bay_1_sum1__out;
X_UnInt32 _hv_bay_1_sv_publisher1_iq_bus_split__out;
X_UnInt32 _hv_bay_1_sv_publisher1_iq_bus_split__out1;
X_UnInt32 _hv_bay_1_sv_publisher1_iq_bus_split__out2;
X_UnInt32 _hv_bay_1_sv_publisher1_iq_bus_split__out3;
X_UnInt32 _hv_bay_1_sv_publisher1_vq_bus_split__out;
X_UnInt32 _hv_bay_1_sv_publisher1_vq_bus_split__out1;
X_UnInt32 _hv_bay_1_sv_publisher1_vq_bus_split__out2;
X_UnInt32 _hv_bay_1_sv_publisher1_vq_bus_split__out3;
double _three_phase_meter1_meassm_mode_and_dfract__Freq;

double _three_phase_meter1_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter1_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter1_meassm_mode_and_dfract__submode;

double _three_phase_meter1_pll_pid_kd__out;
double _three_phase_meter1_pll_pid_ki__out;
double _three_phase_meter1_pll_pid_kp__out;
double _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter10_meassm_mode_and_dfract__Freq;

double _three_phase_meter10_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter10_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter10_meassm_mode_and_dfract__submode;

double _three_phase_meter10_pll_pid_kd__out;
double _three_phase_meter10_pll_pid_ki__out;
double _three_phase_meter10_pll_pid_kp__out;
double _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter11_meassm_mode_and_dfract__Freq;

double _three_phase_meter11_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter11_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter11_meassm_mode_and_dfract__submode;

double _three_phase_meter11_pll_pid_kd__out;
double _three_phase_meter11_pll_pid_ki__out;
double _three_phase_meter11_pll_pid_kp__out;
double _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter2_meassm_mode_and_dfract__Freq;

double _three_phase_meter2_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter2_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter2_meassm_mode_and_dfract__submode;

double _three_phase_meter2_pll_pid_kd__out;
double _three_phase_meter2_pll_pid_ki__out;
double _three_phase_meter2_pll_pid_kp__out;
double _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter3_meassm_mode_and_dfract__Freq;

double _three_phase_meter3_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter3_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter3_meassm_mode_and_dfract__submode;

double _three_phase_meter3_pll_pid_kd__out;
double _three_phase_meter3_pll_pid_ki__out;
double _three_phase_meter3_pll_pid_kp__out;
double _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter4_meassm_mode_and_dfract__Freq;

double _three_phase_meter4_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter4_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter4_meassm_mode_and_dfract__submode;

double _three_phase_meter4_pll_pid_kd__out;
double _three_phase_meter4_pll_pid_ki__out;
double _three_phase_meter4_pll_pid_kp__out;
double _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter5_meassm_mode_and_dfract__Freq;

double _three_phase_meter5_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter5_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter5_meassm_mode_and_dfract__submode;

double _three_phase_meter5_pll_pid_kd__out;
double _three_phase_meter5_pll_pid_ki__out;
double _three_phase_meter5_pll_pid_kp__out;
double _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter6_meassm_mode_and_dfract__Freq;

double _three_phase_meter6_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter6_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter6_meassm_mode_and_dfract__submode;

double _three_phase_meter6_pll_pid_kd__out;
double _three_phase_meter6_pll_pid_ki__out;
double _three_phase_meter6_pll_pid_kp__out;
double _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter7_meassm_mode_and_dfract__Freq;

double _three_phase_meter7_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter7_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter7_meassm_mode_and_dfract__submode;

double _three_phase_meter7_pll_pid_kd__out;
double _three_phase_meter7_pll_pid_ki__out;
double _three_phase_meter7_pll_pid_kp__out;
double _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter8_meassm_mode_and_dfract__Freq;

double _three_phase_meter8_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter8_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter8_meassm_mode_and_dfract__submode;

double _three_phase_meter8_pll_pid_kd__out;
double _three_phase_meter8_pll_pid_ki__out;
double _three_phase_meter8_pll_pid_kp__out;
double _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _three_phase_meter9_meassm_mode_and_dfract__Freq;

double _three_phase_meter9_meassm_mode_and_dfract__dFract;
X_Int32 _three_phase_meter9_meassm_mode_and_dfract__mode;
X_Int32 _three_phase_meter9_meassm_mode_and_dfract__submode;

double _three_phase_meter9_pll_pid_kd__out;
double _three_phase_meter9_pll_pid_ki__out;
double _three_phase_meter9_pll_pid_kp__out;
double _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__d;
double _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__q;
double _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _bay_1_bus_join7__out[4];
double _bay_1_bus_join6__out[2];
double _bay_10_bus_join7__out[4];
double _bay_10_bus_join6__out[2];
double _bay_2_bus_join7__out[4];
double _bay_2_bus_join6__out[2];
double _bay_3_bus_join7__out[4];
double _bay_3_bus_join6__out[2];
double _bay_4_bus_join7__out[4];
double _bay_4_bus_join6__out[2];
double _bay_5_bus_join7__out[4];
double _bay_5_bus_join6__out[2];
double _bay_6_bus_join7__out[4];
double _bay_6_bus_join6__out[2];
double _bay_7_bus_join7__out[4];
double _bay_7_bus_join6__out[2];
double _bay_8_bus_join7__out[4];
double _bay_8_bus_join6__out[2];
double _bay_9_bus_join7__out[4];
double _bay_9_bus_join6__out[2];
double _hv_bay_1_bus_join7__out[4];
double _hv_bay_1_bus_join10__out[2];
double _three_phase_meter1_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter1_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter1_in_rms_calc_1ph_rms__mode;

double _three_phase_meter1_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter1_i_rms_calc_rms__IN1;
double _three_phase_meter1_i_rms_calc_rms__IN2;
double _three_phase_meter1_i_rms_calc_rms__IN3;
double _three_phase_meter1_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter1_i_rms_calc_rms__mode;

double _three_phase_meter1_i_rms_calc_rms__RMS1;
double _three_phase_meter1_i_rms_calc_rms__RMS2;
double _three_phase_meter1_i_rms_calc_rms__RMS3;

double _three_phase_meter1_vll_rms_calc_rms__IN1;
double _three_phase_meter1_vll_rms_calc_rms__IN2;
double _three_phase_meter1_vll_rms_calc_rms__IN3;
double _three_phase_meter1_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter1_vll_rms_calc_rms__mode;

double _three_phase_meter1_vll_rms_calc_rms__RMS1;
double _three_phase_meter1_vll_rms_calc_rms__RMS2;
double _three_phase_meter1_vll_rms_calc_rms__RMS3;

double _three_phase_meter1_vln_rms_calc_rms__IN1;
double _three_phase_meter1_vln_rms_calc_rms__IN2;
double _three_phase_meter1_vln_rms_calc_rms__IN3;
double _three_phase_meter1_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter1_vln_rms_calc_rms__mode;

double _three_phase_meter1_vln_rms_calc_rms__RMS1;
double _three_phase_meter1_vln_rms_calc_rms__RMS2;
double _three_phase_meter1_vln_rms_calc_rms__RMS3;

double _three_phase_meter1_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter1_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter1_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter1_pll_pid_sum8__out;
double _three_phase_meter10_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter10_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter10_in_rms_calc_1ph_rms__mode;

double _three_phase_meter10_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter10_i_rms_calc_rms__IN1;
double _three_phase_meter10_i_rms_calc_rms__IN2;
double _three_phase_meter10_i_rms_calc_rms__IN3;
double _three_phase_meter10_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter10_i_rms_calc_rms__mode;

double _three_phase_meter10_i_rms_calc_rms__RMS1;
double _three_phase_meter10_i_rms_calc_rms__RMS2;
double _three_phase_meter10_i_rms_calc_rms__RMS3;

double _three_phase_meter10_vll_rms_calc_rms__IN1;
double _three_phase_meter10_vll_rms_calc_rms__IN2;
double _three_phase_meter10_vll_rms_calc_rms__IN3;
double _three_phase_meter10_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter10_vll_rms_calc_rms__mode;

double _three_phase_meter10_vll_rms_calc_rms__RMS1;
double _three_phase_meter10_vll_rms_calc_rms__RMS2;
double _three_phase_meter10_vll_rms_calc_rms__RMS3;

double _three_phase_meter10_vln_rms_calc_rms__IN1;
double _three_phase_meter10_vln_rms_calc_rms__IN2;
double _three_phase_meter10_vln_rms_calc_rms__IN3;
double _three_phase_meter10_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter10_vln_rms_calc_rms__mode;

double _three_phase_meter10_vln_rms_calc_rms__RMS1;
double _three_phase_meter10_vln_rms_calc_rms__RMS2;
double _three_phase_meter10_vln_rms_calc_rms__RMS3;

double _three_phase_meter10_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter10_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter10_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter10_pll_pid_sum8__out;
double _three_phase_meter11_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter11_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter11_in_rms_calc_1ph_rms__mode;

double _three_phase_meter11_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter11_i_rms_calc_rms__IN1;
double _three_phase_meter11_i_rms_calc_rms__IN2;
double _three_phase_meter11_i_rms_calc_rms__IN3;
double _three_phase_meter11_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter11_i_rms_calc_rms__mode;

double _three_phase_meter11_i_rms_calc_rms__RMS1;
double _three_phase_meter11_i_rms_calc_rms__RMS2;
double _three_phase_meter11_i_rms_calc_rms__RMS3;

double _three_phase_meter11_vll_rms_calc_rms__IN1;
double _three_phase_meter11_vll_rms_calc_rms__IN2;
double _three_phase_meter11_vll_rms_calc_rms__IN3;
double _three_phase_meter11_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter11_vll_rms_calc_rms__mode;

double _three_phase_meter11_vll_rms_calc_rms__RMS1;
double _three_phase_meter11_vll_rms_calc_rms__RMS2;
double _three_phase_meter11_vll_rms_calc_rms__RMS3;

double _three_phase_meter11_vln_rms_calc_rms__IN1;
double _three_phase_meter11_vln_rms_calc_rms__IN2;
double _three_phase_meter11_vln_rms_calc_rms__IN3;
double _three_phase_meter11_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter11_vln_rms_calc_rms__mode;

double _three_phase_meter11_vln_rms_calc_rms__RMS1;
double _three_phase_meter11_vln_rms_calc_rms__RMS2;
double _three_phase_meter11_vln_rms_calc_rms__RMS3;

double _three_phase_meter11_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter11_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter11_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter11_pll_pid_sum8__out;
double _three_phase_meter2_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter2_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter2_in_rms_calc_1ph_rms__mode;

double _three_phase_meter2_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter2_i_rms_calc_rms__IN1;
double _three_phase_meter2_i_rms_calc_rms__IN2;
double _three_phase_meter2_i_rms_calc_rms__IN3;
double _three_phase_meter2_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter2_i_rms_calc_rms__mode;

double _three_phase_meter2_i_rms_calc_rms__RMS1;
double _three_phase_meter2_i_rms_calc_rms__RMS2;
double _three_phase_meter2_i_rms_calc_rms__RMS3;

double _three_phase_meter2_vll_rms_calc_rms__IN1;
double _three_phase_meter2_vll_rms_calc_rms__IN2;
double _three_phase_meter2_vll_rms_calc_rms__IN3;
double _three_phase_meter2_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter2_vll_rms_calc_rms__mode;

double _three_phase_meter2_vll_rms_calc_rms__RMS1;
double _three_phase_meter2_vll_rms_calc_rms__RMS2;
double _three_phase_meter2_vll_rms_calc_rms__RMS3;

double _three_phase_meter2_vln_rms_calc_rms__IN1;
double _three_phase_meter2_vln_rms_calc_rms__IN2;
double _three_phase_meter2_vln_rms_calc_rms__IN3;
double _three_phase_meter2_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter2_vln_rms_calc_rms__mode;

double _three_phase_meter2_vln_rms_calc_rms__RMS1;
double _three_phase_meter2_vln_rms_calc_rms__RMS2;
double _three_phase_meter2_vln_rms_calc_rms__RMS3;

double _three_phase_meter2_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter2_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter2_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter2_pll_pid_sum8__out;
double _three_phase_meter3_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter3_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter3_in_rms_calc_1ph_rms__mode;

double _three_phase_meter3_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter3_i_rms_calc_rms__IN1;
double _three_phase_meter3_i_rms_calc_rms__IN2;
double _three_phase_meter3_i_rms_calc_rms__IN3;
double _three_phase_meter3_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter3_i_rms_calc_rms__mode;

double _three_phase_meter3_i_rms_calc_rms__RMS1;
double _three_phase_meter3_i_rms_calc_rms__RMS2;
double _three_phase_meter3_i_rms_calc_rms__RMS3;

double _three_phase_meter3_vll_rms_calc_rms__IN1;
double _three_phase_meter3_vll_rms_calc_rms__IN2;
double _three_phase_meter3_vll_rms_calc_rms__IN3;
double _three_phase_meter3_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter3_vll_rms_calc_rms__mode;

double _three_phase_meter3_vll_rms_calc_rms__RMS1;
double _three_phase_meter3_vll_rms_calc_rms__RMS2;
double _three_phase_meter3_vll_rms_calc_rms__RMS3;

double _three_phase_meter3_vln_rms_calc_rms__IN1;
double _three_phase_meter3_vln_rms_calc_rms__IN2;
double _three_phase_meter3_vln_rms_calc_rms__IN3;
double _three_phase_meter3_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter3_vln_rms_calc_rms__mode;

double _three_phase_meter3_vln_rms_calc_rms__RMS1;
double _three_phase_meter3_vln_rms_calc_rms__RMS2;
double _three_phase_meter3_vln_rms_calc_rms__RMS3;

double _three_phase_meter3_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter3_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter3_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter3_pll_pid_sum8__out;
double _three_phase_meter4_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter4_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter4_in_rms_calc_1ph_rms__mode;

double _three_phase_meter4_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter4_i_rms_calc_rms__IN1;
double _three_phase_meter4_i_rms_calc_rms__IN2;
double _three_phase_meter4_i_rms_calc_rms__IN3;
double _three_phase_meter4_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter4_i_rms_calc_rms__mode;

double _three_phase_meter4_i_rms_calc_rms__RMS1;
double _three_phase_meter4_i_rms_calc_rms__RMS2;
double _three_phase_meter4_i_rms_calc_rms__RMS3;

double _three_phase_meter4_vll_rms_calc_rms__IN1;
double _three_phase_meter4_vll_rms_calc_rms__IN2;
double _three_phase_meter4_vll_rms_calc_rms__IN3;
double _three_phase_meter4_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter4_vll_rms_calc_rms__mode;

double _three_phase_meter4_vll_rms_calc_rms__RMS1;
double _three_phase_meter4_vll_rms_calc_rms__RMS2;
double _three_phase_meter4_vll_rms_calc_rms__RMS3;

double _three_phase_meter4_vln_rms_calc_rms__IN1;
double _three_phase_meter4_vln_rms_calc_rms__IN2;
double _three_phase_meter4_vln_rms_calc_rms__IN3;
double _three_phase_meter4_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter4_vln_rms_calc_rms__mode;

double _three_phase_meter4_vln_rms_calc_rms__RMS1;
double _three_phase_meter4_vln_rms_calc_rms__RMS2;
double _three_phase_meter4_vln_rms_calc_rms__RMS3;

double _three_phase_meter4_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter4_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter4_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter4_pll_pid_sum8__out;
double _three_phase_meter5_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter5_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter5_in_rms_calc_1ph_rms__mode;

double _three_phase_meter5_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter5_i_rms_calc_rms__IN1;
double _three_phase_meter5_i_rms_calc_rms__IN2;
double _three_phase_meter5_i_rms_calc_rms__IN3;
double _three_phase_meter5_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter5_i_rms_calc_rms__mode;

double _three_phase_meter5_i_rms_calc_rms__RMS1;
double _three_phase_meter5_i_rms_calc_rms__RMS2;
double _three_phase_meter5_i_rms_calc_rms__RMS3;

double _three_phase_meter5_vll_rms_calc_rms__IN1;
double _three_phase_meter5_vll_rms_calc_rms__IN2;
double _three_phase_meter5_vll_rms_calc_rms__IN3;
double _three_phase_meter5_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter5_vll_rms_calc_rms__mode;

double _three_phase_meter5_vll_rms_calc_rms__RMS1;
double _three_phase_meter5_vll_rms_calc_rms__RMS2;
double _three_phase_meter5_vll_rms_calc_rms__RMS3;

double _three_phase_meter5_vln_rms_calc_rms__IN1;
double _three_phase_meter5_vln_rms_calc_rms__IN2;
double _three_phase_meter5_vln_rms_calc_rms__IN3;
double _three_phase_meter5_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter5_vln_rms_calc_rms__mode;

double _three_phase_meter5_vln_rms_calc_rms__RMS1;
double _three_phase_meter5_vln_rms_calc_rms__RMS2;
double _three_phase_meter5_vln_rms_calc_rms__RMS3;

double _three_phase_meter5_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter5_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter5_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter5_pll_pid_sum8__out;
double _three_phase_meter6_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter6_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter6_in_rms_calc_1ph_rms__mode;

double _three_phase_meter6_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter6_i_rms_calc_rms__IN1;
double _three_phase_meter6_i_rms_calc_rms__IN2;
double _three_phase_meter6_i_rms_calc_rms__IN3;
double _three_phase_meter6_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter6_i_rms_calc_rms__mode;

double _three_phase_meter6_i_rms_calc_rms__RMS1;
double _three_phase_meter6_i_rms_calc_rms__RMS2;
double _three_phase_meter6_i_rms_calc_rms__RMS3;

double _three_phase_meter6_vll_rms_calc_rms__IN1;
double _three_phase_meter6_vll_rms_calc_rms__IN2;
double _three_phase_meter6_vll_rms_calc_rms__IN3;
double _three_phase_meter6_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter6_vll_rms_calc_rms__mode;

double _three_phase_meter6_vll_rms_calc_rms__RMS1;
double _three_phase_meter6_vll_rms_calc_rms__RMS2;
double _three_phase_meter6_vll_rms_calc_rms__RMS3;

double _three_phase_meter6_vln_rms_calc_rms__IN1;
double _three_phase_meter6_vln_rms_calc_rms__IN2;
double _three_phase_meter6_vln_rms_calc_rms__IN3;
double _three_phase_meter6_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter6_vln_rms_calc_rms__mode;

double _three_phase_meter6_vln_rms_calc_rms__RMS1;
double _three_phase_meter6_vln_rms_calc_rms__RMS2;
double _three_phase_meter6_vln_rms_calc_rms__RMS3;

double _three_phase_meter6_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter6_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter6_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter6_pll_pid_sum8__out;
double _three_phase_meter7_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter7_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter7_in_rms_calc_1ph_rms__mode;

double _three_phase_meter7_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter7_i_rms_calc_rms__IN1;
double _three_phase_meter7_i_rms_calc_rms__IN2;
double _three_phase_meter7_i_rms_calc_rms__IN3;
double _three_phase_meter7_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter7_i_rms_calc_rms__mode;

double _three_phase_meter7_i_rms_calc_rms__RMS1;
double _three_phase_meter7_i_rms_calc_rms__RMS2;
double _three_phase_meter7_i_rms_calc_rms__RMS3;

double _three_phase_meter7_vll_rms_calc_rms__IN1;
double _three_phase_meter7_vll_rms_calc_rms__IN2;
double _three_phase_meter7_vll_rms_calc_rms__IN3;
double _three_phase_meter7_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter7_vll_rms_calc_rms__mode;

double _three_phase_meter7_vll_rms_calc_rms__RMS1;
double _three_phase_meter7_vll_rms_calc_rms__RMS2;
double _three_phase_meter7_vll_rms_calc_rms__RMS3;

double _three_phase_meter7_vln_rms_calc_rms__IN1;
double _three_phase_meter7_vln_rms_calc_rms__IN2;
double _three_phase_meter7_vln_rms_calc_rms__IN3;
double _three_phase_meter7_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter7_vln_rms_calc_rms__mode;

double _three_phase_meter7_vln_rms_calc_rms__RMS1;
double _three_phase_meter7_vln_rms_calc_rms__RMS2;
double _three_phase_meter7_vln_rms_calc_rms__RMS3;

double _three_phase_meter7_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter7_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter7_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter7_pll_pid_sum8__out;
double _three_phase_meter8_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter8_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter8_in_rms_calc_1ph_rms__mode;

double _three_phase_meter8_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter8_i_rms_calc_rms__IN1;
double _three_phase_meter8_i_rms_calc_rms__IN2;
double _three_phase_meter8_i_rms_calc_rms__IN3;
double _three_phase_meter8_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter8_i_rms_calc_rms__mode;

double _three_phase_meter8_i_rms_calc_rms__RMS1;
double _three_phase_meter8_i_rms_calc_rms__RMS2;
double _three_phase_meter8_i_rms_calc_rms__RMS3;

double _three_phase_meter8_vll_rms_calc_rms__IN1;
double _three_phase_meter8_vll_rms_calc_rms__IN2;
double _three_phase_meter8_vll_rms_calc_rms__IN3;
double _three_phase_meter8_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter8_vll_rms_calc_rms__mode;

double _three_phase_meter8_vll_rms_calc_rms__RMS1;
double _three_phase_meter8_vll_rms_calc_rms__RMS2;
double _three_phase_meter8_vll_rms_calc_rms__RMS3;

double _three_phase_meter8_vln_rms_calc_rms__IN1;
double _three_phase_meter8_vln_rms_calc_rms__IN2;
double _three_phase_meter8_vln_rms_calc_rms__IN3;
double _three_phase_meter8_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter8_vln_rms_calc_rms__mode;

double _three_phase_meter8_vln_rms_calc_rms__RMS1;
double _three_phase_meter8_vln_rms_calc_rms__RMS2;
double _three_phase_meter8_vln_rms_calc_rms__RMS3;

double _three_phase_meter8_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter8_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter8_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter8_pll_pid_sum8__out;
double _three_phase_meter9_in_rms_calc_1ph_rms__IN1;
double _three_phase_meter9_in_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter9_in_rms_calc_1ph_rms__mode;

double _three_phase_meter9_in_rms_calc_1ph_rms__RMS1;

double _three_phase_meter9_i_rms_calc_rms__IN1;
double _three_phase_meter9_i_rms_calc_rms__IN2;
double _three_phase_meter9_i_rms_calc_rms__IN3;
double _three_phase_meter9_i_rms_calc_rms__dFract;
X_Int32 _three_phase_meter9_i_rms_calc_rms__mode;

double _three_phase_meter9_i_rms_calc_rms__RMS1;
double _three_phase_meter9_i_rms_calc_rms__RMS2;
double _three_phase_meter9_i_rms_calc_rms__RMS3;

double _three_phase_meter9_vll_rms_calc_rms__IN1;
double _three_phase_meter9_vll_rms_calc_rms__IN2;
double _three_phase_meter9_vll_rms_calc_rms__IN3;
double _three_phase_meter9_vll_rms_calc_rms__dFract;
X_Int32 _three_phase_meter9_vll_rms_calc_rms__mode;

double _three_phase_meter9_vll_rms_calc_rms__RMS1;
double _three_phase_meter9_vll_rms_calc_rms__RMS2;
double _three_phase_meter9_vll_rms_calc_rms__RMS3;

double _three_phase_meter9_vln_rms_calc_rms__IN1;
double _three_phase_meter9_vln_rms_calc_rms__IN2;
double _three_phase_meter9_vln_rms_calc_rms__IN3;
double _three_phase_meter9_vln_rms_calc_rms__dFract;
X_Int32 _three_phase_meter9_vln_rms_calc_rms__mode;

double _three_phase_meter9_vln_rms_calc_rms__RMS1;
double _three_phase_meter9_vln_rms_calc_rms__RMS2;
double _three_phase_meter9_vln_rms_calc_rms__RMS3;

double _three_phase_meter9_vn_rms_calc_1ph_rms__IN1;
double _three_phase_meter9_vn_rms_calc_1ph_rms__dFract;
X_Int32 _three_phase_meter9_vn_rms_calc_1ph_rms__mode;

double _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1;

double _three_phase_meter9_pll_pid_sum8__out;
double _three_phase_meter1_sumi_rms__out;
double _three_phase_meter1_sumvll_rms__out;
double _three_phase_meter1_sumvln_rms__out;
double _three_phase_meter1_pll_pid_gain1__out;
double _three_phase_meter10_sumi_rms__out;
double _three_phase_meter10_sumvll_rms__out;
double _three_phase_meter10_sumvln_rms__out;
double _three_phase_meter10_pll_pid_gain1__out;
double _three_phase_meter11_sumi_rms__out;
double _three_phase_meter11_sumvll_rms__out;
double _three_phase_meter11_sumvln_rms__out;
double _three_phase_meter11_pll_pid_gain1__out;
double _three_phase_meter2_sumi_rms__out;
double _three_phase_meter2_sumvll_rms__out;
double _three_phase_meter2_sumvln_rms__out;
double _three_phase_meter2_pll_pid_gain1__out;
double _three_phase_meter3_sumi_rms__out;
double _three_phase_meter3_sumvll_rms__out;
double _three_phase_meter3_sumvln_rms__out;
double _three_phase_meter3_pll_pid_gain1__out;
double _three_phase_meter4_sumi_rms__out;
double _three_phase_meter4_sumvll_rms__out;
double _three_phase_meter4_sumvln_rms__out;
double _three_phase_meter4_pll_pid_gain1__out;
double _three_phase_meter5_sumi_rms__out;
double _three_phase_meter5_sumvll_rms__out;
double _three_phase_meter5_sumvln_rms__out;
double _three_phase_meter5_pll_pid_gain1__out;
double _three_phase_meter6_sumi_rms__out;
double _three_phase_meter6_sumvll_rms__out;
double _three_phase_meter6_sumvln_rms__out;
double _three_phase_meter6_pll_pid_gain1__out;
double _three_phase_meter7_sumi_rms__out;
double _three_phase_meter7_sumvll_rms__out;
double _three_phase_meter7_sumvln_rms__out;
double _three_phase_meter7_pll_pid_gain1__out;
double _three_phase_meter8_sumi_rms__out;
double _three_phase_meter8_sumvll_rms__out;
double _three_phase_meter8_sumvln_rms__out;
double _three_phase_meter8_pll_pid_gain1__out;
double _three_phase_meter9_sumi_rms__out;
double _three_phase_meter9_sumvll_rms__out;
double _three_phase_meter9_sumvln_rms__out;
double _three_phase_meter9_pll_pid_gain1__out;
double _three_phase_meter1_gaini_rms__out;
double _three_phase_meter1_gainvll_rms__out;
double _three_phase_meter1_gainvln_rms__out;
double _three_phase_meter1_pll_pid_sum5__out;
double _three_phase_meter10_gaini_rms__out;
double _three_phase_meter10_gainvll_rms__out;
double _three_phase_meter10_gainvln_rms__out;
double _three_phase_meter10_pll_pid_sum5__out;
double _three_phase_meter11_gaini_rms__out;
double _three_phase_meter11_gainvll_rms__out;
double _three_phase_meter11_gainvln_rms__out;
double _three_phase_meter11_pll_pid_sum5__out;
double _three_phase_meter2_gaini_rms__out;
double _three_phase_meter2_gainvll_rms__out;
double _three_phase_meter2_gainvln_rms__out;
double _three_phase_meter2_pll_pid_sum5__out;
double _three_phase_meter3_gaini_rms__out;
double _three_phase_meter3_gainvll_rms__out;
double _three_phase_meter3_gainvln_rms__out;
double _three_phase_meter3_pll_pid_sum5__out;
double _three_phase_meter4_gaini_rms__out;
double _three_phase_meter4_gainvll_rms__out;
double _three_phase_meter4_gainvln_rms__out;
double _three_phase_meter4_pll_pid_sum5__out;
double _three_phase_meter5_gaini_rms__out;
double _three_phase_meter5_gainvll_rms__out;
double _three_phase_meter5_gainvln_rms__out;
double _three_phase_meter5_pll_pid_sum5__out;
double _three_phase_meter6_gaini_rms__out;
double _three_phase_meter6_gainvll_rms__out;
double _three_phase_meter6_gainvln_rms__out;
double _three_phase_meter6_pll_pid_sum5__out;
double _three_phase_meter7_gaini_rms__out;
double _three_phase_meter7_gainvll_rms__out;
double _three_phase_meter7_gainvln_rms__out;
double _three_phase_meter7_pll_pid_sum5__out;
double _three_phase_meter8_gaini_rms__out;
double _three_phase_meter8_gainvll_rms__out;
double _three_phase_meter8_gainvln_rms__out;
double _three_phase_meter8_pll_pid_sum5__out;
double _three_phase_meter9_gaini_rms__out;
double _three_phase_meter9_gainvll_rms__out;
double _three_phase_meter9_gainvln_rms__out;
double _three_phase_meter9_pll_pid_sum5__out;
double _three_phase_meter1_output_bus__out[30];
double _three_phase_meter1_pll_pid_limit1__out;
double _three_phase_meter10_output_bus__out[30];
double _three_phase_meter10_pll_pid_limit1__out;
double _three_phase_meter11_output_bus__out[30];
double _three_phase_meter11_pll_pid_limit1__out;
double _three_phase_meter2_output_bus__out[30];
double _three_phase_meter2_pll_pid_limit1__out;
double _three_phase_meter3_output_bus__out[30];
double _three_phase_meter3_pll_pid_limit1__out;
double _three_phase_meter4_output_bus__out[30];
double _three_phase_meter4_pll_pid_limit1__out;
double _three_phase_meter5_output_bus__out[30];
double _three_phase_meter5_pll_pid_limit1__out;
double _three_phase_meter6_output_bus__out[30];
double _three_phase_meter6_pll_pid_limit1__out;
double _three_phase_meter7_output_bus__out[30];
double _three_phase_meter7_pll_pid_limit1__out;
double _three_phase_meter8_output_bus__out[30];
double _three_phase_meter8_pll_pid_limit1__out;
double _three_phase_meter9_output_bus__out[30];
double _three_phase_meter9_pll_pid_limit1__out;
double _bay_1_meter_split1_input_bus__out;
double _bay_1_meter_split1_input_bus__out1;
double _bay_1_meter_split1_input_bus__out2;
double _bay_1_meter_split1_input_bus__out3;
double _bay_1_meter_split1_input_bus__out4;
double _bay_1_meter_split1_input_bus__out5;
double _bay_1_meter_split1_input_bus__out6;
double _bay_1_meter_split1_input_bus__out7;
double _bay_1_meter_split1_input_bus__out8;
double _bay_1_meter_split1_input_bus__out9;
double _bay_1_meter_split1_input_bus__out10;
double _bay_1_meter_split1_input_bus__out11;
double _bay_1_meter_split1_input_bus__out12;
double _bay_1_meter_split1_input_bus__out13;
double _bay_1_meter_split1_input_bus__out14;
double _bay_1_meter_split1_input_bus__out15;
double _bay_1_meter_split1_input_bus__out16;
double _bay_1_meter_split1_input_bus__out17;
double _bay_1_meter_split1_input_bus__out18;
double _bay_1_meter_split1_input_bus__out19;
double _bay_1_meter_split1_input_bus__out20;
double _bay_1_meter_split1_input_bus__out21;
double _bay_1_meter_split1_input_bus__out22;
double _bay_1_meter_split1_input_bus__out23;
double _bay_1_meter_split1_input_bus__out24;
double _bay_1_meter_split1_input_bus__out25;
double _bay_1_meter_split1_input_bus__out26;
double _bay_1_meter_split1_input_bus__out27;
double _bay_1_meter_split1_input_bus__out28;
double _bay_1_meter_split1_input_bus__out29;
double _three_phase_meter1_pll_pid_sum6__out;
double _three_phase_meter1_pll_rate_limiter1__out;

double _three_phase_meter1_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter1_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter1_pll_integrator__in;

double _three_phase_meter1_pll_integrator__out;

double _bay_9_meter_split1_input_bus__out;
double _bay_9_meter_split1_input_bus__out1;
double _bay_9_meter_split1_input_bus__out2;
double _bay_9_meter_split1_input_bus__out3;
double _bay_9_meter_split1_input_bus__out4;
double _bay_9_meter_split1_input_bus__out5;
double _bay_9_meter_split1_input_bus__out6;
double _bay_9_meter_split1_input_bus__out7;
double _bay_9_meter_split1_input_bus__out8;
double _bay_9_meter_split1_input_bus__out9;
double _bay_9_meter_split1_input_bus__out10;
double _bay_9_meter_split1_input_bus__out11;
double _bay_9_meter_split1_input_bus__out12;
double _bay_9_meter_split1_input_bus__out13;
double _bay_9_meter_split1_input_bus__out14;
double _bay_9_meter_split1_input_bus__out15;
double _bay_9_meter_split1_input_bus__out16;
double _bay_9_meter_split1_input_bus__out17;
double _bay_9_meter_split1_input_bus__out18;
double _bay_9_meter_split1_input_bus__out19;
double _bay_9_meter_split1_input_bus__out20;
double _bay_9_meter_split1_input_bus__out21;
double _bay_9_meter_split1_input_bus__out22;
double _bay_9_meter_split1_input_bus__out23;
double _bay_9_meter_split1_input_bus__out24;
double _bay_9_meter_split1_input_bus__out25;
double _bay_9_meter_split1_input_bus__out26;
double _bay_9_meter_split1_input_bus__out27;
double _bay_9_meter_split1_input_bus__out28;
double _bay_9_meter_split1_input_bus__out29;
double _three_phase_meter10_pll_pid_sum6__out;
double _three_phase_meter10_pll_rate_limiter1__out;

double _three_phase_meter10_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter10_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter10_pll_integrator__in;

double _three_phase_meter10_pll_integrator__out;

double _bay_10_meter_split1_input_bus__out;
double _bay_10_meter_split1_input_bus__out1;
double _bay_10_meter_split1_input_bus__out2;
double _bay_10_meter_split1_input_bus__out3;
double _bay_10_meter_split1_input_bus__out4;
double _bay_10_meter_split1_input_bus__out5;
double _bay_10_meter_split1_input_bus__out6;
double _bay_10_meter_split1_input_bus__out7;
double _bay_10_meter_split1_input_bus__out8;
double _bay_10_meter_split1_input_bus__out9;
double _bay_10_meter_split1_input_bus__out10;
double _bay_10_meter_split1_input_bus__out11;
double _bay_10_meter_split1_input_bus__out12;
double _bay_10_meter_split1_input_bus__out13;
double _bay_10_meter_split1_input_bus__out14;
double _bay_10_meter_split1_input_bus__out15;
double _bay_10_meter_split1_input_bus__out16;
double _bay_10_meter_split1_input_bus__out17;
double _bay_10_meter_split1_input_bus__out18;
double _bay_10_meter_split1_input_bus__out19;
double _bay_10_meter_split1_input_bus__out20;
double _bay_10_meter_split1_input_bus__out21;
double _bay_10_meter_split1_input_bus__out22;
double _bay_10_meter_split1_input_bus__out23;
double _bay_10_meter_split1_input_bus__out24;
double _bay_10_meter_split1_input_bus__out25;
double _bay_10_meter_split1_input_bus__out26;
double _bay_10_meter_split1_input_bus__out27;
double _bay_10_meter_split1_input_bus__out28;
double _bay_10_meter_split1_input_bus__out29;
double _three_phase_meter11_pll_pid_sum6__out;
double _three_phase_meter11_pll_rate_limiter1__out;

double _three_phase_meter11_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter11_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter11_pll_integrator__in;

double _three_phase_meter11_pll_integrator__out;

double _bay_2_meter_split1_input_bus__out;
double _bay_2_meter_split1_input_bus__out1;
double _bay_2_meter_split1_input_bus__out2;
double _bay_2_meter_split1_input_bus__out3;
double _bay_2_meter_split1_input_bus__out4;
double _bay_2_meter_split1_input_bus__out5;
double _bay_2_meter_split1_input_bus__out6;
double _bay_2_meter_split1_input_bus__out7;
double _bay_2_meter_split1_input_bus__out8;
double _bay_2_meter_split1_input_bus__out9;
double _bay_2_meter_split1_input_bus__out10;
double _bay_2_meter_split1_input_bus__out11;
double _bay_2_meter_split1_input_bus__out12;
double _bay_2_meter_split1_input_bus__out13;
double _bay_2_meter_split1_input_bus__out14;
double _bay_2_meter_split1_input_bus__out15;
double _bay_2_meter_split1_input_bus__out16;
double _bay_2_meter_split1_input_bus__out17;
double _bay_2_meter_split1_input_bus__out18;
double _bay_2_meter_split1_input_bus__out19;
double _bay_2_meter_split1_input_bus__out20;
double _bay_2_meter_split1_input_bus__out21;
double _bay_2_meter_split1_input_bus__out22;
double _bay_2_meter_split1_input_bus__out23;
double _bay_2_meter_split1_input_bus__out24;
double _bay_2_meter_split1_input_bus__out25;
double _bay_2_meter_split1_input_bus__out26;
double _bay_2_meter_split1_input_bus__out27;
double _bay_2_meter_split1_input_bus__out28;
double _bay_2_meter_split1_input_bus__out29;
double _three_phase_meter2_pll_pid_sum6__out;
double _three_phase_meter2_pll_rate_limiter1__out;

double _three_phase_meter2_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter2_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter2_pll_integrator__in;

double _three_phase_meter2_pll_integrator__out;

double _bay_3_meter_split1_input_bus__out;
double _bay_3_meter_split1_input_bus__out1;
double _bay_3_meter_split1_input_bus__out2;
double _bay_3_meter_split1_input_bus__out3;
double _bay_3_meter_split1_input_bus__out4;
double _bay_3_meter_split1_input_bus__out5;
double _bay_3_meter_split1_input_bus__out6;
double _bay_3_meter_split1_input_bus__out7;
double _bay_3_meter_split1_input_bus__out8;
double _bay_3_meter_split1_input_bus__out9;
double _bay_3_meter_split1_input_bus__out10;
double _bay_3_meter_split1_input_bus__out11;
double _bay_3_meter_split1_input_bus__out12;
double _bay_3_meter_split1_input_bus__out13;
double _bay_3_meter_split1_input_bus__out14;
double _bay_3_meter_split1_input_bus__out15;
double _bay_3_meter_split1_input_bus__out16;
double _bay_3_meter_split1_input_bus__out17;
double _bay_3_meter_split1_input_bus__out18;
double _bay_3_meter_split1_input_bus__out19;
double _bay_3_meter_split1_input_bus__out20;
double _bay_3_meter_split1_input_bus__out21;
double _bay_3_meter_split1_input_bus__out22;
double _bay_3_meter_split1_input_bus__out23;
double _bay_3_meter_split1_input_bus__out24;
double _bay_3_meter_split1_input_bus__out25;
double _bay_3_meter_split1_input_bus__out26;
double _bay_3_meter_split1_input_bus__out27;
double _bay_3_meter_split1_input_bus__out28;
double _bay_3_meter_split1_input_bus__out29;
double _three_phase_meter3_pll_pid_sum6__out;
double _three_phase_meter3_pll_rate_limiter1__out;

double _three_phase_meter3_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter3_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter3_pll_integrator__in;

double _three_phase_meter3_pll_integrator__out;

double _hv_bay_1_meter_split1_input_bus__out;
double _hv_bay_1_meter_split1_input_bus__out1;
double _hv_bay_1_meter_split1_input_bus__out2;
double _hv_bay_1_meter_split1_input_bus__out3;
double _hv_bay_1_meter_split1_input_bus__out4;
double _hv_bay_1_meter_split1_input_bus__out5;
double _hv_bay_1_meter_split1_input_bus__out6;
double _hv_bay_1_meter_split1_input_bus__out7;
double _hv_bay_1_meter_split1_input_bus__out8;
double _hv_bay_1_meter_split1_input_bus__out9;
double _hv_bay_1_meter_split1_input_bus__out10;
double _hv_bay_1_meter_split1_input_bus__out11;
double _hv_bay_1_meter_split1_input_bus__out12;
double _hv_bay_1_meter_split1_input_bus__out13;
double _hv_bay_1_meter_split1_input_bus__out14;
double _hv_bay_1_meter_split1_input_bus__out15;
double _hv_bay_1_meter_split1_input_bus__out16;
double _hv_bay_1_meter_split1_input_bus__out17;
double _hv_bay_1_meter_split1_input_bus__out18;
double _hv_bay_1_meter_split1_input_bus__out19;
double _hv_bay_1_meter_split1_input_bus__out20;
double _hv_bay_1_meter_split1_input_bus__out21;
double _hv_bay_1_meter_split1_input_bus__out22;
double _hv_bay_1_meter_split1_input_bus__out23;
double _hv_bay_1_meter_split1_input_bus__out24;
double _hv_bay_1_meter_split1_input_bus__out25;
double _hv_bay_1_meter_split1_input_bus__out26;
double _hv_bay_1_meter_split1_input_bus__out27;
double _hv_bay_1_meter_split1_input_bus__out28;
double _hv_bay_1_meter_split1_input_bus__out29;
double _three_phase_meter4_pll_pid_sum6__out;
double _three_phase_meter4_pll_rate_limiter1__out;

double _three_phase_meter4_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter4_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter4_pll_integrator__in;

double _three_phase_meter4_pll_integrator__out;

double _bay_4_meter_split1_input_bus__out;
double _bay_4_meter_split1_input_bus__out1;
double _bay_4_meter_split1_input_bus__out2;
double _bay_4_meter_split1_input_bus__out3;
double _bay_4_meter_split1_input_bus__out4;
double _bay_4_meter_split1_input_bus__out5;
double _bay_4_meter_split1_input_bus__out6;
double _bay_4_meter_split1_input_bus__out7;
double _bay_4_meter_split1_input_bus__out8;
double _bay_4_meter_split1_input_bus__out9;
double _bay_4_meter_split1_input_bus__out10;
double _bay_4_meter_split1_input_bus__out11;
double _bay_4_meter_split1_input_bus__out12;
double _bay_4_meter_split1_input_bus__out13;
double _bay_4_meter_split1_input_bus__out14;
double _bay_4_meter_split1_input_bus__out15;
double _bay_4_meter_split1_input_bus__out16;
double _bay_4_meter_split1_input_bus__out17;
double _bay_4_meter_split1_input_bus__out18;
double _bay_4_meter_split1_input_bus__out19;
double _bay_4_meter_split1_input_bus__out20;
double _bay_4_meter_split1_input_bus__out21;
double _bay_4_meter_split1_input_bus__out22;
double _bay_4_meter_split1_input_bus__out23;
double _bay_4_meter_split1_input_bus__out24;
double _bay_4_meter_split1_input_bus__out25;
double _bay_4_meter_split1_input_bus__out26;
double _bay_4_meter_split1_input_bus__out27;
double _bay_4_meter_split1_input_bus__out28;
double _bay_4_meter_split1_input_bus__out29;
double _three_phase_meter5_pll_pid_sum6__out;
double _three_phase_meter5_pll_rate_limiter1__out;

double _three_phase_meter5_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter5_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter5_pll_integrator__in;

double _three_phase_meter5_pll_integrator__out;

double _bay_5_meter_split1_input_bus__out;
double _bay_5_meter_split1_input_bus__out1;
double _bay_5_meter_split1_input_bus__out2;
double _bay_5_meter_split1_input_bus__out3;
double _bay_5_meter_split1_input_bus__out4;
double _bay_5_meter_split1_input_bus__out5;
double _bay_5_meter_split1_input_bus__out6;
double _bay_5_meter_split1_input_bus__out7;
double _bay_5_meter_split1_input_bus__out8;
double _bay_5_meter_split1_input_bus__out9;
double _bay_5_meter_split1_input_bus__out10;
double _bay_5_meter_split1_input_bus__out11;
double _bay_5_meter_split1_input_bus__out12;
double _bay_5_meter_split1_input_bus__out13;
double _bay_5_meter_split1_input_bus__out14;
double _bay_5_meter_split1_input_bus__out15;
double _bay_5_meter_split1_input_bus__out16;
double _bay_5_meter_split1_input_bus__out17;
double _bay_5_meter_split1_input_bus__out18;
double _bay_5_meter_split1_input_bus__out19;
double _bay_5_meter_split1_input_bus__out20;
double _bay_5_meter_split1_input_bus__out21;
double _bay_5_meter_split1_input_bus__out22;
double _bay_5_meter_split1_input_bus__out23;
double _bay_5_meter_split1_input_bus__out24;
double _bay_5_meter_split1_input_bus__out25;
double _bay_5_meter_split1_input_bus__out26;
double _bay_5_meter_split1_input_bus__out27;
double _bay_5_meter_split1_input_bus__out28;
double _bay_5_meter_split1_input_bus__out29;
double _three_phase_meter6_pll_pid_sum6__out;
double _three_phase_meter6_pll_rate_limiter1__out;

double _three_phase_meter6_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter6_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter6_pll_integrator__in;

double _three_phase_meter6_pll_integrator__out;

double _bay_6_meter_split1_input_bus__out;
double _bay_6_meter_split1_input_bus__out1;
double _bay_6_meter_split1_input_bus__out2;
double _bay_6_meter_split1_input_bus__out3;
double _bay_6_meter_split1_input_bus__out4;
double _bay_6_meter_split1_input_bus__out5;
double _bay_6_meter_split1_input_bus__out6;
double _bay_6_meter_split1_input_bus__out7;
double _bay_6_meter_split1_input_bus__out8;
double _bay_6_meter_split1_input_bus__out9;
double _bay_6_meter_split1_input_bus__out10;
double _bay_6_meter_split1_input_bus__out11;
double _bay_6_meter_split1_input_bus__out12;
double _bay_6_meter_split1_input_bus__out13;
double _bay_6_meter_split1_input_bus__out14;
double _bay_6_meter_split1_input_bus__out15;
double _bay_6_meter_split1_input_bus__out16;
double _bay_6_meter_split1_input_bus__out17;
double _bay_6_meter_split1_input_bus__out18;
double _bay_6_meter_split1_input_bus__out19;
double _bay_6_meter_split1_input_bus__out20;
double _bay_6_meter_split1_input_bus__out21;
double _bay_6_meter_split1_input_bus__out22;
double _bay_6_meter_split1_input_bus__out23;
double _bay_6_meter_split1_input_bus__out24;
double _bay_6_meter_split1_input_bus__out25;
double _bay_6_meter_split1_input_bus__out26;
double _bay_6_meter_split1_input_bus__out27;
double _bay_6_meter_split1_input_bus__out28;
double _bay_6_meter_split1_input_bus__out29;
double _three_phase_meter7_pll_pid_sum6__out;
double _three_phase_meter7_pll_rate_limiter1__out;

double _three_phase_meter7_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter7_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter7_pll_integrator__in;

double _three_phase_meter7_pll_integrator__out;

double _bay_7_meter_split1_input_bus__out;
double _bay_7_meter_split1_input_bus__out1;
double _bay_7_meter_split1_input_bus__out2;
double _bay_7_meter_split1_input_bus__out3;
double _bay_7_meter_split1_input_bus__out4;
double _bay_7_meter_split1_input_bus__out5;
double _bay_7_meter_split1_input_bus__out6;
double _bay_7_meter_split1_input_bus__out7;
double _bay_7_meter_split1_input_bus__out8;
double _bay_7_meter_split1_input_bus__out9;
double _bay_7_meter_split1_input_bus__out10;
double _bay_7_meter_split1_input_bus__out11;
double _bay_7_meter_split1_input_bus__out12;
double _bay_7_meter_split1_input_bus__out13;
double _bay_7_meter_split1_input_bus__out14;
double _bay_7_meter_split1_input_bus__out15;
double _bay_7_meter_split1_input_bus__out16;
double _bay_7_meter_split1_input_bus__out17;
double _bay_7_meter_split1_input_bus__out18;
double _bay_7_meter_split1_input_bus__out19;
double _bay_7_meter_split1_input_bus__out20;
double _bay_7_meter_split1_input_bus__out21;
double _bay_7_meter_split1_input_bus__out22;
double _bay_7_meter_split1_input_bus__out23;
double _bay_7_meter_split1_input_bus__out24;
double _bay_7_meter_split1_input_bus__out25;
double _bay_7_meter_split1_input_bus__out26;
double _bay_7_meter_split1_input_bus__out27;
double _bay_7_meter_split1_input_bus__out28;
double _bay_7_meter_split1_input_bus__out29;
double _three_phase_meter8_pll_pid_sum6__out;
double _three_phase_meter8_pll_rate_limiter1__out;

double _three_phase_meter8_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter8_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter8_pll_integrator__in;

double _three_phase_meter8_pll_integrator__out;

double _bay_8_meter_split1_input_bus__out;
double _bay_8_meter_split1_input_bus__out1;
double _bay_8_meter_split1_input_bus__out2;
double _bay_8_meter_split1_input_bus__out3;
double _bay_8_meter_split1_input_bus__out4;
double _bay_8_meter_split1_input_bus__out5;
double _bay_8_meter_split1_input_bus__out6;
double _bay_8_meter_split1_input_bus__out7;
double _bay_8_meter_split1_input_bus__out8;
double _bay_8_meter_split1_input_bus__out9;
double _bay_8_meter_split1_input_bus__out10;
double _bay_8_meter_split1_input_bus__out11;
double _bay_8_meter_split1_input_bus__out12;
double _bay_8_meter_split1_input_bus__out13;
double _bay_8_meter_split1_input_bus__out14;
double _bay_8_meter_split1_input_bus__out15;
double _bay_8_meter_split1_input_bus__out16;
double _bay_8_meter_split1_input_bus__out17;
double _bay_8_meter_split1_input_bus__out18;
double _bay_8_meter_split1_input_bus__out19;
double _bay_8_meter_split1_input_bus__out20;
double _bay_8_meter_split1_input_bus__out21;
double _bay_8_meter_split1_input_bus__out22;
double _bay_8_meter_split1_input_bus__out23;
double _bay_8_meter_split1_input_bus__out24;
double _bay_8_meter_split1_input_bus__out25;
double _bay_8_meter_split1_input_bus__out26;
double _bay_8_meter_split1_input_bus__out27;
double _bay_8_meter_split1_input_bus__out28;
double _bay_8_meter_split1_input_bus__out29;
double _three_phase_meter9_pll_pid_sum6__out;
double _three_phase_meter9_pll_rate_limiter1__out;

double _three_phase_meter9_pll_rate_limiter1__rising_rate_lim[1];
double _three_phase_meter9_pll_rate_limiter1__falling_rate_lim[1];

double _three_phase_meter9_pll_integrator__in;

double _three_phase_meter9_pll_integrator__out;

double _bay_1_bus_join2__out[4];
double _bay_1_bus_join9__out[4];
double _bay_1_meter_split1_gain__out[12];
double _three_phase_meter1_pll_pid_kb__out;
double _bay_9_bus_join2__out[4];
double _bay_9_bus_join9__out[4];
double _bay_9_meter_split1_gain__out[12];
double _three_phase_meter10_pll_pid_kb__out;
double _bay_10_bus_join2__out[4];
double _bay_10_bus_join9__out[4];
double _bay_10_meter_split1_gain__out[12];
double _three_phase_meter11_pll_pid_kb__out;
double _bay_2_bus_join2__out[4];
double _bay_2_bus_join9__out[4];
double _bay_2_meter_split1_gain__out[12];
double _three_phase_meter2_pll_pid_kb__out;
double _bay_3_bus_join2__out[4];
double _bay_3_bus_join9__out[4];
double _bay_3_meter_split1_gain__out[12];
double _three_phase_meter3_pll_pid_kb__out;
double _hv_bay_1_bus_join8__out[4];
double _hv_bay_1_bus_join9__out[4];
double _hv_bay_1_meter_split1_gain__out[12];
double _three_phase_meter4_pll_pid_kb__out;
double _bay_4_bus_join2__out[4];
double _bay_4_bus_join9__out[4];
double _bay_4_meter_split1_gain__out[12];
double _three_phase_meter5_pll_pid_kb__out;
double _bay_5_bus_join2__out[4];
double _bay_5_bus_join9__out[4];
double _bay_5_meter_split1_gain__out[12];
double _three_phase_meter6_pll_pid_kb__out;
double _bay_6_bus_join2__out[4];
double _bay_6_bus_join9__out[4];
double _bay_6_meter_split1_gain__out[12];
double _three_phase_meter7_pll_pid_kb__out;
double _bay_7_bus_join2__out[4];
double _bay_7_bus_join9__out[4];
double _bay_7_meter_split1_gain__out[12];
double _three_phase_meter8_pll_pid_kb__out;
double _bay_8_bus_join2__out[4];
double _bay_8_bus_join9__out[4];
double _bay_8_meter_split1_gain__out[12];
double _three_phase_meter9_pll_pid_kb__out;
double _bay_1_sv_publisher1_i_scale__out[4];
double _bay_1_sv_publisher1_v_scale__out[4];
double _bay_1_meter_split1_extra_input_bus__out;
double _bay_1_meter_split1_extra_input_bus__out1;
double _bay_1_meter_split1_extra_input_bus__out2;
double _bay_1_meter_split1_extra_input_bus__out3;
double _bay_1_meter_split1_extra_input_bus__out4;
double _bay_1_meter_split1_extra_input_bus__out5;
double _bay_1_meter_split1_extra_input_bus__out6;
double _bay_1_meter_split1_extra_input_bus__out7;
double _bay_1_meter_split1_extra_input_bus__out8;
double _bay_1_meter_split1_extra_input_bus__out9;
double _bay_1_meter_split1_extra_input_bus__out10;
double _bay_1_meter_split1_extra_input_bus__out11;
double _three_phase_meter1_pll_pid_sum7__out;
double _bay_9_sv_publisher1_i_scale__out[4];
double _bay_9_sv_publisher1_v_scale__out[4];
double _bay_9_meter_split1_extra_input_bus__out;
double _bay_9_meter_split1_extra_input_bus__out1;
double _bay_9_meter_split1_extra_input_bus__out2;
double _bay_9_meter_split1_extra_input_bus__out3;
double _bay_9_meter_split1_extra_input_bus__out4;
double _bay_9_meter_split1_extra_input_bus__out5;
double _bay_9_meter_split1_extra_input_bus__out6;
double _bay_9_meter_split1_extra_input_bus__out7;
double _bay_9_meter_split1_extra_input_bus__out8;
double _bay_9_meter_split1_extra_input_bus__out9;
double _bay_9_meter_split1_extra_input_bus__out10;
double _bay_9_meter_split1_extra_input_bus__out11;
double _three_phase_meter10_pll_pid_sum7__out;
double _bay_10_sv_publisher1_i_scale__out[4];
double _bay_10_sv_publisher1_v_scale__out[4];
double _bay_10_meter_split1_extra_input_bus__out;
double _bay_10_meter_split1_extra_input_bus__out1;
double _bay_10_meter_split1_extra_input_bus__out2;
double _bay_10_meter_split1_extra_input_bus__out3;
double _bay_10_meter_split1_extra_input_bus__out4;
double _bay_10_meter_split1_extra_input_bus__out5;
double _bay_10_meter_split1_extra_input_bus__out6;
double _bay_10_meter_split1_extra_input_bus__out7;
double _bay_10_meter_split1_extra_input_bus__out8;
double _bay_10_meter_split1_extra_input_bus__out9;
double _bay_10_meter_split1_extra_input_bus__out10;
double _bay_10_meter_split1_extra_input_bus__out11;
double _three_phase_meter11_pll_pid_sum7__out;
double _bay_2_sv_publisher1_i_scale__out[4];
double _bay_2_sv_publisher1_v_scale__out[4];
double _bay_2_meter_split1_extra_input_bus__out;
double _bay_2_meter_split1_extra_input_bus__out1;
double _bay_2_meter_split1_extra_input_bus__out2;
double _bay_2_meter_split1_extra_input_bus__out3;
double _bay_2_meter_split1_extra_input_bus__out4;
double _bay_2_meter_split1_extra_input_bus__out5;
double _bay_2_meter_split1_extra_input_bus__out6;
double _bay_2_meter_split1_extra_input_bus__out7;
double _bay_2_meter_split1_extra_input_bus__out8;
double _bay_2_meter_split1_extra_input_bus__out9;
double _bay_2_meter_split1_extra_input_bus__out10;
double _bay_2_meter_split1_extra_input_bus__out11;
double _three_phase_meter2_pll_pid_sum7__out;
double _bay_3_sv_publisher1_i_scale__out[4];
double _bay_3_sv_publisher1_v_scale__out[4];
double _bay_3_meter_split1_extra_input_bus__out;
double _bay_3_meter_split1_extra_input_bus__out1;
double _bay_3_meter_split1_extra_input_bus__out2;
double _bay_3_meter_split1_extra_input_bus__out3;
double _bay_3_meter_split1_extra_input_bus__out4;
double _bay_3_meter_split1_extra_input_bus__out5;
double _bay_3_meter_split1_extra_input_bus__out6;
double _bay_3_meter_split1_extra_input_bus__out7;
double _bay_3_meter_split1_extra_input_bus__out8;
double _bay_3_meter_split1_extra_input_bus__out9;
double _bay_3_meter_split1_extra_input_bus__out10;
double _bay_3_meter_split1_extra_input_bus__out11;
double _three_phase_meter3_pll_pid_sum7__out;
double _hv_bay_1_sv_publisher1_i_scale__out[4];
double _hv_bay_1_sv_publisher1_v_scale__out[4];
double _hv_bay_1_meter_split1_extra_input_bus__out;
double _hv_bay_1_meter_split1_extra_input_bus__out1;
double _hv_bay_1_meter_split1_extra_input_bus__out2;
double _hv_bay_1_meter_split1_extra_input_bus__out3;
double _hv_bay_1_meter_split1_extra_input_bus__out4;
double _hv_bay_1_meter_split1_extra_input_bus__out5;
double _hv_bay_1_meter_split1_extra_input_bus__out6;
double _hv_bay_1_meter_split1_extra_input_bus__out7;
double _hv_bay_1_meter_split1_extra_input_bus__out8;
double _hv_bay_1_meter_split1_extra_input_bus__out9;
double _hv_bay_1_meter_split1_extra_input_bus__out10;
double _hv_bay_1_meter_split1_extra_input_bus__out11;
double _three_phase_meter4_pll_pid_sum7__out;
double _bay_4_sv_publisher1_i_scale__out[4];
double _bay_4_sv_publisher1_v_scale__out[4];
double _bay_4_meter_split1_extra_input_bus__out;
double _bay_4_meter_split1_extra_input_bus__out1;
double _bay_4_meter_split1_extra_input_bus__out2;
double _bay_4_meter_split1_extra_input_bus__out3;
double _bay_4_meter_split1_extra_input_bus__out4;
double _bay_4_meter_split1_extra_input_bus__out5;
double _bay_4_meter_split1_extra_input_bus__out6;
double _bay_4_meter_split1_extra_input_bus__out7;
double _bay_4_meter_split1_extra_input_bus__out8;
double _bay_4_meter_split1_extra_input_bus__out9;
double _bay_4_meter_split1_extra_input_bus__out10;
double _bay_4_meter_split1_extra_input_bus__out11;
double _three_phase_meter5_pll_pid_sum7__out;
double _bay_5_sv_publisher1_i_scale__out[4];
double _bay_5_sv_publisher1_v_scale__out[4];
double _bay_5_meter_split1_extra_input_bus__out;
double _bay_5_meter_split1_extra_input_bus__out1;
double _bay_5_meter_split1_extra_input_bus__out2;
double _bay_5_meter_split1_extra_input_bus__out3;
double _bay_5_meter_split1_extra_input_bus__out4;
double _bay_5_meter_split1_extra_input_bus__out5;
double _bay_5_meter_split1_extra_input_bus__out6;
double _bay_5_meter_split1_extra_input_bus__out7;
double _bay_5_meter_split1_extra_input_bus__out8;
double _bay_5_meter_split1_extra_input_bus__out9;
double _bay_5_meter_split1_extra_input_bus__out10;
double _bay_5_meter_split1_extra_input_bus__out11;
double _three_phase_meter6_pll_pid_sum7__out;
double _bay_6_sv_publisher1_i_scale__out[4];
double _bay_6_sv_publisher1_v_scale__out[4];
double _bay_6_meter_split1_extra_input_bus__out;
double _bay_6_meter_split1_extra_input_bus__out1;
double _bay_6_meter_split1_extra_input_bus__out2;
double _bay_6_meter_split1_extra_input_bus__out3;
double _bay_6_meter_split1_extra_input_bus__out4;
double _bay_6_meter_split1_extra_input_bus__out5;
double _bay_6_meter_split1_extra_input_bus__out6;
double _bay_6_meter_split1_extra_input_bus__out7;
double _bay_6_meter_split1_extra_input_bus__out8;
double _bay_6_meter_split1_extra_input_bus__out9;
double _bay_6_meter_split1_extra_input_bus__out10;
double _bay_6_meter_split1_extra_input_bus__out11;
double _three_phase_meter7_pll_pid_sum7__out;
double _bay_7_sv_publisher1_i_scale__out[4];
double _bay_7_sv_publisher1_v_scale__out[4];
double _bay_7_meter_split1_extra_input_bus__out;
double _bay_7_meter_split1_extra_input_bus__out1;
double _bay_7_meter_split1_extra_input_bus__out2;
double _bay_7_meter_split1_extra_input_bus__out3;
double _bay_7_meter_split1_extra_input_bus__out4;
double _bay_7_meter_split1_extra_input_bus__out5;
double _bay_7_meter_split1_extra_input_bus__out6;
double _bay_7_meter_split1_extra_input_bus__out7;
double _bay_7_meter_split1_extra_input_bus__out8;
double _bay_7_meter_split1_extra_input_bus__out9;
double _bay_7_meter_split1_extra_input_bus__out10;
double _bay_7_meter_split1_extra_input_bus__out11;
double _three_phase_meter8_pll_pid_sum7__out;
double _bay_8_sv_publisher1_i_scale__out[4];
double _bay_8_sv_publisher1_v_scale__out[4];
double _bay_8_meter_split1_extra_input_bus__out;
double _bay_8_meter_split1_extra_input_bus__out1;
double _bay_8_meter_split1_extra_input_bus__out2;
double _bay_8_meter_split1_extra_input_bus__out3;
double _bay_8_meter_split1_extra_input_bus__out4;
double _bay_8_meter_split1_extra_input_bus__out5;
double _bay_8_meter_split1_extra_input_bus__out6;
double _bay_8_meter_split1_extra_input_bus__out7;
double _bay_8_meter_split1_extra_input_bus__out8;
double _bay_8_meter_split1_extra_input_bus__out9;
double _bay_8_meter_split1_extra_input_bus__out10;
double _bay_8_meter_split1_extra_input_bus__out11;
double _three_phase_meter9_pll_pid_sum7__out;
X_Int32 _bay_1_sv_publisher1_i_convert__out[4];
X_Int32 _bay_1_sv_publisher1_v_convert__out[4];
X_Int32 _bay_9_sv_publisher1_i_convert__out[4];
X_Int32 _bay_9_sv_publisher1_v_convert__out[4];
X_Int32 _bay_10_sv_publisher1_i_convert__out[4];
X_Int32 _bay_10_sv_publisher1_v_convert__out[4];
X_Int32 _bay_2_sv_publisher1_i_convert__out[4];
X_Int32 _bay_2_sv_publisher1_v_convert__out[4];
X_Int32 _bay_3_sv_publisher1_i_convert__out[4];
X_Int32 _bay_3_sv_publisher1_v_convert__out[4];
X_Int32 _hv_bay_1_sv_publisher1_i_convert__out[4];
X_Int32 _hv_bay_1_sv_publisher1_v_convert__out[4];
X_Int32 _bay_4_sv_publisher1_i_convert__out[4];
X_Int32 _bay_4_sv_publisher1_v_convert__out[4];
X_Int32 _bay_5_sv_publisher1_i_convert__out[4];
X_Int32 _bay_5_sv_publisher1_v_convert__out[4];
X_Int32 _bay_6_sv_publisher1_i_convert__out[4];
X_Int32 _bay_6_sv_publisher1_v_convert__out[4];
X_Int32 _bay_7_sv_publisher1_i_convert__out[4];
X_Int32 _bay_7_sv_publisher1_v_convert__out[4];
X_Int32 _bay_8_sv_publisher1_i_convert__out[4];
X_Int32 _bay_8_sv_publisher1_v_convert__out[4];
X_UnInt32 _bay_1_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_1_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_9_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_9_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_10_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_10_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_2_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_2_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_3_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_3_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _hv_bay_1_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _hv_bay_1_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_4_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_4_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_5_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_5_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_6_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_6_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_7_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_7_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_8_sv_publisher1_i_byte_swap__out[4];
X_UnInt32 _bay_8_sv_publisher1_v_byte_swap__out[4];
X_UnInt32 _bay_1_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_1_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_1_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_1_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_1_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_1_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_1_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_1_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_9_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_9_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_9_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_9_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_9_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_9_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_9_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_9_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_10_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_10_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_10_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_10_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_10_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_10_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_10_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_10_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_2_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_2_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_2_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_2_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_2_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_2_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_2_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_2_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_3_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_3_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_3_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_3_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_3_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_3_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_3_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_3_sv_publisher1_v_bus_split__out3;
X_UnInt32 _hv_bay_1_sv_publisher1_i_bus_split__out;
X_UnInt32 _hv_bay_1_sv_publisher1_i_bus_split__out1;
X_UnInt32 _hv_bay_1_sv_publisher1_i_bus_split__out2;
X_UnInt32 _hv_bay_1_sv_publisher1_i_bus_split__out3;
X_UnInt32 _hv_bay_1_sv_publisher1_v_bus_split__out;
X_UnInt32 _hv_bay_1_sv_publisher1_v_bus_split__out1;
X_UnInt32 _hv_bay_1_sv_publisher1_v_bus_split__out2;
X_UnInt32 _hv_bay_1_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_4_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_4_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_4_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_4_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_4_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_4_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_4_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_4_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_5_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_5_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_5_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_5_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_5_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_5_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_5_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_5_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_6_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_6_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_6_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_6_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_6_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_6_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_6_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_6_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_7_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_7_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_7_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_7_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_7_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_7_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_7_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_7_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_8_sv_publisher1_i_bus_split__out;
X_UnInt32 _bay_8_sv_publisher1_i_bus_split__out1;
X_UnInt32 _bay_8_sv_publisher1_i_bus_split__out2;
X_UnInt32 _bay_8_sv_publisher1_i_bus_split__out3;
X_UnInt32 _bay_8_sv_publisher1_v_bus_split__out;
X_UnInt32 _bay_8_sv_publisher1_v_bus_split__out1;
X_UnInt32 _bay_8_sv_publisher1_v_bus_split__out2;
X_UnInt32 _bay_8_sv_publisher1_v_bus_split__out3;
X_UnInt32 _bay_1_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_9_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_10_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_2_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_3_sv_publisher1_bus_join__out[16];
X_UnInt32 _hv_bay_1_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_4_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_5_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_6_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_7_sv_publisher1_bus_join__out[16];
X_UnInt32 _bay_8_sv_publisher1_bus_join__out[16];
//@cmp.var.end

//@cmp.svar.start
// state variables
X_Int32 _bay_1_sr_flip_flop2__state;
X_Int32 _bay_1_sr_flip_flop4__state;
double _bay_1_sr_flip_flop5__state;
double _bay_1_step1__state;
double _bay_1_step2__state;
double _bay_1_step3__state;
X_Int32 _bay_10_sr_flip_flop2__state;
X_Int32 _bay_10_sr_flip_flop4__state;
double _bay_10_sr_flip_flop5__state;
double _bay_10_step1__state;
double _bay_10_step2__state;
double _bay_10_step3__state;
X_Int32 _bay_2_sr_flip_flop2__state;
X_Int32 _bay_2_sr_flip_flop4__state;
double _bay_2_sr_flip_flop5__state;
double _bay_2_step1__state;
double _bay_2_step2__state;
double _bay_2_step3__state;
X_Int32 _bay_3_sr_flip_flop2__state;
X_Int32 _bay_3_sr_flip_flop4__state;
double _bay_3_sr_flip_flop5__state;
double _bay_3_step1__state;
double _bay_3_step2__state;
double _bay_3_step3__state;
X_Int32 _bay_4_sr_flip_flop2__state;
X_Int32 _bay_4_sr_flip_flop4__state;
double _bay_4_sr_flip_flop5__state;
double _bay_4_step1__state;
double _bay_4_step2__state;
double _bay_4_step3__state;
X_Int32 _bay_5_sr_flip_flop2__state;
X_Int32 _bay_5_sr_flip_flop4__state;
double _bay_5_sr_flip_flop5__state;
double _bay_5_step1__state;
double _bay_5_step2__state;
double _bay_5_step3__state;
X_Int32 _bay_6_sr_flip_flop2__state;
X_Int32 _bay_6_sr_flip_flop4__state;
double _bay_6_sr_flip_flop5__state;
double _bay_6_step1__state;
double _bay_6_step2__state;
double _bay_6_step3__state;
X_Int32 _bay_7_sr_flip_flop2__state;
X_Int32 _bay_7_sr_flip_flop4__state;
double _bay_7_sr_flip_flop5__state;
double _bay_7_step1__state;
double _bay_7_step2__state;
double _bay_7_step3__state;
X_Int32 _bay_8_sr_flip_flop2__state;
X_Int32 _bay_8_sr_flip_flop4__state;
double _bay_8_sr_flip_flop5__state;
double _bay_8_step1__state;
double _bay_8_step2__state;
double _bay_8_step3__state;
X_Int32 _bay_9_sr_flip_flop2__state;
X_Int32 _bay_9_sr_flip_flop4__state;
double _bay_9_sr_flip_flop5__state;
double _bay_9_step1__state;
double _bay_9_step2__state;
double _bay_9_step3__state;
X_Int32 _hv_bay_1_sr_flip_flop2__state;
X_Int32 _hv_bay_1_sr_flip_flop4__state;
X_Int32 _hv_bay_1_sr_flip_flop5__state;
double _hv_bay_1_step1__state;
double _hv_bay_1_step2__state;
double _hv_bay_1_step3__state;
double _three_phase_meter1_pll_lpf_lpf__states[2];
double _three_phase_meter1_pll_pid_integrator1__state;
double _three_phase_meter1_pll_pid_integrator2__state;
double _three_phase_meter1_pll_unit_delay1__state;
double _three_phase_meter1_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter1_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter10_pll_lpf_lpf__states[2];
double _three_phase_meter10_pll_pid_integrator1__state;
double _three_phase_meter10_pll_pid_integrator2__state;
double _three_phase_meter10_pll_unit_delay1__state;
double _three_phase_meter10_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter10_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter11_pll_lpf_lpf__states[2];
double _three_phase_meter11_pll_pid_integrator1__state;
double _three_phase_meter11_pll_pid_integrator2__state;
double _three_phase_meter11_pll_unit_delay1__state;
double _three_phase_meter11_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter11_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter2_pll_lpf_lpf__states[2];
double _three_phase_meter2_pll_pid_integrator1__state;
double _three_phase_meter2_pll_pid_integrator2__state;
double _three_phase_meter2_pll_unit_delay1__state;
double _three_phase_meter2_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter2_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter3_pll_lpf_lpf__states[2];
double _three_phase_meter3_pll_pid_integrator1__state;
double _three_phase_meter3_pll_pid_integrator2__state;
double _three_phase_meter3_pll_unit_delay1__state;
double _three_phase_meter3_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter3_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter4_pll_lpf_lpf__states[2];
double _three_phase_meter4_pll_pid_integrator1__state;
double _three_phase_meter4_pll_pid_integrator2__state;
double _three_phase_meter4_pll_unit_delay1__state;
double _three_phase_meter4_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter4_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter5_pll_lpf_lpf__states[2];
double _three_phase_meter5_pll_pid_integrator1__state;
double _three_phase_meter5_pll_pid_integrator2__state;
double _three_phase_meter5_pll_unit_delay1__state;
double _three_phase_meter5_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter5_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter6_pll_lpf_lpf__states[2];
double _three_phase_meter6_pll_pid_integrator1__state;
double _three_phase_meter6_pll_pid_integrator2__state;
double _three_phase_meter6_pll_unit_delay1__state;
double _three_phase_meter6_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter6_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter7_pll_lpf_lpf__states[2];
double _three_phase_meter7_pll_pid_integrator1__state;
double _three_phase_meter7_pll_pid_integrator2__state;
double _three_phase_meter7_pll_unit_delay1__state;
double _three_phase_meter7_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter7_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter8_pll_lpf_lpf__states[2];
double _three_phase_meter8_pll_pid_integrator1__state;
double _three_phase_meter8_pll_pid_integrator2__state;
double _three_phase_meter8_pll_unit_delay1__state;
double _three_phase_meter8_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter8_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_in;
double _three_phase_meter9_pll_lpf_lpf__states[2];
double _three_phase_meter9_pll_pid_integrator1__state;
double _three_phase_meter9_pll_pid_integrator2__state;
double _three_phase_meter9_pll_unit_delay1__state;
double _three_phase_meter9_pll_abc_to_dq_lpf_d__filtered_value;
double _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_in;
double _three_phase_meter9_pll_abc_to_dq_lpf_q__filtered_value;
double _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_in;















































double _three_phase_meter1_meassm_mode_and_dfract__Tfract;

double _three_phase_meter1_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter1_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter1_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter1_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter1_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter1_meassm_mode_and_dfract__submode_state;




double _three_phase_meter10_meassm_mode_and_dfract__Tfract;

double _three_phase_meter10_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter10_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter10_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter10_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter10_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter10_meassm_mode_and_dfract__submode_state;




double _three_phase_meter11_meassm_mode_and_dfract__Tfract;

double _three_phase_meter11_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter11_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter11_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter11_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter11_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter11_meassm_mode_and_dfract__submode_state;




double _three_phase_meter2_meassm_mode_and_dfract__Tfract;

double _three_phase_meter2_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter2_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter2_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter2_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter2_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter2_meassm_mode_and_dfract__submode_state;




double _three_phase_meter3_meassm_mode_and_dfract__Tfract;

double _three_phase_meter3_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter3_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter3_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter3_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter3_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter3_meassm_mode_and_dfract__submode_state;




double _three_phase_meter4_meassm_mode_and_dfract__Tfract;

double _three_phase_meter4_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter4_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter4_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter4_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter4_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter4_meassm_mode_and_dfract__submode_state;




double _three_phase_meter5_meassm_mode_and_dfract__Tfract;

double _three_phase_meter5_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter5_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter5_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter5_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter5_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter5_meassm_mode_and_dfract__submode_state;




double _three_phase_meter6_meassm_mode_and_dfract__Tfract;

double _three_phase_meter6_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter6_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter6_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter6_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter6_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter6_meassm_mode_and_dfract__submode_state;




double _three_phase_meter7_meassm_mode_and_dfract__Tfract;

double _three_phase_meter7_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter7_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter7_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter7_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter7_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter7_meassm_mode_and_dfract__submode_state;




double _three_phase_meter8_meassm_mode_and_dfract__Tfract;

double _three_phase_meter8_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter8_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter8_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter8_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter8_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter8_meassm_mode_and_dfract__submode_state;




double _three_phase_meter9_meassm_mode_and_dfract__Tfract;

double _three_phase_meter9_meassm_mode_and_dfract__freqAbs;

double _three_phase_meter9_meassm_mode_and_dfract__fMax;

X_Int32 _three_phase_meter9_meassm_mode_and_dfract__reset;

X_Int32 _three_phase_meter9_meassm_mode_and_dfract__cycle_counter;

double _three_phase_meter9_meassm_mode_and_dfract__dFract_state;

X_Int32 _three_phase_meter9_meassm_mode_and_dfract__submode_state;




double _three_phase_meter1_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter1_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter1_i_rms_calc_rms__rmsSum1;

double _three_phase_meter1_i_rms_calc_rms__rmsSum2;

double _three_phase_meter1_i_rms_calc_rms__rmsSum3;

double _three_phase_meter1_i_rms_calc_rms__RMS1_state;

double _three_phase_meter1_i_rms_calc_rms__RMS2_state;

double _three_phase_meter1_i_rms_calc_rms__RMS3_state;




double _three_phase_meter1_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter1_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter1_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter1_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter1_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter1_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter1_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter1_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter1_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter1_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter1_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter1_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter1_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter10_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter10_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter10_i_rms_calc_rms__rmsSum1;

double _three_phase_meter10_i_rms_calc_rms__rmsSum2;

double _three_phase_meter10_i_rms_calc_rms__rmsSum3;

double _three_phase_meter10_i_rms_calc_rms__RMS1_state;

double _three_phase_meter10_i_rms_calc_rms__RMS2_state;

double _three_phase_meter10_i_rms_calc_rms__RMS3_state;




double _three_phase_meter10_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter10_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter10_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter10_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter10_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter10_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter10_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter10_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter10_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter10_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter10_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter10_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter10_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter11_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter11_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter11_i_rms_calc_rms__rmsSum1;

double _three_phase_meter11_i_rms_calc_rms__rmsSum2;

double _three_phase_meter11_i_rms_calc_rms__rmsSum3;

double _three_phase_meter11_i_rms_calc_rms__RMS1_state;

double _three_phase_meter11_i_rms_calc_rms__RMS2_state;

double _three_phase_meter11_i_rms_calc_rms__RMS3_state;




double _three_phase_meter11_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter11_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter11_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter11_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter11_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter11_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter11_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter11_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter11_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter11_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter11_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter11_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter11_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter2_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter2_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter2_i_rms_calc_rms__rmsSum1;

double _three_phase_meter2_i_rms_calc_rms__rmsSum2;

double _three_phase_meter2_i_rms_calc_rms__rmsSum3;

double _three_phase_meter2_i_rms_calc_rms__RMS1_state;

double _three_phase_meter2_i_rms_calc_rms__RMS2_state;

double _three_phase_meter2_i_rms_calc_rms__RMS3_state;




double _three_phase_meter2_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter2_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter2_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter2_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter2_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter2_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter2_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter2_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter2_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter2_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter2_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter2_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter2_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter3_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter3_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter3_i_rms_calc_rms__rmsSum1;

double _three_phase_meter3_i_rms_calc_rms__rmsSum2;

double _three_phase_meter3_i_rms_calc_rms__rmsSum3;

double _three_phase_meter3_i_rms_calc_rms__RMS1_state;

double _three_phase_meter3_i_rms_calc_rms__RMS2_state;

double _three_phase_meter3_i_rms_calc_rms__RMS3_state;




double _three_phase_meter3_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter3_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter3_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter3_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter3_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter3_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter3_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter3_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter3_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter3_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter3_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter3_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter3_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter4_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter4_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter4_i_rms_calc_rms__rmsSum1;

double _three_phase_meter4_i_rms_calc_rms__rmsSum2;

double _three_phase_meter4_i_rms_calc_rms__rmsSum3;

double _three_phase_meter4_i_rms_calc_rms__RMS1_state;

double _three_phase_meter4_i_rms_calc_rms__RMS2_state;

double _three_phase_meter4_i_rms_calc_rms__RMS3_state;




double _three_phase_meter4_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter4_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter4_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter4_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter4_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter4_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter4_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter4_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter4_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter4_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter4_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter4_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter4_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter5_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter5_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter5_i_rms_calc_rms__rmsSum1;

double _three_phase_meter5_i_rms_calc_rms__rmsSum2;

double _three_phase_meter5_i_rms_calc_rms__rmsSum3;

double _three_phase_meter5_i_rms_calc_rms__RMS1_state;

double _three_phase_meter5_i_rms_calc_rms__RMS2_state;

double _three_phase_meter5_i_rms_calc_rms__RMS3_state;




double _three_phase_meter5_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter5_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter5_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter5_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter5_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter5_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter5_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter5_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter5_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter5_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter5_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter5_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter5_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter6_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter6_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter6_i_rms_calc_rms__rmsSum1;

double _three_phase_meter6_i_rms_calc_rms__rmsSum2;

double _three_phase_meter6_i_rms_calc_rms__rmsSum3;

double _three_phase_meter6_i_rms_calc_rms__RMS1_state;

double _three_phase_meter6_i_rms_calc_rms__RMS2_state;

double _three_phase_meter6_i_rms_calc_rms__RMS3_state;




double _three_phase_meter6_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter6_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter6_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter6_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter6_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter6_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter6_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter6_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter6_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter6_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter6_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter6_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter6_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter7_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter7_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter7_i_rms_calc_rms__rmsSum1;

double _three_phase_meter7_i_rms_calc_rms__rmsSum2;

double _three_phase_meter7_i_rms_calc_rms__rmsSum3;

double _three_phase_meter7_i_rms_calc_rms__RMS1_state;

double _three_phase_meter7_i_rms_calc_rms__RMS2_state;

double _three_phase_meter7_i_rms_calc_rms__RMS3_state;




double _three_phase_meter7_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter7_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter7_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter7_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter7_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter7_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter7_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter7_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter7_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter7_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter7_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter7_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter7_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter8_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter8_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter8_i_rms_calc_rms__rmsSum1;

double _three_phase_meter8_i_rms_calc_rms__rmsSum2;

double _three_phase_meter8_i_rms_calc_rms__rmsSum3;

double _three_phase_meter8_i_rms_calc_rms__RMS1_state;

double _three_phase_meter8_i_rms_calc_rms__RMS2_state;

double _three_phase_meter8_i_rms_calc_rms__RMS3_state;




double _three_phase_meter8_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter8_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter8_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter8_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter8_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter8_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter8_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter8_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter8_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter8_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter8_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter8_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter8_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter9_in_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter9_in_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter9_i_rms_calc_rms__rmsSum1;

double _three_phase_meter9_i_rms_calc_rms__rmsSum2;

double _three_phase_meter9_i_rms_calc_rms__rmsSum3;

double _three_phase_meter9_i_rms_calc_rms__RMS1_state;

double _three_phase_meter9_i_rms_calc_rms__RMS2_state;

double _three_phase_meter9_i_rms_calc_rms__RMS3_state;




double _three_phase_meter9_vll_rms_calc_rms__rmsSum1;

double _three_phase_meter9_vll_rms_calc_rms__rmsSum2;

double _three_phase_meter9_vll_rms_calc_rms__rmsSum3;

double _three_phase_meter9_vll_rms_calc_rms__RMS1_state;

double _three_phase_meter9_vll_rms_calc_rms__RMS2_state;

double _three_phase_meter9_vll_rms_calc_rms__RMS3_state;




double _three_phase_meter9_vln_rms_calc_rms__rmsSum1;

double _three_phase_meter9_vln_rms_calc_rms__rmsSum2;

double _three_phase_meter9_vln_rms_calc_rms__rmsSum3;

double _three_phase_meter9_vln_rms_calc_rms__RMS1_state;

double _three_phase_meter9_vln_rms_calc_rms__RMS2_state;

double _three_phase_meter9_vln_rms_calc_rms__RMS3_state;




double _three_phase_meter9_vn_rms_calc_1ph_rms__rmsSum1;

double _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1_state;



double _three_phase_meter1_pll_rate_limiter1__state;
X_Int32 _three_phase_meter1_pll_rate_limiter1__first_step;
double _three_phase_meter1_pll_integrator__state;




double _three_phase_meter10_pll_rate_limiter1__state;
X_Int32 _three_phase_meter10_pll_rate_limiter1__first_step;
double _three_phase_meter10_pll_integrator__state;




double _three_phase_meter11_pll_rate_limiter1__state;
X_Int32 _three_phase_meter11_pll_rate_limiter1__first_step;
double _three_phase_meter11_pll_integrator__state;




double _three_phase_meter2_pll_rate_limiter1__state;
X_Int32 _three_phase_meter2_pll_rate_limiter1__first_step;
double _three_phase_meter2_pll_integrator__state;




double _three_phase_meter3_pll_rate_limiter1__state;
X_Int32 _three_phase_meter3_pll_rate_limiter1__first_step;
double _three_phase_meter3_pll_integrator__state;




double _three_phase_meter4_pll_rate_limiter1__state;
X_Int32 _three_phase_meter4_pll_rate_limiter1__first_step;
double _three_phase_meter4_pll_integrator__state;




double _three_phase_meter5_pll_rate_limiter1__state;
X_Int32 _three_phase_meter5_pll_rate_limiter1__first_step;
double _three_phase_meter5_pll_integrator__state;




double _three_phase_meter6_pll_rate_limiter1__state;
X_Int32 _three_phase_meter6_pll_rate_limiter1__first_step;
double _three_phase_meter6_pll_integrator__state;




double _three_phase_meter7_pll_rate_limiter1__state;
X_Int32 _three_phase_meter7_pll_rate_limiter1__first_step;
double _three_phase_meter7_pll_integrator__state;




double _three_phase_meter8_pll_rate_limiter1__state;
X_Int32 _three_phase_meter8_pll_rate_limiter1__first_step;
double _three_phase_meter8_pll_integrator__state;




double _three_phase_meter9_pll_rate_limiter1__state;
X_Int32 _three_phase_meter9_pll_rate_limiter1__first_step;
double _three_phase_meter9_pll_integrator__state;




//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _bay_1_sr_flip_flop2__state = (double) 0;
    _bay_1_sr_flip_flop4__state = (double) 0;
    _bay_1_sr_flip_flop5__state =  0;
    _bay_1_step1__state = 0x0;
    _bay_1_step2__state = 0x0;
    _bay_1_step3__state = 0x0;
    _bay_10_sr_flip_flop2__state = (double) 0;
    _bay_10_sr_flip_flop4__state = (double) 0;
    _bay_10_sr_flip_flop5__state =  0;
    _bay_10_step1__state = 0x0;
    _bay_10_step2__state = 0x0;
    _bay_10_step3__state = 0x0;
    _bay_2_sr_flip_flop2__state = (double) 0;
    _bay_2_sr_flip_flop4__state = (double) 0;
    _bay_2_sr_flip_flop5__state =  0;
    _bay_2_step1__state = 0x0;
    _bay_2_step2__state = 0x0;
    _bay_2_step3__state = 0x0;
    _bay_3_sr_flip_flop2__state = (double) 0;
    _bay_3_sr_flip_flop4__state = (double) 0;
    _bay_3_sr_flip_flop5__state =  0;
    _bay_3_step1__state = 0x0;
    _bay_3_step2__state = 0x0;
    _bay_3_step3__state = 0x0;
    _bay_4_sr_flip_flop2__state = (double) 0;
    _bay_4_sr_flip_flop4__state = (double) 0;
    _bay_4_sr_flip_flop5__state =  0;
    _bay_4_step1__state = 0x0;
    _bay_4_step2__state = 0x0;
    _bay_4_step3__state = 0x0;
    _bay_5_sr_flip_flop2__state = (double) 0;
    _bay_5_sr_flip_flop4__state = (double) 0;
    _bay_5_sr_flip_flop5__state =  0;
    _bay_5_step1__state = 0x0;
    _bay_5_step2__state = 0x0;
    _bay_5_step3__state = 0x0;
    _bay_6_sr_flip_flop2__state = (double) 0;
    _bay_6_sr_flip_flop4__state = (double) 0;
    _bay_6_sr_flip_flop5__state =  0;
    _bay_6_step1__state = 0x0;
    _bay_6_step2__state = 0x0;
    _bay_6_step3__state = 0x0;
    _bay_7_sr_flip_flop2__state = (double) 0;
    _bay_7_sr_flip_flop4__state = (double) 0;
    _bay_7_sr_flip_flop5__state =  0;
    _bay_7_step1__state = 0x0;
    _bay_7_step2__state = 0x0;
    _bay_7_step3__state = 0x0;
    _bay_8_sr_flip_flop2__state = (double) 0;
    _bay_8_sr_flip_flop4__state = (double) 0;
    _bay_8_sr_flip_flop5__state =  0;
    _bay_8_step1__state = 0x0;
    _bay_8_step2__state = 0x0;
    _bay_8_step3__state = 0x0;
    _bay_9_sr_flip_flop2__state = (double) 0;
    _bay_9_sr_flip_flop4__state = (double) 0;
    _bay_9_sr_flip_flop5__state =  0;
    _bay_9_step1__state = 0x0;
    _bay_9_step2__state = 0x0;
    _bay_9_step3__state = 0x0;
    _hv_bay_1_sr_flip_flop2__state = (double) 0;
    _hv_bay_1_sr_flip_flop4__state = (double) 0;
    _hv_bay_1_sr_flip_flop5__state = (double) 0;
    _hv_bay_1_step1__state = 0x0;
    _hv_bay_1_step2__state = 0x0;
    _hv_bay_1_step3__state = 0x0;
    X_UnInt32 _three_phase_meter1_pll_lpf_lpf__i;
    for (_three_phase_meter1_pll_lpf_lpf__i = 0; _three_phase_meter1_pll_lpf_lpf__i < 2; _three_phase_meter1_pll_lpf_lpf__i++) {
        _three_phase_meter1_pll_lpf_lpf__states[_three_phase_meter1_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter1_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter1_pll_pid_integrator2__state = 0.0;
    _three_phase_meter1_pll_unit_delay1__state = 0.0;
    _three_phase_meter1_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter1_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter10_pll_lpf_lpf__i;
    for (_three_phase_meter10_pll_lpf_lpf__i = 0; _three_phase_meter10_pll_lpf_lpf__i < 2; _three_phase_meter10_pll_lpf_lpf__i++) {
        _three_phase_meter10_pll_lpf_lpf__states[_three_phase_meter10_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter10_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter10_pll_pid_integrator2__state = 0.0;
    _three_phase_meter10_pll_unit_delay1__state = 0.0;
    _three_phase_meter10_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter10_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter11_pll_lpf_lpf__i;
    for (_three_phase_meter11_pll_lpf_lpf__i = 0; _three_phase_meter11_pll_lpf_lpf__i < 2; _three_phase_meter11_pll_lpf_lpf__i++) {
        _three_phase_meter11_pll_lpf_lpf__states[_three_phase_meter11_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter11_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter11_pll_pid_integrator2__state = 0.0;
    _three_phase_meter11_pll_unit_delay1__state = 0.0;
    _three_phase_meter11_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter11_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter2_pll_lpf_lpf__i;
    for (_three_phase_meter2_pll_lpf_lpf__i = 0; _three_phase_meter2_pll_lpf_lpf__i < 2; _three_phase_meter2_pll_lpf_lpf__i++) {
        _three_phase_meter2_pll_lpf_lpf__states[_three_phase_meter2_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter2_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter2_pll_pid_integrator2__state = 0.0;
    _three_phase_meter2_pll_unit_delay1__state = 0.0;
    _three_phase_meter2_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter2_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter3_pll_lpf_lpf__i;
    for (_three_phase_meter3_pll_lpf_lpf__i = 0; _three_phase_meter3_pll_lpf_lpf__i < 2; _three_phase_meter3_pll_lpf_lpf__i++) {
        _three_phase_meter3_pll_lpf_lpf__states[_three_phase_meter3_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter3_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter3_pll_pid_integrator2__state = 0.0;
    _three_phase_meter3_pll_unit_delay1__state = 0.0;
    _three_phase_meter3_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter3_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter4_pll_lpf_lpf__i;
    for (_three_phase_meter4_pll_lpf_lpf__i = 0; _three_phase_meter4_pll_lpf_lpf__i < 2; _three_phase_meter4_pll_lpf_lpf__i++) {
        _three_phase_meter4_pll_lpf_lpf__states[_three_phase_meter4_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter4_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter4_pll_pid_integrator2__state = 0.0;
    _three_phase_meter4_pll_unit_delay1__state = 0.0;
    _three_phase_meter4_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter4_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter5_pll_lpf_lpf__i;
    for (_three_phase_meter5_pll_lpf_lpf__i = 0; _three_phase_meter5_pll_lpf_lpf__i < 2; _three_phase_meter5_pll_lpf_lpf__i++) {
        _three_phase_meter5_pll_lpf_lpf__states[_three_phase_meter5_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter5_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter5_pll_pid_integrator2__state = 0.0;
    _three_phase_meter5_pll_unit_delay1__state = 0.0;
    _three_phase_meter5_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter5_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter6_pll_lpf_lpf__i;
    for (_three_phase_meter6_pll_lpf_lpf__i = 0; _three_phase_meter6_pll_lpf_lpf__i < 2; _three_phase_meter6_pll_lpf_lpf__i++) {
        _three_phase_meter6_pll_lpf_lpf__states[_three_phase_meter6_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter6_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter6_pll_pid_integrator2__state = 0.0;
    _three_phase_meter6_pll_unit_delay1__state = 0.0;
    _three_phase_meter6_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter6_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter7_pll_lpf_lpf__i;
    for (_three_phase_meter7_pll_lpf_lpf__i = 0; _three_phase_meter7_pll_lpf_lpf__i < 2; _three_phase_meter7_pll_lpf_lpf__i++) {
        _three_phase_meter7_pll_lpf_lpf__states[_three_phase_meter7_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter7_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter7_pll_pid_integrator2__state = 0.0;
    _three_phase_meter7_pll_unit_delay1__state = 0.0;
    _three_phase_meter7_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter7_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter8_pll_lpf_lpf__i;
    for (_three_phase_meter8_pll_lpf_lpf__i = 0; _three_phase_meter8_pll_lpf_lpf__i < 2; _three_phase_meter8_pll_lpf_lpf__i++) {
        _three_phase_meter8_pll_lpf_lpf__states[_three_phase_meter8_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter8_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter8_pll_pid_integrator2__state = 0.0;
    _three_phase_meter8_pll_unit_delay1__state = 0.0;
    _three_phase_meter8_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter8_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    X_UnInt32 _three_phase_meter9_pll_lpf_lpf__i;
    for (_three_phase_meter9_pll_lpf_lpf__i = 0; _three_phase_meter9_pll_lpf_lpf__i < 2; _three_phase_meter9_pll_lpf_lpf__i++) {
        _three_phase_meter9_pll_lpf_lpf__states[_three_phase_meter9_pll_lpf_lpf__i] = 0;
    }
    _three_phase_meter9_pll_pid_integrator1__state = 376.99111843;
    _three_phase_meter9_pll_pid_integrator2__state = 0.0;
    _three_phase_meter9_pll_unit_delay1__state = 0.0;
    _three_phase_meter9_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _three_phase_meter9_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutInt32(149422340, 0x1);
    HIL_OutInt32(149422341, 0x1);
    HIL_OutInt32(149422342, 0x1);
    HIL_OutInt32(136839428, 0x1);
    HIL_OutInt32(136839429, 0x1);
    HIL_OutInt32(136839430, 0x1);
    HIL_OutInt32(141033739, 0x1);
    HIL_OutInt32(141033740, 0x1);
    HIL_OutInt32(141033741, 0x1);
    HIL_OutInt32(141033736, 0x1);
    HIL_OutInt32(141033737, 0x1);
    HIL_OutInt32(141033738, 0x1);
    HIL_OutInt32(145228039, 0x1);
    HIL_OutInt32(145228040, 0x1);
    HIL_OutInt32(145228041, 0x1);
    HIL_OutInt32(145228036, 0x1);
    HIL_OutInt32(145228037, 0x1);
    HIL_OutInt32(145228038, 0x1);
    HIL_OutInt32(145228042, 0x1);
    HIL_OutInt32(145228043, 0x1);
    HIL_OutInt32(145228044, 0x1);
    HIL_OutInt32(149422346, 0x1);
    HIL_OutInt32(149422347, 0x1);
    HIL_OutInt32(149422348, 0x1);
    HIL_OutInt32(149422343, 0x1);
    HIL_OutInt32(149422344, 0x1);
    HIL_OutInt32(149422345, 0x1);
    HIL_OutInt32(136839424, 0x1);
    HIL_OutInt32(136839425, 0x1);
    HIL_OutInt32(136839426, 0x1);
    HIL_OutInt32(136839427, 0x1);
    HIL_OutInt32(149422336, 0x1);
    HIL_OutInt32(149422337, 0x1);
    HIL_OutInt32(149422338, 0x1);
    HIL_OutInt32(149422339, 0x1);
    HIL_OutInt32(141033728, 0x1);
    HIL_OutInt32(141033729, 0x1);
    HIL_OutInt32(141033730, 0x1);
    HIL_OutInt32(141033731, 0x1);
    HIL_OutInt32(145228032, 0x1);
    HIL_OutInt32(145228033, 0x1);
    HIL_OutInt32(145228034, 0x1);
    HIL_OutInt32(145228035, 0x1);
    HIL_OutInt32(141033732, 0x1);
    HIL_OutInt32(141033733, 0x1);
    HIL_OutInt32(141033734, 0x1);
    HIL_OutInt32(141033735, 0x1);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    {
        _three_phase_meter1_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter1_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter1_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter1_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter1_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    {
        _three_phase_meter10_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter10_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter10_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter10_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter10_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    {
        _three_phase_meter11_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter11_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter11_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter11_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter11_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    {
        _three_phase_meter2_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter2_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter2_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter2_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter2_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x4048, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    {
        _three_phase_meter3_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter3_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter3_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter3_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter3_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4053, 0.0f);
    HIL_OutAO(0x4059, 0.0f);
    HIL_OutAO(0x4055, 0.0f);
    {
        _three_phase_meter4_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter4_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter4_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter4_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter4_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4064, 0.0f);
    HIL_OutAO(0x406a, 0.0f);
    HIL_OutAO(0x4066, 0.0f);
    {
        _three_phase_meter5_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter5_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter5_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter5_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter5_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4075, 0.0f);
    HIL_OutAO(0x407b, 0.0f);
    HIL_OutAO(0x4077, 0.0f);
    {
        _three_phase_meter6_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter6_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter6_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter6_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter6_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4086, 0.0f);
    HIL_OutAO(0x408c, 0.0f);
    HIL_OutAO(0x4088, 0.0f);
    {
        _three_phase_meter7_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter7_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter7_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter7_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter7_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x4097, 0.0f);
    HIL_OutAO(0x409d, 0.0f);
    HIL_OutAO(0x4099, 0.0f);
    {
        _three_phase_meter8_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter8_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter8_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter8_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter8_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x40a8, 0.0f);
    HIL_OutAO(0x40ae, 0.0f);
    HIL_OutAO(0x40aa, 0.0f);
    {
        _three_phase_meter9_meassm_mode_and_dfract__fMax = 1.0 / 0.0001 ;
        _three_phase_meter9_meassm_mode_and_dfract__cycle_counter = 0 ;
        _three_phase_meter9_meassm_mode_and_dfract__reset = 1 ;
        _three_phase_meter9_meassm_mode_and_dfract__dFract_state = 0 ;
        _three_phase_meter9_meassm_mode_and_dfract__submode_state = 0 ;
    }
    HIL_OutAO(0x40b9, 0.0f);
    {
        _three_phase_meter1_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter1_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter1_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter1_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter1_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter1_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter1_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter1_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter1_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter1_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter10_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter10_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter10_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter10_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter10_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter10_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter10_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter10_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter10_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter10_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter11_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter11_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter11_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter11_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter11_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter11_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter11_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter11_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter11_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter11_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter2_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter2_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter2_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter2_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter2_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter2_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter2_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter2_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter2_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter2_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter3_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter3_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter3_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter3_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter3_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter3_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter3_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter3_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter3_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter3_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter4_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter4_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter4_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter4_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter4_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter4_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter4_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter4_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter4_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter4_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter5_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter5_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter5_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter5_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter5_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter5_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter5_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter5_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter5_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter5_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter6_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter6_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter6_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter6_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter6_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter6_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter6_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter6_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter6_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter6_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter7_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter7_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter7_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter7_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter7_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter7_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter7_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter7_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter7_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter7_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter8_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter8_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter8_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter8_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter8_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter8_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter8_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter8_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter8_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter8_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter9_in_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    {
        _three_phase_meter9_i_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter9_i_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter9_i_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter9_vll_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter9_vll_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter9_vll_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter9_vln_rms_calc_rms__RMS1_state = 0 ;
        _three_phase_meter9_vln_rms_calc_rms__RMS2_state = 0 ;
        _three_phase_meter9_vln_rms_calc_rms__RMS3_state = 0 ;
    }
    {
        _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1_state = 0.0 ;
    }
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x4032, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x4034, 0.0f);
    HIL_OutAO(0x4035, 0.0f);
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x403a, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x403f, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x4045, 0.0f);
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x404b, 0.0f);
    HIL_OutAO(0x404d, 0.0f);
    HIL_OutAO(0x404f, 0.0f);
    HIL_OutAO(0x404c, 0.0f);
    HIL_OutAO(0x404e, 0.0f);
    HIL_OutAO(0x4050, 0.0f);
    HIL_OutAO(0x4054, 0.0f);
    HIL_OutAO(0x405a, 0.0f);
    HIL_OutAO(0x4056, 0.0f);
    HIL_OutAO(0x4057, 0.0f);
    HIL_OutAO(0x4058, 0.0f);
    HIL_OutAO(0x405c, 0.0f);
    HIL_OutAO(0x405e, 0.0f);
    HIL_OutAO(0x4060, 0.0f);
    HIL_OutAO(0x405d, 0.0f);
    HIL_OutAO(0x405f, 0.0f);
    HIL_OutAO(0x4061, 0.0f);
    HIL_OutAO(0x4065, 0.0f);
    HIL_OutAO(0x406b, 0.0f);
    HIL_OutAO(0x4067, 0.0f);
    HIL_OutAO(0x4068, 0.0f);
    HIL_OutAO(0x4069, 0.0f);
    HIL_OutAO(0x406d, 0.0f);
    HIL_OutAO(0x406f, 0.0f);
    HIL_OutAO(0x4071, 0.0f);
    HIL_OutAO(0x406e, 0.0f);
    HIL_OutAO(0x4070, 0.0f);
    HIL_OutAO(0x4072, 0.0f);
    HIL_OutAO(0x4076, 0.0f);
    HIL_OutAO(0x407c, 0.0f);
    HIL_OutAO(0x4078, 0.0f);
    HIL_OutAO(0x4079, 0.0f);
    HIL_OutAO(0x407a, 0.0f);
    HIL_OutAO(0x407e, 0.0f);
    HIL_OutAO(0x4080, 0.0f);
    HIL_OutAO(0x4082, 0.0f);
    HIL_OutAO(0x407f, 0.0f);
    HIL_OutAO(0x4081, 0.0f);
    HIL_OutAO(0x4083, 0.0f);
    HIL_OutAO(0x4087, 0.0f);
    HIL_OutAO(0x408d, 0.0f);
    HIL_OutAO(0x4089, 0.0f);
    HIL_OutAO(0x408a, 0.0f);
    HIL_OutAO(0x408b, 0.0f);
    HIL_OutAO(0x408f, 0.0f);
    HIL_OutAO(0x4091, 0.0f);
    HIL_OutAO(0x4093, 0.0f);
    HIL_OutAO(0x4090, 0.0f);
    HIL_OutAO(0x4092, 0.0f);
    HIL_OutAO(0x4094, 0.0f);
    HIL_OutAO(0x4098, 0.0f);
    HIL_OutAO(0x409e, 0.0f);
    HIL_OutAO(0x409a, 0.0f);
    HIL_OutAO(0x409b, 0.0f);
    HIL_OutAO(0x409c, 0.0f);
    HIL_OutAO(0x40a0, 0.0f);
    HIL_OutAO(0x40a2, 0.0f);
    HIL_OutAO(0x40a4, 0.0f);
    HIL_OutAO(0x40a1, 0.0f);
    HIL_OutAO(0x40a3, 0.0f);
    HIL_OutAO(0x40a5, 0.0f);
    HIL_OutAO(0x40a9, 0.0f);
    HIL_OutAO(0x40af, 0.0f);
    HIL_OutAO(0x40ab, 0.0f);
    HIL_OutAO(0x40ac, 0.0f);
    HIL_OutAO(0x40ad, 0.0f);
    HIL_OutAO(0x40b1, 0.0f);
    HIL_OutAO(0x40b3, 0.0f);
    HIL_OutAO(0x40b5, 0.0f);
    HIL_OutAO(0x40b2, 0.0f);
    HIL_OutAO(0x40b4, 0.0f);
    HIL_OutAO(0x40b6, 0.0f);
    HIL_OutAO(0x40ba, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4039, 0.0f);
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x404a, 0.0f);
    HIL_OutAO(0x4051, 0.0f);
    HIL_OutAO(0x4052, 0.0f);
    HIL_OutAO(0x405b, 0.0f);
    HIL_OutAO(0x4062, 0.0f);
    HIL_OutAO(0x4063, 0.0f);
    HIL_OutAO(0x406c, 0.0f);
    HIL_OutAO(0x4073, 0.0f);
    HIL_OutAO(0x4074, 0.0f);
    HIL_OutAO(0x407d, 0.0f);
    HIL_OutAO(0x4084, 0.0f);
    HIL_OutAO(0x4085, 0.0f);
    HIL_OutAO(0x408e, 0.0f);
    HIL_OutAO(0x4095, 0.0f);
    HIL_OutAO(0x4096, 0.0f);
    HIL_OutAO(0x409f, 0.0f);
    HIL_OutAO(0x40a6, 0.0f);
    HIL_OutAO(0x40a7, 0.0f);
    HIL_OutAO(0x40b0, 0.0f);
    HIL_OutAO(0x40b7, 0.0f);
    HIL_OutAO(0x40b8, 0.0f);
    _three_phase_meter1_pll_rate_limiter1__state = 0;
    _three_phase_meter1_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter1_pll_integrator__state = 0 ;
    }
    _three_phase_meter10_pll_rate_limiter1__state = 0;
    _three_phase_meter10_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter10_pll_integrator__state = 0 ;
    }
    _three_phase_meter11_pll_rate_limiter1__state = 0;
    _three_phase_meter11_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter11_pll_integrator__state = 0 ;
    }
    _three_phase_meter2_pll_rate_limiter1__state = 0;
    _three_phase_meter2_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter2_pll_integrator__state = 0 ;
    }
    _three_phase_meter3_pll_rate_limiter1__state = 0;
    _three_phase_meter3_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter3_pll_integrator__state = 0 ;
    }
    _three_phase_meter4_pll_rate_limiter1__state = 0;
    _three_phase_meter4_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter4_pll_integrator__state = 0 ;
    }
    _three_phase_meter5_pll_rate_limiter1__state = 0;
    _three_phase_meter5_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter5_pll_integrator__state = 0 ;
    }
    _three_phase_meter6_pll_rate_limiter1__state = 0;
    _three_phase_meter6_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter6_pll_integrator__state = 0 ;
    }
    _three_phase_meter7_pll_rate_limiter1__state = 0;
    _three_phase_meter7_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter7_pll_integrator__state = 0 ;
    }
    _three_phase_meter8_pll_rate_limiter1__state = 0;
    _three_phase_meter8_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter8_pll_integrator__state = 0 ;
    }
    _three_phase_meter9_pll_rate_limiter1__state = 0;
    _three_phase_meter9_pll_rate_limiter1__first_step = 1;
    {
        _three_phase_meter9_pll_integrator__state = 0 ;
    }
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Bay 1.Constant1
    // Generated from the component: Bay 1.Constant2
    // Generated from the component: Bay 1.Constant4
    // Generated from the component: Bay 1.Constant5
    // Generated from the component: Bay 1.Constant6
    // Generated from the component: Bay 1.Constant7
    // Generated from the component: Bay 10.Constant1
    // Generated from the component: Bay 10.Constant2
    // Generated from the component: Bay 10.Constant4
    // Generated from the component: Bay 10.Constant5
    // Generated from the component: Bay 10.Constant6
    // Generated from the component: Bay 10.Constant7
    // Generated from the component: Bay 2.Constant1
    // Generated from the component: Bay 2.Constant2
    // Generated from the component: Bay 2.Constant4
    // Generated from the component: Bay 2.Constant5
    // Generated from the component: Bay 2.Constant6
    // Generated from the component: Bay 2.Constant7
    // Generated from the component: Bay 3.Constant1
    // Generated from the component: Bay 3.Constant2
    // Generated from the component: Bay 3.Constant4
    // Generated from the component: Bay 3.Constant5
    // Generated from the component: Bay 3.Constant6
    // Generated from the component: Bay 3.Constant7
    // Generated from the component: Bay 4.Constant1
    // Generated from the component: Bay 4.Constant2
    // Generated from the component: Bay 4.Constant4
    // Generated from the component: Bay 4.Constant5
    // Generated from the component: Bay 4.Constant6
    // Generated from the component: Bay 4.Constant7
    // Generated from the component: Bay 5.Constant1
    // Generated from the component: Bay 5.Constant2
    // Generated from the component: Bay 5.Constant4
    // Generated from the component: Bay 5.Constant5
    // Generated from the component: Bay 5.Constant6
    // Generated from the component: Bay 5.Constant7
    // Generated from the component: Bay 6.Constant1
    // Generated from the component: Bay 6.Constant2
    // Generated from the component: Bay 6.Constant4
    // Generated from the component: Bay 6.Constant5
    // Generated from the component: Bay 6.Constant6
    // Generated from the component: Bay 6.Constant7
    // Generated from the component: Bay 7.Constant1
    // Generated from the component: Bay 7.Constant2
    // Generated from the component: Bay 7.Constant4
    // Generated from the component: Bay 7.Constant5
    // Generated from the component: Bay 7.Constant6
    // Generated from the component: Bay 7.Constant7
    // Generated from the component: Bay 8.Constant1
    // Generated from the component: Bay 8.Constant2
    // Generated from the component: Bay 8.Constant4
    // Generated from the component: Bay 8.Constant5
    // Generated from the component: Bay 8.Constant6
    // Generated from the component: Bay 8.Constant7
    // Generated from the component: Bay 9.Constant1
    // Generated from the component: Bay 9.Constant2
    // Generated from the component: Bay 9.Constant4
    // Generated from the component: Bay 9.Constant5
    // Generated from the component: Bay 9.Constant6
    // Generated from the component: Bay 9.Constant7
    // Generated from the component: HV Bay 1.Constant1
    // Generated from the component: HV Bay 1.Constant2
    // Generated from the component: HV Bay 1.Constant4
    // Generated from the component: HV Bay 1.Constant5
    // Generated from the component: HV Bay 1.Constant6
    // Generated from the component: HV Bay 1.Constant7
    // Generated from the component: Three-phase Meter1.zero
    // Generated from the component: Three-phase Meter10.zero
    // Generated from the component: Three-phase Meter11.zero
    // Generated from the component: Three-phase Meter2.zero
    // Generated from the component: Three-phase Meter3.zero
    // Generated from the component: Three-phase Meter4.zero
    // Generated from the component: Three-phase Meter5.zero
    // Generated from the component: Three-phase Meter6.zero
    // Generated from the component: Three-phase Meter7.zero
    // Generated from the component: Three-phase Meter8.zero
    // Generated from the component: Three-phase Meter9.zero
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Bay 1.CB close
    _bay_1_cb_close__out = XIo_InInt32(0x55000100);
    // Generated from the component: Bay 1.CB open
    _bay_1_cb_open__out = XIo_InInt32(0x55000104);
    // Generated from the component: Bay 1.DC1 close
    _bay_1_dc1_close__out = XIo_InInt32(0x55000108);
    // Generated from the component: Bay 1.DC1 open
    _bay_1_dc1_open__out = XIo_InInt32(0x5500010c);
    // Generated from the component: Bay 1.DC2 close
    _bay_1_dc2_close__out = XIo_InInt32(0x55000110);
    // Generated from the component: Bay 1.DC2 open
    _bay_1_dc2_open__out = XIo_InInt32(0x55000114);
    // Generated from the component: Bay 1.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_1_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_1_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_1_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 1.SR Flip Flop2
    _bay_1_sr_flip_flop2__out = _bay_1_sr_flip_flop2__state;
    _bay_1_sr_flip_flop2__out_n = _bay_1_sr_flip_flop2__state != -1 ? !_bay_1_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 1.SR Flip Flop4
    _bay_1_sr_flip_flop4__out = _bay_1_sr_flip_flop4__state;
    _bay_1_sr_flip_flop4__out_n = _bay_1_sr_flip_flop4__state != -1 ? !_bay_1_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 1.SR Flip Flop5
    _bay_1_sr_flip_flop5__out = _bay_1_sr_flip_flop5__state;
    _bay_1_sr_flip_flop5__out_n = _bay_1_sr_flip_flop5__state != -1 ? !_bay_1_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 1.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_iq__out[0] = 0;
    _bay_1_sv_publisher1_iq__out[1] = 0;
    _bay_1_sv_publisher1_iq__out[2] = 0;
    _bay_1_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 1.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_vq__out[0] = 0;
    _bay_1_sv_publisher1_vq__out[1] = 0;
    _bay_1_sv_publisher1_vq__out[2] = 0;
    _bay_1_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 1.Step1
    if (_bay_1_step1__state < 0.1) {
        _bay_1_step1__out = 1.0;
    } else {
        _bay_1_step1__out = 0.0;
    }
    // Generated from the component: Bay 1.Step2
    if (_bay_1_step2__state < 0.1) {
        _bay_1_step2__out = 1.0;
    } else {
        _bay_1_step2__out = 0.0;
    }
    // Generated from the component: Bay 1.Step3
    if (_bay_1_step3__state < 0.1) {
        _bay_1_step3__out = 1.0;
    } else {
        _bay_1_step3__out = 0.0;
    }
    // Generated from the component: Bay 10.CB close
    _bay_10_cb_close__out = XIo_InInt32(0x55000118);
    // Generated from the component: Bay 10.CB open
    _bay_10_cb_open__out = XIo_InInt32(0x5500011c);
    // Generated from the component: Bay 10.DC1 close
    _bay_10_dc1_close__out = XIo_InInt32(0x55000120);
    // Generated from the component: Bay 10.DC1 open
    _bay_10_dc1_open__out = XIo_InInt32(0x55000124);
    // Generated from the component: Bay 10.DC2 close
    _bay_10_dc2_close__out = XIo_InInt32(0x55000128);
    // Generated from the component: Bay 10.DC2 open
    _bay_10_dc2_open__out = XIo_InInt32(0x5500012c);
    // Generated from the component: Bay 10.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_10_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_10_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_10_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 10.SR Flip Flop2
    _bay_10_sr_flip_flop2__out = _bay_10_sr_flip_flop2__state;
    _bay_10_sr_flip_flop2__out_n = _bay_10_sr_flip_flop2__state != -1 ? !_bay_10_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 10.SR Flip Flop4
    _bay_10_sr_flip_flop4__out = _bay_10_sr_flip_flop4__state;
    _bay_10_sr_flip_flop4__out_n = _bay_10_sr_flip_flop4__state != -1 ? !_bay_10_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 10.SR Flip Flop5
    _bay_10_sr_flip_flop5__out = _bay_10_sr_flip_flop5__state;
    _bay_10_sr_flip_flop5__out_n = _bay_10_sr_flip_flop5__state != -1 ? !_bay_10_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 10.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_iq__out[0] = 0;
    _bay_10_sv_publisher1_iq__out[1] = 0;
    _bay_10_sv_publisher1_iq__out[2] = 0;
    _bay_10_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 10.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_vq__out[0] = 0;
    _bay_10_sv_publisher1_vq__out[1] = 0;
    _bay_10_sv_publisher1_vq__out[2] = 0;
    _bay_10_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 10.Step1
    if (_bay_10_step1__state < 0.1) {
        _bay_10_step1__out = 1.0;
    } else {
        _bay_10_step1__out = 0.0;
    }
    // Generated from the component: Bay 10.Step2
    if (_bay_10_step2__state < 0.1) {
        _bay_10_step2__out = 1.0;
    } else {
        _bay_10_step2__out = 0.0;
    }
    // Generated from the component: Bay 10.Step3
    if (_bay_10_step3__state < 0.1) {
        _bay_10_step3__out = 1.0;
    } else {
        _bay_10_step3__out = 0.0;
    }
    // Generated from the component: Bay 2.CB close
    _bay_2_cb_close__out = XIo_InInt32(0x55000130);
    // Generated from the component: Bay 2.CB open
    _bay_2_cb_open__out = XIo_InInt32(0x55000134);
    // Generated from the component: Bay 2.DC1 close
    _bay_2_dc1_close__out = XIo_InInt32(0x55000138);
    // Generated from the component: Bay 2.DC1 open
    _bay_2_dc1_open__out = XIo_InInt32(0x5500013c);
    // Generated from the component: Bay 2.DC2 close
    _bay_2_dc2_close__out = XIo_InInt32(0x55000140);
    // Generated from the component: Bay 2.DC2 open
    _bay_2_dc2_open__out = XIo_InInt32(0x55000144);
    // Generated from the component: Bay 2.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_2_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_2_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_2_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 2.SR Flip Flop2
    _bay_2_sr_flip_flop2__out = _bay_2_sr_flip_flop2__state;
    _bay_2_sr_flip_flop2__out_n = _bay_2_sr_flip_flop2__state != -1 ? !_bay_2_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 2.SR Flip Flop4
    _bay_2_sr_flip_flop4__out = _bay_2_sr_flip_flop4__state;
    _bay_2_sr_flip_flop4__out_n = _bay_2_sr_flip_flop4__state != -1 ? !_bay_2_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 2.SR Flip Flop5
    _bay_2_sr_flip_flop5__out = _bay_2_sr_flip_flop5__state;
    _bay_2_sr_flip_flop5__out_n = _bay_2_sr_flip_flop5__state != -1 ? !_bay_2_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 2.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_iq__out[0] = 0;
    _bay_2_sv_publisher1_iq__out[1] = 0;
    _bay_2_sv_publisher1_iq__out[2] = 0;
    _bay_2_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 2.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_vq__out[0] = 0;
    _bay_2_sv_publisher1_vq__out[1] = 0;
    _bay_2_sv_publisher1_vq__out[2] = 0;
    _bay_2_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 2.Step1
    if (_bay_2_step1__state < 0.1) {
        _bay_2_step1__out = 1.0;
    } else {
        _bay_2_step1__out = 0.0;
    }
    // Generated from the component: Bay 2.Step2
    if (_bay_2_step2__state < 0.1) {
        _bay_2_step2__out = 1.0;
    } else {
        _bay_2_step2__out = 0.0;
    }
    // Generated from the component: Bay 2.Step3
    if (_bay_2_step3__state < 0.1) {
        _bay_2_step3__out = 1.0;
    } else {
        _bay_2_step3__out = 0.0;
    }
    // Generated from the component: Bay 3.CB close
    _bay_3_cb_close__out = XIo_InInt32(0x55000148);
    // Generated from the component: Bay 3.CB open
    _bay_3_cb_open__out = XIo_InInt32(0x5500014c);
    // Generated from the component: Bay 3.DC1 close
    _bay_3_dc1_close__out = XIo_InInt32(0x55000150);
    // Generated from the component: Bay 3.DC1 open
    _bay_3_dc1_open__out = XIo_InInt32(0x55000154);
    // Generated from the component: Bay 3.DC2 close
    _bay_3_dc2_close__out = XIo_InInt32(0x55000158);
    // Generated from the component: Bay 3.DC2 open
    _bay_3_dc2_open__out = XIo_InInt32(0x5500015c);
    // Generated from the component: Bay 3.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_3_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_3_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_3_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 3.SR Flip Flop2
    _bay_3_sr_flip_flop2__out = _bay_3_sr_flip_flop2__state;
    _bay_3_sr_flip_flop2__out_n = _bay_3_sr_flip_flop2__state != -1 ? !_bay_3_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 3.SR Flip Flop4
    _bay_3_sr_flip_flop4__out = _bay_3_sr_flip_flop4__state;
    _bay_3_sr_flip_flop4__out_n = _bay_3_sr_flip_flop4__state != -1 ? !_bay_3_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 3.SR Flip Flop5
    _bay_3_sr_flip_flop5__out = _bay_3_sr_flip_flop5__state;
    _bay_3_sr_flip_flop5__out_n = _bay_3_sr_flip_flop5__state != -1 ? !_bay_3_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 3.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_iq__out[0] = 0;
    _bay_3_sv_publisher1_iq__out[1] = 0;
    _bay_3_sv_publisher1_iq__out[2] = 0;
    _bay_3_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 3.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_vq__out[0] = 0;
    _bay_3_sv_publisher1_vq__out[1] = 0;
    _bay_3_sv_publisher1_vq__out[2] = 0;
    _bay_3_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 3.Step1
    if (_bay_3_step1__state < 0.1) {
        _bay_3_step1__out = 1.0;
    } else {
        _bay_3_step1__out = 0.0;
    }
    // Generated from the component: Bay 3.Step2
    if (_bay_3_step2__state < 0.1) {
        _bay_3_step2__out = 1.0;
    } else {
        _bay_3_step2__out = 0.0;
    }
    // Generated from the component: Bay 3.Step3
    if (_bay_3_step3__state < 0.1) {
        _bay_3_step3__out = 1.0;
    } else {
        _bay_3_step3__out = 0.0;
    }
    // Generated from the component: Bay 4.CB close
    _bay_4_cb_close__out = XIo_InInt32(0x55000160);
    // Generated from the component: Bay 4.CB open
    _bay_4_cb_open__out = XIo_InInt32(0x55000164);
    // Generated from the component: Bay 4.DC1 close
    _bay_4_dc1_close__out = XIo_InInt32(0x55000168);
    // Generated from the component: Bay 4.DC1 open
    _bay_4_dc1_open__out = XIo_InInt32(0x5500016c);
    // Generated from the component: Bay 4.DC2 close
    _bay_4_dc2_close__out = XIo_InInt32(0x55000170);
    // Generated from the component: Bay 4.DC2 open
    _bay_4_dc2_open__out = XIo_InInt32(0x55000174);
    // Generated from the component: Bay 4.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_4_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_4_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_4_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 4.SR Flip Flop2
    _bay_4_sr_flip_flop2__out = _bay_4_sr_flip_flop2__state;
    _bay_4_sr_flip_flop2__out_n = _bay_4_sr_flip_flop2__state != -1 ? !_bay_4_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 4.SR Flip Flop4
    _bay_4_sr_flip_flop4__out = _bay_4_sr_flip_flop4__state;
    _bay_4_sr_flip_flop4__out_n = _bay_4_sr_flip_flop4__state != -1 ? !_bay_4_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 4.SR Flip Flop5
    _bay_4_sr_flip_flop5__out = _bay_4_sr_flip_flop5__state;
    _bay_4_sr_flip_flop5__out_n = _bay_4_sr_flip_flop5__state != -1 ? !_bay_4_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 4.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_iq__out[0] = 0;
    _bay_4_sv_publisher1_iq__out[1] = 0;
    _bay_4_sv_publisher1_iq__out[2] = 0;
    _bay_4_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 4.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_vq__out[0] = 0;
    _bay_4_sv_publisher1_vq__out[1] = 0;
    _bay_4_sv_publisher1_vq__out[2] = 0;
    _bay_4_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 4.Step1
    if (_bay_4_step1__state < 0.1) {
        _bay_4_step1__out = 1.0;
    } else {
        _bay_4_step1__out = 0.0;
    }
    // Generated from the component: Bay 4.Step2
    if (_bay_4_step2__state < 0.1) {
        _bay_4_step2__out = 1.0;
    } else {
        _bay_4_step2__out = 0.0;
    }
    // Generated from the component: Bay 4.Step3
    if (_bay_4_step3__state < 0.1) {
        _bay_4_step3__out = 1.0;
    } else {
        _bay_4_step3__out = 0.0;
    }
    // Generated from the component: Bay 5.CB close
    _bay_5_cb_close__out = XIo_InInt32(0x55000178);
    // Generated from the component: Bay 5.CB open
    _bay_5_cb_open__out = XIo_InInt32(0x5500017c);
    // Generated from the component: Bay 5.DC1 close
    _bay_5_dc1_close__out = XIo_InInt32(0x55000180);
    // Generated from the component: Bay 5.DC1 open
    _bay_5_dc1_open__out = XIo_InInt32(0x55000184);
    // Generated from the component: Bay 5.DC2 close
    _bay_5_dc2_close__out = XIo_InInt32(0x55000188);
    // Generated from the component: Bay 5.DC2 open
    _bay_5_dc2_open__out = XIo_InInt32(0x5500018c);
    // Generated from the component: Bay 5.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_5_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_5_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_5_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 5.SR Flip Flop2
    _bay_5_sr_flip_flop2__out = _bay_5_sr_flip_flop2__state;
    _bay_5_sr_flip_flop2__out_n = _bay_5_sr_flip_flop2__state != -1 ? !_bay_5_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 5.SR Flip Flop4
    _bay_5_sr_flip_flop4__out = _bay_5_sr_flip_flop4__state;
    _bay_5_sr_flip_flop4__out_n = _bay_5_sr_flip_flop4__state != -1 ? !_bay_5_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 5.SR Flip Flop5
    _bay_5_sr_flip_flop5__out = _bay_5_sr_flip_flop5__state;
    _bay_5_sr_flip_flop5__out_n = _bay_5_sr_flip_flop5__state != -1 ? !_bay_5_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 5.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_iq__out[0] = 0;
    _bay_5_sv_publisher1_iq__out[1] = 0;
    _bay_5_sv_publisher1_iq__out[2] = 0;
    _bay_5_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 5.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_vq__out[0] = 0;
    _bay_5_sv_publisher1_vq__out[1] = 0;
    _bay_5_sv_publisher1_vq__out[2] = 0;
    _bay_5_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 5.Step1
    if (_bay_5_step1__state < 0.1) {
        _bay_5_step1__out = 1.0;
    } else {
        _bay_5_step1__out = 0.0;
    }
    // Generated from the component: Bay 5.Step2
    if (_bay_5_step2__state < 0.1) {
        _bay_5_step2__out = 1.0;
    } else {
        _bay_5_step2__out = 0.0;
    }
    // Generated from the component: Bay 5.Step3
    if (_bay_5_step3__state < 0.1) {
        _bay_5_step3__out = 1.0;
    } else {
        _bay_5_step3__out = 0.0;
    }
    // Generated from the component: Bay 6.CB close
    _bay_6_cb_close__out = XIo_InInt32(0x55000190);
    // Generated from the component: Bay 6.CB open
    _bay_6_cb_open__out = XIo_InInt32(0x55000194);
    // Generated from the component: Bay 6.DC1 close
    _bay_6_dc1_close__out = XIo_InInt32(0x55000198);
    // Generated from the component: Bay 6.DC1 open
    _bay_6_dc1_open__out = XIo_InInt32(0x5500019c);
    // Generated from the component: Bay 6.DC2 close
    _bay_6_dc2_close__out = XIo_InInt32(0x550001a0);
    // Generated from the component: Bay 6.DC2 open
    _bay_6_dc2_open__out = XIo_InInt32(0x550001a4);
    // Generated from the component: Bay 6.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_6_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_6_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_6_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 6.SR Flip Flop2
    _bay_6_sr_flip_flop2__out = _bay_6_sr_flip_flop2__state;
    _bay_6_sr_flip_flop2__out_n = _bay_6_sr_flip_flop2__state != -1 ? !_bay_6_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 6.SR Flip Flop4
    _bay_6_sr_flip_flop4__out = _bay_6_sr_flip_flop4__state;
    _bay_6_sr_flip_flop4__out_n = _bay_6_sr_flip_flop4__state != -1 ? !_bay_6_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 6.SR Flip Flop5
    _bay_6_sr_flip_flop5__out = _bay_6_sr_flip_flop5__state;
    _bay_6_sr_flip_flop5__out_n = _bay_6_sr_flip_flop5__state != -1 ? !_bay_6_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 6.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_iq__out[0] = 0;
    _bay_6_sv_publisher1_iq__out[1] = 0;
    _bay_6_sv_publisher1_iq__out[2] = 0;
    _bay_6_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 6.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_vq__out[0] = 0;
    _bay_6_sv_publisher1_vq__out[1] = 0;
    _bay_6_sv_publisher1_vq__out[2] = 0;
    _bay_6_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 6.Step1
    if (_bay_6_step1__state < 0.1) {
        _bay_6_step1__out = 1.0;
    } else {
        _bay_6_step1__out = 0.0;
    }
    // Generated from the component: Bay 6.Step2
    if (_bay_6_step2__state < 0.1) {
        _bay_6_step2__out = 1.0;
    } else {
        _bay_6_step2__out = 0.0;
    }
    // Generated from the component: Bay 6.Step3
    if (_bay_6_step3__state < 0.1) {
        _bay_6_step3__out = 1.0;
    } else {
        _bay_6_step3__out = 0.0;
    }
    // Generated from the component: Bay 7.CB close
    _bay_7_cb_close__out = XIo_InInt32(0x550001a8);
    // Generated from the component: Bay 7.CB open
    _bay_7_cb_open__out = XIo_InInt32(0x550001ac);
    // Generated from the component: Bay 7.DC1 close
    _bay_7_dc1_close__out = XIo_InInt32(0x550001b0);
    // Generated from the component: Bay 7.DC1 open
    _bay_7_dc1_open__out = XIo_InInt32(0x550001b4);
    // Generated from the component: Bay 7.DC2 close
    _bay_7_dc2_close__out = XIo_InInt32(0x550001b8);
    // Generated from the component: Bay 7.DC2 open
    _bay_7_dc2_open__out = XIo_InInt32(0x550001bc);
    // Generated from the component: Bay 7.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_7_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_7_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_7_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 7.SR Flip Flop2
    _bay_7_sr_flip_flop2__out = _bay_7_sr_flip_flop2__state;
    _bay_7_sr_flip_flop2__out_n = _bay_7_sr_flip_flop2__state != -1 ? !_bay_7_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 7.SR Flip Flop4
    _bay_7_sr_flip_flop4__out = _bay_7_sr_flip_flop4__state;
    _bay_7_sr_flip_flop4__out_n = _bay_7_sr_flip_flop4__state != -1 ? !_bay_7_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 7.SR Flip Flop5
    _bay_7_sr_flip_flop5__out = _bay_7_sr_flip_flop5__state;
    _bay_7_sr_flip_flop5__out_n = _bay_7_sr_flip_flop5__state != -1 ? !_bay_7_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 7.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_iq__out[0] = 0;
    _bay_7_sv_publisher1_iq__out[1] = 0;
    _bay_7_sv_publisher1_iq__out[2] = 0;
    _bay_7_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 7.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_vq__out[0] = 0;
    _bay_7_sv_publisher1_vq__out[1] = 0;
    _bay_7_sv_publisher1_vq__out[2] = 0;
    _bay_7_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 7.Step1
    if (_bay_7_step1__state < 0.1) {
        _bay_7_step1__out = 1.0;
    } else {
        _bay_7_step1__out = 0.0;
    }
    // Generated from the component: Bay 7.Step2
    if (_bay_7_step2__state < 0.1) {
        _bay_7_step2__out = 1.0;
    } else {
        _bay_7_step2__out = 0.0;
    }
    // Generated from the component: Bay 7.Step3
    if (_bay_7_step3__state < 0.1) {
        _bay_7_step3__out = 1.0;
    } else {
        _bay_7_step3__out = 0.0;
    }
    // Generated from the component: Bay 8.CB close
    _bay_8_cb_close__out = XIo_InInt32(0x550001c0);
    // Generated from the component: Bay 8.CB open
    _bay_8_cb_open__out = XIo_InInt32(0x550001c4);
    // Generated from the component: Bay 8.DC1 close
    _bay_8_dc1_close__out = XIo_InInt32(0x550001c8);
    // Generated from the component: Bay 8.DC1 open
    _bay_8_dc1_open__out = XIo_InInt32(0x550001cc);
    // Generated from the component: Bay 8.DC2 close
    _bay_8_dc2_close__out = XIo_InInt32(0x550001d0);
    // Generated from the component: Bay 8.DC2 open
    _bay_8_dc2_open__out = XIo_InInt32(0x550001d4);
    // Generated from the component: Bay 8.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_8_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_8_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_8_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 8.SR Flip Flop2
    _bay_8_sr_flip_flop2__out = _bay_8_sr_flip_flop2__state;
    _bay_8_sr_flip_flop2__out_n = _bay_8_sr_flip_flop2__state != -1 ? !_bay_8_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 8.SR Flip Flop4
    _bay_8_sr_flip_flop4__out = _bay_8_sr_flip_flop4__state;
    _bay_8_sr_flip_flop4__out_n = _bay_8_sr_flip_flop4__state != -1 ? !_bay_8_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 8.SR Flip Flop5
    _bay_8_sr_flip_flop5__out = _bay_8_sr_flip_flop5__state;
    _bay_8_sr_flip_flop5__out_n = _bay_8_sr_flip_flop5__state != -1 ? !_bay_8_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 8.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_iq__out[0] = 0;
    _bay_8_sv_publisher1_iq__out[1] = 0;
    _bay_8_sv_publisher1_iq__out[2] = 0;
    _bay_8_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 8.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_vq__out[0] = 0;
    _bay_8_sv_publisher1_vq__out[1] = 0;
    _bay_8_sv_publisher1_vq__out[2] = 0;
    _bay_8_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 8.Step1
    if (_bay_8_step1__state < 0.1) {
        _bay_8_step1__out = 1.0;
    } else {
        _bay_8_step1__out = 0.0;
    }
    // Generated from the component: Bay 8.Step2
    if (_bay_8_step2__state < 0.1) {
        _bay_8_step2__out = 1.0;
    } else {
        _bay_8_step2__out = 0.0;
    }
    // Generated from the component: Bay 8.Step3
    if (_bay_8_step3__state < 0.1) {
        _bay_8_step3__out = 1.0;
    } else {
        _bay_8_step3__out = 0.0;
    }
    // Generated from the component: Bay 9.CB close
    _bay_9_cb_close__out = XIo_InInt32(0x550001d8);
    // Generated from the component: Bay 9.CB open
    _bay_9_cb_open__out = XIo_InInt32(0x550001dc);
    // Generated from the component: Bay 9.DC1 close
    _bay_9_dc1_close__out = XIo_InInt32(0x550001e0);
    // Generated from the component: Bay 9.DC1 open
    _bay_9_dc1_open__out = XIo_InInt32(0x550001e4);
    // Generated from the component: Bay 9.DC2 close
    _bay_9_dc2_close__out = XIo_InInt32(0x550001e8);
    // Generated from the component: Bay 9.DC2 open
    _bay_9_dc2_open__out = XIo_InInt32(0x550001ec);
    // Generated from the component: Bay 9.GOOSE Subscriber1.goose_data_out
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_goose_subscriber1_goose_data_out__out[0] = 0;
    _bay_9_goose_subscriber1_goose_data_out__out[1] = 0;
    _bay_9_goose_subscriber1_goose_data_out__out[2] = 0;
    _bay_9_goose_subscriber1_goose_data_out__out[3] = 0;
    // Generated from the component: Bay 9.SR Flip Flop2
    _bay_9_sr_flip_flop2__out = _bay_9_sr_flip_flop2__state;
    _bay_9_sr_flip_flop2__out_n = _bay_9_sr_flip_flop2__state != -1 ? !_bay_9_sr_flip_flop2__state : -1;
    // Generated from the component: Bay 9.SR Flip Flop4
    _bay_9_sr_flip_flop4__out = _bay_9_sr_flip_flop4__state;
    _bay_9_sr_flip_flop4__out_n = _bay_9_sr_flip_flop4__state != -1 ? !_bay_9_sr_flip_flop4__state : -1;
    // Generated from the component: Bay 9.SR Flip Flop5
    _bay_9_sr_flip_flop5__out = _bay_9_sr_flip_flop5__state;
    _bay_9_sr_flip_flop5__out_n = _bay_9_sr_flip_flop5__state != -1 ? !_bay_9_sr_flip_flop5__state : -1;
    // Generated from the component: Bay 9.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_iq__out[0] = 0;
    _bay_9_sv_publisher1_iq__out[1] = 0;
    _bay_9_sv_publisher1_iq__out[2] = 0;
    _bay_9_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: Bay 9.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_vq__out[0] = 0;
    _bay_9_sv_publisher1_vq__out[1] = 0;
    _bay_9_sv_publisher1_vq__out[2] = 0;
    _bay_9_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: Bay 9.Step1
    if (_bay_9_step1__state < 0.1) {
        _bay_9_step1__out = 1.0;
    } else {
        _bay_9_step1__out = 0.0;
    }
    // Generated from the component: Bay 9.Step2
    if (_bay_9_step2__state < 0.1) {
        _bay_9_step2__out = 1.0;
    } else {
        _bay_9_step2__out = 0.0;
    }
    // Generated from the component: Bay 9.Step3
    if (_bay_9_step3__state < 0.1) {
        _bay_9_step3__out = 1.0;
    } else {
        _bay_9_step3__out = 0.0;
    }
    // Generated from the component: Dynamic Grid Fault1.Fault select
    _dynamic_grid_fault1_fault_select__out = XIo_InInt32(0x550001f0);
    // Generated from the component: Fault Q10.Fault select
    _fault_q10_fault_select__out = XIo_InInt32(0x550001f4);
    // Generated from the component: Fault Q3.Fault select
    _fault_q3_fault_select__out = XIo_InInt32(0x550001f8);
    // Generated from the component: Fault Q7.Fault select
    _fault_q7_fault_select__out = XIo_InInt32(0x550001fc);
    // Generated from the component: FaultBB.Fault select
    _faultbb_fault_select__out = XIo_InInt32(0x55000200);
    // Generated from the component: HV Bay 1.CB close
    _hv_bay_1_cb_close__out = XIo_InInt32(0x55000204);
    // Generated from the component: HV Bay 1.CB open
    _hv_bay_1_cb_open__out = XIo_InInt32(0x55000208);
    // Generated from the component: HV Bay 1.DC1 close
    _hv_bay_1_dc1_close__out = XIo_InInt32(0x5500020c);
    // Generated from the component: HV Bay 1.DC1 open
    _hv_bay_1_dc1_open__out = XIo_InInt32(0x55000210);
    // Generated from the component: HV Bay 1.DC2 close
    _hv_bay_1_dc2_close__out = XIo_InInt32(0x55000214);
    // Generated from the component: HV Bay 1.DC2 open
    _hv_bay_1_dc2_open__out = XIo_InInt32(0x55000218);
    // Generated from the component: HV Bay 1.SR Flip Flop2
    _hv_bay_1_sr_flip_flop2__out = _hv_bay_1_sr_flip_flop2__state;
    _hv_bay_1_sr_flip_flop2__out_n = _hv_bay_1_sr_flip_flop2__state != -1 ? !_hv_bay_1_sr_flip_flop2__state : -1;
    // Generated from the component: HV Bay 1.SR Flip Flop4
    _hv_bay_1_sr_flip_flop4__out = _hv_bay_1_sr_flip_flop4__state;
    _hv_bay_1_sr_flip_flop4__out_n = _hv_bay_1_sr_flip_flop4__state != -1 ? !_hv_bay_1_sr_flip_flop4__state : -1;
    // Generated from the component: HV Bay 1.SR Flip Flop5
    _hv_bay_1_sr_flip_flop5__out = _hv_bay_1_sr_flip_flop5__state;
    _hv_bay_1_sr_flip_flop5__out_n = _hv_bay_1_sr_flip_flop5__state != -1 ? !_hv_bay_1_sr_flip_flop5__state : -1;
    // Generated from the component: HV Bay 1.SV Publisher1.IQ
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_iq__out[0] = 0;
    _hv_bay_1_sv_publisher1_iq__out[1] = 0;
    _hv_bay_1_sv_publisher1_iq__out[2] = 0;
    _hv_bay_1_sv_publisher1_iq__out[3] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.VQ
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_vq__out[0] = 0;
    _hv_bay_1_sv_publisher1_vq__out[1] = 0;
    _hv_bay_1_sv_publisher1_vq__out[2] = 0;
    _hv_bay_1_sv_publisher1_vq__out[3] = 0;
    // Generated from the component: HV Bay 1.Step1
    if (_hv_bay_1_step1__state < 0.1) {
        _hv_bay_1_step1__out = 1.0;
    } else {
        _hv_bay_1_step1__out = 0.0;
    }
    // Generated from the component: HV Bay 1.Step2
    if (_hv_bay_1_step2__state < 0.1) {
        _hv_bay_1_step2__out = 1.0;
    } else {
        _hv_bay_1_step2__out = 0.0;
    }
    // Generated from the component: HV Bay 1.Step3
    if (_hv_bay_1_step3__state < 0.1) {
        _hv_bay_1_step3__out = 1.0;
    } else {
        _hv_bay_1_step3__out = 0.0;
    }
    // Generated from the component: SV Setup1
    // Component not supported for this platform. Outputs are zeroed.
    _sv_setup1__out = 0;
    // Generated from the component: Three-phase Meter1.IA.Ia2
    _three_phase_meter1_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x39));
    // Generated from the component: Three-phase Meter1.IB.Ia2
    _three_phase_meter1_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x3b));
    // Generated from the component: Three-phase Meter1.IC.Ia2
    _three_phase_meter1_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x3d));
    // Generated from the component: Three-phase Meter1.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter1_pll_lpf_lpf__i;
    _three_phase_meter1_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter1_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter1_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter1_pll_lpf_lpf__i = 0; _three_phase_meter1_pll_lpf_lpf__i < 2; _three_phase_meter1_pll_lpf_lpf__i++) {
        _three_phase_meter1_pll_lpf_lpf__b_sum += _three_phase_meter1_pll_lpf_lpf__b_coeff[_three_phase_meter1_pll_lpf_lpf__i] * _three_phase_meter1_pll_lpf_lpf__states[_three_phase_meter1_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter1_pll_lpf_lpf__out = _three_phase_meter1_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter1.PLL.PID.Integrator1
    _three_phase_meter1_pll_pid_integrator1__out = _three_phase_meter1_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter1.PLL.PID.Integrator2
    _three_phase_meter1_pll_pid_integrator2__out = _three_phase_meter1_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter1.PLL.Unit Delay1
    _three_phase_meter1_pll_unit_delay1__out = _three_phase_meter1_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter1.PLL.abc to dq.LPF_d
    _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter1_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter1_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter1_pll_abc_to_dq_lpf_d__out = _three_phase_meter1_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter1.PLL.abc to dq.LPF_q
    _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter1_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter1_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter1_pll_abc_to_dq_lpf_q__out = _three_phase_meter1_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter1.VAB.Va2
    _three_phase_meter1_vab_va2__out = (HIL_InFloat(0xc80000 + 0x21));
    // Generated from the component: Three-phase Meter1.VAn.Va2
    _three_phase_meter1_van_va2__out = (HIL_InFloat(0xc80000 + 0x23));
    // Generated from the component: Three-phase Meter1.VBC.Va2
    _three_phase_meter1_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x25));
    // Generated from the component: Three-phase Meter1.VBn.Va2
    _three_phase_meter1_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x27));
    // Generated from the component: Three-phase Meter1.VCA.Va2
    _three_phase_meter1_vca_va2__out = (HIL_InFloat(0xc80000 + 0x29));
    // Generated from the component: Three-phase Meter1.VCn.Va2
    _three_phase_meter1_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x2b));
    // Generated from the component: Three-phase Meter10.IA.Ia2
    _three_phase_meter10_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x661));
    // Generated from the component: Three-phase Meter10.IB.Ia2
    _three_phase_meter10_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x663));
    // Generated from the component: Three-phase Meter10.IC.Ia2
    _three_phase_meter10_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x665));
    // Generated from the component: Three-phase Meter10.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter10_pll_lpf_lpf__i;
    _three_phase_meter10_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter10_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter10_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter10_pll_lpf_lpf__i = 0; _three_phase_meter10_pll_lpf_lpf__i < 2; _three_phase_meter10_pll_lpf_lpf__i++) {
        _three_phase_meter10_pll_lpf_lpf__b_sum += _three_phase_meter10_pll_lpf_lpf__b_coeff[_three_phase_meter10_pll_lpf_lpf__i] * _three_phase_meter10_pll_lpf_lpf__states[_three_phase_meter10_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter10_pll_lpf_lpf__out = _three_phase_meter10_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter10.PLL.PID.Integrator1
    _three_phase_meter10_pll_pid_integrator1__out = _three_phase_meter10_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter10.PLL.PID.Integrator2
    _three_phase_meter10_pll_pid_integrator2__out = _three_phase_meter10_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter10.PLL.Unit Delay1
    _three_phase_meter10_pll_unit_delay1__out = _three_phase_meter10_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter10.PLL.abc to dq.LPF_d
    _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter10_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter10_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter10_pll_abc_to_dq_lpf_d__out = _three_phase_meter10_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter10.PLL.abc to dq.LPF_q
    _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter10_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter10_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter10_pll_abc_to_dq_lpf_q__out = _three_phase_meter10_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter10.VAB.Va2
    _three_phase_meter10_vab_va2__out = (HIL_InFloat(0xc80000 + 0x63d));
    // Generated from the component: Three-phase Meter10.VAn.Va2
    _three_phase_meter10_van_va2__out = (HIL_InFloat(0xc80000 + 0x63f));
    // Generated from the component: Three-phase Meter10.VBC.Va2
    _three_phase_meter10_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x641));
    // Generated from the component: Three-phase Meter10.VBn.Va2
    _three_phase_meter10_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x643));
    // Generated from the component: Three-phase Meter10.VCA.Va2
    _three_phase_meter10_vca_va2__out = (HIL_InFloat(0xc80000 + 0x645));
    // Generated from the component: Three-phase Meter10.VCn.Va2
    _three_phase_meter10_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x647));
    // Generated from the component: Three-phase Meter11.IA.Ia2
    _three_phase_meter11_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x667));
    // Generated from the component: Three-phase Meter11.IB.Ia2
    _three_phase_meter11_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x669));
    // Generated from the component: Three-phase Meter11.IC.Ia2
    _three_phase_meter11_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x66b));
    // Generated from the component: Three-phase Meter11.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter11_pll_lpf_lpf__i;
    _three_phase_meter11_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter11_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter11_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter11_pll_lpf_lpf__i = 0; _three_phase_meter11_pll_lpf_lpf__i < 2; _three_phase_meter11_pll_lpf_lpf__i++) {
        _three_phase_meter11_pll_lpf_lpf__b_sum += _three_phase_meter11_pll_lpf_lpf__b_coeff[_three_phase_meter11_pll_lpf_lpf__i] * _three_phase_meter11_pll_lpf_lpf__states[_three_phase_meter11_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter11_pll_lpf_lpf__out = _three_phase_meter11_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter11.PLL.PID.Integrator1
    _three_phase_meter11_pll_pid_integrator1__out = _three_phase_meter11_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter11.PLL.PID.Integrator2
    _three_phase_meter11_pll_pid_integrator2__out = _three_phase_meter11_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter11.PLL.Unit Delay1
    _three_phase_meter11_pll_unit_delay1__out = _three_phase_meter11_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter11.PLL.abc to dq.LPF_d
    _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter11_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter11_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter11_pll_abc_to_dq_lpf_d__out = _three_phase_meter11_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter11.PLL.abc to dq.LPF_q
    _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter11_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter11_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter11_pll_abc_to_dq_lpf_q__out = _three_phase_meter11_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter11.VAB.Va2
    _three_phase_meter11_vab_va2__out = (HIL_InFloat(0xc80000 + 0x649));
    // Generated from the component: Three-phase Meter11.VAn.Va2
    _three_phase_meter11_van_va2__out = (HIL_InFloat(0xc80000 + 0x64b));
    // Generated from the component: Three-phase Meter11.VBC.Va2
    _three_phase_meter11_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x64d));
    // Generated from the component: Three-phase Meter11.VBn.Va2
    _three_phase_meter11_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x64f));
    // Generated from the component: Three-phase Meter11.VCA.Va2
    _three_phase_meter11_vca_va2__out = (HIL_InFloat(0xc80000 + 0x651));
    // Generated from the component: Three-phase Meter11.VCn.Va2
    _three_phase_meter11_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x653));
    // Generated from the component: Three-phase Meter2.IA.Ia2
    _three_phase_meter2_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x3f));
    // Generated from the component: Three-phase Meter2.IB.Ia2
    _three_phase_meter2_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x41));
    // Generated from the component: Three-phase Meter2.IC.Ia2
    _three_phase_meter2_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x43));
    // Generated from the component: Three-phase Meter2.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter2_pll_lpf_lpf__i;
    _three_phase_meter2_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter2_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter2_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter2_pll_lpf_lpf__i = 0; _three_phase_meter2_pll_lpf_lpf__i < 2; _three_phase_meter2_pll_lpf_lpf__i++) {
        _three_phase_meter2_pll_lpf_lpf__b_sum += _three_phase_meter2_pll_lpf_lpf__b_coeff[_three_phase_meter2_pll_lpf_lpf__i] * _three_phase_meter2_pll_lpf_lpf__states[_three_phase_meter2_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter2_pll_lpf_lpf__out = _three_phase_meter2_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter2.PLL.PID.Integrator1
    _three_phase_meter2_pll_pid_integrator1__out = _three_phase_meter2_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter2.PLL.PID.Integrator2
    _three_phase_meter2_pll_pid_integrator2__out = _three_phase_meter2_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter2.PLL.Unit Delay1
    _three_phase_meter2_pll_unit_delay1__out = _three_phase_meter2_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter2.PLL.abc to dq.LPF_d
    _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter2_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter2_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter2_pll_abc_to_dq_lpf_d__out = _three_phase_meter2_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter2.PLL.abc to dq.LPF_q
    _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter2_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter2_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter2_pll_abc_to_dq_lpf_q__out = _three_phase_meter2_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter2.VAB.Va2
    _three_phase_meter2_vab_va2__out = (HIL_InFloat(0xc80000 + 0x2d));
    // Generated from the component: Three-phase Meter2.VAn.Va2
    _three_phase_meter2_van_va2__out = (HIL_InFloat(0xc80000 + 0x2f));
    // Generated from the component: Three-phase Meter2.VBC.Va2
    _three_phase_meter2_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x31));
    // Generated from the component: Three-phase Meter2.VBn.Va2
    _three_phase_meter2_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x33));
    // Generated from the component: Three-phase Meter2.VCA.Va2
    _three_phase_meter2_vca_va2__out = (HIL_InFloat(0xc80000 + 0x35));
    // Generated from the component: Three-phase Meter2.VCn.Va2
    _three_phase_meter2_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x37));
    // Generated from the component: Three-phase Meter3.IA.Ia2
    _three_phase_meter3_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x247));
    // Generated from the component: Three-phase Meter3.IB.Ia2
    _three_phase_meter3_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x249));
    // Generated from the component: Three-phase Meter3.IC.Ia2
    _three_phase_meter3_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x24b));
    // Generated from the component: Three-phase Meter3.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter3_pll_lpf_lpf__i;
    _three_phase_meter3_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter3_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter3_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter3_pll_lpf_lpf__i = 0; _three_phase_meter3_pll_lpf_lpf__i < 2; _three_phase_meter3_pll_lpf_lpf__i++) {
        _three_phase_meter3_pll_lpf_lpf__b_sum += _three_phase_meter3_pll_lpf_lpf__b_coeff[_three_phase_meter3_pll_lpf_lpf__i] * _three_phase_meter3_pll_lpf_lpf__states[_three_phase_meter3_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter3_pll_lpf_lpf__out = _three_phase_meter3_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter3.PLL.PID.Integrator1
    _three_phase_meter3_pll_pid_integrator1__out = _three_phase_meter3_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter3.PLL.PID.Integrator2
    _three_phase_meter3_pll_pid_integrator2__out = _three_phase_meter3_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter3.PLL.Unit Delay1
    _three_phase_meter3_pll_unit_delay1__out = _three_phase_meter3_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter3.PLL.abc to dq.LPF_d
    _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter3_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter3_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter3_pll_abc_to_dq_lpf_d__out = _three_phase_meter3_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter3.PLL.abc to dq.LPF_q
    _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter3_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter3_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter3_pll_abc_to_dq_lpf_q__out = _three_phase_meter3_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter3.VAB.Va2
    _three_phase_meter3_vab_va2__out = (HIL_InFloat(0xc80000 + 0x22f));
    // Generated from the component: Three-phase Meter3.VAn.Va2
    _three_phase_meter3_van_va2__out = (HIL_InFloat(0xc80000 + 0x231));
    // Generated from the component: Three-phase Meter3.VBC.Va2
    _three_phase_meter3_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x233));
    // Generated from the component: Three-phase Meter3.VBn.Va2
    _three_phase_meter3_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x235));
    // Generated from the component: Three-phase Meter3.VCA.Va2
    _three_phase_meter3_vca_va2__out = (HIL_InFloat(0xc80000 + 0x237));
    // Generated from the component: Three-phase Meter3.VCn.Va2
    _three_phase_meter3_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x239));
    // Generated from the component: Three-phase Meter4.IA.Ia2
    _three_phase_meter4_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x837));
    // Generated from the component: Three-phase Meter4.IB.Ia2
    _three_phase_meter4_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x839));
    // Generated from the component: Three-phase Meter4.IC.Ia2
    _three_phase_meter4_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x83b));
    // Generated from the component: Three-phase Meter4.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter4_pll_lpf_lpf__i;
    _three_phase_meter4_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter4_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter4_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter4_pll_lpf_lpf__i = 0; _three_phase_meter4_pll_lpf_lpf__i < 2; _three_phase_meter4_pll_lpf_lpf__i++) {
        _three_phase_meter4_pll_lpf_lpf__b_sum += _three_phase_meter4_pll_lpf_lpf__b_coeff[_three_phase_meter4_pll_lpf_lpf__i] * _three_phase_meter4_pll_lpf_lpf__states[_three_phase_meter4_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter4_pll_lpf_lpf__out = _three_phase_meter4_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter4.PLL.PID.Integrator1
    _three_phase_meter4_pll_pid_integrator1__out = _three_phase_meter4_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter4.PLL.PID.Integrator2
    _three_phase_meter4_pll_pid_integrator2__out = _three_phase_meter4_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter4.PLL.Unit Delay1
    _three_phase_meter4_pll_unit_delay1__out = _three_phase_meter4_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter4.PLL.abc to dq.LPF_d
    _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter4_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter4_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter4_pll_abc_to_dq_lpf_d__out = _three_phase_meter4_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter4.PLL.abc to dq.LPF_q
    _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter4_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter4_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter4_pll_abc_to_dq_lpf_q__out = _three_phase_meter4_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter4.VAB.Va2
    _three_phase_meter4_vab_va2__out = (HIL_InFloat(0xc80000 + 0x825));
    // Generated from the component: Three-phase Meter4.VAn.Va2
    _three_phase_meter4_van_va2__out = (HIL_InFloat(0xc80000 + 0x827));
    // Generated from the component: Three-phase Meter4.VBC.Va2
    _three_phase_meter4_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x829));
    // Generated from the component: Three-phase Meter4.VBn.Va2
    _three_phase_meter4_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x82b));
    // Generated from the component: Three-phase Meter4.VCA.Va2
    _three_phase_meter4_vca_va2__out = (HIL_InFloat(0xc80000 + 0x82d));
    // Generated from the component: Three-phase Meter4.VCn.Va2
    _three_phase_meter4_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x82f));
    // Generated from the component: Three-phase Meter5.IA.Ia2
    _three_phase_meter5_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x24d));
    // Generated from the component: Three-phase Meter5.IB.Ia2
    _three_phase_meter5_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x24f));
    // Generated from the component: Three-phase Meter5.IC.Ia2
    _three_phase_meter5_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x251));
    // Generated from the component: Three-phase Meter5.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter5_pll_lpf_lpf__i;
    _three_phase_meter5_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter5_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter5_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter5_pll_lpf_lpf__i = 0; _three_phase_meter5_pll_lpf_lpf__i < 2; _three_phase_meter5_pll_lpf_lpf__i++) {
        _three_phase_meter5_pll_lpf_lpf__b_sum += _three_phase_meter5_pll_lpf_lpf__b_coeff[_three_phase_meter5_pll_lpf_lpf__i] * _three_phase_meter5_pll_lpf_lpf__states[_three_phase_meter5_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter5_pll_lpf_lpf__out = _three_phase_meter5_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter5.PLL.PID.Integrator1
    _three_phase_meter5_pll_pid_integrator1__out = _three_phase_meter5_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter5.PLL.PID.Integrator2
    _three_phase_meter5_pll_pid_integrator2__out = _three_phase_meter5_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter5.PLL.Unit Delay1
    _three_phase_meter5_pll_unit_delay1__out = _three_phase_meter5_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter5.PLL.abc to dq.LPF_d
    _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter5_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter5_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter5_pll_abc_to_dq_lpf_d__out = _three_phase_meter5_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter5.PLL.abc to dq.LPF_q
    _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter5_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter5_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter5_pll_abc_to_dq_lpf_q__out = _three_phase_meter5_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter5.VAB.Va2
    _three_phase_meter5_vab_va2__out = (HIL_InFloat(0xc80000 + 0x23b));
    // Generated from the component: Three-phase Meter5.VAn.Va2
    _three_phase_meter5_van_va2__out = (HIL_InFloat(0xc80000 + 0x23d));
    // Generated from the component: Three-phase Meter5.VBC.Va2
    _three_phase_meter5_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x23f));
    // Generated from the component: Three-phase Meter5.VBn.Va2
    _three_phase_meter5_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x241));
    // Generated from the component: Three-phase Meter5.VCA.Va2
    _three_phase_meter5_vca_va2__out = (HIL_InFloat(0xc80000 + 0x243));
    // Generated from the component: Three-phase Meter5.VCn.Va2
    _three_phase_meter5_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x245));
    // Generated from the component: Three-phase Meter6.IA.Ia2
    _three_phase_meter6_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x461));
    // Generated from the component: Three-phase Meter6.IB.Ia2
    _three_phase_meter6_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x463));
    // Generated from the component: Three-phase Meter6.IC.Ia2
    _three_phase_meter6_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x465));
    // Generated from the component: Three-phase Meter6.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter6_pll_lpf_lpf__i;
    _three_phase_meter6_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter6_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter6_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter6_pll_lpf_lpf__i = 0; _three_phase_meter6_pll_lpf_lpf__i < 2; _three_phase_meter6_pll_lpf_lpf__i++) {
        _three_phase_meter6_pll_lpf_lpf__b_sum += _three_phase_meter6_pll_lpf_lpf__b_coeff[_three_phase_meter6_pll_lpf_lpf__i] * _three_phase_meter6_pll_lpf_lpf__states[_three_phase_meter6_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter6_pll_lpf_lpf__out = _three_phase_meter6_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter6.PLL.PID.Integrator1
    _three_phase_meter6_pll_pid_integrator1__out = _three_phase_meter6_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter6.PLL.PID.Integrator2
    _three_phase_meter6_pll_pid_integrator2__out = _three_phase_meter6_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter6.PLL.Unit Delay1
    _three_phase_meter6_pll_unit_delay1__out = _three_phase_meter6_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter6.PLL.abc to dq.LPF_d
    _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter6_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter6_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter6_pll_abc_to_dq_lpf_d__out = _three_phase_meter6_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter6.PLL.abc to dq.LPF_q
    _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter6_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter6_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter6_pll_abc_to_dq_lpf_q__out = _three_phase_meter6_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter6.VAB.Va2
    _three_phase_meter6_vab_va2__out = (HIL_InFloat(0xc80000 + 0x43d));
    // Generated from the component: Three-phase Meter6.VAn.Va2
    _three_phase_meter6_van_va2__out = (HIL_InFloat(0xc80000 + 0x43f));
    // Generated from the component: Three-phase Meter6.VBC.Va2
    _three_phase_meter6_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x441));
    // Generated from the component: Three-phase Meter6.VBn.Va2
    _three_phase_meter6_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x443));
    // Generated from the component: Three-phase Meter6.VCA.Va2
    _three_phase_meter6_vca_va2__out = (HIL_InFloat(0xc80000 + 0x445));
    // Generated from the component: Three-phase Meter6.VCn.Va2
    _three_phase_meter6_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x447));
    // Generated from the component: Three-phase Meter7.IA.Ia2
    _three_phase_meter7_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x467));
    // Generated from the component: Three-phase Meter7.IB.Ia2
    _three_phase_meter7_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x469));
    // Generated from the component: Three-phase Meter7.IC.Ia2
    _three_phase_meter7_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x46b));
    // Generated from the component: Three-phase Meter7.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter7_pll_lpf_lpf__i;
    _three_phase_meter7_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter7_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter7_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter7_pll_lpf_lpf__i = 0; _three_phase_meter7_pll_lpf_lpf__i < 2; _three_phase_meter7_pll_lpf_lpf__i++) {
        _three_phase_meter7_pll_lpf_lpf__b_sum += _three_phase_meter7_pll_lpf_lpf__b_coeff[_three_phase_meter7_pll_lpf_lpf__i] * _three_phase_meter7_pll_lpf_lpf__states[_three_phase_meter7_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter7_pll_lpf_lpf__out = _three_phase_meter7_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter7.PLL.PID.Integrator1
    _three_phase_meter7_pll_pid_integrator1__out = _three_phase_meter7_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter7.PLL.PID.Integrator2
    _three_phase_meter7_pll_pid_integrator2__out = _three_phase_meter7_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter7.PLL.Unit Delay1
    _three_phase_meter7_pll_unit_delay1__out = _three_phase_meter7_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter7.PLL.abc to dq.LPF_d
    _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter7_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter7_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter7_pll_abc_to_dq_lpf_d__out = _three_phase_meter7_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter7.PLL.abc to dq.LPF_q
    _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter7_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter7_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter7_pll_abc_to_dq_lpf_q__out = _three_phase_meter7_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter7.VAB.Va2
    _three_phase_meter7_vab_va2__out = (HIL_InFloat(0xc80000 + 0x449));
    // Generated from the component: Three-phase Meter7.VAn.Va2
    _three_phase_meter7_van_va2__out = (HIL_InFloat(0xc80000 + 0x44b));
    // Generated from the component: Three-phase Meter7.VBC.Va2
    _three_phase_meter7_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x44d));
    // Generated from the component: Three-phase Meter7.VBn.Va2
    _three_phase_meter7_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x44f));
    // Generated from the component: Three-phase Meter7.VCA.Va2
    _three_phase_meter7_vca_va2__out = (HIL_InFloat(0xc80000 + 0x451));
    // Generated from the component: Three-phase Meter7.VCn.Va2
    _three_phase_meter7_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x453));
    // Generated from the component: Three-phase Meter8.IA.Ia2
    _three_phase_meter8_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x46d));
    // Generated from the component: Three-phase Meter8.IB.Ia2
    _three_phase_meter8_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x46f));
    // Generated from the component: Three-phase Meter8.IC.Ia2
    _three_phase_meter8_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x471));
    // Generated from the component: Three-phase Meter8.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter8_pll_lpf_lpf__i;
    _three_phase_meter8_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter8_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter8_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter8_pll_lpf_lpf__i = 0; _three_phase_meter8_pll_lpf_lpf__i < 2; _three_phase_meter8_pll_lpf_lpf__i++) {
        _three_phase_meter8_pll_lpf_lpf__b_sum += _three_phase_meter8_pll_lpf_lpf__b_coeff[_three_phase_meter8_pll_lpf_lpf__i] * _three_phase_meter8_pll_lpf_lpf__states[_three_phase_meter8_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter8_pll_lpf_lpf__out = _three_phase_meter8_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter8.PLL.PID.Integrator1
    _three_phase_meter8_pll_pid_integrator1__out = _three_phase_meter8_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter8.PLL.PID.Integrator2
    _three_phase_meter8_pll_pid_integrator2__out = _three_phase_meter8_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter8.PLL.Unit Delay1
    _three_phase_meter8_pll_unit_delay1__out = _three_phase_meter8_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter8.PLL.abc to dq.LPF_d
    _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter8_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter8_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter8_pll_abc_to_dq_lpf_d__out = _three_phase_meter8_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter8.PLL.abc to dq.LPF_q
    _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter8_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter8_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter8_pll_abc_to_dq_lpf_q__out = _three_phase_meter8_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter8.VAB.Va2
    _three_phase_meter8_vab_va2__out = (HIL_InFloat(0xc80000 + 0x455));
    // Generated from the component: Three-phase Meter8.VAn.Va2
    _three_phase_meter8_van_va2__out = (HIL_InFloat(0xc80000 + 0x457));
    // Generated from the component: Three-phase Meter8.VBC.Va2
    _three_phase_meter8_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x459));
    // Generated from the component: Three-phase Meter8.VBn.Va2
    _three_phase_meter8_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x45b));
    // Generated from the component: Three-phase Meter8.VCA.Va2
    _three_phase_meter8_vca_va2__out = (HIL_InFloat(0xc80000 + 0x45d));
    // Generated from the component: Three-phase Meter8.VCn.Va2
    _three_phase_meter8_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x45f));
    // Generated from the component: Three-phase Meter9.IA.Ia2
    _three_phase_meter9_ia_ia2__out = (HIL_InFloat(0xc80000 + 0x66d));
    // Generated from the component: Three-phase Meter9.IB.Ia2
    _three_phase_meter9_ib_ia2__out = (HIL_InFloat(0xc80000 + 0x66f));
    // Generated from the component: Three-phase Meter9.IC.Ia2
    _three_phase_meter9_ic_ia2__out = (HIL_InFloat(0xc80000 + 0x671));
    // Generated from the component: Three-phase Meter9.PLL.LPF.LPF
    X_UnInt32 _three_phase_meter9_pll_lpf_lpf__i;
    _three_phase_meter9_pll_lpf_lpf__a_sum = 0.0f;
    _three_phase_meter9_pll_lpf_lpf__b_sum = 0.0f;
    _three_phase_meter9_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_three_phase_meter9_pll_lpf_lpf__i = 0; _three_phase_meter9_pll_lpf_lpf__i < 2; _three_phase_meter9_pll_lpf_lpf__i++) {
        _three_phase_meter9_pll_lpf_lpf__b_sum += _three_phase_meter9_pll_lpf_lpf__b_coeff[_three_phase_meter9_pll_lpf_lpf__i] * _three_phase_meter9_pll_lpf_lpf__states[_three_phase_meter9_pll_lpf_lpf__i + 0];
    }
    _three_phase_meter9_pll_lpf_lpf__out = _three_phase_meter9_pll_lpf_lpf__b_sum;
    // Generated from the component: Three-phase Meter9.PLL.PID.Integrator1
    _three_phase_meter9_pll_pid_integrator1__out = _three_phase_meter9_pll_pid_integrator1__state;
    // Generated from the component: Three-phase Meter9.PLL.PID.Integrator2
    _three_phase_meter9_pll_pid_integrator2__out = _three_phase_meter9_pll_pid_integrator2__state;
    // Generated from the component: Three-phase Meter9.PLL.Unit Delay1
    _three_phase_meter9_pll_unit_delay1__out = _three_phase_meter9_pll_unit_delay1__state;
    // Generated from the component: Three-phase Meter9.PLL.abc to dq.LPF_d
    _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_filtered_value = _three_phase_meter9_pll_abc_to_dq_lpf_d__filtered_value;
    _three_phase_meter9_pll_abc_to_dq_lpf_d__filtered_value = _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter9_pll_abc_to_dq_lpf_d__out = _three_phase_meter9_pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: Three-phase Meter9.PLL.abc to dq.LPF_q
    _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_filtered_value = _three_phase_meter9_pll_abc_to_dq_lpf_q__filtered_value;
    _three_phase_meter9_pll_abc_to_dq_lpf_q__filtered_value = _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.0001) + _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.0001 );
    _three_phase_meter9_pll_abc_to_dq_lpf_q__out = _three_phase_meter9_pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: Three-phase Meter9.VAB.Va2
    _three_phase_meter9_vab_va2__out = (HIL_InFloat(0xc80000 + 0x655));
    // Generated from the component: Three-phase Meter9.VAn.Va2
    _three_phase_meter9_van_va2__out = (HIL_InFloat(0xc80000 + 0x657));
    // Generated from the component: Three-phase Meter9.VBC.Va2
    _three_phase_meter9_vbc_va2__out = (HIL_InFloat(0xc80000 + 0x659));
    // Generated from the component: Three-phase Meter9.VBn.Va2
    _three_phase_meter9_vbn_va2__out = (HIL_InFloat(0xc80000 + 0x65b));
    // Generated from the component: Three-phase Meter9.VCA.Va2
    _three_phase_meter9_vca_va2__out = (HIL_InFloat(0xc80000 + 0x65d));
    // Generated from the component: Three-phase Meter9.VCn.Va2
    _three_phase_meter9_vcn_va2__out = (HIL_InFloat(0xc80000 + 0x65f));
    // Generated from the component: Bay 1.Bus Split6
    _bay_1_bus_split6__out = _bay_1_goose_subscriber1_goose_data_out__out[0];
    _bay_1_bus_split6__out1 = _bay_1_goose_subscriber1_goose_data_out__out[1];
    _bay_1_bus_split6__out2 = _bay_1_goose_subscriber1_goose_data_out__out[2];
    _bay_1_bus_split6__out3 = _bay_1_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 1.Digital Probe3
    HIL_OutInt32(0xf00402, _bay_1_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 1.Logical operator19
    _bay_1_logical_operator19__out = !_bay_1_sr_flip_flop2__out;
    // Generated from the component: Bay 1.Termination7
    // Generated from the component: Bay 1.Digital Probe5
    HIL_OutInt32(0xf00404, _bay_1_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 1.Logical operator18
    _bay_1_logical_operator18__out = !_bay_1_sr_flip_flop4__out;
    // Generated from the component: Bay 1.Termination10
    // Generated from the component: Bay 1.Digital Probe6
    HIL_OutInt32(0xf00405, _bay_1_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 1.Logical operator9
    _bay_1_logical_operator9__out = !_bay_1_sr_flip_flop5__out;
    // Generated from the component: Bay 1.Termination3
    // Generated from the component: Transformer MV CB.S34.CTC_Wrapper
    if (_bay_1_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Transformer MV CB.S35.CTC_Wrapper
    if (_bay_1_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: Transformer MV CB.S36.CTC_Wrapper
    if (_bay_1_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    // Generated from the component: Bay 1.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_1_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_1_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_1_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 1.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_1_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_1_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_1_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 1.Logical operator15
    _bay_1_logical_operator15__out = _bay_1_dc1_open__out || _bay_1_step1__out ;
    // Generated from the component: Bay 1.Logical operator17
    _bay_1_logical_operator17__out = _bay_1_dc2_open__out || _bay_1_step2__out ;
    // Generated from the component: Bay 10.Bus Split6
    _bay_10_bus_split6__out = _bay_10_goose_subscriber1_goose_data_out__out[0];
    _bay_10_bus_split6__out1 = _bay_10_goose_subscriber1_goose_data_out__out[1];
    _bay_10_bus_split6__out2 = _bay_10_goose_subscriber1_goose_data_out__out[2];
    _bay_10_bus_split6__out3 = _bay_10_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 10.Digital Probe3
    HIL_OutInt32(0xf00408, _bay_10_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 10.Logical operator19
    _bay_10_logical_operator19__out = !_bay_10_sr_flip_flop2__out;
    // Generated from the component: Bay 10.Termination7
    // Generated from the component: Bay 10.Digital Probe5
    HIL_OutInt32(0xf0040a, _bay_10_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 10.Logical operator18
    _bay_10_logical_operator18__out = !_bay_10_sr_flip_flop4__out;
    // Generated from the component: Bay 10.Termination10
    // Generated from the component: Bay 10.Digital Probe6
    HIL_OutInt32(0xf0040b, _bay_10_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 10.Logical operator9
    _bay_10_logical_operator9__out = !_bay_10_sr_flip_flop5__out;
    // Generated from the component: Bay 10.Termination3
    // Generated from the component: S29.ph_A.Isw
    HIL_OutInt32(149422340, _bay_10_sr_flip_flop5__out);
    // Generated from the component: S29.ph_B.Isw
    HIL_OutInt32(149422341, _bay_10_sr_flip_flop5__out);
    // Generated from the component: S29.ph_C.Isw
    HIL_OutInt32(149422342, _bay_10_sr_flip_flop5__out);
    // Generated from the component: S33.CTC_Wrapper
    if (_bay_10_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x8e40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8e40480, 0x1);
    }
    // Generated from the component: Bay 10.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_10_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_10_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_10_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 10.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_10_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_10_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_10_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 10.Logical operator15
    _bay_10_logical_operator15__out = _bay_10_dc1_open__out || _bay_10_step1__out ;
    // Generated from the component: Bay 10.Logical operator17
    _bay_10_logical_operator17__out = _bay_10_dc2_open__out || _bay_10_step2__out ;
    // Generated from the component: Bay 2.Bus Split6
    _bay_2_bus_split6__out = _bay_2_goose_subscriber1_goose_data_out__out[0];
    _bay_2_bus_split6__out1 = _bay_2_goose_subscriber1_goose_data_out__out[1];
    _bay_2_bus_split6__out2 = _bay_2_goose_subscriber1_goose_data_out__out[2];
    _bay_2_bus_split6__out3 = _bay_2_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 2.Digital Probe3
    HIL_OutInt32(0xf0040e, _bay_2_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 2.Logical operator19
    _bay_2_logical_operator19__out = !_bay_2_sr_flip_flop2__out;
    // Generated from the component: Bay 2.Termination7
    // Generated from the component: Bay 2.Digital Probe5
    HIL_OutInt32(0xf00410, _bay_2_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 2.Logical operator18
    _bay_2_logical_operator18__out = !_bay_2_sr_flip_flop4__out;
    // Generated from the component: Bay 2.Termination10
    // Generated from the component: Bay 2.Digital Probe6
    HIL_OutInt32(0xf00411, _bay_2_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 2.Logical operator9
    _bay_2_logical_operator9__out = !_bay_2_sr_flip_flop5__out;
    // Generated from the component: Bay 2.Termination3
    // Generated from the component: S14.ph_A.Isw
    HIL_OutInt32(136839428, _bay_2_sr_flip_flop5__out);
    // Generated from the component: S14.ph_B.Isw
    HIL_OutInt32(136839429, _bay_2_sr_flip_flop5__out);
    // Generated from the component: S14.ph_C.Isw
    HIL_OutInt32(136839430, _bay_2_sr_flip_flop5__out);
    // Generated from the component: Bay 2.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_2_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_2_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_2_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 2.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_2_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_2_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_2_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 2.Logical operator15
    _bay_2_logical_operator15__out = _bay_2_dc1_open__out || _bay_2_step1__out ;
    // Generated from the component: Bay 2.Logical operator17
    _bay_2_logical_operator17__out = _bay_2_dc2_open__out || _bay_2_step2__out ;
    // Generated from the component: Bay 3.Bus Split6
    _bay_3_bus_split6__out = _bay_3_goose_subscriber1_goose_data_out__out[0];
    _bay_3_bus_split6__out1 = _bay_3_goose_subscriber1_goose_data_out__out[1];
    _bay_3_bus_split6__out2 = _bay_3_goose_subscriber1_goose_data_out__out[2];
    _bay_3_bus_split6__out3 = _bay_3_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 3.Digital Probe3
    HIL_OutInt32(0xf00414, _bay_3_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 3.Logical operator19
    _bay_3_logical_operator19__out = !_bay_3_sr_flip_flop2__out;
    // Generated from the component: Bay 3.Termination7
    // Generated from the component: Bay 3.Digital Probe5
    HIL_OutInt32(0xf00416, _bay_3_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 3.Logical operator18
    _bay_3_logical_operator18__out = !_bay_3_sr_flip_flop4__out;
    // Generated from the component: Bay 3.Termination10
    // Generated from the component: Bay 3.Digital Probe6
    HIL_OutInt32(0xf00417, _bay_3_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 3.Logical operator9
    _bay_3_logical_operator9__out = !_bay_3_sr_flip_flop5__out;
    // Generated from the component: Bay 3.Termination3
    // Generated from the component: S13.ph_A.Isw
    HIL_OutInt32(141033739, _bay_3_sr_flip_flop5__out);
    // Generated from the component: S13.ph_B.Isw
    HIL_OutInt32(141033740, _bay_3_sr_flip_flop5__out);
    // Generated from the component: S13.ph_C.Isw
    HIL_OutInt32(141033741, _bay_3_sr_flip_flop5__out);
    // Generated from the component: Bay 3.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_3_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_3_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_3_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 3.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_3_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_3_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_3_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 3.Logical operator15
    _bay_3_logical_operator15__out = _bay_3_dc1_open__out || _bay_3_step1__out ;
    // Generated from the component: Bay 3.Logical operator17
    _bay_3_logical_operator17__out = _bay_3_dc2_open__out || _bay_3_step2__out ;
    // Generated from the component: Bay 4.Bus Split6
    _bay_4_bus_split6__out = _bay_4_goose_subscriber1_goose_data_out__out[0];
    _bay_4_bus_split6__out1 = _bay_4_goose_subscriber1_goose_data_out__out[1];
    _bay_4_bus_split6__out2 = _bay_4_goose_subscriber1_goose_data_out__out[2];
    _bay_4_bus_split6__out3 = _bay_4_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 4.Digital Probe3
    HIL_OutInt32(0xf0041a, _bay_4_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 4.Logical operator19
    _bay_4_logical_operator19__out = !_bay_4_sr_flip_flop2__out;
    // Generated from the component: Bay 4.Termination7
    // Generated from the component: Bay 4.Digital Probe5
    HIL_OutInt32(0xf0041c, _bay_4_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 4.Logical operator18
    _bay_4_logical_operator18__out = !_bay_4_sr_flip_flop4__out;
    // Generated from the component: Bay 4.Termination10
    // Generated from the component: Bay 4.Digital Probe6
    HIL_OutInt32(0xf0041d, _bay_4_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 4.Logical operator9
    _bay_4_logical_operator9__out = !_bay_4_sr_flip_flop5__out;
    // Generated from the component: Bay 4.Termination3
    // Generated from the component: S12.ph_A.Isw
    HIL_OutInt32(141033736, _bay_4_sr_flip_flop5__out);
    // Generated from the component: S12.ph_B.Isw
    HIL_OutInt32(141033737, _bay_4_sr_flip_flop5__out);
    // Generated from the component: S12.ph_C.Isw
    HIL_OutInt32(141033738, _bay_4_sr_flip_flop5__out);
    // Generated from the component: Bay 4.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_4_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_4_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_4_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 4.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_4_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_4_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_4_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 4.Logical operator15
    _bay_4_logical_operator15__out = _bay_4_dc1_open__out || _bay_4_step1__out ;
    // Generated from the component: Bay 4.Logical operator17
    _bay_4_logical_operator17__out = _bay_4_dc2_open__out || _bay_4_step2__out ;
    // Generated from the component: Bay 5.Bus Split6
    _bay_5_bus_split6__out = _bay_5_goose_subscriber1_goose_data_out__out[0];
    _bay_5_bus_split6__out1 = _bay_5_goose_subscriber1_goose_data_out__out[1];
    _bay_5_bus_split6__out2 = _bay_5_goose_subscriber1_goose_data_out__out[2];
    _bay_5_bus_split6__out3 = _bay_5_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 5.Digital Probe3
    HIL_OutInt32(0xf00420, _bay_5_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 5.Logical operator19
    _bay_5_logical_operator19__out = !_bay_5_sr_flip_flop2__out;
    // Generated from the component: Bay 5.Termination7
    // Generated from the component: Bay 5.Digital Probe5
    HIL_OutInt32(0xf00422, _bay_5_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 5.Logical operator18
    _bay_5_logical_operator18__out = !_bay_5_sr_flip_flop4__out;
    // Generated from the component: Bay 5.Termination10
    // Generated from the component: Bay 5.Digital Probe6
    HIL_OutInt32(0xf00423, _bay_5_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 5.Logical operator9
    _bay_5_logical_operator9__out = !_bay_5_sr_flip_flop5__out;
    // Generated from the component: Bay 5.Termination3
    // Generated from the component: S11.ph_A.Isw
    HIL_OutInt32(145228039, _bay_5_sr_flip_flop5__out);
    // Generated from the component: S11.ph_B.Isw
    HIL_OutInt32(145228040, _bay_5_sr_flip_flop5__out);
    // Generated from the component: S11.ph_C.Isw
    HIL_OutInt32(145228041, _bay_5_sr_flip_flop5__out);
    // Generated from the component: Bay 5.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_5_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_5_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_5_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 5.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_5_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_5_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_5_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 5.Logical operator15
    _bay_5_logical_operator15__out = _bay_5_dc1_open__out || _bay_5_step1__out ;
    // Generated from the component: Bay 5.Logical operator17
    _bay_5_logical_operator17__out = _bay_5_dc2_open__out || _bay_5_step2__out ;
    // Generated from the component: Bay 6.Bus Split6
    _bay_6_bus_split6__out = _bay_6_goose_subscriber1_goose_data_out__out[0];
    _bay_6_bus_split6__out1 = _bay_6_goose_subscriber1_goose_data_out__out[1];
    _bay_6_bus_split6__out2 = _bay_6_goose_subscriber1_goose_data_out__out[2];
    _bay_6_bus_split6__out3 = _bay_6_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 6.Digital Probe3
    HIL_OutInt32(0xf00426, _bay_6_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 6.Logical operator19
    _bay_6_logical_operator19__out = !_bay_6_sr_flip_flop2__out;
    // Generated from the component: Bay 6.Termination7
    // Generated from the component: Bay 6.Digital Probe5
    HIL_OutInt32(0xf00428, _bay_6_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 6.Logical operator18
    _bay_6_logical_operator18__out = !_bay_6_sr_flip_flop4__out;
    // Generated from the component: Bay 6.Termination10
    // Generated from the component: Bay 6.Digital Probe6
    HIL_OutInt32(0xf00429, _bay_6_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 6.Logical operator9
    _bay_6_logical_operator9__out = !_bay_6_sr_flip_flop5__out;
    // Generated from the component: Bay 6.Termination3
    // Generated from the component: S10.ph_A.Isw
    HIL_OutInt32(145228036, _bay_6_sr_flip_flop5__out);
    // Generated from the component: S10.ph_B.Isw
    HIL_OutInt32(145228037, _bay_6_sr_flip_flop5__out);
    // Generated from the component: S10.ph_C.Isw
    HIL_OutInt32(145228038, _bay_6_sr_flip_flop5__out);
    // Generated from the component: Bay 6.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_6_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_6_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_6_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 6.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_6_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_6_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_6_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 6.Logical operator15
    _bay_6_logical_operator15__out = _bay_6_dc1_open__out || _bay_6_step1__out ;
    // Generated from the component: Bay 6.Logical operator17
    _bay_6_logical_operator17__out = _bay_6_dc2_open__out || _bay_6_step2__out ;
    // Generated from the component: Bay 7.Bus Split6
    _bay_7_bus_split6__out = _bay_7_goose_subscriber1_goose_data_out__out[0];
    _bay_7_bus_split6__out1 = _bay_7_goose_subscriber1_goose_data_out__out[1];
    _bay_7_bus_split6__out2 = _bay_7_goose_subscriber1_goose_data_out__out[2];
    _bay_7_bus_split6__out3 = _bay_7_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 7.Digital Probe3
    HIL_OutInt32(0xf0042c, _bay_7_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 7.Logical operator19
    _bay_7_logical_operator19__out = !_bay_7_sr_flip_flop2__out;
    // Generated from the component: Bay 7.Termination7
    // Generated from the component: Bay 7.Digital Probe5
    HIL_OutInt32(0xf0042e, _bay_7_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 7.Logical operator18
    _bay_7_logical_operator18__out = !_bay_7_sr_flip_flop4__out;
    // Generated from the component: Bay 7.Termination10
    // Generated from the component: Bay 7.Digital Probe6
    HIL_OutInt32(0xf0042f, _bay_7_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 7.Logical operator9
    _bay_7_logical_operator9__out = !_bay_7_sr_flip_flop5__out;
    // Generated from the component: Bay 7.Termination3
    // Generated from the component: S28.ph_A.Isw
    HIL_OutInt32(145228042, _bay_7_sr_flip_flop5__out);
    // Generated from the component: S28.ph_B.Isw
    HIL_OutInt32(145228043, _bay_7_sr_flip_flop5__out);
    // Generated from the component: S28.ph_C.Isw
    HIL_OutInt32(145228044, _bay_7_sr_flip_flop5__out);
    // Generated from the component: S32.CTC_Wrapper
    if (_bay_7_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x8a40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40480, 0x1);
    }
    // Generated from the component: Bay 7.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_7_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_7_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_7_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 7.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_7_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_7_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_7_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 7.Logical operator15
    _bay_7_logical_operator15__out = _bay_7_dc1_open__out || _bay_7_step1__out ;
    // Generated from the component: Bay 7.Logical operator17
    _bay_7_logical_operator17__out = _bay_7_dc2_open__out || _bay_7_step2__out ;
    // Generated from the component: Bay 8.Bus Split6
    _bay_8_bus_split6__out = _bay_8_goose_subscriber1_goose_data_out__out[0];
    _bay_8_bus_split6__out1 = _bay_8_goose_subscriber1_goose_data_out__out[1];
    _bay_8_bus_split6__out2 = _bay_8_goose_subscriber1_goose_data_out__out[2];
    _bay_8_bus_split6__out3 = _bay_8_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 8.Digital Probe3
    HIL_OutInt32(0xf00432, _bay_8_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 8.Logical operator19
    _bay_8_logical_operator19__out = !_bay_8_sr_flip_flop2__out;
    // Generated from the component: Bay 8.Termination7
    // Generated from the component: Bay 8.Digital Probe5
    HIL_OutInt32(0xf00434, _bay_8_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 8.Logical operator18
    _bay_8_logical_operator18__out = !_bay_8_sr_flip_flop4__out;
    // Generated from the component: Bay 8.Termination10
    // Generated from the component: Bay 8.Digital Probe6
    HIL_OutInt32(0xf00435, _bay_8_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 8.Logical operator9
    _bay_8_logical_operator9__out = !_bay_8_sr_flip_flop5__out;
    // Generated from the component: Bay 8.Termination3
    // Generated from the component: S8.ph_A.Isw
    HIL_OutInt32(149422346, _bay_8_sr_flip_flop5__out);
    // Generated from the component: S8.ph_B.Isw
    HIL_OutInt32(149422347, _bay_8_sr_flip_flop5__out);
    // Generated from the component: S8.ph_C.Isw
    HIL_OutInt32(149422348, _bay_8_sr_flip_flop5__out);
    // Generated from the component: Bay 8.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_8_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_8_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_8_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 8.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_8_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_8_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_8_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 8.Logical operator15
    _bay_8_logical_operator15__out = _bay_8_dc1_open__out || _bay_8_step1__out ;
    // Generated from the component: Bay 8.Logical operator17
    _bay_8_logical_operator17__out = _bay_8_dc2_open__out || _bay_8_step2__out ;
    // Generated from the component: Bay 9.Bus Split6
    _bay_9_bus_split6__out = _bay_9_goose_subscriber1_goose_data_out__out[0];
    _bay_9_bus_split6__out1 = _bay_9_goose_subscriber1_goose_data_out__out[1];
    _bay_9_bus_split6__out2 = _bay_9_goose_subscriber1_goose_data_out__out[2];
    _bay_9_bus_split6__out3 = _bay_9_goose_subscriber1_goose_data_out__out[3];
    // Generated from the component: Bay 9.Digital Probe3
    HIL_OutInt32(0xf00438, _bay_9_sr_flip_flop2__out != 0x0);
    // Generated from the component: Bay 9.Logical operator19
    _bay_9_logical_operator19__out = !_bay_9_sr_flip_flop2__out;
    // Generated from the component: Bay 9.Termination7
    // Generated from the component: Bay 9.Digital Probe5
    HIL_OutInt32(0xf0043a, _bay_9_sr_flip_flop4__out != 0x0);
    // Generated from the component: Bay 9.Logical operator18
    _bay_9_logical_operator18__out = !_bay_9_sr_flip_flop4__out;
    // Generated from the component: Bay 9.Termination10
    // Generated from the component: Bay 9.Digital Probe6
    HIL_OutInt32(0xf0043b, _bay_9_sr_flip_flop5__out != 0x0);
    // Generated from the component: Bay 9.Logical operator9
    _bay_9_logical_operator9__out = !_bay_9_sr_flip_flop5__out;
    // Generated from the component: Bay 9.Termination3
    // Generated from the component: S7.ph_A.Isw
    HIL_OutInt32(149422343, _bay_9_sr_flip_flop5__out);
    // Generated from the component: S7.ph_B.Isw
    HIL_OutInt32(149422344, _bay_9_sr_flip_flop5__out);
    // Generated from the component: S7.ph_C.Isw
    HIL_OutInt32(149422345, _bay_9_sr_flip_flop5__out);
    // Generated from the component: Bay 9.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_iq_byte_swap__out[0] = 0;
    _bay_9_sv_publisher1_iq_byte_swap__out[1] = 0;
    _bay_9_sv_publisher1_iq_byte_swap__out[2] = 0;
    _bay_9_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 9.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_vq_byte_swap__out[0] = 0;
    _bay_9_sv_publisher1_vq_byte_swap__out[1] = 0;
    _bay_9_sv_publisher1_vq_byte_swap__out[2] = 0;
    _bay_9_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: Bay 9.Logical operator15
    _bay_9_logical_operator15__out = _bay_9_dc1_open__out || _bay_9_step1__out ;
    // Generated from the component: Bay 9.Logical operator17
    _bay_9_logical_operator17__out = _bay_9_dc2_open__out || _bay_9_step2__out ;
    // Generated from the component: Dynamic Grid Fault1.Control state machine
    _dynamic_grid_fault1_control_state_machine__in = _dynamic_grid_fault1_fault_select__out;
    {
        switch ( _dynamic_grid_fault1_control_state_machine__in )     {
        case 0 :
            _dynamic_grid_fault1_control_state_machine__Ca = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 0 ;
            break;
        case 1 :
            _dynamic_grid_fault1_control_state_machine__Ca = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        case 2 :
            _dynamic_grid_fault1_control_state_machine__Ca = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        case 3 :
            _dynamic_grid_fault1_control_state_machine__Ca = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 0 ;
            break;
        case 4 :
            _dynamic_grid_fault1_control_state_machine__Ca = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        case 5 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        case 6 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 0 ;
            break;
        case 7 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        case 8 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 0 ;
            break;
        case 9 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        case 10 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 0 ;
            break;
        case 11 :
            _dynamic_grid_fault1_control_state_machine__Ca = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 1 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 1 ;
            break;
        default :
            _dynamic_grid_fault1_control_state_machine__Ca = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cb = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cc = 0 ;
            _dynamic_grid_fault1_control_state_machine__Cn = 0 ;
        }
    }
    // Generated from the component: Fault Q10.Control state machine
    _fault_q10_control_state_machine__in = _fault_q10_fault_select__out;
    {
        switch ( _fault_q10_control_state_machine__in )     {
        case 0 :
            _fault_q10_control_state_machine__Ca = 0 ;
            _fault_q10_control_state_machine__Cb = 0 ;
            _fault_q10_control_state_machine__Cc = 0 ;
            _fault_q10_control_state_machine__Cn = 0 ;
            break;
        case 1 :
            _fault_q10_control_state_machine__Ca = 0 ;
            _fault_q10_control_state_machine__Cb = 0 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        case 2 :
            _fault_q10_control_state_machine__Ca = 0 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 0 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        case 3 :
            _fault_q10_control_state_machine__Ca = 0 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 0 ;
            break;
        case 4 :
            _fault_q10_control_state_machine__Ca = 0 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        case 5 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 0 ;
            _fault_q10_control_state_machine__Cc = 0 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        case 6 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 0 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 0 ;
            break;
        case 7 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 0 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        case 8 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 0 ;
            _fault_q10_control_state_machine__Cn = 0 ;
            break;
        case 9 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 0 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        case 10 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 0 ;
            break;
        case 11 :
            _fault_q10_control_state_machine__Ca = 1 ;
            _fault_q10_control_state_machine__Cb = 1 ;
            _fault_q10_control_state_machine__Cc = 1 ;
            _fault_q10_control_state_machine__Cn = 1 ;
            break;
        default :
            _fault_q10_control_state_machine__Ca = 0 ;
            _fault_q10_control_state_machine__Cb = 0 ;
            _fault_q10_control_state_machine__Cc = 0 ;
            _fault_q10_control_state_machine__Cn = 0 ;
        }
    }
    // Generated from the component: Fault Q3.Control state machine
    _fault_q3_control_state_machine__in = _fault_q3_fault_select__out;
    {
        switch ( _fault_q3_control_state_machine__in )     {
        case 0 :
            _fault_q3_control_state_machine__Ca = 0 ;
            _fault_q3_control_state_machine__Cb = 0 ;
            _fault_q3_control_state_machine__Cc = 0 ;
            _fault_q3_control_state_machine__Cn = 0 ;
            break;
        case 1 :
            _fault_q3_control_state_machine__Ca = 0 ;
            _fault_q3_control_state_machine__Cb = 0 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        case 2 :
            _fault_q3_control_state_machine__Ca = 0 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 0 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        case 3 :
            _fault_q3_control_state_machine__Ca = 0 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 0 ;
            break;
        case 4 :
            _fault_q3_control_state_machine__Ca = 0 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        case 5 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 0 ;
            _fault_q3_control_state_machine__Cc = 0 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        case 6 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 0 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 0 ;
            break;
        case 7 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 0 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        case 8 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 0 ;
            _fault_q3_control_state_machine__Cn = 0 ;
            break;
        case 9 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 0 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        case 10 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 0 ;
            break;
        case 11 :
            _fault_q3_control_state_machine__Ca = 1 ;
            _fault_q3_control_state_machine__Cb = 1 ;
            _fault_q3_control_state_machine__Cc = 1 ;
            _fault_q3_control_state_machine__Cn = 1 ;
            break;
        default :
            _fault_q3_control_state_machine__Ca = 0 ;
            _fault_q3_control_state_machine__Cb = 0 ;
            _fault_q3_control_state_machine__Cc = 0 ;
            _fault_q3_control_state_machine__Cn = 0 ;
        }
    }
    // Generated from the component: Fault Q7.Control state machine
    _fault_q7_control_state_machine__in = _fault_q7_fault_select__out;
    {
        switch ( _fault_q7_control_state_machine__in )     {
        case 0 :
            _fault_q7_control_state_machine__Ca = 0 ;
            _fault_q7_control_state_machine__Cb = 0 ;
            _fault_q7_control_state_machine__Cc = 0 ;
            _fault_q7_control_state_machine__Cn = 0 ;
            break;
        case 1 :
            _fault_q7_control_state_machine__Ca = 0 ;
            _fault_q7_control_state_machine__Cb = 0 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        case 2 :
            _fault_q7_control_state_machine__Ca = 0 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 0 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        case 3 :
            _fault_q7_control_state_machine__Ca = 0 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 0 ;
            break;
        case 4 :
            _fault_q7_control_state_machine__Ca = 0 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        case 5 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 0 ;
            _fault_q7_control_state_machine__Cc = 0 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        case 6 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 0 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 0 ;
            break;
        case 7 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 0 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        case 8 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 0 ;
            _fault_q7_control_state_machine__Cn = 0 ;
            break;
        case 9 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 0 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        case 10 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 0 ;
            break;
        case 11 :
            _fault_q7_control_state_machine__Ca = 1 ;
            _fault_q7_control_state_machine__Cb = 1 ;
            _fault_q7_control_state_machine__Cc = 1 ;
            _fault_q7_control_state_machine__Cn = 1 ;
            break;
        default :
            _fault_q7_control_state_machine__Ca = 0 ;
            _fault_q7_control_state_machine__Cb = 0 ;
            _fault_q7_control_state_machine__Cc = 0 ;
            _fault_q7_control_state_machine__Cn = 0 ;
        }
    }
    // Generated from the component: FaultBB.Control state machine
    _faultbb_control_state_machine__in = _faultbb_fault_select__out;
    {
        switch ( _faultbb_control_state_machine__in )     {
        case 0 :
            _faultbb_control_state_machine__Ca = 0 ;
            _faultbb_control_state_machine__Cb = 0 ;
            _faultbb_control_state_machine__Cc = 0 ;
            _faultbb_control_state_machine__Cn = 0 ;
            break;
        case 1 :
            _faultbb_control_state_machine__Ca = 0 ;
            _faultbb_control_state_machine__Cb = 0 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        case 2 :
            _faultbb_control_state_machine__Ca = 0 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 0 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        case 3 :
            _faultbb_control_state_machine__Ca = 0 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 0 ;
            break;
        case 4 :
            _faultbb_control_state_machine__Ca = 0 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        case 5 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 0 ;
            _faultbb_control_state_machine__Cc = 0 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        case 6 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 0 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 0 ;
            break;
        case 7 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 0 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        case 8 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 0 ;
            _faultbb_control_state_machine__Cn = 0 ;
            break;
        case 9 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 0 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        case 10 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 0 ;
            break;
        case 11 :
            _faultbb_control_state_machine__Ca = 1 ;
            _faultbb_control_state_machine__Cb = 1 ;
            _faultbb_control_state_machine__Cc = 1 ;
            _faultbb_control_state_machine__Cn = 1 ;
            break;
        default :
            _faultbb_control_state_machine__Ca = 0 ;
            _faultbb_control_state_machine__Cb = 0 ;
            _faultbb_control_state_machine__Cc = 0 ;
            _faultbb_control_state_machine__Cn = 0 ;
        }
    }
    // Generated from the component: HV Bay 1.Digital Probe3
    HIL_OutInt32(0xf0043e, _hv_bay_1_sr_flip_flop2__out != 0x0);
    // Generated from the component: HV Bay 1.Logical operator19
    _hv_bay_1_logical_operator19__out = !_hv_bay_1_sr_flip_flop2__out;
    // Generated from the component: HV Bay 1.Termination7
    // Generated from the component: HV Bay 1.Digital Probe5
    HIL_OutInt32(0xf00440, _hv_bay_1_sr_flip_flop4__out != 0x0);
    // Generated from the component: HV Bay 1.Logical operator18
    _hv_bay_1_logical_operator18__out = !_hv_bay_1_sr_flip_flop4__out;
    // Generated from the component: HV Bay 1.Termination10
    // Generated from the component: HV Bay 1.Digital Probe6
    HIL_OutInt32(0xf00441, _hv_bay_1_sr_flip_flop5__out != 0x0);
    // Generated from the component: HV Bay 1.Logical operator9
    _hv_bay_1_logical_operator9__out = !_hv_bay_1_sr_flip_flop5__out;
    // Generated from the component: HV Bay 1.Termination3
    // Generated from the component: Transformer HV CB.S34.CTC_Wrapper
    if (_hv_bay_1_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x9240480, 0x0);
    }
    else {
        HIL_OutInt32(0x9240480, 0x1);
    }
    // Generated from the component: Transformer HV CB.S35.CTC_Wrapper
    if (_hv_bay_1_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x9240481, 0x0);
    }
    else {
        HIL_OutInt32(0x9240481, 0x1);
    }
    // Generated from the component: Transformer HV CB.S36.CTC_Wrapper
    if (_hv_bay_1_sr_flip_flop5__out == 0x0) {
        HIL_OutInt32(0x9240482, 0x0);
    }
    else {
        HIL_OutInt32(0x9240482, 0x1);
    }
    // Generated from the component: HV Bay 1.SV Publisher1.IQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_iq_byte_swap__out[0] = 0;
    _hv_bay_1_sv_publisher1_iq_byte_swap__out[1] = 0;
    _hv_bay_1_sv_publisher1_iq_byte_swap__out[2] = 0;
    _hv_bay_1_sv_publisher1_iq_byte_swap__out[3] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.VQ_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_vq_byte_swap__out[0] = 0;
    _hv_bay_1_sv_publisher1_vq_byte_swap__out[1] = 0;
    _hv_bay_1_sv_publisher1_vq_byte_swap__out[2] = 0;
    _hv_bay_1_sv_publisher1_vq_byte_swap__out[3] = 0;
    // Generated from the component: HV Bay 1.Logical operator15
    _hv_bay_1_logical_operator15__out = _hv_bay_1_dc1_open__out || _hv_bay_1_step1__out ;
    // Generated from the component: HV Bay 1.Logical operator17
    _hv_bay_1_logical_operator17__out = _hv_bay_1_dc2_open__out || _hv_bay_1_step2__out ;
    // Generated from the component: HV Bay 1.Logical operator20
    _hv_bay_1_logical_operator20__out = _hv_bay_1_cb_open__out || _hv_bay_1_step3__out ;
    // Generated from the component: Termination1
    // Generated from the component: Three-phase Meter1.sumIN
    _three_phase_meter1_sumin__out = _three_phase_meter1_ia_ia2__out + _three_phase_meter1_ib_ia2__out + _three_phase_meter1_ic_ia2__out;
    // Generated from the component: Three-phase Meter1.PLL.to_Hz
    _three_phase_meter1_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter1_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter1.PLL.sin
    _three_phase_meter1_pll_sin__out = sin(_three_phase_meter1_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter1.TRMwt
    // Generated from the component: Three-phase Meter1.TRMd
    // Generated from the component: Three-phase Meter1.PLL.normalize
    _three_phase_meter1_pll_normalize__in1 = _three_phase_meter1_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter1_pll_normalize__in2 = _three_phase_meter1_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter1_pll_normalize__pk = ( powf ( _three_phase_meter1_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter1_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter1_pll_normalize__pk = sqrt ( _three_phase_meter1_pll_normalize__pk ) ;
        if ( _three_phase_meter1_pll_normalize__pk < 0.1 )     {
            _three_phase_meter1_pll_normalize__in2_pu = _three_phase_meter1_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter1_pll_normalize__in2_pu = _three_phase_meter1_pll_normalize__in2 / _three_phase_meter1_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter1.TRMq
    // Generated from the component: Three-phase Meter1.PLL.abc to dq.abc to alpha beta
    _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter1_van_va2__out - _three_phase_meter1_vbn_va2__out - _three_phase_meter1_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter1_vbn_va2__out - _three_phase_meter1_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter1_van_va2__out + _three_phase_meter1_vbn_va2__out + _three_phase_meter1_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter1.sumVN
    _three_phase_meter1_sumvn__out = _three_phase_meter1_van_va2__out + _three_phase_meter1_vbn_va2__out + _three_phase_meter1_vcn_va2__out;
    // Generated from the component: Three-phase Meter1.POWER_P
    // Generated from the component: Three-phase Meter1.POWER_PA
    // Generated from the component: Three-phase Meter1.POWER_PB
    // Generated from the component: Three-phase Meter1.POWER_PC
    // Generated from the component: Three-phase Meter1.POWER_PF
    // Generated from the component: Three-phase Meter1.POWER_PFA
    // Generated from the component: Three-phase Meter1.POWER_PFB
    // Generated from the component: Three-phase Meter1.POWER_PFC
    // Generated from the component: Three-phase Meter1.POWER_Q
    // Generated from the component: Three-phase Meter1.POWER_QA
    // Generated from the component: Three-phase Meter1.POWER_QB
    // Generated from the component: Three-phase Meter1.POWER_QC
    // Generated from the component: Three-phase Meter1.POWER_S
    // Generated from the component: Three-phase Meter1.POWER_SA
    // Generated from the component: Three-phase Meter1.POWER_SB
    // Generated from the component: Three-phase Meter1.POWER_SC
    // Generated from the component: Three-phase Meter1.extra_output_bus
    _three_phase_meter1_extra_output_bus__out[0] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[1] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[2] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[3] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[4] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[5] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[6] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[7] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[8] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[9] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[10] = _three_phase_meter1_zero__out;
    _three_phase_meter1_extra_output_bus__out[11] = _three_phase_meter1_zero__out;
    // Generated from the component: Three-phase Meter10.sumIN
    _three_phase_meter10_sumin__out = _three_phase_meter10_ia_ia2__out + _three_phase_meter10_ib_ia2__out + _three_phase_meter10_ic_ia2__out;
    // Generated from the component: Three-phase Meter10.PLL.to_Hz
    _three_phase_meter10_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter10_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter10.PLL.sin
    _three_phase_meter10_pll_sin__out = sin(_three_phase_meter10_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter10.TRMwt
    // Generated from the component: Three-phase Meter10.TRMd
    // Generated from the component: Three-phase Meter10.PLL.normalize
    _three_phase_meter10_pll_normalize__in1 = _three_phase_meter10_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter10_pll_normalize__in2 = _three_phase_meter10_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter10_pll_normalize__pk = ( powf ( _three_phase_meter10_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter10_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter10_pll_normalize__pk = sqrt ( _three_phase_meter10_pll_normalize__pk ) ;
        if ( _three_phase_meter10_pll_normalize__pk < 0.1 )     {
            _three_phase_meter10_pll_normalize__in2_pu = _three_phase_meter10_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter10_pll_normalize__in2_pu = _three_phase_meter10_pll_normalize__in2 / _three_phase_meter10_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter10.TRMq
    // Generated from the component: Three-phase Meter10.PLL.abc to dq.abc to alpha beta
    _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter10_van_va2__out - _three_phase_meter10_vbn_va2__out - _three_phase_meter10_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter10_vbn_va2__out - _three_phase_meter10_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter10_van_va2__out + _three_phase_meter10_vbn_va2__out + _three_phase_meter10_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter10.sumVN
    _three_phase_meter10_sumvn__out = _three_phase_meter10_van_va2__out + _three_phase_meter10_vbn_va2__out + _three_phase_meter10_vcn_va2__out;
    // Generated from the component: Three-phase Meter10.POWER_P
    // Generated from the component: Three-phase Meter10.POWER_PA
    // Generated from the component: Three-phase Meter10.POWER_PB
    // Generated from the component: Three-phase Meter10.POWER_PC
    // Generated from the component: Three-phase Meter10.POWER_PF
    // Generated from the component: Three-phase Meter10.POWER_PFA
    // Generated from the component: Three-phase Meter10.POWER_PFB
    // Generated from the component: Three-phase Meter10.POWER_PFC
    // Generated from the component: Three-phase Meter10.POWER_Q
    // Generated from the component: Three-phase Meter10.POWER_QA
    // Generated from the component: Three-phase Meter10.POWER_QB
    // Generated from the component: Three-phase Meter10.POWER_QC
    // Generated from the component: Three-phase Meter10.POWER_S
    // Generated from the component: Three-phase Meter10.POWER_SA
    // Generated from the component: Three-phase Meter10.POWER_SB
    // Generated from the component: Three-phase Meter10.POWER_SC
    // Generated from the component: Three-phase Meter10.extra_output_bus
    _three_phase_meter10_extra_output_bus__out[0] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[1] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[2] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[3] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[4] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[5] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[6] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[7] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[8] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[9] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[10] = _three_phase_meter10_zero__out;
    _three_phase_meter10_extra_output_bus__out[11] = _three_phase_meter10_zero__out;
    // Generated from the component: Three-phase Meter11.sumIN
    _three_phase_meter11_sumin__out = _three_phase_meter11_ia_ia2__out + _three_phase_meter11_ib_ia2__out + _three_phase_meter11_ic_ia2__out;
    // Generated from the component: Three-phase Meter11.PLL.to_Hz
    _three_phase_meter11_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter11_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter11.PLL.sin
    _three_phase_meter11_pll_sin__out = sin(_three_phase_meter11_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter11.TRMwt
    // Generated from the component: Three-phase Meter11.TRMd
    // Generated from the component: Three-phase Meter11.PLL.normalize
    _three_phase_meter11_pll_normalize__in1 = _three_phase_meter11_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter11_pll_normalize__in2 = _three_phase_meter11_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter11_pll_normalize__pk = ( powf ( _three_phase_meter11_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter11_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter11_pll_normalize__pk = sqrt ( _three_phase_meter11_pll_normalize__pk ) ;
        if ( _three_phase_meter11_pll_normalize__pk < 0.1 )     {
            _three_phase_meter11_pll_normalize__in2_pu = _three_phase_meter11_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter11_pll_normalize__in2_pu = _three_phase_meter11_pll_normalize__in2 / _three_phase_meter11_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter11.TRMq
    // Generated from the component: Three-phase Meter11.PLL.abc to dq.abc to alpha beta
    _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter11_van_va2__out - _three_phase_meter11_vbn_va2__out - _three_phase_meter11_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter11_vbn_va2__out - _three_phase_meter11_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter11_van_va2__out + _three_phase_meter11_vbn_va2__out + _three_phase_meter11_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter11.sumVN
    _three_phase_meter11_sumvn__out = _three_phase_meter11_van_va2__out + _three_phase_meter11_vbn_va2__out + _three_phase_meter11_vcn_va2__out;
    // Generated from the component: Three-phase Meter11.POWER_P
    // Generated from the component: Three-phase Meter11.POWER_PA
    // Generated from the component: Three-phase Meter11.POWER_PB
    // Generated from the component: Three-phase Meter11.POWER_PC
    // Generated from the component: Three-phase Meter11.POWER_PF
    // Generated from the component: Three-phase Meter11.POWER_PFA
    // Generated from the component: Three-phase Meter11.POWER_PFB
    // Generated from the component: Three-phase Meter11.POWER_PFC
    // Generated from the component: Three-phase Meter11.POWER_Q
    // Generated from the component: Three-phase Meter11.POWER_QA
    // Generated from the component: Three-phase Meter11.POWER_QB
    // Generated from the component: Three-phase Meter11.POWER_QC
    // Generated from the component: Three-phase Meter11.POWER_S
    // Generated from the component: Three-phase Meter11.POWER_SA
    // Generated from the component: Three-phase Meter11.POWER_SB
    // Generated from the component: Three-phase Meter11.POWER_SC
    // Generated from the component: Three-phase Meter11.extra_output_bus
    _three_phase_meter11_extra_output_bus__out[0] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[1] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[2] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[3] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[4] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[5] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[6] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[7] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[8] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[9] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[10] = _three_phase_meter11_zero__out;
    _three_phase_meter11_extra_output_bus__out[11] = _three_phase_meter11_zero__out;
    // Generated from the component: Three-phase Meter2.sumIN
    _three_phase_meter2_sumin__out = _three_phase_meter2_ia_ia2__out + _three_phase_meter2_ib_ia2__out + _three_phase_meter2_ic_ia2__out;
    // Generated from the component: Three-phase Meter2.PLL.to_Hz
    _three_phase_meter2_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter2_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter2.PLL.sin
    _three_phase_meter2_pll_sin__out = sin(_three_phase_meter2_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter2.TRMwt
    // Generated from the component: Three-phase Meter2.TRMd
    // Generated from the component: Three-phase Meter2.PLL.normalize
    _three_phase_meter2_pll_normalize__in1 = _three_phase_meter2_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter2_pll_normalize__in2 = _three_phase_meter2_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter2_pll_normalize__pk = ( powf ( _three_phase_meter2_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter2_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter2_pll_normalize__pk = sqrt ( _three_phase_meter2_pll_normalize__pk ) ;
        if ( _three_phase_meter2_pll_normalize__pk < 0.1 )     {
            _three_phase_meter2_pll_normalize__in2_pu = _three_phase_meter2_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter2_pll_normalize__in2_pu = _three_phase_meter2_pll_normalize__in2 / _three_phase_meter2_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter2.TRMq
    // Generated from the component: Three-phase Meter2.PLL.abc to dq.abc to alpha beta
    _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter2_van_va2__out - _three_phase_meter2_vbn_va2__out - _three_phase_meter2_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter2_vbn_va2__out - _three_phase_meter2_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter2_van_va2__out + _three_phase_meter2_vbn_va2__out + _three_phase_meter2_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter2.sumVN
    _three_phase_meter2_sumvn__out = _three_phase_meter2_van_va2__out + _three_phase_meter2_vbn_va2__out + _three_phase_meter2_vcn_va2__out;
    // Generated from the component: Three-phase Meter2.POWER_P
    // Generated from the component: Three-phase Meter2.POWER_PA
    // Generated from the component: Three-phase Meter2.POWER_PB
    // Generated from the component: Three-phase Meter2.POWER_PC
    // Generated from the component: Three-phase Meter2.POWER_PF
    // Generated from the component: Three-phase Meter2.POWER_PFA
    // Generated from the component: Three-phase Meter2.POWER_PFB
    // Generated from the component: Three-phase Meter2.POWER_PFC
    // Generated from the component: Three-phase Meter2.POWER_Q
    // Generated from the component: Three-phase Meter2.POWER_QA
    // Generated from the component: Three-phase Meter2.POWER_QB
    // Generated from the component: Three-phase Meter2.POWER_QC
    // Generated from the component: Three-phase Meter2.POWER_S
    // Generated from the component: Three-phase Meter2.POWER_SA
    // Generated from the component: Three-phase Meter2.POWER_SB
    // Generated from the component: Three-phase Meter2.POWER_SC
    // Generated from the component: Three-phase Meter2.extra_output_bus
    _three_phase_meter2_extra_output_bus__out[0] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[1] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[2] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[3] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[4] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[5] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[6] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[7] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[8] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[9] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[10] = _three_phase_meter2_zero__out;
    _three_phase_meter2_extra_output_bus__out[11] = _three_phase_meter2_zero__out;
    // Generated from the component: Three-phase Meter3.sumIN
    _three_phase_meter3_sumin__out = _three_phase_meter3_ia_ia2__out + _three_phase_meter3_ib_ia2__out + _three_phase_meter3_ic_ia2__out;
    // Generated from the component: Three-phase Meter3.PLL.to_Hz
    _three_phase_meter3_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter3_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter3.PLL.sin
    _three_phase_meter3_pll_sin__out = sin(_three_phase_meter3_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter3.TRMwt
    // Generated from the component: Three-phase Meter3.TRMd
    // Generated from the component: Three-phase Meter3.PLL.normalize
    _three_phase_meter3_pll_normalize__in1 = _three_phase_meter3_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter3_pll_normalize__in2 = _three_phase_meter3_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter3_pll_normalize__pk = ( powf ( _three_phase_meter3_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter3_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter3_pll_normalize__pk = sqrt ( _three_phase_meter3_pll_normalize__pk ) ;
        if ( _three_phase_meter3_pll_normalize__pk < 0.1 )     {
            _three_phase_meter3_pll_normalize__in2_pu = _three_phase_meter3_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter3_pll_normalize__in2_pu = _three_phase_meter3_pll_normalize__in2 / _three_phase_meter3_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter3.TRMq
    // Generated from the component: Three-phase Meter3.PLL.abc to dq.abc to alpha beta
    _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter3_van_va2__out - _three_phase_meter3_vbn_va2__out - _three_phase_meter3_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter3_vbn_va2__out - _three_phase_meter3_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter3_van_va2__out + _three_phase_meter3_vbn_va2__out + _three_phase_meter3_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter3.sumVN
    _three_phase_meter3_sumvn__out = _three_phase_meter3_van_va2__out + _three_phase_meter3_vbn_va2__out + _three_phase_meter3_vcn_va2__out;
    // Generated from the component: Three-phase Meter3.POWER_P
    // Generated from the component: Three-phase Meter3.POWER_PA
    // Generated from the component: Three-phase Meter3.POWER_PB
    // Generated from the component: Three-phase Meter3.POWER_PC
    // Generated from the component: Three-phase Meter3.POWER_PF
    // Generated from the component: Three-phase Meter3.POWER_PFA
    // Generated from the component: Three-phase Meter3.POWER_PFB
    // Generated from the component: Three-phase Meter3.POWER_PFC
    // Generated from the component: Three-phase Meter3.POWER_Q
    // Generated from the component: Three-phase Meter3.POWER_QA
    // Generated from the component: Three-phase Meter3.POWER_QB
    // Generated from the component: Three-phase Meter3.POWER_QC
    // Generated from the component: Three-phase Meter3.POWER_S
    // Generated from the component: Three-phase Meter3.POWER_SA
    // Generated from the component: Three-phase Meter3.POWER_SB
    // Generated from the component: Three-phase Meter3.POWER_SC
    // Generated from the component: Three-phase Meter3.extra_output_bus
    _three_phase_meter3_extra_output_bus__out[0] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[1] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[2] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[3] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[4] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[5] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[6] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[7] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[8] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[9] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[10] = _three_phase_meter3_zero__out;
    _three_phase_meter3_extra_output_bus__out[11] = _three_phase_meter3_zero__out;
    // Generated from the component: Three-phase Meter4.sumIN
    _three_phase_meter4_sumin__out = _three_phase_meter4_ia_ia2__out + _three_phase_meter4_ib_ia2__out + _three_phase_meter4_ic_ia2__out;
    // Generated from the component: Three-phase Meter4.PLL.to_Hz
    _three_phase_meter4_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter4_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter4.PLL.sin
    _three_phase_meter4_pll_sin__out = sin(_three_phase_meter4_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter4.TRMwt
    // Generated from the component: Three-phase Meter4.TRMd
    // Generated from the component: Three-phase Meter4.PLL.normalize
    _three_phase_meter4_pll_normalize__in1 = _three_phase_meter4_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter4_pll_normalize__in2 = _three_phase_meter4_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter4_pll_normalize__pk = ( powf ( _three_phase_meter4_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter4_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter4_pll_normalize__pk = sqrt ( _three_phase_meter4_pll_normalize__pk ) ;
        if ( _three_phase_meter4_pll_normalize__pk < 0.1 )     {
            _three_phase_meter4_pll_normalize__in2_pu = _three_phase_meter4_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter4_pll_normalize__in2_pu = _three_phase_meter4_pll_normalize__in2 / _three_phase_meter4_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter4.TRMq
    // Generated from the component: Three-phase Meter4.PLL.abc to dq.abc to alpha beta
    _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter4_van_va2__out - _three_phase_meter4_vbn_va2__out - _three_phase_meter4_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter4_vbn_va2__out - _three_phase_meter4_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter4_van_va2__out + _three_phase_meter4_vbn_va2__out + _three_phase_meter4_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter4.sumVN
    _three_phase_meter4_sumvn__out = _three_phase_meter4_van_va2__out + _three_phase_meter4_vbn_va2__out + _three_phase_meter4_vcn_va2__out;
    // Generated from the component: Three-phase Meter4.POWER_P
    // Generated from the component: Three-phase Meter4.POWER_PA
    // Generated from the component: Three-phase Meter4.POWER_PB
    // Generated from the component: Three-phase Meter4.POWER_PC
    // Generated from the component: Three-phase Meter4.POWER_PF
    // Generated from the component: Three-phase Meter4.POWER_PFA
    // Generated from the component: Three-phase Meter4.POWER_PFB
    // Generated from the component: Three-phase Meter4.POWER_PFC
    // Generated from the component: Three-phase Meter4.POWER_Q
    // Generated from the component: Three-phase Meter4.POWER_QA
    // Generated from the component: Three-phase Meter4.POWER_QB
    // Generated from the component: Three-phase Meter4.POWER_QC
    // Generated from the component: Three-phase Meter4.POWER_S
    // Generated from the component: Three-phase Meter4.POWER_SA
    // Generated from the component: Three-phase Meter4.POWER_SB
    // Generated from the component: Three-phase Meter4.POWER_SC
    // Generated from the component: Three-phase Meter4.extra_output_bus
    _three_phase_meter4_extra_output_bus__out[0] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[1] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[2] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[3] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[4] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[5] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[6] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[7] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[8] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[9] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[10] = _three_phase_meter4_zero__out;
    _three_phase_meter4_extra_output_bus__out[11] = _three_phase_meter4_zero__out;
    // Generated from the component: Three-phase Meter5.sumIN
    _three_phase_meter5_sumin__out = _three_phase_meter5_ia_ia2__out + _three_phase_meter5_ib_ia2__out + _three_phase_meter5_ic_ia2__out;
    // Generated from the component: Three-phase Meter5.PLL.to_Hz
    _three_phase_meter5_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter5_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter5.PLL.sin
    _three_phase_meter5_pll_sin__out = sin(_three_phase_meter5_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter5.TRMwt
    // Generated from the component: Three-phase Meter5.TRMd
    // Generated from the component: Three-phase Meter5.PLL.normalize
    _three_phase_meter5_pll_normalize__in1 = _three_phase_meter5_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter5_pll_normalize__in2 = _three_phase_meter5_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter5_pll_normalize__pk = ( powf ( _three_phase_meter5_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter5_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter5_pll_normalize__pk = sqrt ( _three_phase_meter5_pll_normalize__pk ) ;
        if ( _three_phase_meter5_pll_normalize__pk < 0.1 )     {
            _three_phase_meter5_pll_normalize__in2_pu = _three_phase_meter5_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter5_pll_normalize__in2_pu = _three_phase_meter5_pll_normalize__in2 / _three_phase_meter5_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter5.TRMq
    // Generated from the component: Three-phase Meter5.PLL.abc to dq.abc to alpha beta
    _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter5_van_va2__out - _three_phase_meter5_vbn_va2__out - _three_phase_meter5_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter5_vbn_va2__out - _three_phase_meter5_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter5_van_va2__out + _three_phase_meter5_vbn_va2__out + _three_phase_meter5_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter5.sumVN
    _three_phase_meter5_sumvn__out = _three_phase_meter5_van_va2__out + _three_phase_meter5_vbn_va2__out + _three_phase_meter5_vcn_va2__out;
    // Generated from the component: Three-phase Meter5.POWER_P
    // Generated from the component: Three-phase Meter5.POWER_PA
    // Generated from the component: Three-phase Meter5.POWER_PB
    // Generated from the component: Three-phase Meter5.POWER_PC
    // Generated from the component: Three-phase Meter5.POWER_PF
    // Generated from the component: Three-phase Meter5.POWER_PFA
    // Generated from the component: Three-phase Meter5.POWER_PFB
    // Generated from the component: Three-phase Meter5.POWER_PFC
    // Generated from the component: Three-phase Meter5.POWER_Q
    // Generated from the component: Three-phase Meter5.POWER_QA
    // Generated from the component: Three-phase Meter5.POWER_QB
    // Generated from the component: Three-phase Meter5.POWER_QC
    // Generated from the component: Three-phase Meter5.POWER_S
    // Generated from the component: Three-phase Meter5.POWER_SA
    // Generated from the component: Three-phase Meter5.POWER_SB
    // Generated from the component: Three-phase Meter5.POWER_SC
    // Generated from the component: Three-phase Meter5.extra_output_bus
    _three_phase_meter5_extra_output_bus__out[0] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[1] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[2] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[3] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[4] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[5] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[6] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[7] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[8] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[9] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[10] = _three_phase_meter5_zero__out;
    _three_phase_meter5_extra_output_bus__out[11] = _three_phase_meter5_zero__out;
    // Generated from the component: Three-phase Meter6.sumIN
    _three_phase_meter6_sumin__out = _three_phase_meter6_ia_ia2__out + _three_phase_meter6_ib_ia2__out + _three_phase_meter6_ic_ia2__out;
    // Generated from the component: Three-phase Meter6.PLL.to_Hz
    _three_phase_meter6_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter6_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter6.PLL.sin
    _three_phase_meter6_pll_sin__out = sin(_three_phase_meter6_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter6.TRMwt
    // Generated from the component: Three-phase Meter6.TRMd
    // Generated from the component: Three-phase Meter6.PLL.normalize
    _three_phase_meter6_pll_normalize__in1 = _three_phase_meter6_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter6_pll_normalize__in2 = _three_phase_meter6_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter6_pll_normalize__pk = ( powf ( _three_phase_meter6_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter6_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter6_pll_normalize__pk = sqrt ( _three_phase_meter6_pll_normalize__pk ) ;
        if ( _three_phase_meter6_pll_normalize__pk < 0.1 )     {
            _three_phase_meter6_pll_normalize__in2_pu = _three_phase_meter6_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter6_pll_normalize__in2_pu = _three_phase_meter6_pll_normalize__in2 / _three_phase_meter6_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter6.TRMq
    // Generated from the component: Three-phase Meter6.PLL.abc to dq.abc to alpha beta
    _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter6_van_va2__out - _three_phase_meter6_vbn_va2__out - _three_phase_meter6_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter6_vbn_va2__out - _three_phase_meter6_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter6_van_va2__out + _three_phase_meter6_vbn_va2__out + _three_phase_meter6_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter6.sumVN
    _three_phase_meter6_sumvn__out = _three_phase_meter6_van_va2__out + _three_phase_meter6_vbn_va2__out + _three_phase_meter6_vcn_va2__out;
    // Generated from the component: Three-phase Meter6.POWER_P
    // Generated from the component: Three-phase Meter6.POWER_PA
    // Generated from the component: Three-phase Meter6.POWER_PB
    // Generated from the component: Three-phase Meter6.POWER_PC
    // Generated from the component: Three-phase Meter6.POWER_PF
    // Generated from the component: Three-phase Meter6.POWER_PFA
    // Generated from the component: Three-phase Meter6.POWER_PFB
    // Generated from the component: Three-phase Meter6.POWER_PFC
    // Generated from the component: Three-phase Meter6.POWER_Q
    // Generated from the component: Three-phase Meter6.POWER_QA
    // Generated from the component: Three-phase Meter6.POWER_QB
    // Generated from the component: Three-phase Meter6.POWER_QC
    // Generated from the component: Three-phase Meter6.POWER_S
    // Generated from the component: Three-phase Meter6.POWER_SA
    // Generated from the component: Three-phase Meter6.POWER_SB
    // Generated from the component: Three-phase Meter6.POWER_SC
    // Generated from the component: Three-phase Meter6.extra_output_bus
    _three_phase_meter6_extra_output_bus__out[0] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[1] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[2] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[3] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[4] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[5] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[6] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[7] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[8] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[9] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[10] = _three_phase_meter6_zero__out;
    _three_phase_meter6_extra_output_bus__out[11] = _three_phase_meter6_zero__out;
    // Generated from the component: Three-phase Meter7.sumIN
    _three_phase_meter7_sumin__out = _three_phase_meter7_ia_ia2__out + _three_phase_meter7_ib_ia2__out + _three_phase_meter7_ic_ia2__out;
    // Generated from the component: Three-phase Meter7.PLL.to_Hz
    _three_phase_meter7_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter7_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter7.PLL.sin
    _three_phase_meter7_pll_sin__out = sin(_three_phase_meter7_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter7.TRMwt
    // Generated from the component: Three-phase Meter7.TRMd
    // Generated from the component: Three-phase Meter7.PLL.normalize
    _three_phase_meter7_pll_normalize__in1 = _three_phase_meter7_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter7_pll_normalize__in2 = _three_phase_meter7_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter7_pll_normalize__pk = ( powf ( _three_phase_meter7_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter7_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter7_pll_normalize__pk = sqrt ( _three_phase_meter7_pll_normalize__pk ) ;
        if ( _three_phase_meter7_pll_normalize__pk < 0.1 )     {
            _three_phase_meter7_pll_normalize__in2_pu = _three_phase_meter7_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter7_pll_normalize__in2_pu = _three_phase_meter7_pll_normalize__in2 / _three_phase_meter7_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter7.TRMq
    // Generated from the component: Three-phase Meter7.PLL.abc to dq.abc to alpha beta
    _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter7_van_va2__out - _three_phase_meter7_vbn_va2__out - _three_phase_meter7_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter7_vbn_va2__out - _three_phase_meter7_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter7_van_va2__out + _three_phase_meter7_vbn_va2__out + _three_phase_meter7_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter7.sumVN
    _three_phase_meter7_sumvn__out = _three_phase_meter7_van_va2__out + _three_phase_meter7_vbn_va2__out + _three_phase_meter7_vcn_va2__out;
    // Generated from the component: Three-phase Meter7.POWER_P
    // Generated from the component: Three-phase Meter7.POWER_PA
    // Generated from the component: Three-phase Meter7.POWER_PB
    // Generated from the component: Three-phase Meter7.POWER_PC
    // Generated from the component: Three-phase Meter7.POWER_PF
    // Generated from the component: Three-phase Meter7.POWER_PFA
    // Generated from the component: Three-phase Meter7.POWER_PFB
    // Generated from the component: Three-phase Meter7.POWER_PFC
    // Generated from the component: Three-phase Meter7.POWER_Q
    // Generated from the component: Three-phase Meter7.POWER_QA
    // Generated from the component: Three-phase Meter7.POWER_QB
    // Generated from the component: Three-phase Meter7.POWER_QC
    // Generated from the component: Three-phase Meter7.POWER_S
    // Generated from the component: Three-phase Meter7.POWER_SA
    // Generated from the component: Three-phase Meter7.POWER_SB
    // Generated from the component: Three-phase Meter7.POWER_SC
    // Generated from the component: Three-phase Meter7.extra_output_bus
    _three_phase_meter7_extra_output_bus__out[0] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[1] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[2] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[3] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[4] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[5] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[6] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[7] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[8] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[9] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[10] = _three_phase_meter7_zero__out;
    _three_phase_meter7_extra_output_bus__out[11] = _three_phase_meter7_zero__out;
    // Generated from the component: Three-phase Meter8.sumIN
    _three_phase_meter8_sumin__out = _three_phase_meter8_ia_ia2__out + _three_phase_meter8_ib_ia2__out + _three_phase_meter8_ic_ia2__out;
    // Generated from the component: Three-phase Meter8.PLL.to_Hz
    _three_phase_meter8_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter8_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter8.PLL.sin
    _three_phase_meter8_pll_sin__out = sin(_three_phase_meter8_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter8.TRMwt
    // Generated from the component: Three-phase Meter8.TRMd
    // Generated from the component: Three-phase Meter8.PLL.normalize
    _three_phase_meter8_pll_normalize__in1 = _three_phase_meter8_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter8_pll_normalize__in2 = _three_phase_meter8_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter8_pll_normalize__pk = ( powf ( _three_phase_meter8_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter8_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter8_pll_normalize__pk = sqrt ( _three_phase_meter8_pll_normalize__pk ) ;
        if ( _three_phase_meter8_pll_normalize__pk < 0.1 )     {
            _three_phase_meter8_pll_normalize__in2_pu = _three_phase_meter8_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter8_pll_normalize__in2_pu = _three_phase_meter8_pll_normalize__in2 / _three_phase_meter8_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter8.TRMq
    // Generated from the component: Three-phase Meter8.PLL.abc to dq.abc to alpha beta
    _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter8_van_va2__out - _three_phase_meter8_vbn_va2__out - _three_phase_meter8_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter8_vbn_va2__out - _three_phase_meter8_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter8_van_va2__out + _three_phase_meter8_vbn_va2__out + _three_phase_meter8_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter8.sumVN
    _three_phase_meter8_sumvn__out = _three_phase_meter8_van_va2__out + _three_phase_meter8_vbn_va2__out + _three_phase_meter8_vcn_va2__out;
    // Generated from the component: Three-phase Meter8.POWER_P
    // Generated from the component: Three-phase Meter8.POWER_PA
    // Generated from the component: Three-phase Meter8.POWER_PB
    // Generated from the component: Three-phase Meter8.POWER_PC
    // Generated from the component: Three-phase Meter8.POWER_PF
    // Generated from the component: Three-phase Meter8.POWER_PFA
    // Generated from the component: Three-phase Meter8.POWER_PFB
    // Generated from the component: Three-phase Meter8.POWER_PFC
    // Generated from the component: Three-phase Meter8.POWER_Q
    // Generated from the component: Three-phase Meter8.POWER_QA
    // Generated from the component: Three-phase Meter8.POWER_QB
    // Generated from the component: Three-phase Meter8.POWER_QC
    // Generated from the component: Three-phase Meter8.POWER_S
    // Generated from the component: Three-phase Meter8.POWER_SA
    // Generated from the component: Three-phase Meter8.POWER_SB
    // Generated from the component: Three-phase Meter8.POWER_SC
    // Generated from the component: Three-phase Meter8.extra_output_bus
    _three_phase_meter8_extra_output_bus__out[0] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[1] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[2] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[3] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[4] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[5] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[6] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[7] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[8] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[9] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[10] = _three_phase_meter8_zero__out;
    _three_phase_meter8_extra_output_bus__out[11] = _three_phase_meter8_zero__out;
    // Generated from the component: Three-phase Meter9.sumIN
    _three_phase_meter9_sumin__out = _three_phase_meter9_ia_ia2__out + _three_phase_meter9_ib_ia2__out + _three_phase_meter9_ic_ia2__out;
    // Generated from the component: Three-phase Meter9.PLL.to_Hz
    _three_phase_meter9_pll_to_hz__out = 0.15915494309189535 * _three_phase_meter9_pll_lpf_lpf__out;
    // Generated from the component: Three-phase Meter9.PLL.sin
    _three_phase_meter9_pll_sin__out = sin(_three_phase_meter9_pll_unit_delay1__out);
    // Generated from the component: Three-phase Meter9.TRMwt
    // Generated from the component: Three-phase Meter9.TRMd
    // Generated from the component: Three-phase Meter9.PLL.normalize
    _three_phase_meter9_pll_normalize__in1 = _three_phase_meter9_pll_abc_to_dq_lpf_d__out;
    _three_phase_meter9_pll_normalize__in2 = _three_phase_meter9_pll_abc_to_dq_lpf_q__out;
    {
        _three_phase_meter9_pll_normalize__pk = ( powf ( _three_phase_meter9_pll_normalize__in1 , 2.0 ) + powf ( _three_phase_meter9_pll_normalize__in2 , 2.0 ) ) ;
        _three_phase_meter9_pll_normalize__pk = sqrt ( _three_phase_meter9_pll_normalize__pk ) ;
        if ( _three_phase_meter9_pll_normalize__pk < 0.1 )     {
            _three_phase_meter9_pll_normalize__in2_pu = _three_phase_meter9_pll_normalize__in2 / 0.1 ;
        }
        else     {
            _three_phase_meter9_pll_normalize__in2_pu = _three_phase_meter9_pll_normalize__in2 / _three_phase_meter9_pll_normalize__pk ;
        }
    }
    // Generated from the component: Three-phase Meter9.TRMq
    // Generated from the component: Three-phase Meter9.PLL.abc to dq.abc to alpha beta
    _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _three_phase_meter9_van_va2__out - _three_phase_meter9_vbn_va2__out - _three_phase_meter9_vcn_va2__out) * 0.3333333333333333;
    _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__beta = (_three_phase_meter9_vbn_va2__out - _three_phase_meter9_vcn_va2__out) * 0.5773502691896258;
    _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_three_phase_meter9_van_va2__out + _three_phase_meter9_vbn_va2__out + _three_phase_meter9_vcn_va2__out) * 0.3333333333333333;
    // Generated from the component: Three-phase Meter9.sumVN
    _three_phase_meter9_sumvn__out = _three_phase_meter9_van_va2__out + _three_phase_meter9_vbn_va2__out + _three_phase_meter9_vcn_va2__out;
    // Generated from the component: Three-phase Meter9.POWER_P
    // Generated from the component: Three-phase Meter9.POWER_PA
    // Generated from the component: Three-phase Meter9.POWER_PB
    // Generated from the component: Three-phase Meter9.POWER_PC
    // Generated from the component: Three-phase Meter9.POWER_PF
    // Generated from the component: Three-phase Meter9.POWER_PFA
    // Generated from the component: Three-phase Meter9.POWER_PFB
    // Generated from the component: Three-phase Meter9.POWER_PFC
    // Generated from the component: Three-phase Meter9.POWER_Q
    // Generated from the component: Three-phase Meter9.POWER_QA
    // Generated from the component: Three-phase Meter9.POWER_QB
    // Generated from the component: Three-phase Meter9.POWER_QC
    // Generated from the component: Three-phase Meter9.POWER_S
    // Generated from the component: Three-phase Meter9.POWER_SA
    // Generated from the component: Three-phase Meter9.POWER_SB
    // Generated from the component: Three-phase Meter9.POWER_SC
    // Generated from the component: Three-phase Meter9.extra_output_bus
    _three_phase_meter9_extra_output_bus__out[0] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[1] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[2] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[3] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[4] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[5] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[6] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[7] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[8] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[9] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[10] = _three_phase_meter9_zero__out;
    _three_phase_meter9_extra_output_bus__out[11] = _three_phase_meter9_zero__out;
    // Generated from the component: Bay 1.Bus Join10
    _bay_1_bus_join10__out[0] = _bay_1_bus_split6__out1;
    _bay_1_bus_join10__out[1] = _bay_1_bus_split6__out3;
    // Generated from the component: Bay 1.Logical operator7
    _bay_1_logical_operator7__out = _bay_1_cb_close__out || _bay_1_bus_split6__out2 ;
    // Generated from the component: Bay 1.Logical operator8
    _bay_1_logical_operator8__out = _bay_1_cb_open__out || _bay_1_bus_split6__out || _bay_1_step3__out ;
    // Generated from the component: Bay 1.Digital Probe2
    HIL_OutInt32(0xf00401, _bay_1_logical_operator19__out != 0x0);
    // Generated from the component: Bay 1.Sum3
    _bay_1_sum3__out = _bay_1_constant4__out + _bay_1_logical_operator19__out;
    // Generated from the component: Bay 1.Digital Probe4
    HIL_OutInt32(0xf00403, _bay_1_logical_operator18__out != 0x0);
    // Generated from the component: Bay 1.Sum4
    _bay_1_sum4__out = _bay_1_constant6__out + _bay_1_logical_operator18__out;
    // Generated from the component: Bay 1.Digital Probe1
    HIL_OutInt32(0xf00400, _bay_1_logical_operator9__out != 0x0);
    // Generated from the component: Bay 1.Sum1
    _bay_1_sum1__out = _bay_1_constant1__out + _bay_1_logical_operator9__out;
    // Generated from the component: Bay 1.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_iq_bus_split__out = 0;
    _bay_1_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_1_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_1_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 1.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_vq_bus_split__out = 0;
    _bay_1_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_1_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_1_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 10.Bus Join10
    _bay_10_bus_join10__out[0] = _bay_10_bus_split6__out1;
    _bay_10_bus_join10__out[1] = _bay_10_bus_split6__out3;
    // Generated from the component: Bay 10.Logical operator7
    _bay_10_logical_operator7__out = _bay_10_cb_close__out || _bay_10_bus_split6__out2 ;
    // Generated from the component: Bay 10.Logical operator8
    _bay_10_logical_operator8__out = _bay_10_cb_open__out || _bay_10_bus_split6__out || _bay_10_step3__out ;
    // Generated from the component: Bay 10.Digital Probe2
    HIL_OutInt32(0xf00407, _bay_10_logical_operator19__out != 0x0);
    // Generated from the component: Bay 10.Sum3
    _bay_10_sum3__out = _bay_10_constant4__out + _bay_10_logical_operator19__out;
    // Generated from the component: Bay 10.Digital Probe4
    HIL_OutInt32(0xf00409, _bay_10_logical_operator18__out != 0x0);
    // Generated from the component: Bay 10.Sum4
    _bay_10_sum4__out = _bay_10_constant6__out + _bay_10_logical_operator18__out;
    // Generated from the component: Bay 10.Digital Probe1
    HIL_OutInt32(0xf00406, _bay_10_logical_operator9__out != 0x0);
    // Generated from the component: Bay 10.Sum1
    _bay_10_sum1__out = _bay_10_constant1__out + _bay_10_logical_operator9__out;
    // Generated from the component: Bay 10.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_iq_bus_split__out = 0;
    _bay_10_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_10_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_10_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 10.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_vq_bus_split__out = 0;
    _bay_10_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_10_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_10_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 2.Bus Join10
    _bay_2_bus_join10__out[0] = _bay_2_bus_split6__out1;
    _bay_2_bus_join10__out[1] = _bay_2_bus_split6__out3;
    // Generated from the component: Bay 2.Logical operator7
    _bay_2_logical_operator7__out = _bay_2_cb_close__out || _bay_2_bus_split6__out2 ;
    // Generated from the component: Bay 2.Logical operator8
    _bay_2_logical_operator8__out = _bay_2_cb_open__out || _bay_2_bus_split6__out || _bay_2_step3__out ;
    // Generated from the component: Bay 2.Digital Probe2
    HIL_OutInt32(0xf0040d, _bay_2_logical_operator19__out != 0x0);
    // Generated from the component: Bay 2.Sum3
    _bay_2_sum3__out = _bay_2_constant4__out + _bay_2_logical_operator19__out;
    // Generated from the component: Bay 2.Digital Probe4
    HIL_OutInt32(0xf0040f, _bay_2_logical_operator18__out != 0x0);
    // Generated from the component: Bay 2.Sum4
    _bay_2_sum4__out = _bay_2_constant6__out + _bay_2_logical_operator18__out;
    // Generated from the component: Bay 2.Digital Probe1
    HIL_OutInt32(0xf0040c, _bay_2_logical_operator9__out != 0x0);
    // Generated from the component: Bay 2.Sum1
    _bay_2_sum1__out = _bay_2_constant1__out + _bay_2_logical_operator9__out;
    // Generated from the component: Bay 2.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_iq_bus_split__out = 0;
    _bay_2_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_2_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_2_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 2.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_vq_bus_split__out = 0;
    _bay_2_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_2_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_2_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 3.Bus Join10
    _bay_3_bus_join10__out[0] = _bay_3_bus_split6__out1;
    _bay_3_bus_join10__out[1] = _bay_3_bus_split6__out3;
    // Generated from the component: Bay 3.Logical operator7
    _bay_3_logical_operator7__out = _bay_3_cb_close__out || _bay_3_bus_split6__out2 ;
    // Generated from the component: Bay 3.Logical operator8
    _bay_3_logical_operator8__out = _bay_3_cb_open__out || _bay_3_bus_split6__out || _bay_3_step3__out ;
    // Generated from the component: Bay 3.Digital Probe2
    HIL_OutInt32(0xf00413, _bay_3_logical_operator19__out != 0x0);
    // Generated from the component: Bay 3.Sum3
    _bay_3_sum3__out = _bay_3_constant4__out + _bay_3_logical_operator19__out;
    // Generated from the component: Bay 3.Digital Probe4
    HIL_OutInt32(0xf00415, _bay_3_logical_operator18__out != 0x0);
    // Generated from the component: Bay 3.Sum4
    _bay_3_sum4__out = _bay_3_constant6__out + _bay_3_logical_operator18__out;
    // Generated from the component: Bay 3.Digital Probe1
    HIL_OutInt32(0xf00412, _bay_3_logical_operator9__out != 0x0);
    // Generated from the component: Bay 3.Sum1
    _bay_3_sum1__out = _bay_3_constant1__out + _bay_3_logical_operator9__out;
    // Generated from the component: Bay 3.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_iq_bus_split__out = 0;
    _bay_3_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_3_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_3_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 3.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_vq_bus_split__out = 0;
    _bay_3_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_3_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_3_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 4.Bus Join10
    _bay_4_bus_join10__out[0] = _bay_4_bus_split6__out1;
    _bay_4_bus_join10__out[1] = _bay_4_bus_split6__out3;
    // Generated from the component: Bay 4.Logical operator7
    _bay_4_logical_operator7__out = _bay_4_cb_close__out || _bay_4_bus_split6__out2 ;
    // Generated from the component: Bay 4.Logical operator8
    _bay_4_logical_operator8__out = _bay_4_cb_open__out || _bay_4_bus_split6__out || _bay_4_step3__out ;
    // Generated from the component: Bay 4.Digital Probe2
    HIL_OutInt32(0xf00419, _bay_4_logical_operator19__out != 0x0);
    // Generated from the component: Bay 4.Sum3
    _bay_4_sum3__out = _bay_4_constant4__out + _bay_4_logical_operator19__out;
    // Generated from the component: Bay 4.Digital Probe4
    HIL_OutInt32(0xf0041b, _bay_4_logical_operator18__out != 0x0);
    // Generated from the component: Bay 4.Sum4
    _bay_4_sum4__out = _bay_4_constant6__out + _bay_4_logical_operator18__out;
    // Generated from the component: Bay 4.Digital Probe1
    HIL_OutInt32(0xf00418, _bay_4_logical_operator9__out != 0x0);
    // Generated from the component: Bay 4.Sum1
    _bay_4_sum1__out = _bay_4_constant1__out + _bay_4_logical_operator9__out;
    // Generated from the component: Bay 4.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_iq_bus_split__out = 0;
    _bay_4_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_4_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_4_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 4.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_vq_bus_split__out = 0;
    _bay_4_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_4_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_4_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 5.Bus Join10
    _bay_5_bus_join10__out[0] = _bay_5_bus_split6__out1;
    _bay_5_bus_join10__out[1] = _bay_5_bus_split6__out3;
    // Generated from the component: Bay 5.Logical operator7
    _bay_5_logical_operator7__out = _bay_5_cb_close__out || _bay_5_bus_split6__out2 ;
    // Generated from the component: Bay 5.Logical operator8
    _bay_5_logical_operator8__out = _bay_5_cb_open__out || _bay_5_bus_split6__out || _bay_5_step3__out ;
    // Generated from the component: Bay 5.Digital Probe2
    HIL_OutInt32(0xf0041f, _bay_5_logical_operator19__out != 0x0);
    // Generated from the component: Bay 5.Sum3
    _bay_5_sum3__out = _bay_5_constant4__out + _bay_5_logical_operator19__out;
    // Generated from the component: Bay 5.Digital Probe4
    HIL_OutInt32(0xf00421, _bay_5_logical_operator18__out != 0x0);
    // Generated from the component: Bay 5.Sum4
    _bay_5_sum4__out = _bay_5_constant6__out + _bay_5_logical_operator18__out;
    // Generated from the component: Bay 5.Digital Probe1
    HIL_OutInt32(0xf0041e, _bay_5_logical_operator9__out != 0x0);
    // Generated from the component: Bay 5.Sum1
    _bay_5_sum1__out = _bay_5_constant1__out + _bay_5_logical_operator9__out;
    // Generated from the component: Bay 5.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_iq_bus_split__out = 0;
    _bay_5_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_5_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_5_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 5.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_vq_bus_split__out = 0;
    _bay_5_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_5_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_5_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 6.Bus Join10
    _bay_6_bus_join10__out[0] = _bay_6_bus_split6__out1;
    _bay_6_bus_join10__out[1] = _bay_6_bus_split6__out3;
    // Generated from the component: Bay 6.Logical operator7
    _bay_6_logical_operator7__out = _bay_6_cb_close__out || _bay_6_bus_split6__out2 ;
    // Generated from the component: Bay 6.Logical operator8
    _bay_6_logical_operator8__out = _bay_6_cb_open__out || _bay_6_bus_split6__out || _bay_6_step3__out ;
    // Generated from the component: Bay 6.Digital Probe2
    HIL_OutInt32(0xf00425, _bay_6_logical_operator19__out != 0x0);
    // Generated from the component: Bay 6.Sum3
    _bay_6_sum3__out = _bay_6_constant4__out + _bay_6_logical_operator19__out;
    // Generated from the component: Bay 6.Digital Probe4
    HIL_OutInt32(0xf00427, _bay_6_logical_operator18__out != 0x0);
    // Generated from the component: Bay 6.Sum4
    _bay_6_sum4__out = _bay_6_constant6__out + _bay_6_logical_operator18__out;
    // Generated from the component: Bay 6.Digital Probe1
    HIL_OutInt32(0xf00424, _bay_6_logical_operator9__out != 0x0);
    // Generated from the component: Bay 6.Sum1
    _bay_6_sum1__out = _bay_6_constant1__out + _bay_6_logical_operator9__out;
    // Generated from the component: Bay 6.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_iq_bus_split__out = 0;
    _bay_6_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_6_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_6_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 6.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_vq_bus_split__out = 0;
    _bay_6_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_6_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_6_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 7.Bus Join10
    _bay_7_bus_join10__out[0] = _bay_7_bus_split6__out1;
    _bay_7_bus_join10__out[1] = _bay_7_bus_split6__out3;
    // Generated from the component: Bay 7.Logical operator7
    _bay_7_logical_operator7__out = _bay_7_cb_close__out || _bay_7_bus_split6__out2 ;
    // Generated from the component: Bay 7.Logical operator8
    _bay_7_logical_operator8__out = _bay_7_cb_open__out || _bay_7_bus_split6__out || _bay_7_step3__out ;
    // Generated from the component: Bay 7.Digital Probe2
    HIL_OutInt32(0xf0042b, _bay_7_logical_operator19__out != 0x0);
    // Generated from the component: Bay 7.Sum3
    _bay_7_sum3__out = _bay_7_constant4__out + _bay_7_logical_operator19__out;
    // Generated from the component: Bay 7.Digital Probe4
    HIL_OutInt32(0xf0042d, _bay_7_logical_operator18__out != 0x0);
    // Generated from the component: Bay 7.Sum4
    _bay_7_sum4__out = _bay_7_constant6__out + _bay_7_logical_operator18__out;
    // Generated from the component: Bay 7.Digital Probe1
    HIL_OutInt32(0xf0042a, _bay_7_logical_operator9__out != 0x0);
    // Generated from the component: Bay 7.Sum1
    _bay_7_sum1__out = _bay_7_constant1__out + _bay_7_logical_operator9__out;
    // Generated from the component: Bay 7.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_iq_bus_split__out = 0;
    _bay_7_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_7_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_7_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 7.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_vq_bus_split__out = 0;
    _bay_7_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_7_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_7_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 8.Bus Join10
    _bay_8_bus_join10__out[0] = _bay_8_bus_split6__out1;
    _bay_8_bus_join10__out[1] = _bay_8_bus_split6__out3;
    // Generated from the component: Bay 8.Logical operator7
    _bay_8_logical_operator7__out = _bay_8_cb_close__out || _bay_8_bus_split6__out2 ;
    // Generated from the component: Bay 8.Logical operator8
    _bay_8_logical_operator8__out = _bay_8_cb_open__out || _bay_8_bus_split6__out || _bay_8_step3__out ;
    // Generated from the component: Bay 8.Digital Probe2
    HIL_OutInt32(0xf00431, _bay_8_logical_operator19__out != 0x0);
    // Generated from the component: Bay 8.Sum3
    _bay_8_sum3__out = _bay_8_constant4__out + _bay_8_logical_operator19__out;
    // Generated from the component: Bay 8.Digital Probe4
    HIL_OutInt32(0xf00433, _bay_8_logical_operator18__out != 0x0);
    // Generated from the component: Bay 8.Sum4
    _bay_8_sum4__out = _bay_8_constant6__out + _bay_8_logical_operator18__out;
    // Generated from the component: Bay 8.Digital Probe1
    HIL_OutInt32(0xf00430, _bay_8_logical_operator9__out != 0x0);
    // Generated from the component: Bay 8.Sum1
    _bay_8_sum1__out = _bay_8_constant1__out + _bay_8_logical_operator9__out;
    // Generated from the component: Bay 8.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_iq_bus_split__out = 0;
    _bay_8_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_8_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_8_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 8.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_vq_bus_split__out = 0;
    _bay_8_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_8_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_8_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Bay 9.Bus Join10
    _bay_9_bus_join10__out[0] = _bay_9_bus_split6__out1;
    _bay_9_bus_join10__out[1] = _bay_9_bus_split6__out3;
    // Generated from the component: Bay 9.Logical operator7
    _bay_9_logical_operator7__out = _bay_9_cb_close__out || _bay_9_bus_split6__out2 ;
    // Generated from the component: Bay 9.Logical operator8
    _bay_9_logical_operator8__out = _bay_9_cb_open__out || _bay_9_bus_split6__out || _bay_9_step3__out ;
    // Generated from the component: Bay 9.Digital Probe2
    HIL_OutInt32(0xf00437, _bay_9_logical_operator19__out != 0x0);
    // Generated from the component: Bay 9.Sum3
    _bay_9_sum3__out = _bay_9_constant4__out + _bay_9_logical_operator19__out;
    // Generated from the component: Bay 9.Digital Probe4
    HIL_OutInt32(0xf00439, _bay_9_logical_operator18__out != 0x0);
    // Generated from the component: Bay 9.Sum4
    _bay_9_sum4__out = _bay_9_constant6__out + _bay_9_logical_operator18__out;
    // Generated from the component: Bay 9.Digital Probe1
    HIL_OutInt32(0xf00436, _bay_9_logical_operator9__out != 0x0);
    // Generated from the component: Bay 9.Sum1
    _bay_9_sum1__out = _bay_9_constant1__out + _bay_9_logical_operator9__out;
    // Generated from the component: Bay 9.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_iq_bus_split__out = 0;
    _bay_9_sv_publisher1_iq_bus_split__out1 = 0;
    _bay_9_sv_publisher1_iq_bus_split__out2 = 0;
    _bay_9_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: Bay 9.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_vq_bus_split__out = 0;
    _bay_9_sv_publisher1_vq_bus_split__out1 = 0;
    _bay_9_sv_publisher1_vq_bus_split__out2 = 0;
    _bay_9_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Dynamic Grid Fault1.S1.Isw
    HIL_OutInt32(136839424, _dynamic_grid_fault1_control_state_machine__Ca);
    // Generated from the component: Dynamic Grid Fault1.S2.Isw
    HIL_OutInt32(136839425, _dynamic_grid_fault1_control_state_machine__Cn);
    // Generated from the component: Dynamic Grid Fault1.S3.Isw
    HIL_OutInt32(136839426, _dynamic_grid_fault1_control_state_machine__Cb);
    // Generated from the component: Dynamic Grid Fault1.S4.Isw
    HIL_OutInt32(136839427, _dynamic_grid_fault1_control_state_machine__Cc);
    // Generated from the component: Fault Q10.S1.Isw
    HIL_OutInt32(149422336, _fault_q10_control_state_machine__Ca);
    // Generated from the component: Fault Q10.S2.Isw
    HIL_OutInt32(149422337, _fault_q10_control_state_machine__Cn);
    // Generated from the component: Fault Q10.S3.Isw
    HIL_OutInt32(149422338, _fault_q10_control_state_machine__Cb);
    // Generated from the component: Fault Q10.S4.Isw
    HIL_OutInt32(149422339, _fault_q10_control_state_machine__Cc);
    // Generated from the component: Fault Q3.S1.Isw
    HIL_OutInt32(141033728, _fault_q3_control_state_machine__Ca);
    // Generated from the component: Fault Q3.S2.Isw
    HIL_OutInt32(141033729, _fault_q3_control_state_machine__Cn);
    // Generated from the component: Fault Q3.S3.Isw
    HIL_OutInt32(141033730, _fault_q3_control_state_machine__Cb);
    // Generated from the component: Fault Q3.S4.Isw
    HIL_OutInt32(141033731, _fault_q3_control_state_machine__Cc);
    // Generated from the component: Fault Q7.S1.Isw
    HIL_OutInt32(145228032, _fault_q7_control_state_machine__Ca);
    // Generated from the component: Fault Q7.S2.Isw
    HIL_OutInt32(145228033, _fault_q7_control_state_machine__Cn);
    // Generated from the component: Fault Q7.S3.Isw
    HIL_OutInt32(145228034, _fault_q7_control_state_machine__Cb);
    // Generated from the component: Fault Q7.S4.Isw
    HIL_OutInt32(145228035, _fault_q7_control_state_machine__Cc);
    // Generated from the component: FaultBB.S1.Isw
    HIL_OutInt32(141033732, _faultbb_control_state_machine__Ca);
    // Generated from the component: FaultBB.S2.Isw
    HIL_OutInt32(141033733, _faultbb_control_state_machine__Cn);
    // Generated from the component: FaultBB.S3.Isw
    HIL_OutInt32(141033734, _faultbb_control_state_machine__Cb);
    // Generated from the component: FaultBB.S4.Isw
    HIL_OutInt32(141033735, _faultbb_control_state_machine__Cc);
    // Generated from the component: HV Bay 1.Digital Probe2
    HIL_OutInt32(0xf0043d, _hv_bay_1_logical_operator19__out != 0x0);
    // Generated from the component: HV Bay 1.Sum3
    _hv_bay_1_sum3__out = _hv_bay_1_constant4__out + _hv_bay_1_logical_operator19__out;
    // Generated from the component: HV Bay 1.Digital Probe4
    HIL_OutInt32(0xf0043f, _hv_bay_1_logical_operator18__out != 0x0);
    // Generated from the component: HV Bay 1.Sum4
    _hv_bay_1_sum4__out = _hv_bay_1_constant6__out + _hv_bay_1_logical_operator18__out;
    // Generated from the component: HV Bay 1.Digital Probe1
    HIL_OutInt32(0xf0043c, _hv_bay_1_logical_operator9__out != 0x0);
    // Generated from the component: HV Bay 1.Sum1
    _hv_bay_1_sum1__out = _hv_bay_1_constant1__out + _hv_bay_1_logical_operator9__out;
    // Generated from the component: HV Bay 1.SV Publisher1.IQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_iq_bus_split__out = 0;
    _hv_bay_1_sv_publisher1_iq_bus_split__out1 = 0;
    _hv_bay_1_sv_publisher1_iq_bus_split__out2 = 0;
    _hv_bay_1_sv_publisher1_iq_bus_split__out3 = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.VQ_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_vq_bus_split__out = 0;
    _hv_bay_1_sv_publisher1_vq_bus_split__out1 = 0;
    _hv_bay_1_sv_publisher1_vq_bus_split__out2 = 0;
    _hv_bay_1_sv_publisher1_vq_bus_split__out3 = 0;
    // Generated from the component: Three-phase Meter1.IN
    HIL_OutAO(0x4004, (float)_three_phase_meter1_sumin__out);
    // Generated from the component: Three-phase Meter1.Freq
    HIL_OutAO(0x4000, (float)_three_phase_meter1_pll_to_hz__out);
    // Generated from the component: Three-phase Meter1.measSM.mode_and_dFract
    _three_phase_meter1_meassm_mode_and_dfract__Freq = _three_phase_meter1_pll_to_hz__out;
    {
        _three_phase_meter1_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter1_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter1_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter1_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter1_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter1_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter1_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter1_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter1_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter1_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter1_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter1_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter1_meassm_mode_and_dfract__freqAbs < _three_phase_meter1_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter1_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter1_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter1_meassm_mode_and_dfract__Tfract += _three_phase_meter1_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter1_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter1_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter1_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter1_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter1_meassm_mode_and_dfract__Tfract - _three_phase_meter1_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter1_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter1_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter1_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter1_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter1_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter1_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter1_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter1_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter1_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter1_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter1_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter1_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter1_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter1_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter1_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter1_meassm_mode_and_dfract__dFract = _three_phase_meter1_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter1_meassm_mode_and_dfract__submode = _three_phase_meter1_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter1.TRMsin
    // Generated from the component: Three-phase Meter1.PLL.PID.Kd
    _three_phase_meter1_pll_pid_kd__out = 1.0 * _three_phase_meter1_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter1.PLL.PID.Ki
    _three_phase_meter1_pll_pid_ki__out = 3200.0 * _three_phase_meter1_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter1.PLL.PID.Kp
    _three_phase_meter1_pll_pid_kp__out = 100.0 * _three_phase_meter1_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter1.PLL.term_pk
    // Generated from the component: Three-phase Meter1.PLL.abc to dq.alpha beta to dq
    _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter1_pll_unit_delay1__out);
    _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter1_pll_unit_delay1__out);
    _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter1_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter1.TRMz
    // Generated from the component: Three-phase Meter1.VN
    HIL_OutAO(0x400f, (float)_three_phase_meter1_sumvn__out);
    // Generated from the component: Three-phase Meter1.extra_out
    // Generated from the component: Three-phase Meter10.IN
    HIL_OutAO(0x4015, (float)_three_phase_meter10_sumin__out);
    // Generated from the component: Three-phase Meter10.Freq
    HIL_OutAO(0x4011, (float)_three_phase_meter10_pll_to_hz__out);
    // Generated from the component: Three-phase Meter10.measSM.mode_and_dFract
    _three_phase_meter10_meassm_mode_and_dfract__Freq = _three_phase_meter10_pll_to_hz__out;
    {
        _three_phase_meter10_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter10_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter10_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter10_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter10_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter10_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter10_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter10_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter10_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter10_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter10_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter10_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter10_meassm_mode_and_dfract__freqAbs < _three_phase_meter10_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter10_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter10_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter10_meassm_mode_and_dfract__Tfract += _three_phase_meter10_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter10_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter10_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter10_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter10_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter10_meassm_mode_and_dfract__Tfract - _three_phase_meter10_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter10_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter10_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter10_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter10_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter10_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter10_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter10_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter10_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter10_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter10_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter10_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter10_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter10_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter10_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter10_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter10_meassm_mode_and_dfract__dFract = _three_phase_meter10_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter10_meassm_mode_and_dfract__submode = _three_phase_meter10_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter10.TRMsin
    // Generated from the component: Three-phase Meter10.PLL.PID.Kd
    _three_phase_meter10_pll_pid_kd__out = 1.0 * _three_phase_meter10_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter10.PLL.PID.Ki
    _three_phase_meter10_pll_pid_ki__out = 3200.0 * _three_phase_meter10_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter10.PLL.PID.Kp
    _three_phase_meter10_pll_pid_kp__out = 100.0 * _three_phase_meter10_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter10.PLL.term_pk
    // Generated from the component: Three-phase Meter10.PLL.abc to dq.alpha beta to dq
    _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter10_pll_unit_delay1__out);
    _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter10_pll_unit_delay1__out);
    _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter10_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter10.TRMz
    // Generated from the component: Three-phase Meter10.VN
    HIL_OutAO(0x4020, (float)_three_phase_meter10_sumvn__out);
    // Generated from the component: Three-phase Meter10.extra_out
    // Generated from the component: Three-phase Meter11.IN
    HIL_OutAO(0x4026, (float)_three_phase_meter11_sumin__out);
    // Generated from the component: Three-phase Meter11.Freq
    HIL_OutAO(0x4022, (float)_three_phase_meter11_pll_to_hz__out);
    // Generated from the component: Three-phase Meter11.measSM.mode_and_dFract
    _three_phase_meter11_meassm_mode_and_dfract__Freq = _three_phase_meter11_pll_to_hz__out;
    {
        _three_phase_meter11_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter11_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter11_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter11_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter11_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter11_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter11_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter11_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter11_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter11_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter11_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter11_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter11_meassm_mode_and_dfract__freqAbs < _three_phase_meter11_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter11_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter11_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter11_meassm_mode_and_dfract__Tfract += _three_phase_meter11_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter11_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter11_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter11_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter11_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter11_meassm_mode_and_dfract__Tfract - _three_phase_meter11_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter11_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter11_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter11_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter11_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter11_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter11_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter11_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter11_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter11_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter11_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter11_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter11_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter11_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter11_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter11_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter11_meassm_mode_and_dfract__dFract = _three_phase_meter11_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter11_meassm_mode_and_dfract__submode = _three_phase_meter11_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter11.TRMsin
    // Generated from the component: Three-phase Meter11.PLL.PID.Kd
    _three_phase_meter11_pll_pid_kd__out = 1.0 * _three_phase_meter11_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter11.PLL.PID.Ki
    _three_phase_meter11_pll_pid_ki__out = 3200.0 * _three_phase_meter11_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter11.PLL.PID.Kp
    _three_phase_meter11_pll_pid_kp__out = 100.0 * _three_phase_meter11_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter11.PLL.term_pk
    // Generated from the component: Three-phase Meter11.PLL.abc to dq.alpha beta to dq
    _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter11_pll_unit_delay1__out);
    _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter11_pll_unit_delay1__out);
    _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter11_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter11.TRMz
    // Generated from the component: Three-phase Meter11.VN
    HIL_OutAO(0x4031, (float)_three_phase_meter11_sumvn__out);
    // Generated from the component: Three-phase Meter11.extra_out
    // Generated from the component: Three-phase Meter2.IN
    HIL_OutAO(0x4037, (float)_three_phase_meter2_sumin__out);
    // Generated from the component: Three-phase Meter2.Freq
    HIL_OutAO(0x4033, (float)_three_phase_meter2_pll_to_hz__out);
    // Generated from the component: Three-phase Meter2.measSM.mode_and_dFract
    _three_phase_meter2_meassm_mode_and_dfract__Freq = _three_phase_meter2_pll_to_hz__out;
    {
        _three_phase_meter2_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter2_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter2_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter2_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter2_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter2_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter2_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter2_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter2_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter2_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter2_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter2_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter2_meassm_mode_and_dfract__freqAbs < _three_phase_meter2_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter2_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter2_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter2_meassm_mode_and_dfract__Tfract += _three_phase_meter2_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter2_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter2_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter2_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter2_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter2_meassm_mode_and_dfract__Tfract - _three_phase_meter2_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter2_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter2_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter2_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter2_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter2_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter2_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter2_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter2_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter2_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter2_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter2_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter2_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter2_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter2_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter2_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter2_meassm_mode_and_dfract__dFract = _three_phase_meter2_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter2_meassm_mode_and_dfract__submode = _three_phase_meter2_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter2.TRMsin
    // Generated from the component: Three-phase Meter2.PLL.PID.Kd
    _three_phase_meter2_pll_pid_kd__out = 1.0 * _three_phase_meter2_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter2.PLL.PID.Ki
    _three_phase_meter2_pll_pid_ki__out = 3200.0 * _three_phase_meter2_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter2.PLL.PID.Kp
    _three_phase_meter2_pll_pid_kp__out = 100.0 * _three_phase_meter2_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter2.PLL.term_pk
    // Generated from the component: Three-phase Meter2.PLL.abc to dq.alpha beta to dq
    _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter2_pll_unit_delay1__out);
    _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter2_pll_unit_delay1__out);
    _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter2_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter2.TRMz
    // Generated from the component: Three-phase Meter2.VN
    HIL_OutAO(0x4042, (float)_three_phase_meter2_sumvn__out);
    // Generated from the component: Three-phase Meter2.extra_out
    // Generated from the component: Three-phase Meter3.IN
    HIL_OutAO(0x4048, (float)_three_phase_meter3_sumin__out);
    // Generated from the component: Three-phase Meter3.Freq
    HIL_OutAO(0x4044, (float)_three_phase_meter3_pll_to_hz__out);
    // Generated from the component: Three-phase Meter3.measSM.mode_and_dFract
    _three_phase_meter3_meassm_mode_and_dfract__Freq = _three_phase_meter3_pll_to_hz__out;
    {
        _three_phase_meter3_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter3_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter3_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter3_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter3_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter3_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter3_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter3_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter3_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter3_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter3_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter3_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter3_meassm_mode_and_dfract__freqAbs < _three_phase_meter3_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter3_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter3_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter3_meassm_mode_and_dfract__Tfract += _three_phase_meter3_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter3_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter3_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter3_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter3_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter3_meassm_mode_and_dfract__Tfract - _three_phase_meter3_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter3_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter3_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter3_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter3_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter3_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter3_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter3_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter3_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter3_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter3_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter3_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter3_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter3_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter3_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter3_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter3_meassm_mode_and_dfract__dFract = _three_phase_meter3_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter3_meassm_mode_and_dfract__submode = _three_phase_meter3_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter3.TRMsin
    // Generated from the component: Three-phase Meter3.PLL.PID.Kd
    _three_phase_meter3_pll_pid_kd__out = 1.0 * _three_phase_meter3_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter3.PLL.PID.Ki
    _three_phase_meter3_pll_pid_ki__out = 3200.0 * _three_phase_meter3_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter3.PLL.PID.Kp
    _three_phase_meter3_pll_pid_kp__out = 100.0 * _three_phase_meter3_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter3.PLL.term_pk
    // Generated from the component: Three-phase Meter3.PLL.abc to dq.alpha beta to dq
    _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter3_pll_unit_delay1__out);
    _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter3_pll_unit_delay1__out);
    _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter3_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter3.TRMz
    // Generated from the component: Three-phase Meter3.VN
    HIL_OutAO(0x4053, (float)_three_phase_meter3_sumvn__out);
    // Generated from the component: Three-phase Meter3.extra_out
    // Generated from the component: Three-phase Meter4.IN
    HIL_OutAO(0x4059, (float)_three_phase_meter4_sumin__out);
    // Generated from the component: Three-phase Meter4.Freq
    HIL_OutAO(0x4055, (float)_three_phase_meter4_pll_to_hz__out);
    // Generated from the component: Three-phase Meter4.measSM.mode_and_dFract
    _three_phase_meter4_meassm_mode_and_dfract__Freq = _three_phase_meter4_pll_to_hz__out;
    {
        _three_phase_meter4_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter4_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter4_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter4_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter4_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter4_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter4_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter4_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter4_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter4_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter4_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter4_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter4_meassm_mode_and_dfract__freqAbs < _three_phase_meter4_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter4_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter4_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter4_meassm_mode_and_dfract__Tfract += _three_phase_meter4_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter4_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter4_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter4_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter4_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter4_meassm_mode_and_dfract__Tfract - _three_phase_meter4_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter4_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter4_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter4_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter4_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter4_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter4_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter4_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter4_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter4_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter4_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter4_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter4_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter4_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter4_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter4_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter4_meassm_mode_and_dfract__dFract = _three_phase_meter4_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter4_meassm_mode_and_dfract__submode = _three_phase_meter4_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter4.TRMsin
    // Generated from the component: Three-phase Meter4.PLL.PID.Kd
    _three_phase_meter4_pll_pid_kd__out = 1.0 * _three_phase_meter4_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter4.PLL.PID.Ki
    _three_phase_meter4_pll_pid_ki__out = 3200.0 * _three_phase_meter4_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter4.PLL.PID.Kp
    _three_phase_meter4_pll_pid_kp__out = 100.0 * _three_phase_meter4_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter4.PLL.term_pk
    // Generated from the component: Three-phase Meter4.PLL.abc to dq.alpha beta to dq
    _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter4_pll_unit_delay1__out);
    _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter4_pll_unit_delay1__out);
    _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter4_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter4.TRMz
    // Generated from the component: Three-phase Meter4.VN
    HIL_OutAO(0x4064, (float)_three_phase_meter4_sumvn__out);
    // Generated from the component: Three-phase Meter4.extra_out
    // Generated from the component: Three-phase Meter5.IN
    HIL_OutAO(0x406a, (float)_three_phase_meter5_sumin__out);
    // Generated from the component: Three-phase Meter5.Freq
    HIL_OutAO(0x4066, (float)_three_phase_meter5_pll_to_hz__out);
    // Generated from the component: Three-phase Meter5.measSM.mode_and_dFract
    _three_phase_meter5_meassm_mode_and_dfract__Freq = _three_phase_meter5_pll_to_hz__out;
    {
        _three_phase_meter5_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter5_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter5_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter5_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter5_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter5_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter5_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter5_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter5_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter5_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter5_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter5_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter5_meassm_mode_and_dfract__freqAbs < _three_phase_meter5_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter5_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter5_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter5_meassm_mode_and_dfract__Tfract += _three_phase_meter5_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter5_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter5_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter5_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter5_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter5_meassm_mode_and_dfract__Tfract - _three_phase_meter5_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter5_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter5_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter5_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter5_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter5_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter5_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter5_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter5_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter5_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter5_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter5_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter5_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter5_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter5_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter5_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter5_meassm_mode_and_dfract__dFract = _three_phase_meter5_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter5_meassm_mode_and_dfract__submode = _three_phase_meter5_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter5.TRMsin
    // Generated from the component: Three-phase Meter5.PLL.PID.Kd
    _three_phase_meter5_pll_pid_kd__out = 1.0 * _three_phase_meter5_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter5.PLL.PID.Ki
    _three_phase_meter5_pll_pid_ki__out = 3200.0 * _three_phase_meter5_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter5.PLL.PID.Kp
    _three_phase_meter5_pll_pid_kp__out = 100.0 * _three_phase_meter5_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter5.PLL.term_pk
    // Generated from the component: Three-phase Meter5.PLL.abc to dq.alpha beta to dq
    _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter5_pll_unit_delay1__out);
    _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter5_pll_unit_delay1__out);
    _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter5_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter5.TRMz
    // Generated from the component: Three-phase Meter5.VN
    HIL_OutAO(0x4075, (float)_three_phase_meter5_sumvn__out);
    // Generated from the component: Three-phase Meter5.extra_out
    // Generated from the component: Three-phase Meter6.IN
    HIL_OutAO(0x407b, (float)_three_phase_meter6_sumin__out);
    // Generated from the component: Three-phase Meter6.Freq
    HIL_OutAO(0x4077, (float)_three_phase_meter6_pll_to_hz__out);
    // Generated from the component: Three-phase Meter6.measSM.mode_and_dFract
    _three_phase_meter6_meassm_mode_and_dfract__Freq = _three_phase_meter6_pll_to_hz__out;
    {
        _three_phase_meter6_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter6_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter6_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter6_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter6_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter6_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter6_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter6_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter6_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter6_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter6_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter6_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter6_meassm_mode_and_dfract__freqAbs < _three_phase_meter6_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter6_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter6_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter6_meassm_mode_and_dfract__Tfract += _three_phase_meter6_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter6_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter6_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter6_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter6_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter6_meassm_mode_and_dfract__Tfract - _three_phase_meter6_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter6_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter6_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter6_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter6_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter6_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter6_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter6_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter6_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter6_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter6_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter6_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter6_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter6_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter6_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter6_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter6_meassm_mode_and_dfract__dFract = _three_phase_meter6_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter6_meassm_mode_and_dfract__submode = _three_phase_meter6_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter6.TRMsin
    // Generated from the component: Three-phase Meter6.PLL.PID.Kd
    _three_phase_meter6_pll_pid_kd__out = 1.0 * _three_phase_meter6_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter6.PLL.PID.Ki
    _three_phase_meter6_pll_pid_ki__out = 3200.0 * _three_phase_meter6_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter6.PLL.PID.Kp
    _three_phase_meter6_pll_pid_kp__out = 100.0 * _three_phase_meter6_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter6.PLL.term_pk
    // Generated from the component: Three-phase Meter6.PLL.abc to dq.alpha beta to dq
    _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter6_pll_unit_delay1__out);
    _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter6_pll_unit_delay1__out);
    _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter6_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter6.TRMz
    // Generated from the component: Three-phase Meter6.VN
    HIL_OutAO(0x4086, (float)_three_phase_meter6_sumvn__out);
    // Generated from the component: Three-phase Meter6.extra_out
    // Generated from the component: Three-phase Meter7.IN
    HIL_OutAO(0x408c, (float)_three_phase_meter7_sumin__out);
    // Generated from the component: Three-phase Meter7.Freq
    HIL_OutAO(0x4088, (float)_three_phase_meter7_pll_to_hz__out);
    // Generated from the component: Three-phase Meter7.measSM.mode_and_dFract
    _three_phase_meter7_meassm_mode_and_dfract__Freq = _three_phase_meter7_pll_to_hz__out;
    {
        _three_phase_meter7_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter7_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter7_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter7_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter7_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter7_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter7_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter7_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter7_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter7_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter7_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter7_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter7_meassm_mode_and_dfract__freqAbs < _three_phase_meter7_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter7_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter7_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter7_meassm_mode_and_dfract__Tfract += _three_phase_meter7_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter7_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter7_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter7_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter7_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter7_meassm_mode_and_dfract__Tfract - _three_phase_meter7_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter7_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter7_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter7_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter7_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter7_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter7_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter7_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter7_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter7_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter7_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter7_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter7_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter7_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter7_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter7_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter7_meassm_mode_and_dfract__dFract = _three_phase_meter7_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter7_meassm_mode_and_dfract__submode = _three_phase_meter7_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter7.TRMsin
    // Generated from the component: Three-phase Meter7.PLL.PID.Kd
    _three_phase_meter7_pll_pid_kd__out = 1.0 * _three_phase_meter7_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter7.PLL.PID.Ki
    _three_phase_meter7_pll_pid_ki__out = 3200.0 * _three_phase_meter7_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter7.PLL.PID.Kp
    _three_phase_meter7_pll_pid_kp__out = 100.0 * _three_phase_meter7_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter7.PLL.term_pk
    // Generated from the component: Three-phase Meter7.PLL.abc to dq.alpha beta to dq
    _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter7_pll_unit_delay1__out);
    _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter7_pll_unit_delay1__out);
    _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter7_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter7.TRMz
    // Generated from the component: Three-phase Meter7.VN
    HIL_OutAO(0x4097, (float)_three_phase_meter7_sumvn__out);
    // Generated from the component: Three-phase Meter7.extra_out
    // Generated from the component: Three-phase Meter8.IN
    HIL_OutAO(0x409d, (float)_three_phase_meter8_sumin__out);
    // Generated from the component: Three-phase Meter8.Freq
    HIL_OutAO(0x4099, (float)_three_phase_meter8_pll_to_hz__out);
    // Generated from the component: Three-phase Meter8.measSM.mode_and_dFract
    _three_phase_meter8_meassm_mode_and_dfract__Freq = _three_phase_meter8_pll_to_hz__out;
    {
        _three_phase_meter8_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter8_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter8_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter8_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter8_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter8_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter8_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter8_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter8_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter8_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter8_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter8_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter8_meassm_mode_and_dfract__freqAbs < _three_phase_meter8_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter8_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter8_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter8_meassm_mode_and_dfract__Tfract += _three_phase_meter8_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter8_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter8_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter8_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter8_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter8_meassm_mode_and_dfract__Tfract - _three_phase_meter8_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter8_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter8_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter8_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter8_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter8_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter8_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter8_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter8_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter8_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter8_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter8_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter8_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter8_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter8_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter8_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter8_meassm_mode_and_dfract__dFract = _three_phase_meter8_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter8_meassm_mode_and_dfract__submode = _three_phase_meter8_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter8.TRMsin
    // Generated from the component: Three-phase Meter8.PLL.PID.Kd
    _three_phase_meter8_pll_pid_kd__out = 1.0 * _three_phase_meter8_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter8.PLL.PID.Ki
    _three_phase_meter8_pll_pid_ki__out = 3200.0 * _three_phase_meter8_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter8.PLL.PID.Kp
    _three_phase_meter8_pll_pid_kp__out = 100.0 * _three_phase_meter8_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter8.PLL.term_pk
    // Generated from the component: Three-phase Meter8.PLL.abc to dq.alpha beta to dq
    _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter8_pll_unit_delay1__out);
    _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter8_pll_unit_delay1__out);
    _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter8_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter8.TRMz
    // Generated from the component: Three-phase Meter8.VN
    HIL_OutAO(0x40a8, (float)_three_phase_meter8_sumvn__out);
    // Generated from the component: Three-phase Meter8.extra_out
    // Generated from the component: Three-phase Meter9.IN
    HIL_OutAO(0x40ae, (float)_three_phase_meter9_sumin__out);
    // Generated from the component: Three-phase Meter9.Freq
    HIL_OutAO(0x40aa, (float)_three_phase_meter9_pll_to_hz__out);
    // Generated from the component: Three-phase Meter9.measSM.mode_and_dFract
    _three_phase_meter9_meassm_mode_and_dfract__Freq = _three_phase_meter9_pll_to_hz__out;
    {
        _three_phase_meter9_meassm_mode_and_dfract__freqAbs = fabs ( _three_phase_meter9_meassm_mode_and_dfract__Freq ) ;
        if ( _three_phase_meter9_meassm_mode_and_dfract__reset == 1 )     {
            _three_phase_meter9_meassm_mode_and_dfract__mode = 1 ;
            _three_phase_meter9_meassm_mode_and_dfract__Tfract = 0.0 ;
            _three_phase_meter9_meassm_mode_and_dfract__cycle_counter = 0 ;
            _three_phase_meter9_meassm_mode_and_dfract__reset = 0 ;
        }
        else if ( _three_phase_meter9_meassm_mode_and_dfract__freqAbs < 1.0 )     {
            _three_phase_meter9_meassm_mode_and_dfract__mode = 2 ;
            if ( _three_phase_meter9_meassm_mode_and_dfract__Tfract > 0.0 )         {
                _three_phase_meter9_meassm_mode_and_dfract__reset = 1 ;
            }
        }
        else if ( ( _three_phase_meter9_meassm_mode_and_dfract__Tfract < 1.0 ) && ( _three_phase_meter9_meassm_mode_and_dfract__freqAbs < _three_phase_meter9_meassm_mode_and_dfract__fMax ) )     {
            _three_phase_meter9_meassm_mode_and_dfract__dFract_state = 0.0001 * _three_phase_meter9_meassm_mode_and_dfract__freqAbs ;
            _three_phase_meter9_meassm_mode_and_dfract__Tfract += _three_phase_meter9_meassm_mode_and_dfract__dFract_state ;
            if ( _three_phase_meter9_meassm_mode_and_dfract__Tfract >= 1.0 )         {
                _three_phase_meter9_meassm_mode_and_dfract__cycle_counter += 1 ;
                if ( _three_phase_meter9_meassm_mode_and_dfract__cycle_counter >= 1 )             {
                    _three_phase_meter9_meassm_mode_and_dfract__dFract_state = 1.0 - ( _three_phase_meter9_meassm_mode_and_dfract__Tfract - _three_phase_meter9_meassm_mode_and_dfract__dFract_state ) ;
                }
                else             {
                    _three_phase_meter9_meassm_mode_and_dfract__Tfract -= 1.0 ;
                }
            }
            _three_phase_meter9_meassm_mode_and_dfract__dFract_state /= 1 ;
            _three_phase_meter9_meassm_mode_and_dfract__mode = 3 ;
            if ( _three_phase_meter9_meassm_mode_and_dfract__Tfract < 0.25 )         {
                _three_phase_meter9_meassm_mode_and_dfract__submode_state = 1 ;
            }
            else if ( _three_phase_meter9_meassm_mode_and_dfract__Tfract < 0.5 )         {
                _three_phase_meter9_meassm_mode_and_dfract__submode_state = 2 ;
            }
            else if ( _three_phase_meter9_meassm_mode_and_dfract__Tfract < 0.75 )         {
                _three_phase_meter9_meassm_mode_and_dfract__submode_state = 3 ;
            }
            else         {
                _three_phase_meter9_meassm_mode_and_dfract__submode_state = 4 ;
            }
        }
        else if ( _three_phase_meter9_meassm_mode_and_dfract__Tfract >= 1.0 )     {
            _three_phase_meter9_meassm_mode_and_dfract__mode = 4 ;
            _three_phase_meter9_meassm_mode_and_dfract__reset = 1 ;
        }
        else     {
            _three_phase_meter9_meassm_mode_and_dfract__mode = 5 ;
            _three_phase_meter9_meassm_mode_and_dfract__reset = 1 ;
        }
        _three_phase_meter9_meassm_mode_and_dfract__dFract = _three_phase_meter9_meassm_mode_and_dfract__dFract_state ;
        _three_phase_meter9_meassm_mode_and_dfract__submode = _three_phase_meter9_meassm_mode_and_dfract__submode_state ;
    }
    // Generated from the component: Three-phase Meter9.TRMsin
    // Generated from the component: Three-phase Meter9.PLL.PID.Kd
    _three_phase_meter9_pll_pid_kd__out = 1.0 * _three_phase_meter9_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter9.PLL.PID.Ki
    _three_phase_meter9_pll_pid_ki__out = 3200.0 * _three_phase_meter9_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter9.PLL.PID.Kp
    _three_phase_meter9_pll_pid_kp__out = 100.0 * _three_phase_meter9_pll_normalize__in2_pu;
    // Generated from the component: Three-phase Meter9.PLL.term_pk
    // Generated from the component: Three-phase Meter9.PLL.abc to dq.alpha beta to dq
    _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_three_phase_meter9_pll_unit_delay1__out);
    _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_three_phase_meter9_pll_unit_delay1__out);
    _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__d = _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__alpha - _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__q = _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k1 * _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__alpha + _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__k2 * _three_phase_meter9_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Three-phase Meter9.TRMz
    // Generated from the component: Three-phase Meter9.VN
    HIL_OutAO(0x40b9, (float)_three_phase_meter9_sumvn__out);
    // Generated from the component: Three-phase Meter9.extra_out
    // Generated from the component: Bay 1.Termination9
    // Generated from the component: Bay 1.Bus Join7
    _bay_1_bus_join7__out[0] = _bay_1_sum3__out;
    _bay_1_bus_join7__out[1] = _bay_1_constant5__out;
    _bay_1_bus_join7__out[2] = _bay_1_sum4__out;
    _bay_1_bus_join7__out[3] = _bay_1_constant7__out;
    // Generated from the component: Bay 1.Bus Join6
    _bay_1_bus_join6__out[0] = _bay_1_sum1__out;
    _bay_1_bus_join6__out[1] = _bay_1_constant2__out;
    // Generated from the component: Bay 10.Termination9
    // Generated from the component: Bay 10.Bus Join7
    _bay_10_bus_join7__out[0] = _bay_10_sum3__out;
    _bay_10_bus_join7__out[1] = _bay_10_constant5__out;
    _bay_10_bus_join7__out[2] = _bay_10_sum4__out;
    _bay_10_bus_join7__out[3] = _bay_10_constant7__out;
    // Generated from the component: Bay 10.Bus Join6
    _bay_10_bus_join6__out[0] = _bay_10_sum1__out;
    _bay_10_bus_join6__out[1] = _bay_10_constant2__out;
    // Generated from the component: Bay 2.Termination9
    // Generated from the component: Bay 2.Bus Join7
    _bay_2_bus_join7__out[0] = _bay_2_sum3__out;
    _bay_2_bus_join7__out[1] = _bay_2_constant5__out;
    _bay_2_bus_join7__out[2] = _bay_2_sum4__out;
    _bay_2_bus_join7__out[3] = _bay_2_constant7__out;
    // Generated from the component: Bay 2.Bus Join6
    _bay_2_bus_join6__out[0] = _bay_2_sum1__out;
    _bay_2_bus_join6__out[1] = _bay_2_constant2__out;
    // Generated from the component: Bay 3.Termination9
    // Generated from the component: Bay 3.Bus Join7
    _bay_3_bus_join7__out[0] = _bay_3_sum3__out;
    _bay_3_bus_join7__out[1] = _bay_3_constant5__out;
    _bay_3_bus_join7__out[2] = _bay_3_sum4__out;
    _bay_3_bus_join7__out[3] = _bay_3_constant7__out;
    // Generated from the component: Bay 3.Bus Join6
    _bay_3_bus_join6__out[0] = _bay_3_sum1__out;
    _bay_3_bus_join6__out[1] = _bay_3_constant2__out;
    // Generated from the component: Bay 4.Termination9
    // Generated from the component: Bay 4.Bus Join7
    _bay_4_bus_join7__out[0] = _bay_4_sum3__out;
    _bay_4_bus_join7__out[1] = _bay_4_constant5__out;
    _bay_4_bus_join7__out[2] = _bay_4_sum4__out;
    _bay_4_bus_join7__out[3] = _bay_4_constant7__out;
    // Generated from the component: Bay 4.Bus Join6
    _bay_4_bus_join6__out[0] = _bay_4_sum1__out;
    _bay_4_bus_join6__out[1] = _bay_4_constant2__out;
    // Generated from the component: Bay 5.Termination9
    // Generated from the component: Bay 5.Bus Join7
    _bay_5_bus_join7__out[0] = _bay_5_sum3__out;
    _bay_5_bus_join7__out[1] = _bay_5_constant5__out;
    _bay_5_bus_join7__out[2] = _bay_5_sum4__out;
    _bay_5_bus_join7__out[3] = _bay_5_constant7__out;
    // Generated from the component: Bay 5.Bus Join6
    _bay_5_bus_join6__out[0] = _bay_5_sum1__out;
    _bay_5_bus_join6__out[1] = _bay_5_constant2__out;
    // Generated from the component: Bay 6.Termination9
    // Generated from the component: Bay 6.Bus Join7
    _bay_6_bus_join7__out[0] = _bay_6_sum3__out;
    _bay_6_bus_join7__out[1] = _bay_6_constant5__out;
    _bay_6_bus_join7__out[2] = _bay_6_sum4__out;
    _bay_6_bus_join7__out[3] = _bay_6_constant7__out;
    // Generated from the component: Bay 6.Bus Join6
    _bay_6_bus_join6__out[0] = _bay_6_sum1__out;
    _bay_6_bus_join6__out[1] = _bay_6_constant2__out;
    // Generated from the component: Bay 7.Termination9
    // Generated from the component: Bay 7.Bus Join7
    _bay_7_bus_join7__out[0] = _bay_7_sum3__out;
    _bay_7_bus_join7__out[1] = _bay_7_constant5__out;
    _bay_7_bus_join7__out[2] = _bay_7_sum4__out;
    _bay_7_bus_join7__out[3] = _bay_7_constant7__out;
    // Generated from the component: Bay 7.Bus Join6
    _bay_7_bus_join6__out[0] = _bay_7_sum1__out;
    _bay_7_bus_join6__out[1] = _bay_7_constant2__out;
    // Generated from the component: Bay 8.Termination9
    // Generated from the component: Bay 8.Bus Join7
    _bay_8_bus_join7__out[0] = _bay_8_sum3__out;
    _bay_8_bus_join7__out[1] = _bay_8_constant5__out;
    _bay_8_bus_join7__out[2] = _bay_8_sum4__out;
    _bay_8_bus_join7__out[3] = _bay_8_constant7__out;
    // Generated from the component: Bay 8.Bus Join6
    _bay_8_bus_join6__out[0] = _bay_8_sum1__out;
    _bay_8_bus_join6__out[1] = _bay_8_constant2__out;
    // Generated from the component: Bay 9.Termination9
    // Generated from the component: Bay 9.Bus Join7
    _bay_9_bus_join7__out[0] = _bay_9_sum3__out;
    _bay_9_bus_join7__out[1] = _bay_9_constant5__out;
    _bay_9_bus_join7__out[2] = _bay_9_sum4__out;
    _bay_9_bus_join7__out[3] = _bay_9_constant7__out;
    // Generated from the component: Bay 9.Bus Join6
    _bay_9_bus_join6__out[0] = _bay_9_sum1__out;
    _bay_9_bus_join6__out[1] = _bay_9_constant2__out;
    // Generated from the component: HV Bay 1.Bus Join7
    _hv_bay_1_bus_join7__out[0] = _hv_bay_1_sum3__out;
    _hv_bay_1_bus_join7__out[1] = _hv_bay_1_constant5__out;
    _hv_bay_1_bus_join7__out[2] = _hv_bay_1_sum4__out;
    _hv_bay_1_bus_join7__out[3] = _hv_bay_1_constant7__out;
    // Generated from the component: HV Bay 1.Bus Join10
    _hv_bay_1_bus_join10__out[0] = _hv_bay_1_constant2__out;
    _hv_bay_1_bus_join10__out[1] = _hv_bay_1_sum1__out;
    // Generated from the component: Three-phase Meter1.IN_RMS_calc.1ph_RMS
    _three_phase_meter1_in_rms_calc_1ph_rms__IN1 = _three_phase_meter1_sumin__out;
    _three_phase_meter1_in_rms_calc_1ph_rms__dFract = _three_phase_meter1_meassm_mode_and_dfract__dFract;
    _three_phase_meter1_in_rms_calc_1ph_rms__mode = _three_phase_meter1_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter1_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter1_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter1_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter1_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter1_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter1_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter1_in_rms_calc_1ph_rms__IN1 * _three_phase_meter1_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter1_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter1_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter1_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter1_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter1_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter1_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter1.I_RMS_calc.RMS
    _three_phase_meter1_i_rms_calc_rms__IN1 = _three_phase_meter1_ia_ia2__out;
    _three_phase_meter1_i_rms_calc_rms__IN2 = _three_phase_meter1_ib_ia2__out;
    _three_phase_meter1_i_rms_calc_rms__IN3 = _three_phase_meter1_ic_ia2__out;
    _three_phase_meter1_i_rms_calc_rms__dFract = _three_phase_meter1_meassm_mode_and_dfract__dFract;
    _three_phase_meter1_i_rms_calc_rms__mode = _three_phase_meter1_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter1_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter1_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter1_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter1_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter1_i_rms_calc_rms__RMS1_state = _three_phase_meter1_i_rms_calc_rms__IN1 ;
            _three_phase_meter1_i_rms_calc_rms__RMS2_state = _three_phase_meter1_i_rms_calc_rms__IN2 ;
            _three_phase_meter1_i_rms_calc_rms__RMS3_state = _three_phase_meter1_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter1_i_rms_calc_rms__rmsSum1 += _three_phase_meter1_i_rms_calc_rms__dFract * ( _three_phase_meter1_i_rms_calc_rms__IN1 * _three_phase_meter1_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter1_i_rms_calc_rms__rmsSum2 += _three_phase_meter1_i_rms_calc_rms__dFract * ( _three_phase_meter1_i_rms_calc_rms__IN2 * _three_phase_meter1_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter1_i_rms_calc_rms__rmsSum3 += _three_phase_meter1_i_rms_calc_rms__dFract * ( _three_phase_meter1_i_rms_calc_rms__IN3 * _three_phase_meter1_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter1_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter1_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter1_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter1_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter1_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter1_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter1_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter1_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter1_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter1_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter1_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter1_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter1_i_rms_calc_rms__RMS1 = _three_phase_meter1_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter1_i_rms_calc_rms__RMS2 = _three_phase_meter1_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter1_i_rms_calc_rms__RMS3 = _three_phase_meter1_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter1.VLL_RMS_calc.RMS
    _three_phase_meter1_vll_rms_calc_rms__IN1 = _three_phase_meter1_vab_va2__out;
    _three_phase_meter1_vll_rms_calc_rms__IN2 = _three_phase_meter1_vbc_va2__out;
    _three_phase_meter1_vll_rms_calc_rms__IN3 = _three_phase_meter1_vca_va2__out;
    _three_phase_meter1_vll_rms_calc_rms__dFract = _three_phase_meter1_meassm_mode_and_dfract__dFract;
    _three_phase_meter1_vll_rms_calc_rms__mode = _three_phase_meter1_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter1_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter1_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter1_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter1_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter1_vll_rms_calc_rms__RMS1_state = _three_phase_meter1_vll_rms_calc_rms__IN1 ;
            _three_phase_meter1_vll_rms_calc_rms__RMS2_state = _three_phase_meter1_vll_rms_calc_rms__IN2 ;
            _three_phase_meter1_vll_rms_calc_rms__RMS3_state = _three_phase_meter1_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter1_vll_rms_calc_rms__rmsSum1 += _three_phase_meter1_vll_rms_calc_rms__dFract * ( _three_phase_meter1_vll_rms_calc_rms__IN1 * _three_phase_meter1_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter1_vll_rms_calc_rms__rmsSum2 += _three_phase_meter1_vll_rms_calc_rms__dFract * ( _three_phase_meter1_vll_rms_calc_rms__IN2 * _three_phase_meter1_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter1_vll_rms_calc_rms__rmsSum3 += _three_phase_meter1_vll_rms_calc_rms__dFract * ( _three_phase_meter1_vll_rms_calc_rms__IN3 * _three_phase_meter1_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter1_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter1_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter1_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter1_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter1_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter1_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter1_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter1_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter1_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter1_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter1_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter1_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter1_vll_rms_calc_rms__RMS1 = _three_phase_meter1_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter1_vll_rms_calc_rms__RMS2 = _three_phase_meter1_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter1_vll_rms_calc_rms__RMS3 = _three_phase_meter1_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter1.VLn_RMS_calc.RMS
    _three_phase_meter1_vln_rms_calc_rms__IN1 = _three_phase_meter1_van_va2__out;
    _three_phase_meter1_vln_rms_calc_rms__IN2 = _three_phase_meter1_vbn_va2__out;
    _three_phase_meter1_vln_rms_calc_rms__IN3 = _three_phase_meter1_vcn_va2__out;
    _three_phase_meter1_vln_rms_calc_rms__dFract = _three_phase_meter1_meassm_mode_and_dfract__dFract;
    _three_phase_meter1_vln_rms_calc_rms__mode = _three_phase_meter1_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter1_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter1_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter1_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter1_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter1_vln_rms_calc_rms__RMS1_state = _three_phase_meter1_vln_rms_calc_rms__IN1 ;
            _three_phase_meter1_vln_rms_calc_rms__RMS2_state = _three_phase_meter1_vln_rms_calc_rms__IN2 ;
            _three_phase_meter1_vln_rms_calc_rms__RMS3_state = _three_phase_meter1_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter1_vln_rms_calc_rms__rmsSum1 += _three_phase_meter1_vln_rms_calc_rms__dFract * ( _three_phase_meter1_vln_rms_calc_rms__IN1 * _three_phase_meter1_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter1_vln_rms_calc_rms__rmsSum2 += _three_phase_meter1_vln_rms_calc_rms__dFract * ( _three_phase_meter1_vln_rms_calc_rms__IN2 * _three_phase_meter1_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter1_vln_rms_calc_rms__rmsSum3 += _three_phase_meter1_vln_rms_calc_rms__dFract * ( _three_phase_meter1_vln_rms_calc_rms__IN3 * _three_phase_meter1_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter1_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter1_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter1_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter1_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter1_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter1_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter1_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter1_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter1_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter1_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter1_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter1_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter1_vln_rms_calc_rms__RMS1 = _three_phase_meter1_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter1_vln_rms_calc_rms__RMS2 = _three_phase_meter1_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter1_vln_rms_calc_rms__RMS3 = _three_phase_meter1_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter1.VN_RMS_calc.1ph_RMS
    _three_phase_meter1_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter1_sumvn__out;
    _three_phase_meter1_vn_rms_calc_1ph_rms__dFract = _three_phase_meter1_meassm_mode_and_dfract__dFract;
    _three_phase_meter1_vn_rms_calc_1ph_rms__mode = _three_phase_meter1_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter1_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter1_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter1_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter1_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter1_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter1_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter1_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter1_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter1_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter1.termSubMode
    // Generated from the component: Three-phase Meter1.PLL.PID.Sum8
    _three_phase_meter1_pll_pid_sum8__out = _three_phase_meter1_pll_pid_kd__out - _three_phase_meter1_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter10.IN_RMS_calc.1ph_RMS
    _three_phase_meter10_in_rms_calc_1ph_rms__IN1 = _three_phase_meter10_sumin__out;
    _three_phase_meter10_in_rms_calc_1ph_rms__dFract = _three_phase_meter10_meassm_mode_and_dfract__dFract;
    _three_phase_meter10_in_rms_calc_1ph_rms__mode = _three_phase_meter10_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter10_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter10_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter10_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter10_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter10_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter10_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter10_in_rms_calc_1ph_rms__IN1 * _three_phase_meter10_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter10_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter10_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter10_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter10_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter10_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter10_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter10.I_RMS_calc.RMS
    _three_phase_meter10_i_rms_calc_rms__IN1 = _three_phase_meter10_ia_ia2__out;
    _three_phase_meter10_i_rms_calc_rms__IN2 = _three_phase_meter10_ib_ia2__out;
    _three_phase_meter10_i_rms_calc_rms__IN3 = _three_phase_meter10_ic_ia2__out;
    _three_phase_meter10_i_rms_calc_rms__dFract = _three_phase_meter10_meassm_mode_and_dfract__dFract;
    _three_phase_meter10_i_rms_calc_rms__mode = _three_phase_meter10_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter10_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter10_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter10_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter10_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter10_i_rms_calc_rms__RMS1_state = _three_phase_meter10_i_rms_calc_rms__IN1 ;
            _three_phase_meter10_i_rms_calc_rms__RMS2_state = _three_phase_meter10_i_rms_calc_rms__IN2 ;
            _three_phase_meter10_i_rms_calc_rms__RMS3_state = _three_phase_meter10_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter10_i_rms_calc_rms__rmsSum1 += _three_phase_meter10_i_rms_calc_rms__dFract * ( _three_phase_meter10_i_rms_calc_rms__IN1 * _three_phase_meter10_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter10_i_rms_calc_rms__rmsSum2 += _three_phase_meter10_i_rms_calc_rms__dFract * ( _three_phase_meter10_i_rms_calc_rms__IN2 * _three_phase_meter10_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter10_i_rms_calc_rms__rmsSum3 += _three_phase_meter10_i_rms_calc_rms__dFract * ( _three_phase_meter10_i_rms_calc_rms__IN3 * _three_phase_meter10_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter10_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter10_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter10_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter10_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter10_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter10_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter10_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter10_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter10_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter10_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter10_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter10_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter10_i_rms_calc_rms__RMS1 = _three_phase_meter10_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter10_i_rms_calc_rms__RMS2 = _three_phase_meter10_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter10_i_rms_calc_rms__RMS3 = _three_phase_meter10_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter10.VLL_RMS_calc.RMS
    _three_phase_meter10_vll_rms_calc_rms__IN1 = _three_phase_meter10_vab_va2__out;
    _three_phase_meter10_vll_rms_calc_rms__IN2 = _three_phase_meter10_vbc_va2__out;
    _three_phase_meter10_vll_rms_calc_rms__IN3 = _three_phase_meter10_vca_va2__out;
    _three_phase_meter10_vll_rms_calc_rms__dFract = _three_phase_meter10_meassm_mode_and_dfract__dFract;
    _three_phase_meter10_vll_rms_calc_rms__mode = _three_phase_meter10_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter10_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter10_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter10_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter10_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter10_vll_rms_calc_rms__RMS1_state = _three_phase_meter10_vll_rms_calc_rms__IN1 ;
            _three_phase_meter10_vll_rms_calc_rms__RMS2_state = _three_phase_meter10_vll_rms_calc_rms__IN2 ;
            _three_phase_meter10_vll_rms_calc_rms__RMS3_state = _three_phase_meter10_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter10_vll_rms_calc_rms__rmsSum1 += _three_phase_meter10_vll_rms_calc_rms__dFract * ( _three_phase_meter10_vll_rms_calc_rms__IN1 * _three_phase_meter10_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter10_vll_rms_calc_rms__rmsSum2 += _three_phase_meter10_vll_rms_calc_rms__dFract * ( _three_phase_meter10_vll_rms_calc_rms__IN2 * _three_phase_meter10_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter10_vll_rms_calc_rms__rmsSum3 += _three_phase_meter10_vll_rms_calc_rms__dFract * ( _three_phase_meter10_vll_rms_calc_rms__IN3 * _three_phase_meter10_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter10_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter10_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter10_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter10_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter10_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter10_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter10_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter10_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter10_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter10_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter10_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter10_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter10_vll_rms_calc_rms__RMS1 = _three_phase_meter10_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter10_vll_rms_calc_rms__RMS2 = _three_phase_meter10_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter10_vll_rms_calc_rms__RMS3 = _three_phase_meter10_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter10.VLn_RMS_calc.RMS
    _three_phase_meter10_vln_rms_calc_rms__IN1 = _three_phase_meter10_van_va2__out;
    _three_phase_meter10_vln_rms_calc_rms__IN2 = _three_phase_meter10_vbn_va2__out;
    _three_phase_meter10_vln_rms_calc_rms__IN3 = _three_phase_meter10_vcn_va2__out;
    _three_phase_meter10_vln_rms_calc_rms__dFract = _three_phase_meter10_meassm_mode_and_dfract__dFract;
    _three_phase_meter10_vln_rms_calc_rms__mode = _three_phase_meter10_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter10_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter10_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter10_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter10_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter10_vln_rms_calc_rms__RMS1_state = _three_phase_meter10_vln_rms_calc_rms__IN1 ;
            _three_phase_meter10_vln_rms_calc_rms__RMS2_state = _three_phase_meter10_vln_rms_calc_rms__IN2 ;
            _three_phase_meter10_vln_rms_calc_rms__RMS3_state = _three_phase_meter10_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter10_vln_rms_calc_rms__rmsSum1 += _three_phase_meter10_vln_rms_calc_rms__dFract * ( _three_phase_meter10_vln_rms_calc_rms__IN1 * _three_phase_meter10_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter10_vln_rms_calc_rms__rmsSum2 += _three_phase_meter10_vln_rms_calc_rms__dFract * ( _three_phase_meter10_vln_rms_calc_rms__IN2 * _three_phase_meter10_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter10_vln_rms_calc_rms__rmsSum3 += _three_phase_meter10_vln_rms_calc_rms__dFract * ( _three_phase_meter10_vln_rms_calc_rms__IN3 * _three_phase_meter10_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter10_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter10_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter10_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter10_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter10_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter10_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter10_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter10_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter10_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter10_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter10_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter10_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter10_vln_rms_calc_rms__RMS1 = _three_phase_meter10_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter10_vln_rms_calc_rms__RMS2 = _three_phase_meter10_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter10_vln_rms_calc_rms__RMS3 = _three_phase_meter10_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter10.VN_RMS_calc.1ph_RMS
    _three_phase_meter10_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter10_sumvn__out;
    _three_phase_meter10_vn_rms_calc_1ph_rms__dFract = _three_phase_meter10_meassm_mode_and_dfract__dFract;
    _three_phase_meter10_vn_rms_calc_1ph_rms__mode = _three_phase_meter10_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter10_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter10_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter10_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter10_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter10_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter10_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter10_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter10_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter10_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter10.termSubMode
    // Generated from the component: Three-phase Meter10.PLL.PID.Sum8
    _three_phase_meter10_pll_pid_sum8__out = _three_phase_meter10_pll_pid_kd__out - _three_phase_meter10_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter11.IN_RMS_calc.1ph_RMS
    _three_phase_meter11_in_rms_calc_1ph_rms__IN1 = _three_phase_meter11_sumin__out;
    _three_phase_meter11_in_rms_calc_1ph_rms__dFract = _three_phase_meter11_meassm_mode_and_dfract__dFract;
    _three_phase_meter11_in_rms_calc_1ph_rms__mode = _three_phase_meter11_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter11_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter11_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter11_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter11_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter11_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter11_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter11_in_rms_calc_1ph_rms__IN1 * _three_phase_meter11_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter11_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter11_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter11_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter11_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter11_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter11_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter11.I_RMS_calc.RMS
    _three_phase_meter11_i_rms_calc_rms__IN1 = _three_phase_meter11_ia_ia2__out;
    _three_phase_meter11_i_rms_calc_rms__IN2 = _three_phase_meter11_ib_ia2__out;
    _three_phase_meter11_i_rms_calc_rms__IN3 = _three_phase_meter11_ic_ia2__out;
    _three_phase_meter11_i_rms_calc_rms__dFract = _three_phase_meter11_meassm_mode_and_dfract__dFract;
    _three_phase_meter11_i_rms_calc_rms__mode = _three_phase_meter11_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter11_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter11_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter11_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter11_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter11_i_rms_calc_rms__RMS1_state = _three_phase_meter11_i_rms_calc_rms__IN1 ;
            _three_phase_meter11_i_rms_calc_rms__RMS2_state = _three_phase_meter11_i_rms_calc_rms__IN2 ;
            _three_phase_meter11_i_rms_calc_rms__RMS3_state = _three_phase_meter11_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter11_i_rms_calc_rms__rmsSum1 += _three_phase_meter11_i_rms_calc_rms__dFract * ( _three_phase_meter11_i_rms_calc_rms__IN1 * _three_phase_meter11_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter11_i_rms_calc_rms__rmsSum2 += _three_phase_meter11_i_rms_calc_rms__dFract * ( _three_phase_meter11_i_rms_calc_rms__IN2 * _three_phase_meter11_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter11_i_rms_calc_rms__rmsSum3 += _three_phase_meter11_i_rms_calc_rms__dFract * ( _three_phase_meter11_i_rms_calc_rms__IN3 * _three_phase_meter11_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter11_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter11_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter11_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter11_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter11_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter11_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter11_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter11_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter11_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter11_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter11_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter11_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter11_i_rms_calc_rms__RMS1 = _three_phase_meter11_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter11_i_rms_calc_rms__RMS2 = _three_phase_meter11_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter11_i_rms_calc_rms__RMS3 = _three_phase_meter11_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter11.VLL_RMS_calc.RMS
    _three_phase_meter11_vll_rms_calc_rms__IN1 = _three_phase_meter11_vab_va2__out;
    _three_phase_meter11_vll_rms_calc_rms__IN2 = _three_phase_meter11_vbc_va2__out;
    _three_phase_meter11_vll_rms_calc_rms__IN3 = _three_phase_meter11_vca_va2__out;
    _three_phase_meter11_vll_rms_calc_rms__dFract = _three_phase_meter11_meassm_mode_and_dfract__dFract;
    _three_phase_meter11_vll_rms_calc_rms__mode = _three_phase_meter11_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter11_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter11_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter11_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter11_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter11_vll_rms_calc_rms__RMS1_state = _three_phase_meter11_vll_rms_calc_rms__IN1 ;
            _three_phase_meter11_vll_rms_calc_rms__RMS2_state = _three_phase_meter11_vll_rms_calc_rms__IN2 ;
            _three_phase_meter11_vll_rms_calc_rms__RMS3_state = _three_phase_meter11_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter11_vll_rms_calc_rms__rmsSum1 += _three_phase_meter11_vll_rms_calc_rms__dFract * ( _three_phase_meter11_vll_rms_calc_rms__IN1 * _three_phase_meter11_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter11_vll_rms_calc_rms__rmsSum2 += _three_phase_meter11_vll_rms_calc_rms__dFract * ( _three_phase_meter11_vll_rms_calc_rms__IN2 * _three_phase_meter11_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter11_vll_rms_calc_rms__rmsSum3 += _three_phase_meter11_vll_rms_calc_rms__dFract * ( _three_phase_meter11_vll_rms_calc_rms__IN3 * _three_phase_meter11_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter11_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter11_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter11_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter11_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter11_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter11_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter11_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter11_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter11_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter11_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter11_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter11_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter11_vll_rms_calc_rms__RMS1 = _three_phase_meter11_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter11_vll_rms_calc_rms__RMS2 = _three_phase_meter11_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter11_vll_rms_calc_rms__RMS3 = _three_phase_meter11_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter11.VLn_RMS_calc.RMS
    _three_phase_meter11_vln_rms_calc_rms__IN1 = _three_phase_meter11_van_va2__out;
    _three_phase_meter11_vln_rms_calc_rms__IN2 = _three_phase_meter11_vbn_va2__out;
    _three_phase_meter11_vln_rms_calc_rms__IN3 = _three_phase_meter11_vcn_va2__out;
    _three_phase_meter11_vln_rms_calc_rms__dFract = _three_phase_meter11_meassm_mode_and_dfract__dFract;
    _three_phase_meter11_vln_rms_calc_rms__mode = _three_phase_meter11_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter11_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter11_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter11_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter11_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter11_vln_rms_calc_rms__RMS1_state = _three_phase_meter11_vln_rms_calc_rms__IN1 ;
            _three_phase_meter11_vln_rms_calc_rms__RMS2_state = _three_phase_meter11_vln_rms_calc_rms__IN2 ;
            _three_phase_meter11_vln_rms_calc_rms__RMS3_state = _three_phase_meter11_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter11_vln_rms_calc_rms__rmsSum1 += _three_phase_meter11_vln_rms_calc_rms__dFract * ( _three_phase_meter11_vln_rms_calc_rms__IN1 * _three_phase_meter11_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter11_vln_rms_calc_rms__rmsSum2 += _three_phase_meter11_vln_rms_calc_rms__dFract * ( _three_phase_meter11_vln_rms_calc_rms__IN2 * _three_phase_meter11_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter11_vln_rms_calc_rms__rmsSum3 += _three_phase_meter11_vln_rms_calc_rms__dFract * ( _three_phase_meter11_vln_rms_calc_rms__IN3 * _three_phase_meter11_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter11_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter11_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter11_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter11_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter11_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter11_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter11_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter11_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter11_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter11_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter11_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter11_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter11_vln_rms_calc_rms__RMS1 = _three_phase_meter11_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter11_vln_rms_calc_rms__RMS2 = _three_phase_meter11_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter11_vln_rms_calc_rms__RMS3 = _three_phase_meter11_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter11.VN_RMS_calc.1ph_RMS
    _three_phase_meter11_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter11_sumvn__out;
    _three_phase_meter11_vn_rms_calc_1ph_rms__dFract = _three_phase_meter11_meassm_mode_and_dfract__dFract;
    _three_phase_meter11_vn_rms_calc_1ph_rms__mode = _three_phase_meter11_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter11_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter11_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter11_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter11_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter11_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter11_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter11_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter11_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter11_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter11.termSubMode
    // Generated from the component: Three-phase Meter11.PLL.PID.Sum8
    _three_phase_meter11_pll_pid_sum8__out = _three_phase_meter11_pll_pid_kd__out - _three_phase_meter11_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter2.IN_RMS_calc.1ph_RMS
    _three_phase_meter2_in_rms_calc_1ph_rms__IN1 = _three_phase_meter2_sumin__out;
    _three_phase_meter2_in_rms_calc_1ph_rms__dFract = _three_phase_meter2_meassm_mode_and_dfract__dFract;
    _three_phase_meter2_in_rms_calc_1ph_rms__mode = _three_phase_meter2_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter2_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter2_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter2_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter2_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter2_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter2_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter2_in_rms_calc_1ph_rms__IN1 * _three_phase_meter2_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter2_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter2_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter2_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter2_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter2_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter2_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter2.I_RMS_calc.RMS
    _three_phase_meter2_i_rms_calc_rms__IN1 = _three_phase_meter2_ia_ia2__out;
    _three_phase_meter2_i_rms_calc_rms__IN2 = _three_phase_meter2_ib_ia2__out;
    _three_phase_meter2_i_rms_calc_rms__IN3 = _three_phase_meter2_ic_ia2__out;
    _three_phase_meter2_i_rms_calc_rms__dFract = _three_phase_meter2_meassm_mode_and_dfract__dFract;
    _three_phase_meter2_i_rms_calc_rms__mode = _three_phase_meter2_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter2_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter2_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter2_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter2_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter2_i_rms_calc_rms__RMS1_state = _three_phase_meter2_i_rms_calc_rms__IN1 ;
            _three_phase_meter2_i_rms_calc_rms__RMS2_state = _three_phase_meter2_i_rms_calc_rms__IN2 ;
            _three_phase_meter2_i_rms_calc_rms__RMS3_state = _three_phase_meter2_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter2_i_rms_calc_rms__rmsSum1 += _three_phase_meter2_i_rms_calc_rms__dFract * ( _three_phase_meter2_i_rms_calc_rms__IN1 * _three_phase_meter2_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter2_i_rms_calc_rms__rmsSum2 += _three_phase_meter2_i_rms_calc_rms__dFract * ( _three_phase_meter2_i_rms_calc_rms__IN2 * _three_phase_meter2_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter2_i_rms_calc_rms__rmsSum3 += _three_phase_meter2_i_rms_calc_rms__dFract * ( _three_phase_meter2_i_rms_calc_rms__IN3 * _three_phase_meter2_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter2_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter2_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter2_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter2_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter2_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter2_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter2_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter2_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter2_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter2_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter2_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter2_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter2_i_rms_calc_rms__RMS1 = _three_phase_meter2_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter2_i_rms_calc_rms__RMS2 = _three_phase_meter2_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter2_i_rms_calc_rms__RMS3 = _three_phase_meter2_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter2.VLL_RMS_calc.RMS
    _three_phase_meter2_vll_rms_calc_rms__IN1 = _three_phase_meter2_vab_va2__out;
    _three_phase_meter2_vll_rms_calc_rms__IN2 = _three_phase_meter2_vbc_va2__out;
    _three_phase_meter2_vll_rms_calc_rms__IN3 = _three_phase_meter2_vca_va2__out;
    _three_phase_meter2_vll_rms_calc_rms__dFract = _three_phase_meter2_meassm_mode_and_dfract__dFract;
    _three_phase_meter2_vll_rms_calc_rms__mode = _three_phase_meter2_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter2_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter2_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter2_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter2_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter2_vll_rms_calc_rms__RMS1_state = _three_phase_meter2_vll_rms_calc_rms__IN1 ;
            _three_phase_meter2_vll_rms_calc_rms__RMS2_state = _three_phase_meter2_vll_rms_calc_rms__IN2 ;
            _three_phase_meter2_vll_rms_calc_rms__RMS3_state = _three_phase_meter2_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter2_vll_rms_calc_rms__rmsSum1 += _three_phase_meter2_vll_rms_calc_rms__dFract * ( _three_phase_meter2_vll_rms_calc_rms__IN1 * _three_phase_meter2_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter2_vll_rms_calc_rms__rmsSum2 += _three_phase_meter2_vll_rms_calc_rms__dFract * ( _three_phase_meter2_vll_rms_calc_rms__IN2 * _three_phase_meter2_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter2_vll_rms_calc_rms__rmsSum3 += _three_phase_meter2_vll_rms_calc_rms__dFract * ( _three_phase_meter2_vll_rms_calc_rms__IN3 * _three_phase_meter2_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter2_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter2_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter2_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter2_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter2_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter2_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter2_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter2_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter2_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter2_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter2_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter2_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter2_vll_rms_calc_rms__RMS1 = _three_phase_meter2_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter2_vll_rms_calc_rms__RMS2 = _three_phase_meter2_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter2_vll_rms_calc_rms__RMS3 = _three_phase_meter2_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter2.VLn_RMS_calc.RMS
    _three_phase_meter2_vln_rms_calc_rms__IN1 = _three_phase_meter2_van_va2__out;
    _three_phase_meter2_vln_rms_calc_rms__IN2 = _three_phase_meter2_vbn_va2__out;
    _three_phase_meter2_vln_rms_calc_rms__IN3 = _three_phase_meter2_vcn_va2__out;
    _three_phase_meter2_vln_rms_calc_rms__dFract = _three_phase_meter2_meassm_mode_and_dfract__dFract;
    _three_phase_meter2_vln_rms_calc_rms__mode = _three_phase_meter2_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter2_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter2_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter2_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter2_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter2_vln_rms_calc_rms__RMS1_state = _three_phase_meter2_vln_rms_calc_rms__IN1 ;
            _three_phase_meter2_vln_rms_calc_rms__RMS2_state = _three_phase_meter2_vln_rms_calc_rms__IN2 ;
            _three_phase_meter2_vln_rms_calc_rms__RMS3_state = _three_phase_meter2_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter2_vln_rms_calc_rms__rmsSum1 += _three_phase_meter2_vln_rms_calc_rms__dFract * ( _three_phase_meter2_vln_rms_calc_rms__IN1 * _three_phase_meter2_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter2_vln_rms_calc_rms__rmsSum2 += _three_phase_meter2_vln_rms_calc_rms__dFract * ( _three_phase_meter2_vln_rms_calc_rms__IN2 * _three_phase_meter2_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter2_vln_rms_calc_rms__rmsSum3 += _three_phase_meter2_vln_rms_calc_rms__dFract * ( _three_phase_meter2_vln_rms_calc_rms__IN3 * _three_phase_meter2_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter2_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter2_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter2_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter2_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter2_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter2_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter2_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter2_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter2_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter2_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter2_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter2_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter2_vln_rms_calc_rms__RMS1 = _three_phase_meter2_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter2_vln_rms_calc_rms__RMS2 = _three_phase_meter2_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter2_vln_rms_calc_rms__RMS3 = _three_phase_meter2_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter2.VN_RMS_calc.1ph_RMS
    _three_phase_meter2_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter2_sumvn__out;
    _three_phase_meter2_vn_rms_calc_1ph_rms__dFract = _three_phase_meter2_meassm_mode_and_dfract__dFract;
    _three_phase_meter2_vn_rms_calc_1ph_rms__mode = _three_phase_meter2_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter2_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter2_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter2_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter2_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter2_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter2_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter2_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter2_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter2_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter2.termSubMode
    // Generated from the component: Three-phase Meter2.PLL.PID.Sum8
    _three_phase_meter2_pll_pid_sum8__out = _three_phase_meter2_pll_pid_kd__out - _three_phase_meter2_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter3.IN_RMS_calc.1ph_RMS
    _three_phase_meter3_in_rms_calc_1ph_rms__IN1 = _three_phase_meter3_sumin__out;
    _three_phase_meter3_in_rms_calc_1ph_rms__dFract = _three_phase_meter3_meassm_mode_and_dfract__dFract;
    _three_phase_meter3_in_rms_calc_1ph_rms__mode = _three_phase_meter3_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter3_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter3_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter3_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter3_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter3_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter3_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter3_in_rms_calc_1ph_rms__IN1 * _three_phase_meter3_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter3_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter3_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter3_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter3_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter3_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter3_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter3.I_RMS_calc.RMS
    _three_phase_meter3_i_rms_calc_rms__IN1 = _three_phase_meter3_ia_ia2__out;
    _three_phase_meter3_i_rms_calc_rms__IN2 = _three_phase_meter3_ib_ia2__out;
    _three_phase_meter3_i_rms_calc_rms__IN3 = _three_phase_meter3_ic_ia2__out;
    _three_phase_meter3_i_rms_calc_rms__dFract = _three_phase_meter3_meassm_mode_and_dfract__dFract;
    _three_phase_meter3_i_rms_calc_rms__mode = _three_phase_meter3_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter3_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter3_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter3_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter3_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter3_i_rms_calc_rms__RMS1_state = _three_phase_meter3_i_rms_calc_rms__IN1 ;
            _three_phase_meter3_i_rms_calc_rms__RMS2_state = _three_phase_meter3_i_rms_calc_rms__IN2 ;
            _three_phase_meter3_i_rms_calc_rms__RMS3_state = _three_phase_meter3_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter3_i_rms_calc_rms__rmsSum1 += _three_phase_meter3_i_rms_calc_rms__dFract * ( _three_phase_meter3_i_rms_calc_rms__IN1 * _three_phase_meter3_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter3_i_rms_calc_rms__rmsSum2 += _three_phase_meter3_i_rms_calc_rms__dFract * ( _three_phase_meter3_i_rms_calc_rms__IN2 * _three_phase_meter3_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter3_i_rms_calc_rms__rmsSum3 += _three_phase_meter3_i_rms_calc_rms__dFract * ( _three_phase_meter3_i_rms_calc_rms__IN3 * _three_phase_meter3_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter3_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter3_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter3_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter3_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter3_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter3_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter3_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter3_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter3_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter3_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter3_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter3_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter3_i_rms_calc_rms__RMS1 = _three_phase_meter3_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter3_i_rms_calc_rms__RMS2 = _three_phase_meter3_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter3_i_rms_calc_rms__RMS3 = _three_phase_meter3_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter3.VLL_RMS_calc.RMS
    _three_phase_meter3_vll_rms_calc_rms__IN1 = _three_phase_meter3_vab_va2__out;
    _three_phase_meter3_vll_rms_calc_rms__IN2 = _three_phase_meter3_vbc_va2__out;
    _three_phase_meter3_vll_rms_calc_rms__IN3 = _three_phase_meter3_vca_va2__out;
    _three_phase_meter3_vll_rms_calc_rms__dFract = _three_phase_meter3_meassm_mode_and_dfract__dFract;
    _three_phase_meter3_vll_rms_calc_rms__mode = _three_phase_meter3_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter3_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter3_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter3_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter3_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter3_vll_rms_calc_rms__RMS1_state = _three_phase_meter3_vll_rms_calc_rms__IN1 ;
            _three_phase_meter3_vll_rms_calc_rms__RMS2_state = _three_phase_meter3_vll_rms_calc_rms__IN2 ;
            _three_phase_meter3_vll_rms_calc_rms__RMS3_state = _three_phase_meter3_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter3_vll_rms_calc_rms__rmsSum1 += _three_phase_meter3_vll_rms_calc_rms__dFract * ( _three_phase_meter3_vll_rms_calc_rms__IN1 * _three_phase_meter3_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter3_vll_rms_calc_rms__rmsSum2 += _three_phase_meter3_vll_rms_calc_rms__dFract * ( _three_phase_meter3_vll_rms_calc_rms__IN2 * _three_phase_meter3_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter3_vll_rms_calc_rms__rmsSum3 += _three_phase_meter3_vll_rms_calc_rms__dFract * ( _three_phase_meter3_vll_rms_calc_rms__IN3 * _three_phase_meter3_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter3_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter3_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter3_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter3_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter3_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter3_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter3_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter3_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter3_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter3_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter3_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter3_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter3_vll_rms_calc_rms__RMS1 = _three_phase_meter3_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter3_vll_rms_calc_rms__RMS2 = _three_phase_meter3_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter3_vll_rms_calc_rms__RMS3 = _three_phase_meter3_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter3.VLn_RMS_calc.RMS
    _three_phase_meter3_vln_rms_calc_rms__IN1 = _three_phase_meter3_van_va2__out;
    _three_phase_meter3_vln_rms_calc_rms__IN2 = _three_phase_meter3_vbn_va2__out;
    _three_phase_meter3_vln_rms_calc_rms__IN3 = _three_phase_meter3_vcn_va2__out;
    _three_phase_meter3_vln_rms_calc_rms__dFract = _three_phase_meter3_meassm_mode_and_dfract__dFract;
    _three_phase_meter3_vln_rms_calc_rms__mode = _three_phase_meter3_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter3_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter3_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter3_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter3_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter3_vln_rms_calc_rms__RMS1_state = _three_phase_meter3_vln_rms_calc_rms__IN1 ;
            _three_phase_meter3_vln_rms_calc_rms__RMS2_state = _three_phase_meter3_vln_rms_calc_rms__IN2 ;
            _three_phase_meter3_vln_rms_calc_rms__RMS3_state = _three_phase_meter3_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter3_vln_rms_calc_rms__rmsSum1 += _three_phase_meter3_vln_rms_calc_rms__dFract * ( _three_phase_meter3_vln_rms_calc_rms__IN1 * _three_phase_meter3_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter3_vln_rms_calc_rms__rmsSum2 += _three_phase_meter3_vln_rms_calc_rms__dFract * ( _three_phase_meter3_vln_rms_calc_rms__IN2 * _three_phase_meter3_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter3_vln_rms_calc_rms__rmsSum3 += _three_phase_meter3_vln_rms_calc_rms__dFract * ( _three_phase_meter3_vln_rms_calc_rms__IN3 * _three_phase_meter3_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter3_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter3_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter3_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter3_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter3_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter3_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter3_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter3_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter3_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter3_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter3_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter3_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter3_vln_rms_calc_rms__RMS1 = _three_phase_meter3_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter3_vln_rms_calc_rms__RMS2 = _three_phase_meter3_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter3_vln_rms_calc_rms__RMS3 = _three_phase_meter3_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter3.VN_RMS_calc.1ph_RMS
    _three_phase_meter3_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter3_sumvn__out;
    _three_phase_meter3_vn_rms_calc_1ph_rms__dFract = _three_phase_meter3_meassm_mode_and_dfract__dFract;
    _three_phase_meter3_vn_rms_calc_1ph_rms__mode = _three_phase_meter3_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter3_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter3_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter3_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter3_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter3_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter3_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter3_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter3_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter3_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter3.termSubMode
    // Generated from the component: Three-phase Meter3.PLL.PID.Sum8
    _three_phase_meter3_pll_pid_sum8__out = _three_phase_meter3_pll_pid_kd__out - _three_phase_meter3_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter4.IN_RMS_calc.1ph_RMS
    _three_phase_meter4_in_rms_calc_1ph_rms__IN1 = _three_phase_meter4_sumin__out;
    _three_phase_meter4_in_rms_calc_1ph_rms__dFract = _three_phase_meter4_meassm_mode_and_dfract__dFract;
    _three_phase_meter4_in_rms_calc_1ph_rms__mode = _three_phase_meter4_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter4_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter4_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter4_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter4_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter4_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter4_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter4_in_rms_calc_1ph_rms__IN1 * _three_phase_meter4_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter4_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter4_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter4_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter4_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter4_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter4_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter4.I_RMS_calc.RMS
    _three_phase_meter4_i_rms_calc_rms__IN1 = _three_phase_meter4_ia_ia2__out;
    _three_phase_meter4_i_rms_calc_rms__IN2 = _three_phase_meter4_ib_ia2__out;
    _three_phase_meter4_i_rms_calc_rms__IN3 = _three_phase_meter4_ic_ia2__out;
    _three_phase_meter4_i_rms_calc_rms__dFract = _three_phase_meter4_meassm_mode_and_dfract__dFract;
    _three_phase_meter4_i_rms_calc_rms__mode = _three_phase_meter4_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter4_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter4_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter4_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter4_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter4_i_rms_calc_rms__RMS1_state = _three_phase_meter4_i_rms_calc_rms__IN1 ;
            _three_phase_meter4_i_rms_calc_rms__RMS2_state = _three_phase_meter4_i_rms_calc_rms__IN2 ;
            _three_phase_meter4_i_rms_calc_rms__RMS3_state = _three_phase_meter4_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter4_i_rms_calc_rms__rmsSum1 += _three_phase_meter4_i_rms_calc_rms__dFract * ( _three_phase_meter4_i_rms_calc_rms__IN1 * _three_phase_meter4_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter4_i_rms_calc_rms__rmsSum2 += _three_phase_meter4_i_rms_calc_rms__dFract * ( _three_phase_meter4_i_rms_calc_rms__IN2 * _three_phase_meter4_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter4_i_rms_calc_rms__rmsSum3 += _three_phase_meter4_i_rms_calc_rms__dFract * ( _three_phase_meter4_i_rms_calc_rms__IN3 * _three_phase_meter4_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter4_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter4_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter4_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter4_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter4_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter4_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter4_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter4_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter4_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter4_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter4_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter4_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter4_i_rms_calc_rms__RMS1 = _three_phase_meter4_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter4_i_rms_calc_rms__RMS2 = _three_phase_meter4_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter4_i_rms_calc_rms__RMS3 = _three_phase_meter4_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter4.VLL_RMS_calc.RMS
    _three_phase_meter4_vll_rms_calc_rms__IN1 = _three_phase_meter4_vab_va2__out;
    _three_phase_meter4_vll_rms_calc_rms__IN2 = _three_phase_meter4_vbc_va2__out;
    _three_phase_meter4_vll_rms_calc_rms__IN3 = _three_phase_meter4_vca_va2__out;
    _three_phase_meter4_vll_rms_calc_rms__dFract = _three_phase_meter4_meassm_mode_and_dfract__dFract;
    _three_phase_meter4_vll_rms_calc_rms__mode = _three_phase_meter4_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter4_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter4_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter4_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter4_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter4_vll_rms_calc_rms__RMS1_state = _three_phase_meter4_vll_rms_calc_rms__IN1 ;
            _three_phase_meter4_vll_rms_calc_rms__RMS2_state = _three_phase_meter4_vll_rms_calc_rms__IN2 ;
            _three_phase_meter4_vll_rms_calc_rms__RMS3_state = _three_phase_meter4_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter4_vll_rms_calc_rms__rmsSum1 += _three_phase_meter4_vll_rms_calc_rms__dFract * ( _three_phase_meter4_vll_rms_calc_rms__IN1 * _three_phase_meter4_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter4_vll_rms_calc_rms__rmsSum2 += _three_phase_meter4_vll_rms_calc_rms__dFract * ( _three_phase_meter4_vll_rms_calc_rms__IN2 * _three_phase_meter4_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter4_vll_rms_calc_rms__rmsSum3 += _three_phase_meter4_vll_rms_calc_rms__dFract * ( _three_phase_meter4_vll_rms_calc_rms__IN3 * _three_phase_meter4_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter4_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter4_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter4_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter4_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter4_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter4_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter4_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter4_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter4_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter4_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter4_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter4_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter4_vll_rms_calc_rms__RMS1 = _three_phase_meter4_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter4_vll_rms_calc_rms__RMS2 = _three_phase_meter4_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter4_vll_rms_calc_rms__RMS3 = _three_phase_meter4_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter4.VLn_RMS_calc.RMS
    _three_phase_meter4_vln_rms_calc_rms__IN1 = _three_phase_meter4_van_va2__out;
    _three_phase_meter4_vln_rms_calc_rms__IN2 = _three_phase_meter4_vbn_va2__out;
    _three_phase_meter4_vln_rms_calc_rms__IN3 = _three_phase_meter4_vcn_va2__out;
    _three_phase_meter4_vln_rms_calc_rms__dFract = _three_phase_meter4_meassm_mode_and_dfract__dFract;
    _three_phase_meter4_vln_rms_calc_rms__mode = _three_phase_meter4_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter4_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter4_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter4_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter4_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter4_vln_rms_calc_rms__RMS1_state = _three_phase_meter4_vln_rms_calc_rms__IN1 ;
            _three_phase_meter4_vln_rms_calc_rms__RMS2_state = _three_phase_meter4_vln_rms_calc_rms__IN2 ;
            _three_phase_meter4_vln_rms_calc_rms__RMS3_state = _three_phase_meter4_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter4_vln_rms_calc_rms__rmsSum1 += _three_phase_meter4_vln_rms_calc_rms__dFract * ( _three_phase_meter4_vln_rms_calc_rms__IN1 * _three_phase_meter4_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter4_vln_rms_calc_rms__rmsSum2 += _three_phase_meter4_vln_rms_calc_rms__dFract * ( _three_phase_meter4_vln_rms_calc_rms__IN2 * _three_phase_meter4_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter4_vln_rms_calc_rms__rmsSum3 += _three_phase_meter4_vln_rms_calc_rms__dFract * ( _three_phase_meter4_vln_rms_calc_rms__IN3 * _three_phase_meter4_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter4_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter4_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter4_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter4_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter4_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter4_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter4_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter4_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter4_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter4_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter4_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter4_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter4_vln_rms_calc_rms__RMS1 = _three_phase_meter4_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter4_vln_rms_calc_rms__RMS2 = _three_phase_meter4_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter4_vln_rms_calc_rms__RMS3 = _three_phase_meter4_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter4.VN_RMS_calc.1ph_RMS
    _three_phase_meter4_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter4_sumvn__out;
    _three_phase_meter4_vn_rms_calc_1ph_rms__dFract = _three_phase_meter4_meassm_mode_and_dfract__dFract;
    _three_phase_meter4_vn_rms_calc_1ph_rms__mode = _three_phase_meter4_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter4_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter4_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter4_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter4_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter4_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter4_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter4_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter4_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter4_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter4.termSubMode
    // Generated from the component: Three-phase Meter4.PLL.PID.Sum8
    _three_phase_meter4_pll_pid_sum8__out = _three_phase_meter4_pll_pid_kd__out - _three_phase_meter4_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter5.IN_RMS_calc.1ph_RMS
    _three_phase_meter5_in_rms_calc_1ph_rms__IN1 = _three_phase_meter5_sumin__out;
    _three_phase_meter5_in_rms_calc_1ph_rms__dFract = _three_phase_meter5_meassm_mode_and_dfract__dFract;
    _three_phase_meter5_in_rms_calc_1ph_rms__mode = _three_phase_meter5_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter5_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter5_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter5_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter5_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter5_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter5_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter5_in_rms_calc_1ph_rms__IN1 * _three_phase_meter5_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter5_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter5_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter5_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter5_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter5_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter5_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter5.I_RMS_calc.RMS
    _three_phase_meter5_i_rms_calc_rms__IN1 = _three_phase_meter5_ia_ia2__out;
    _three_phase_meter5_i_rms_calc_rms__IN2 = _three_phase_meter5_ib_ia2__out;
    _three_phase_meter5_i_rms_calc_rms__IN3 = _three_phase_meter5_ic_ia2__out;
    _three_phase_meter5_i_rms_calc_rms__dFract = _three_phase_meter5_meassm_mode_and_dfract__dFract;
    _three_phase_meter5_i_rms_calc_rms__mode = _three_phase_meter5_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter5_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter5_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter5_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter5_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter5_i_rms_calc_rms__RMS1_state = _three_phase_meter5_i_rms_calc_rms__IN1 ;
            _three_phase_meter5_i_rms_calc_rms__RMS2_state = _three_phase_meter5_i_rms_calc_rms__IN2 ;
            _three_phase_meter5_i_rms_calc_rms__RMS3_state = _three_phase_meter5_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter5_i_rms_calc_rms__rmsSum1 += _three_phase_meter5_i_rms_calc_rms__dFract * ( _three_phase_meter5_i_rms_calc_rms__IN1 * _three_phase_meter5_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter5_i_rms_calc_rms__rmsSum2 += _three_phase_meter5_i_rms_calc_rms__dFract * ( _three_phase_meter5_i_rms_calc_rms__IN2 * _three_phase_meter5_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter5_i_rms_calc_rms__rmsSum3 += _three_phase_meter5_i_rms_calc_rms__dFract * ( _three_phase_meter5_i_rms_calc_rms__IN3 * _three_phase_meter5_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter5_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter5_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter5_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter5_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter5_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter5_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter5_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter5_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter5_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter5_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter5_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter5_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter5_i_rms_calc_rms__RMS1 = _three_phase_meter5_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter5_i_rms_calc_rms__RMS2 = _three_phase_meter5_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter5_i_rms_calc_rms__RMS3 = _three_phase_meter5_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter5.VLL_RMS_calc.RMS
    _three_phase_meter5_vll_rms_calc_rms__IN1 = _three_phase_meter5_vab_va2__out;
    _three_phase_meter5_vll_rms_calc_rms__IN2 = _three_phase_meter5_vbc_va2__out;
    _three_phase_meter5_vll_rms_calc_rms__IN3 = _three_phase_meter5_vca_va2__out;
    _three_phase_meter5_vll_rms_calc_rms__dFract = _three_phase_meter5_meassm_mode_and_dfract__dFract;
    _three_phase_meter5_vll_rms_calc_rms__mode = _three_phase_meter5_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter5_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter5_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter5_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter5_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter5_vll_rms_calc_rms__RMS1_state = _three_phase_meter5_vll_rms_calc_rms__IN1 ;
            _three_phase_meter5_vll_rms_calc_rms__RMS2_state = _three_phase_meter5_vll_rms_calc_rms__IN2 ;
            _three_phase_meter5_vll_rms_calc_rms__RMS3_state = _three_phase_meter5_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter5_vll_rms_calc_rms__rmsSum1 += _three_phase_meter5_vll_rms_calc_rms__dFract * ( _three_phase_meter5_vll_rms_calc_rms__IN1 * _three_phase_meter5_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter5_vll_rms_calc_rms__rmsSum2 += _three_phase_meter5_vll_rms_calc_rms__dFract * ( _three_phase_meter5_vll_rms_calc_rms__IN2 * _three_phase_meter5_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter5_vll_rms_calc_rms__rmsSum3 += _three_phase_meter5_vll_rms_calc_rms__dFract * ( _three_phase_meter5_vll_rms_calc_rms__IN3 * _three_phase_meter5_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter5_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter5_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter5_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter5_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter5_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter5_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter5_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter5_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter5_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter5_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter5_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter5_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter5_vll_rms_calc_rms__RMS1 = _three_phase_meter5_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter5_vll_rms_calc_rms__RMS2 = _three_phase_meter5_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter5_vll_rms_calc_rms__RMS3 = _three_phase_meter5_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter5.VLn_RMS_calc.RMS
    _three_phase_meter5_vln_rms_calc_rms__IN1 = _three_phase_meter5_van_va2__out;
    _three_phase_meter5_vln_rms_calc_rms__IN2 = _three_phase_meter5_vbn_va2__out;
    _three_phase_meter5_vln_rms_calc_rms__IN3 = _three_phase_meter5_vcn_va2__out;
    _three_phase_meter5_vln_rms_calc_rms__dFract = _three_phase_meter5_meassm_mode_and_dfract__dFract;
    _three_phase_meter5_vln_rms_calc_rms__mode = _three_phase_meter5_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter5_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter5_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter5_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter5_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter5_vln_rms_calc_rms__RMS1_state = _three_phase_meter5_vln_rms_calc_rms__IN1 ;
            _three_phase_meter5_vln_rms_calc_rms__RMS2_state = _three_phase_meter5_vln_rms_calc_rms__IN2 ;
            _three_phase_meter5_vln_rms_calc_rms__RMS3_state = _three_phase_meter5_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter5_vln_rms_calc_rms__rmsSum1 += _three_phase_meter5_vln_rms_calc_rms__dFract * ( _three_phase_meter5_vln_rms_calc_rms__IN1 * _three_phase_meter5_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter5_vln_rms_calc_rms__rmsSum2 += _three_phase_meter5_vln_rms_calc_rms__dFract * ( _three_phase_meter5_vln_rms_calc_rms__IN2 * _three_phase_meter5_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter5_vln_rms_calc_rms__rmsSum3 += _three_phase_meter5_vln_rms_calc_rms__dFract * ( _three_phase_meter5_vln_rms_calc_rms__IN3 * _three_phase_meter5_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter5_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter5_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter5_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter5_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter5_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter5_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter5_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter5_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter5_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter5_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter5_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter5_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter5_vln_rms_calc_rms__RMS1 = _three_phase_meter5_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter5_vln_rms_calc_rms__RMS2 = _three_phase_meter5_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter5_vln_rms_calc_rms__RMS3 = _three_phase_meter5_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter5.VN_RMS_calc.1ph_RMS
    _three_phase_meter5_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter5_sumvn__out;
    _three_phase_meter5_vn_rms_calc_1ph_rms__dFract = _three_phase_meter5_meassm_mode_and_dfract__dFract;
    _three_phase_meter5_vn_rms_calc_1ph_rms__mode = _three_phase_meter5_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter5_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter5_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter5_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter5_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter5_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter5_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter5_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter5_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter5_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter5.termSubMode
    // Generated from the component: Three-phase Meter5.PLL.PID.Sum8
    _three_phase_meter5_pll_pid_sum8__out = _three_phase_meter5_pll_pid_kd__out - _three_phase_meter5_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter6.IN_RMS_calc.1ph_RMS
    _three_phase_meter6_in_rms_calc_1ph_rms__IN1 = _three_phase_meter6_sumin__out;
    _three_phase_meter6_in_rms_calc_1ph_rms__dFract = _three_phase_meter6_meassm_mode_and_dfract__dFract;
    _three_phase_meter6_in_rms_calc_1ph_rms__mode = _three_phase_meter6_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter6_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter6_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter6_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter6_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter6_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter6_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter6_in_rms_calc_1ph_rms__IN1 * _three_phase_meter6_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter6_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter6_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter6_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter6_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter6_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter6_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter6.I_RMS_calc.RMS
    _three_phase_meter6_i_rms_calc_rms__IN1 = _three_phase_meter6_ia_ia2__out;
    _three_phase_meter6_i_rms_calc_rms__IN2 = _three_phase_meter6_ib_ia2__out;
    _three_phase_meter6_i_rms_calc_rms__IN3 = _three_phase_meter6_ic_ia2__out;
    _three_phase_meter6_i_rms_calc_rms__dFract = _three_phase_meter6_meassm_mode_and_dfract__dFract;
    _three_phase_meter6_i_rms_calc_rms__mode = _three_phase_meter6_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter6_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter6_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter6_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter6_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter6_i_rms_calc_rms__RMS1_state = _three_phase_meter6_i_rms_calc_rms__IN1 ;
            _three_phase_meter6_i_rms_calc_rms__RMS2_state = _three_phase_meter6_i_rms_calc_rms__IN2 ;
            _three_phase_meter6_i_rms_calc_rms__RMS3_state = _three_phase_meter6_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter6_i_rms_calc_rms__rmsSum1 += _three_phase_meter6_i_rms_calc_rms__dFract * ( _three_phase_meter6_i_rms_calc_rms__IN1 * _three_phase_meter6_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter6_i_rms_calc_rms__rmsSum2 += _three_phase_meter6_i_rms_calc_rms__dFract * ( _three_phase_meter6_i_rms_calc_rms__IN2 * _three_phase_meter6_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter6_i_rms_calc_rms__rmsSum3 += _three_phase_meter6_i_rms_calc_rms__dFract * ( _three_phase_meter6_i_rms_calc_rms__IN3 * _three_phase_meter6_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter6_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter6_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter6_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter6_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter6_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter6_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter6_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter6_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter6_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter6_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter6_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter6_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter6_i_rms_calc_rms__RMS1 = _three_phase_meter6_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter6_i_rms_calc_rms__RMS2 = _three_phase_meter6_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter6_i_rms_calc_rms__RMS3 = _three_phase_meter6_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter6.VLL_RMS_calc.RMS
    _three_phase_meter6_vll_rms_calc_rms__IN1 = _three_phase_meter6_vab_va2__out;
    _three_phase_meter6_vll_rms_calc_rms__IN2 = _three_phase_meter6_vbc_va2__out;
    _three_phase_meter6_vll_rms_calc_rms__IN3 = _three_phase_meter6_vca_va2__out;
    _three_phase_meter6_vll_rms_calc_rms__dFract = _three_phase_meter6_meassm_mode_and_dfract__dFract;
    _three_phase_meter6_vll_rms_calc_rms__mode = _three_phase_meter6_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter6_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter6_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter6_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter6_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter6_vll_rms_calc_rms__RMS1_state = _three_phase_meter6_vll_rms_calc_rms__IN1 ;
            _three_phase_meter6_vll_rms_calc_rms__RMS2_state = _three_phase_meter6_vll_rms_calc_rms__IN2 ;
            _three_phase_meter6_vll_rms_calc_rms__RMS3_state = _three_phase_meter6_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter6_vll_rms_calc_rms__rmsSum1 += _three_phase_meter6_vll_rms_calc_rms__dFract * ( _three_phase_meter6_vll_rms_calc_rms__IN1 * _three_phase_meter6_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter6_vll_rms_calc_rms__rmsSum2 += _three_phase_meter6_vll_rms_calc_rms__dFract * ( _three_phase_meter6_vll_rms_calc_rms__IN2 * _three_phase_meter6_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter6_vll_rms_calc_rms__rmsSum3 += _three_phase_meter6_vll_rms_calc_rms__dFract * ( _three_phase_meter6_vll_rms_calc_rms__IN3 * _three_phase_meter6_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter6_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter6_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter6_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter6_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter6_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter6_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter6_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter6_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter6_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter6_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter6_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter6_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter6_vll_rms_calc_rms__RMS1 = _three_phase_meter6_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter6_vll_rms_calc_rms__RMS2 = _three_phase_meter6_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter6_vll_rms_calc_rms__RMS3 = _three_phase_meter6_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter6.VLn_RMS_calc.RMS
    _three_phase_meter6_vln_rms_calc_rms__IN1 = _three_phase_meter6_van_va2__out;
    _three_phase_meter6_vln_rms_calc_rms__IN2 = _three_phase_meter6_vbn_va2__out;
    _three_phase_meter6_vln_rms_calc_rms__IN3 = _three_phase_meter6_vcn_va2__out;
    _three_phase_meter6_vln_rms_calc_rms__dFract = _three_phase_meter6_meassm_mode_and_dfract__dFract;
    _three_phase_meter6_vln_rms_calc_rms__mode = _three_phase_meter6_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter6_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter6_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter6_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter6_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter6_vln_rms_calc_rms__RMS1_state = _three_phase_meter6_vln_rms_calc_rms__IN1 ;
            _three_phase_meter6_vln_rms_calc_rms__RMS2_state = _three_phase_meter6_vln_rms_calc_rms__IN2 ;
            _three_phase_meter6_vln_rms_calc_rms__RMS3_state = _three_phase_meter6_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter6_vln_rms_calc_rms__rmsSum1 += _three_phase_meter6_vln_rms_calc_rms__dFract * ( _three_phase_meter6_vln_rms_calc_rms__IN1 * _three_phase_meter6_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter6_vln_rms_calc_rms__rmsSum2 += _three_phase_meter6_vln_rms_calc_rms__dFract * ( _three_phase_meter6_vln_rms_calc_rms__IN2 * _three_phase_meter6_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter6_vln_rms_calc_rms__rmsSum3 += _three_phase_meter6_vln_rms_calc_rms__dFract * ( _three_phase_meter6_vln_rms_calc_rms__IN3 * _three_phase_meter6_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter6_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter6_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter6_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter6_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter6_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter6_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter6_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter6_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter6_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter6_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter6_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter6_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter6_vln_rms_calc_rms__RMS1 = _three_phase_meter6_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter6_vln_rms_calc_rms__RMS2 = _three_phase_meter6_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter6_vln_rms_calc_rms__RMS3 = _three_phase_meter6_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter6.VN_RMS_calc.1ph_RMS
    _three_phase_meter6_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter6_sumvn__out;
    _three_phase_meter6_vn_rms_calc_1ph_rms__dFract = _three_phase_meter6_meassm_mode_and_dfract__dFract;
    _three_phase_meter6_vn_rms_calc_1ph_rms__mode = _three_phase_meter6_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter6_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter6_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter6_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter6_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter6_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter6_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter6_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter6_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter6_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter6.termSubMode
    // Generated from the component: Three-phase Meter6.PLL.PID.Sum8
    _three_phase_meter6_pll_pid_sum8__out = _three_phase_meter6_pll_pid_kd__out - _three_phase_meter6_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter7.IN_RMS_calc.1ph_RMS
    _three_phase_meter7_in_rms_calc_1ph_rms__IN1 = _three_phase_meter7_sumin__out;
    _three_phase_meter7_in_rms_calc_1ph_rms__dFract = _three_phase_meter7_meassm_mode_and_dfract__dFract;
    _three_phase_meter7_in_rms_calc_1ph_rms__mode = _three_phase_meter7_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter7_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter7_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter7_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter7_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter7_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter7_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter7_in_rms_calc_1ph_rms__IN1 * _three_phase_meter7_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter7_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter7_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter7_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter7_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter7_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter7_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter7.I_RMS_calc.RMS
    _three_phase_meter7_i_rms_calc_rms__IN1 = _three_phase_meter7_ia_ia2__out;
    _three_phase_meter7_i_rms_calc_rms__IN2 = _three_phase_meter7_ib_ia2__out;
    _three_phase_meter7_i_rms_calc_rms__IN3 = _three_phase_meter7_ic_ia2__out;
    _three_phase_meter7_i_rms_calc_rms__dFract = _three_phase_meter7_meassm_mode_and_dfract__dFract;
    _three_phase_meter7_i_rms_calc_rms__mode = _three_phase_meter7_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter7_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter7_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter7_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter7_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter7_i_rms_calc_rms__RMS1_state = _three_phase_meter7_i_rms_calc_rms__IN1 ;
            _three_phase_meter7_i_rms_calc_rms__RMS2_state = _three_phase_meter7_i_rms_calc_rms__IN2 ;
            _three_phase_meter7_i_rms_calc_rms__RMS3_state = _three_phase_meter7_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter7_i_rms_calc_rms__rmsSum1 += _three_phase_meter7_i_rms_calc_rms__dFract * ( _three_phase_meter7_i_rms_calc_rms__IN1 * _three_phase_meter7_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter7_i_rms_calc_rms__rmsSum2 += _three_phase_meter7_i_rms_calc_rms__dFract * ( _three_phase_meter7_i_rms_calc_rms__IN2 * _three_phase_meter7_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter7_i_rms_calc_rms__rmsSum3 += _three_phase_meter7_i_rms_calc_rms__dFract * ( _three_phase_meter7_i_rms_calc_rms__IN3 * _three_phase_meter7_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter7_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter7_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter7_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter7_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter7_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter7_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter7_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter7_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter7_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter7_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter7_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter7_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter7_i_rms_calc_rms__RMS1 = _three_phase_meter7_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter7_i_rms_calc_rms__RMS2 = _three_phase_meter7_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter7_i_rms_calc_rms__RMS3 = _three_phase_meter7_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter7.VLL_RMS_calc.RMS
    _three_phase_meter7_vll_rms_calc_rms__IN1 = _three_phase_meter7_vab_va2__out;
    _three_phase_meter7_vll_rms_calc_rms__IN2 = _three_phase_meter7_vbc_va2__out;
    _three_phase_meter7_vll_rms_calc_rms__IN3 = _three_phase_meter7_vca_va2__out;
    _three_phase_meter7_vll_rms_calc_rms__dFract = _three_phase_meter7_meassm_mode_and_dfract__dFract;
    _three_phase_meter7_vll_rms_calc_rms__mode = _three_phase_meter7_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter7_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter7_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter7_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter7_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter7_vll_rms_calc_rms__RMS1_state = _three_phase_meter7_vll_rms_calc_rms__IN1 ;
            _three_phase_meter7_vll_rms_calc_rms__RMS2_state = _three_phase_meter7_vll_rms_calc_rms__IN2 ;
            _three_phase_meter7_vll_rms_calc_rms__RMS3_state = _three_phase_meter7_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter7_vll_rms_calc_rms__rmsSum1 += _three_phase_meter7_vll_rms_calc_rms__dFract * ( _three_phase_meter7_vll_rms_calc_rms__IN1 * _three_phase_meter7_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter7_vll_rms_calc_rms__rmsSum2 += _three_phase_meter7_vll_rms_calc_rms__dFract * ( _three_phase_meter7_vll_rms_calc_rms__IN2 * _three_phase_meter7_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter7_vll_rms_calc_rms__rmsSum3 += _three_phase_meter7_vll_rms_calc_rms__dFract * ( _three_phase_meter7_vll_rms_calc_rms__IN3 * _three_phase_meter7_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter7_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter7_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter7_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter7_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter7_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter7_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter7_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter7_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter7_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter7_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter7_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter7_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter7_vll_rms_calc_rms__RMS1 = _three_phase_meter7_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter7_vll_rms_calc_rms__RMS2 = _three_phase_meter7_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter7_vll_rms_calc_rms__RMS3 = _three_phase_meter7_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter7.VLn_RMS_calc.RMS
    _three_phase_meter7_vln_rms_calc_rms__IN1 = _three_phase_meter7_van_va2__out;
    _three_phase_meter7_vln_rms_calc_rms__IN2 = _three_phase_meter7_vbn_va2__out;
    _three_phase_meter7_vln_rms_calc_rms__IN3 = _three_phase_meter7_vcn_va2__out;
    _three_phase_meter7_vln_rms_calc_rms__dFract = _three_phase_meter7_meassm_mode_and_dfract__dFract;
    _three_phase_meter7_vln_rms_calc_rms__mode = _three_phase_meter7_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter7_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter7_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter7_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter7_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter7_vln_rms_calc_rms__RMS1_state = _three_phase_meter7_vln_rms_calc_rms__IN1 ;
            _three_phase_meter7_vln_rms_calc_rms__RMS2_state = _three_phase_meter7_vln_rms_calc_rms__IN2 ;
            _three_phase_meter7_vln_rms_calc_rms__RMS3_state = _three_phase_meter7_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter7_vln_rms_calc_rms__rmsSum1 += _three_phase_meter7_vln_rms_calc_rms__dFract * ( _three_phase_meter7_vln_rms_calc_rms__IN1 * _three_phase_meter7_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter7_vln_rms_calc_rms__rmsSum2 += _three_phase_meter7_vln_rms_calc_rms__dFract * ( _three_phase_meter7_vln_rms_calc_rms__IN2 * _three_phase_meter7_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter7_vln_rms_calc_rms__rmsSum3 += _three_phase_meter7_vln_rms_calc_rms__dFract * ( _three_phase_meter7_vln_rms_calc_rms__IN3 * _three_phase_meter7_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter7_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter7_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter7_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter7_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter7_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter7_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter7_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter7_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter7_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter7_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter7_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter7_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter7_vln_rms_calc_rms__RMS1 = _three_phase_meter7_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter7_vln_rms_calc_rms__RMS2 = _three_phase_meter7_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter7_vln_rms_calc_rms__RMS3 = _three_phase_meter7_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter7.VN_RMS_calc.1ph_RMS
    _three_phase_meter7_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter7_sumvn__out;
    _three_phase_meter7_vn_rms_calc_1ph_rms__dFract = _three_phase_meter7_meassm_mode_and_dfract__dFract;
    _three_phase_meter7_vn_rms_calc_1ph_rms__mode = _three_phase_meter7_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter7_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter7_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter7_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter7_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter7_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter7_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter7_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter7_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter7_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter7.termSubMode
    // Generated from the component: Three-phase Meter7.PLL.PID.Sum8
    _three_phase_meter7_pll_pid_sum8__out = _three_phase_meter7_pll_pid_kd__out - _three_phase_meter7_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter8.IN_RMS_calc.1ph_RMS
    _three_phase_meter8_in_rms_calc_1ph_rms__IN1 = _three_phase_meter8_sumin__out;
    _three_phase_meter8_in_rms_calc_1ph_rms__dFract = _three_phase_meter8_meassm_mode_and_dfract__dFract;
    _three_phase_meter8_in_rms_calc_1ph_rms__mode = _three_phase_meter8_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter8_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter8_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter8_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter8_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter8_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter8_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter8_in_rms_calc_1ph_rms__IN1 * _three_phase_meter8_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter8_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter8_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter8_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter8_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter8_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter8_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter8.I_RMS_calc.RMS
    _three_phase_meter8_i_rms_calc_rms__IN1 = _three_phase_meter8_ia_ia2__out;
    _three_phase_meter8_i_rms_calc_rms__IN2 = _three_phase_meter8_ib_ia2__out;
    _three_phase_meter8_i_rms_calc_rms__IN3 = _three_phase_meter8_ic_ia2__out;
    _three_phase_meter8_i_rms_calc_rms__dFract = _three_phase_meter8_meassm_mode_and_dfract__dFract;
    _three_phase_meter8_i_rms_calc_rms__mode = _three_phase_meter8_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter8_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter8_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter8_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter8_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter8_i_rms_calc_rms__RMS1_state = _three_phase_meter8_i_rms_calc_rms__IN1 ;
            _three_phase_meter8_i_rms_calc_rms__RMS2_state = _three_phase_meter8_i_rms_calc_rms__IN2 ;
            _three_phase_meter8_i_rms_calc_rms__RMS3_state = _three_phase_meter8_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter8_i_rms_calc_rms__rmsSum1 += _three_phase_meter8_i_rms_calc_rms__dFract * ( _three_phase_meter8_i_rms_calc_rms__IN1 * _three_phase_meter8_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter8_i_rms_calc_rms__rmsSum2 += _three_phase_meter8_i_rms_calc_rms__dFract * ( _three_phase_meter8_i_rms_calc_rms__IN2 * _three_phase_meter8_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter8_i_rms_calc_rms__rmsSum3 += _three_phase_meter8_i_rms_calc_rms__dFract * ( _three_phase_meter8_i_rms_calc_rms__IN3 * _three_phase_meter8_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter8_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter8_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter8_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter8_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter8_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter8_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter8_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter8_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter8_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter8_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter8_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter8_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter8_i_rms_calc_rms__RMS1 = _three_phase_meter8_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter8_i_rms_calc_rms__RMS2 = _three_phase_meter8_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter8_i_rms_calc_rms__RMS3 = _three_phase_meter8_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter8.VLL_RMS_calc.RMS
    _three_phase_meter8_vll_rms_calc_rms__IN1 = _three_phase_meter8_vab_va2__out;
    _three_phase_meter8_vll_rms_calc_rms__IN2 = _three_phase_meter8_vbc_va2__out;
    _three_phase_meter8_vll_rms_calc_rms__IN3 = _three_phase_meter8_vca_va2__out;
    _three_phase_meter8_vll_rms_calc_rms__dFract = _three_phase_meter8_meassm_mode_and_dfract__dFract;
    _three_phase_meter8_vll_rms_calc_rms__mode = _three_phase_meter8_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter8_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter8_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter8_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter8_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter8_vll_rms_calc_rms__RMS1_state = _three_phase_meter8_vll_rms_calc_rms__IN1 ;
            _three_phase_meter8_vll_rms_calc_rms__RMS2_state = _three_phase_meter8_vll_rms_calc_rms__IN2 ;
            _three_phase_meter8_vll_rms_calc_rms__RMS3_state = _three_phase_meter8_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter8_vll_rms_calc_rms__rmsSum1 += _three_phase_meter8_vll_rms_calc_rms__dFract * ( _three_phase_meter8_vll_rms_calc_rms__IN1 * _three_phase_meter8_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter8_vll_rms_calc_rms__rmsSum2 += _three_phase_meter8_vll_rms_calc_rms__dFract * ( _three_phase_meter8_vll_rms_calc_rms__IN2 * _three_phase_meter8_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter8_vll_rms_calc_rms__rmsSum3 += _three_phase_meter8_vll_rms_calc_rms__dFract * ( _three_phase_meter8_vll_rms_calc_rms__IN3 * _three_phase_meter8_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter8_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter8_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter8_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter8_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter8_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter8_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter8_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter8_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter8_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter8_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter8_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter8_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter8_vll_rms_calc_rms__RMS1 = _three_phase_meter8_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter8_vll_rms_calc_rms__RMS2 = _three_phase_meter8_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter8_vll_rms_calc_rms__RMS3 = _three_phase_meter8_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter8.VLn_RMS_calc.RMS
    _three_phase_meter8_vln_rms_calc_rms__IN1 = _three_phase_meter8_van_va2__out;
    _three_phase_meter8_vln_rms_calc_rms__IN2 = _three_phase_meter8_vbn_va2__out;
    _three_phase_meter8_vln_rms_calc_rms__IN3 = _three_phase_meter8_vcn_va2__out;
    _three_phase_meter8_vln_rms_calc_rms__dFract = _three_phase_meter8_meassm_mode_and_dfract__dFract;
    _three_phase_meter8_vln_rms_calc_rms__mode = _three_phase_meter8_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter8_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter8_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter8_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter8_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter8_vln_rms_calc_rms__RMS1_state = _three_phase_meter8_vln_rms_calc_rms__IN1 ;
            _three_phase_meter8_vln_rms_calc_rms__RMS2_state = _three_phase_meter8_vln_rms_calc_rms__IN2 ;
            _three_phase_meter8_vln_rms_calc_rms__RMS3_state = _three_phase_meter8_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter8_vln_rms_calc_rms__rmsSum1 += _three_phase_meter8_vln_rms_calc_rms__dFract * ( _three_phase_meter8_vln_rms_calc_rms__IN1 * _three_phase_meter8_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter8_vln_rms_calc_rms__rmsSum2 += _three_phase_meter8_vln_rms_calc_rms__dFract * ( _three_phase_meter8_vln_rms_calc_rms__IN2 * _three_phase_meter8_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter8_vln_rms_calc_rms__rmsSum3 += _three_phase_meter8_vln_rms_calc_rms__dFract * ( _three_phase_meter8_vln_rms_calc_rms__IN3 * _three_phase_meter8_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter8_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter8_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter8_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter8_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter8_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter8_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter8_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter8_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter8_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter8_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter8_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter8_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter8_vln_rms_calc_rms__RMS1 = _three_phase_meter8_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter8_vln_rms_calc_rms__RMS2 = _three_phase_meter8_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter8_vln_rms_calc_rms__RMS3 = _three_phase_meter8_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter8.VN_RMS_calc.1ph_RMS
    _three_phase_meter8_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter8_sumvn__out;
    _three_phase_meter8_vn_rms_calc_1ph_rms__dFract = _three_phase_meter8_meassm_mode_and_dfract__dFract;
    _three_phase_meter8_vn_rms_calc_1ph_rms__mode = _three_phase_meter8_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter8_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter8_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter8_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter8_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter8_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter8_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter8_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter8_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter8_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter8.termSubMode
    // Generated from the component: Three-phase Meter8.PLL.PID.Sum8
    _three_phase_meter8_pll_pid_sum8__out = _three_phase_meter8_pll_pid_kd__out - _three_phase_meter8_pll_pid_integrator2__out;
    // Generated from the component: Three-phase Meter9.IN_RMS_calc.1ph_RMS
    _three_phase_meter9_in_rms_calc_1ph_rms__IN1 = _three_phase_meter9_sumin__out;
    _three_phase_meter9_in_rms_calc_1ph_rms__dFract = _three_phase_meter9_meassm_mode_and_dfract__dFract;
    _three_phase_meter9_in_rms_calc_1ph_rms__mode = _three_phase_meter9_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter9_in_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter9_in_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter9_in_rms_calc_1ph_rms__RMS1_state = _three_phase_meter9_in_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter9_in_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter9_in_rms_calc_1ph_rms__dFract * ( _three_phase_meter9_in_rms_calc_1ph_rms__IN1 * _three_phase_meter9_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter9_in_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter9_in_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter9_in_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter9_in_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter9_in_rms_calc_1ph_rms__RMS1 = _three_phase_meter9_in_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter9.I_RMS_calc.RMS
    _three_phase_meter9_i_rms_calc_rms__IN1 = _three_phase_meter9_ia_ia2__out;
    _three_phase_meter9_i_rms_calc_rms__IN2 = _three_phase_meter9_ib_ia2__out;
    _three_phase_meter9_i_rms_calc_rms__IN3 = _three_phase_meter9_ic_ia2__out;
    _three_phase_meter9_i_rms_calc_rms__dFract = _three_phase_meter9_meassm_mode_and_dfract__dFract;
    _three_phase_meter9_i_rms_calc_rms__mode = _three_phase_meter9_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter9_i_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter9_i_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter9_i_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter9_i_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter9_i_rms_calc_rms__RMS1_state = _three_phase_meter9_i_rms_calc_rms__IN1 ;
            _three_phase_meter9_i_rms_calc_rms__RMS2_state = _three_phase_meter9_i_rms_calc_rms__IN2 ;
            _three_phase_meter9_i_rms_calc_rms__RMS3_state = _three_phase_meter9_i_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter9_i_rms_calc_rms__rmsSum1 += _three_phase_meter9_i_rms_calc_rms__dFract * ( _three_phase_meter9_i_rms_calc_rms__IN1 * _three_phase_meter9_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter9_i_rms_calc_rms__rmsSum2 += _three_phase_meter9_i_rms_calc_rms__dFract * ( _three_phase_meter9_i_rms_calc_rms__IN2 * _three_phase_meter9_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter9_i_rms_calc_rms__rmsSum3 += _three_phase_meter9_i_rms_calc_rms__dFract * ( _three_phase_meter9_i_rms_calc_rms__IN3 * _three_phase_meter9_i_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter9_i_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter9_i_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter9_i_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter9_i_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter9_i_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter9_i_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter9_i_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter9_i_rms_calc_rms__IN1 ) ;
            _three_phase_meter9_i_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter9_i_rms_calc_rms__IN2 ) ;
            _three_phase_meter9_i_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter9_i_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter9_i_rms_calc_rms__RMS1 = _three_phase_meter9_i_rms_calc_rms__RMS1_state ;
        _three_phase_meter9_i_rms_calc_rms__RMS2 = _three_phase_meter9_i_rms_calc_rms__RMS2_state ;
        _three_phase_meter9_i_rms_calc_rms__RMS3 = _three_phase_meter9_i_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter9.VLL_RMS_calc.RMS
    _three_phase_meter9_vll_rms_calc_rms__IN1 = _three_phase_meter9_vab_va2__out;
    _three_phase_meter9_vll_rms_calc_rms__IN2 = _three_phase_meter9_vbc_va2__out;
    _three_phase_meter9_vll_rms_calc_rms__IN3 = _three_phase_meter9_vca_va2__out;
    _three_phase_meter9_vll_rms_calc_rms__dFract = _three_phase_meter9_meassm_mode_and_dfract__dFract;
    _three_phase_meter9_vll_rms_calc_rms__mode = _three_phase_meter9_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter9_vll_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter9_vll_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter9_vll_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter9_vll_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter9_vll_rms_calc_rms__RMS1_state = _three_phase_meter9_vll_rms_calc_rms__IN1 ;
            _three_phase_meter9_vll_rms_calc_rms__RMS2_state = _three_phase_meter9_vll_rms_calc_rms__IN2 ;
            _three_phase_meter9_vll_rms_calc_rms__RMS3_state = _three_phase_meter9_vll_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter9_vll_rms_calc_rms__rmsSum1 += _three_phase_meter9_vll_rms_calc_rms__dFract * ( _three_phase_meter9_vll_rms_calc_rms__IN1 * _three_phase_meter9_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter9_vll_rms_calc_rms__rmsSum2 += _three_phase_meter9_vll_rms_calc_rms__dFract * ( _three_phase_meter9_vll_rms_calc_rms__IN2 * _three_phase_meter9_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter9_vll_rms_calc_rms__rmsSum3 += _three_phase_meter9_vll_rms_calc_rms__dFract * ( _three_phase_meter9_vll_rms_calc_rms__IN3 * _three_phase_meter9_vll_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter9_vll_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter9_vll_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter9_vll_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter9_vll_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter9_vll_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter9_vll_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter9_vll_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter9_vll_rms_calc_rms__IN1 ) ;
            _three_phase_meter9_vll_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter9_vll_rms_calc_rms__IN2 ) ;
            _three_phase_meter9_vll_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter9_vll_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter9_vll_rms_calc_rms__RMS1 = _three_phase_meter9_vll_rms_calc_rms__RMS1_state ;
        _three_phase_meter9_vll_rms_calc_rms__RMS2 = _three_phase_meter9_vll_rms_calc_rms__RMS2_state ;
        _three_phase_meter9_vll_rms_calc_rms__RMS3 = _three_phase_meter9_vll_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter9.VLn_RMS_calc.RMS
    _three_phase_meter9_vln_rms_calc_rms__IN1 = _three_phase_meter9_van_va2__out;
    _three_phase_meter9_vln_rms_calc_rms__IN2 = _three_phase_meter9_vbn_va2__out;
    _three_phase_meter9_vln_rms_calc_rms__IN3 = _three_phase_meter9_vcn_va2__out;
    _three_phase_meter9_vln_rms_calc_rms__dFract = _three_phase_meter9_meassm_mode_and_dfract__dFract;
    _three_phase_meter9_vln_rms_calc_rms__mode = _three_phase_meter9_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter9_vln_rms_calc_rms__mode )     {
        case 1 :
            _three_phase_meter9_vln_rms_calc_rms__rmsSum1 = 0.0 ;
            _three_phase_meter9_vln_rms_calc_rms__rmsSum2 = 0.0 ;
            _three_phase_meter9_vln_rms_calc_rms__rmsSum3 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter9_vln_rms_calc_rms__RMS1_state = _three_phase_meter9_vln_rms_calc_rms__IN1 ;
            _three_phase_meter9_vln_rms_calc_rms__RMS2_state = _three_phase_meter9_vln_rms_calc_rms__IN2 ;
            _three_phase_meter9_vln_rms_calc_rms__RMS3_state = _three_phase_meter9_vln_rms_calc_rms__IN3 ;
            break;
        case 3 :
            _three_phase_meter9_vln_rms_calc_rms__rmsSum1 += _three_phase_meter9_vln_rms_calc_rms__dFract * ( _three_phase_meter9_vln_rms_calc_rms__IN1 * _three_phase_meter9_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter9_vln_rms_calc_rms__rmsSum2 += _three_phase_meter9_vln_rms_calc_rms__dFract * ( _three_phase_meter9_vln_rms_calc_rms__IN2 * _three_phase_meter9_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter9_vln_rms_calc_rms__rmsSum3 += _three_phase_meter9_vln_rms_calc_rms__dFract * ( _three_phase_meter9_vln_rms_calc_rms__IN3 * _three_phase_meter9_vln_rms_calc_rms__IN3 ) ;
            break;
        case 4 :
            _three_phase_meter9_vln_rms_calc_rms__RMS1_state = sqrt ( _three_phase_meter9_vln_rms_calc_rms__rmsSum1 ) ;
            _three_phase_meter9_vln_rms_calc_rms__RMS2_state = sqrt ( _three_phase_meter9_vln_rms_calc_rms__rmsSum2 ) ;
            _three_phase_meter9_vln_rms_calc_rms__RMS3_state = sqrt ( _three_phase_meter9_vln_rms_calc_rms__rmsSum3 ) ;
            break;
        case 5 :
            _three_phase_meter9_vln_rms_calc_rms__RMS1_state = fabs ( _three_phase_meter9_vln_rms_calc_rms__IN1 ) ;
            _three_phase_meter9_vln_rms_calc_rms__RMS2_state = fabs ( _three_phase_meter9_vln_rms_calc_rms__IN2 ) ;
            _three_phase_meter9_vln_rms_calc_rms__RMS3_state = fabs ( _three_phase_meter9_vln_rms_calc_rms__IN3 ) ;
            break;
        }
        _three_phase_meter9_vln_rms_calc_rms__RMS1 = _three_phase_meter9_vln_rms_calc_rms__RMS1_state ;
        _three_phase_meter9_vln_rms_calc_rms__RMS2 = _three_phase_meter9_vln_rms_calc_rms__RMS2_state ;
        _three_phase_meter9_vln_rms_calc_rms__RMS3 = _three_phase_meter9_vln_rms_calc_rms__RMS3_state ;
    }
    // Generated from the component: Three-phase Meter9.VN_RMS_calc.1ph_RMS
    _three_phase_meter9_vn_rms_calc_1ph_rms__IN1 = _three_phase_meter9_sumvn__out;
    _three_phase_meter9_vn_rms_calc_1ph_rms__dFract = _three_phase_meter9_meassm_mode_and_dfract__dFract;
    _three_phase_meter9_vn_rms_calc_1ph_rms__mode = _three_phase_meter9_meassm_mode_and_dfract__mode;
    {
        switch ( _three_phase_meter9_vn_rms_calc_1ph_rms__mode )     {
        case 1 :
            _three_phase_meter9_vn_rms_calc_1ph_rms__rmsSum1 = 0.0 ;
            break;
        case 2 :
            _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1_state = _three_phase_meter9_vn_rms_calc_1ph_rms__IN1 ;
            break;
        case 3 :
            _three_phase_meter9_vn_rms_calc_1ph_rms__rmsSum1 += _three_phase_meter9_vn_rms_calc_1ph_rms__dFract * ( _three_phase_meter9_vn_rms_calc_1ph_rms__IN1 * _three_phase_meter9_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        case 4 :
            _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1_state = sqrt ( _three_phase_meter9_vn_rms_calc_1ph_rms__rmsSum1 ) ;
            break;
        case 5 :
            _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1_state = fabs ( _three_phase_meter9_vn_rms_calc_1ph_rms__IN1 ) ;
            break;
        }
        _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1 = _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1_state ;
    }
    // Generated from the component: Three-phase Meter9.termSubMode
    // Generated from the component: Three-phase Meter9.PLL.PID.Sum8
    _three_phase_meter9_pll_pid_sum8__out = _three_phase_meter9_pll_pid_kd__out - _three_phase_meter9_pll_pid_integrator2__out;
    // Generated from the component: Bay 1.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 1.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 10.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 10.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 2.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 2.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 3.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 3.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 4.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 4.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 5.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 5.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 6.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 6.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 7.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 7.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 8.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 8.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 9.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 9.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: HV Bay 1.GOOSE Publisher2.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: HV Bay 1.GOOSE Publisher1.goose_data_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Three-phase Meter1.IN_RMS
    HIL_OutAO(0x4005, (float)_three_phase_meter1_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter1.IA_RMS
    HIL_OutAO(0x4001, (float)_three_phase_meter1_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter1.IB_RMS
    HIL_OutAO(0x4002, (float)_three_phase_meter1_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter1.IC_RMS
    HIL_OutAO(0x4003, (float)_three_phase_meter1_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter1.sumI_RMS
    _three_phase_meter1_sumi_rms__out = _three_phase_meter1_i_rms_calc_rms__RMS1 + _three_phase_meter1_i_rms_calc_rms__RMS2 + _three_phase_meter1_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter1.VAB_RMS
    HIL_OutAO(0x4007, (float)_three_phase_meter1_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter1.VBC_RMS
    HIL_OutAO(0x4009, (float)_three_phase_meter1_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter1.VCA_RMS
    HIL_OutAO(0x400b, (float)_three_phase_meter1_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter1.sumVLL_RMS
    _three_phase_meter1_sumvll_rms__out = _three_phase_meter1_vll_rms_calc_rms__RMS1 + _three_phase_meter1_vll_rms_calc_rms__RMS2 + _three_phase_meter1_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter1.VAn_RMS
    HIL_OutAO(0x4008, (float)_three_phase_meter1_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter1.VBn_RMS
    HIL_OutAO(0x400a, (float)_three_phase_meter1_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter1.VCn_RMS
    HIL_OutAO(0x400c, (float)_three_phase_meter1_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter1.sumVLn_RMS
    _three_phase_meter1_sumvln_rms__out = _three_phase_meter1_vln_rms_calc_rms__RMS1 + _three_phase_meter1_vln_rms_calc_rms__RMS2 + _three_phase_meter1_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter1.VN_RMS
    HIL_OutAO(0x4010, (float)_three_phase_meter1_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter1.PLL.PID.Gain1
    _three_phase_meter1_pll_pid_gain1__out = 714.2857 * _three_phase_meter1_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter10.IN_RMS
    HIL_OutAO(0x4016, (float)_three_phase_meter10_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter10.IA_RMS
    HIL_OutAO(0x4012, (float)_three_phase_meter10_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter10.IB_RMS
    HIL_OutAO(0x4013, (float)_three_phase_meter10_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter10.IC_RMS
    HIL_OutAO(0x4014, (float)_three_phase_meter10_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter10.sumI_RMS
    _three_phase_meter10_sumi_rms__out = _three_phase_meter10_i_rms_calc_rms__RMS1 + _three_phase_meter10_i_rms_calc_rms__RMS2 + _three_phase_meter10_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter10.VAB_RMS
    HIL_OutAO(0x4018, (float)_three_phase_meter10_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter10.VBC_RMS
    HIL_OutAO(0x401a, (float)_three_phase_meter10_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter10.VCA_RMS
    HIL_OutAO(0x401c, (float)_three_phase_meter10_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter10.sumVLL_RMS
    _three_phase_meter10_sumvll_rms__out = _three_phase_meter10_vll_rms_calc_rms__RMS1 + _three_phase_meter10_vll_rms_calc_rms__RMS2 + _three_phase_meter10_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter10.VAn_RMS
    HIL_OutAO(0x4019, (float)_three_phase_meter10_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter10.VBn_RMS
    HIL_OutAO(0x401b, (float)_three_phase_meter10_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter10.VCn_RMS
    HIL_OutAO(0x401d, (float)_three_phase_meter10_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter10.sumVLn_RMS
    _three_phase_meter10_sumvln_rms__out = _three_phase_meter10_vln_rms_calc_rms__RMS1 + _three_phase_meter10_vln_rms_calc_rms__RMS2 + _three_phase_meter10_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter10.VN_RMS
    HIL_OutAO(0x4021, (float)_three_phase_meter10_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter10.PLL.PID.Gain1
    _three_phase_meter10_pll_pid_gain1__out = 714.2857 * _three_phase_meter10_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter11.IN_RMS
    HIL_OutAO(0x4027, (float)_three_phase_meter11_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter11.IA_RMS
    HIL_OutAO(0x4023, (float)_three_phase_meter11_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter11.IB_RMS
    HIL_OutAO(0x4024, (float)_three_phase_meter11_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter11.IC_RMS
    HIL_OutAO(0x4025, (float)_three_phase_meter11_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter11.sumI_RMS
    _three_phase_meter11_sumi_rms__out = _three_phase_meter11_i_rms_calc_rms__RMS1 + _three_phase_meter11_i_rms_calc_rms__RMS2 + _three_phase_meter11_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter11.VAB_RMS
    HIL_OutAO(0x4029, (float)_three_phase_meter11_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter11.VBC_RMS
    HIL_OutAO(0x402b, (float)_three_phase_meter11_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter11.VCA_RMS
    HIL_OutAO(0x402d, (float)_three_phase_meter11_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter11.sumVLL_RMS
    _three_phase_meter11_sumvll_rms__out = _three_phase_meter11_vll_rms_calc_rms__RMS1 + _three_phase_meter11_vll_rms_calc_rms__RMS2 + _three_phase_meter11_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter11.VAn_RMS
    HIL_OutAO(0x402a, (float)_three_phase_meter11_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter11.VBn_RMS
    HIL_OutAO(0x402c, (float)_three_phase_meter11_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter11.VCn_RMS
    HIL_OutAO(0x402e, (float)_three_phase_meter11_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter11.sumVLn_RMS
    _three_phase_meter11_sumvln_rms__out = _three_phase_meter11_vln_rms_calc_rms__RMS1 + _three_phase_meter11_vln_rms_calc_rms__RMS2 + _three_phase_meter11_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter11.VN_RMS
    HIL_OutAO(0x4032, (float)_three_phase_meter11_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter11.PLL.PID.Gain1
    _three_phase_meter11_pll_pid_gain1__out = 714.2857 * _three_phase_meter11_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter2.IN_RMS
    HIL_OutAO(0x4038, (float)_three_phase_meter2_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter2.IA_RMS
    HIL_OutAO(0x4034, (float)_three_phase_meter2_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter2.IB_RMS
    HIL_OutAO(0x4035, (float)_three_phase_meter2_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter2.IC_RMS
    HIL_OutAO(0x4036, (float)_three_phase_meter2_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter2.sumI_RMS
    _three_phase_meter2_sumi_rms__out = _three_phase_meter2_i_rms_calc_rms__RMS1 + _three_phase_meter2_i_rms_calc_rms__RMS2 + _three_phase_meter2_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter2.VAB_RMS
    HIL_OutAO(0x403a, (float)_three_phase_meter2_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter2.VBC_RMS
    HIL_OutAO(0x403c, (float)_three_phase_meter2_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter2.VCA_RMS
    HIL_OutAO(0x403e, (float)_three_phase_meter2_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter2.sumVLL_RMS
    _three_phase_meter2_sumvll_rms__out = _three_phase_meter2_vll_rms_calc_rms__RMS1 + _three_phase_meter2_vll_rms_calc_rms__RMS2 + _three_phase_meter2_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter2.VAn_RMS
    HIL_OutAO(0x403b, (float)_three_phase_meter2_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter2.VBn_RMS
    HIL_OutAO(0x403d, (float)_three_phase_meter2_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter2.VCn_RMS
    HIL_OutAO(0x403f, (float)_three_phase_meter2_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter2.sumVLn_RMS
    _three_phase_meter2_sumvln_rms__out = _three_phase_meter2_vln_rms_calc_rms__RMS1 + _three_phase_meter2_vln_rms_calc_rms__RMS2 + _three_phase_meter2_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter2.VN_RMS
    HIL_OutAO(0x4043, (float)_three_phase_meter2_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter2.PLL.PID.Gain1
    _three_phase_meter2_pll_pid_gain1__out = 714.2857 * _three_phase_meter2_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter3.IN_RMS
    HIL_OutAO(0x4049, (float)_three_phase_meter3_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter3.IA_RMS
    HIL_OutAO(0x4045, (float)_three_phase_meter3_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter3.IB_RMS
    HIL_OutAO(0x4046, (float)_three_phase_meter3_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter3.IC_RMS
    HIL_OutAO(0x4047, (float)_three_phase_meter3_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter3.sumI_RMS
    _three_phase_meter3_sumi_rms__out = _three_phase_meter3_i_rms_calc_rms__RMS1 + _three_phase_meter3_i_rms_calc_rms__RMS2 + _three_phase_meter3_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter3.VAB_RMS
    HIL_OutAO(0x404b, (float)_three_phase_meter3_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter3.VBC_RMS
    HIL_OutAO(0x404d, (float)_three_phase_meter3_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter3.VCA_RMS
    HIL_OutAO(0x404f, (float)_three_phase_meter3_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter3.sumVLL_RMS
    _three_phase_meter3_sumvll_rms__out = _three_phase_meter3_vll_rms_calc_rms__RMS1 + _three_phase_meter3_vll_rms_calc_rms__RMS2 + _three_phase_meter3_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter3.VAn_RMS
    HIL_OutAO(0x404c, (float)_three_phase_meter3_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter3.VBn_RMS
    HIL_OutAO(0x404e, (float)_three_phase_meter3_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter3.VCn_RMS
    HIL_OutAO(0x4050, (float)_three_phase_meter3_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter3.sumVLn_RMS
    _three_phase_meter3_sumvln_rms__out = _three_phase_meter3_vln_rms_calc_rms__RMS1 + _three_phase_meter3_vln_rms_calc_rms__RMS2 + _three_phase_meter3_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter3.VN_RMS
    HIL_OutAO(0x4054, (float)_three_phase_meter3_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter3.PLL.PID.Gain1
    _three_phase_meter3_pll_pid_gain1__out = 714.2857 * _three_phase_meter3_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter4.IN_RMS
    HIL_OutAO(0x405a, (float)_three_phase_meter4_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter4.IA_RMS
    HIL_OutAO(0x4056, (float)_three_phase_meter4_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter4.IB_RMS
    HIL_OutAO(0x4057, (float)_three_phase_meter4_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter4.IC_RMS
    HIL_OutAO(0x4058, (float)_three_phase_meter4_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter4.sumI_RMS
    _three_phase_meter4_sumi_rms__out = _three_phase_meter4_i_rms_calc_rms__RMS1 + _three_phase_meter4_i_rms_calc_rms__RMS2 + _three_phase_meter4_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter4.VAB_RMS
    HIL_OutAO(0x405c, (float)_three_phase_meter4_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter4.VBC_RMS
    HIL_OutAO(0x405e, (float)_three_phase_meter4_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter4.VCA_RMS
    HIL_OutAO(0x4060, (float)_three_phase_meter4_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter4.sumVLL_RMS
    _three_phase_meter4_sumvll_rms__out = _three_phase_meter4_vll_rms_calc_rms__RMS1 + _three_phase_meter4_vll_rms_calc_rms__RMS2 + _three_phase_meter4_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter4.VAn_RMS
    HIL_OutAO(0x405d, (float)_three_phase_meter4_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter4.VBn_RMS
    HIL_OutAO(0x405f, (float)_three_phase_meter4_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter4.VCn_RMS
    HIL_OutAO(0x4061, (float)_three_phase_meter4_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter4.sumVLn_RMS
    _three_phase_meter4_sumvln_rms__out = _three_phase_meter4_vln_rms_calc_rms__RMS1 + _three_phase_meter4_vln_rms_calc_rms__RMS2 + _three_phase_meter4_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter4.VN_RMS
    HIL_OutAO(0x4065, (float)_three_phase_meter4_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter4.PLL.PID.Gain1
    _three_phase_meter4_pll_pid_gain1__out = 714.2857 * _three_phase_meter4_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter5.IN_RMS
    HIL_OutAO(0x406b, (float)_three_phase_meter5_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter5.IA_RMS
    HIL_OutAO(0x4067, (float)_three_phase_meter5_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter5.IB_RMS
    HIL_OutAO(0x4068, (float)_three_phase_meter5_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter5.IC_RMS
    HIL_OutAO(0x4069, (float)_three_phase_meter5_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter5.sumI_RMS
    _three_phase_meter5_sumi_rms__out = _three_phase_meter5_i_rms_calc_rms__RMS1 + _three_phase_meter5_i_rms_calc_rms__RMS2 + _three_phase_meter5_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter5.VAB_RMS
    HIL_OutAO(0x406d, (float)_three_phase_meter5_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter5.VBC_RMS
    HIL_OutAO(0x406f, (float)_three_phase_meter5_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter5.VCA_RMS
    HIL_OutAO(0x4071, (float)_three_phase_meter5_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter5.sumVLL_RMS
    _three_phase_meter5_sumvll_rms__out = _three_phase_meter5_vll_rms_calc_rms__RMS1 + _three_phase_meter5_vll_rms_calc_rms__RMS2 + _three_phase_meter5_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter5.VAn_RMS
    HIL_OutAO(0x406e, (float)_three_phase_meter5_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter5.VBn_RMS
    HIL_OutAO(0x4070, (float)_three_phase_meter5_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter5.VCn_RMS
    HIL_OutAO(0x4072, (float)_three_phase_meter5_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter5.sumVLn_RMS
    _three_phase_meter5_sumvln_rms__out = _three_phase_meter5_vln_rms_calc_rms__RMS1 + _three_phase_meter5_vln_rms_calc_rms__RMS2 + _three_phase_meter5_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter5.VN_RMS
    HIL_OutAO(0x4076, (float)_three_phase_meter5_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter5.PLL.PID.Gain1
    _three_phase_meter5_pll_pid_gain1__out = 714.2857 * _three_phase_meter5_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter6.IN_RMS
    HIL_OutAO(0x407c, (float)_three_phase_meter6_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter6.IA_RMS
    HIL_OutAO(0x4078, (float)_three_phase_meter6_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter6.IB_RMS
    HIL_OutAO(0x4079, (float)_three_phase_meter6_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter6.IC_RMS
    HIL_OutAO(0x407a, (float)_three_phase_meter6_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter6.sumI_RMS
    _three_phase_meter6_sumi_rms__out = _three_phase_meter6_i_rms_calc_rms__RMS1 + _three_phase_meter6_i_rms_calc_rms__RMS2 + _three_phase_meter6_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter6.VAB_RMS
    HIL_OutAO(0x407e, (float)_three_phase_meter6_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter6.VBC_RMS
    HIL_OutAO(0x4080, (float)_three_phase_meter6_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter6.VCA_RMS
    HIL_OutAO(0x4082, (float)_three_phase_meter6_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter6.sumVLL_RMS
    _three_phase_meter6_sumvll_rms__out = _three_phase_meter6_vll_rms_calc_rms__RMS1 + _three_phase_meter6_vll_rms_calc_rms__RMS2 + _three_phase_meter6_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter6.VAn_RMS
    HIL_OutAO(0x407f, (float)_three_phase_meter6_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter6.VBn_RMS
    HIL_OutAO(0x4081, (float)_three_phase_meter6_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter6.VCn_RMS
    HIL_OutAO(0x4083, (float)_three_phase_meter6_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter6.sumVLn_RMS
    _three_phase_meter6_sumvln_rms__out = _three_phase_meter6_vln_rms_calc_rms__RMS1 + _three_phase_meter6_vln_rms_calc_rms__RMS2 + _three_phase_meter6_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter6.VN_RMS
    HIL_OutAO(0x4087, (float)_three_phase_meter6_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter6.PLL.PID.Gain1
    _three_phase_meter6_pll_pid_gain1__out = 714.2857 * _three_phase_meter6_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter7.IN_RMS
    HIL_OutAO(0x408d, (float)_three_phase_meter7_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter7.IA_RMS
    HIL_OutAO(0x4089, (float)_three_phase_meter7_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter7.IB_RMS
    HIL_OutAO(0x408a, (float)_three_phase_meter7_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter7.IC_RMS
    HIL_OutAO(0x408b, (float)_three_phase_meter7_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter7.sumI_RMS
    _three_phase_meter7_sumi_rms__out = _three_phase_meter7_i_rms_calc_rms__RMS1 + _three_phase_meter7_i_rms_calc_rms__RMS2 + _three_phase_meter7_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter7.VAB_RMS
    HIL_OutAO(0x408f, (float)_three_phase_meter7_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter7.VBC_RMS
    HIL_OutAO(0x4091, (float)_three_phase_meter7_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter7.VCA_RMS
    HIL_OutAO(0x4093, (float)_three_phase_meter7_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter7.sumVLL_RMS
    _three_phase_meter7_sumvll_rms__out = _three_phase_meter7_vll_rms_calc_rms__RMS1 + _three_phase_meter7_vll_rms_calc_rms__RMS2 + _three_phase_meter7_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter7.VAn_RMS
    HIL_OutAO(0x4090, (float)_three_phase_meter7_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter7.VBn_RMS
    HIL_OutAO(0x4092, (float)_three_phase_meter7_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter7.VCn_RMS
    HIL_OutAO(0x4094, (float)_three_phase_meter7_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter7.sumVLn_RMS
    _three_phase_meter7_sumvln_rms__out = _three_phase_meter7_vln_rms_calc_rms__RMS1 + _three_phase_meter7_vln_rms_calc_rms__RMS2 + _three_phase_meter7_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter7.VN_RMS
    HIL_OutAO(0x4098, (float)_three_phase_meter7_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter7.PLL.PID.Gain1
    _three_phase_meter7_pll_pid_gain1__out = 714.2857 * _three_phase_meter7_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter8.IN_RMS
    HIL_OutAO(0x409e, (float)_three_phase_meter8_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter8.IA_RMS
    HIL_OutAO(0x409a, (float)_three_phase_meter8_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter8.IB_RMS
    HIL_OutAO(0x409b, (float)_three_phase_meter8_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter8.IC_RMS
    HIL_OutAO(0x409c, (float)_three_phase_meter8_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter8.sumI_RMS
    _three_phase_meter8_sumi_rms__out = _three_phase_meter8_i_rms_calc_rms__RMS1 + _three_phase_meter8_i_rms_calc_rms__RMS2 + _three_phase_meter8_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter8.VAB_RMS
    HIL_OutAO(0x40a0, (float)_three_phase_meter8_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter8.VBC_RMS
    HIL_OutAO(0x40a2, (float)_three_phase_meter8_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter8.VCA_RMS
    HIL_OutAO(0x40a4, (float)_three_phase_meter8_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter8.sumVLL_RMS
    _three_phase_meter8_sumvll_rms__out = _three_phase_meter8_vll_rms_calc_rms__RMS1 + _three_phase_meter8_vll_rms_calc_rms__RMS2 + _three_phase_meter8_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter8.VAn_RMS
    HIL_OutAO(0x40a1, (float)_three_phase_meter8_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter8.VBn_RMS
    HIL_OutAO(0x40a3, (float)_three_phase_meter8_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter8.VCn_RMS
    HIL_OutAO(0x40a5, (float)_three_phase_meter8_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter8.sumVLn_RMS
    _three_phase_meter8_sumvln_rms__out = _three_phase_meter8_vln_rms_calc_rms__RMS1 + _three_phase_meter8_vln_rms_calc_rms__RMS2 + _three_phase_meter8_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter8.VN_RMS
    HIL_OutAO(0x40a9, (float)_three_phase_meter8_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter8.PLL.PID.Gain1
    _three_phase_meter8_pll_pid_gain1__out = 714.2857 * _three_phase_meter8_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter9.IN_RMS
    HIL_OutAO(0x40af, (float)_three_phase_meter9_in_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter9.IA_RMS
    HIL_OutAO(0x40ab, (float)_three_phase_meter9_i_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter9.IB_RMS
    HIL_OutAO(0x40ac, (float)_three_phase_meter9_i_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter9.IC_RMS
    HIL_OutAO(0x40ad, (float)_three_phase_meter9_i_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter9.sumI_RMS
    _three_phase_meter9_sumi_rms__out = _three_phase_meter9_i_rms_calc_rms__RMS1 + _three_phase_meter9_i_rms_calc_rms__RMS2 + _three_phase_meter9_i_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter9.VAB_RMS
    HIL_OutAO(0x40b1, (float)_three_phase_meter9_vll_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter9.VBC_RMS
    HIL_OutAO(0x40b3, (float)_three_phase_meter9_vll_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter9.VCA_RMS
    HIL_OutAO(0x40b5, (float)_three_phase_meter9_vll_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter9.sumVLL_RMS
    _three_phase_meter9_sumvll_rms__out = _three_phase_meter9_vll_rms_calc_rms__RMS1 + _three_phase_meter9_vll_rms_calc_rms__RMS2 + _three_phase_meter9_vll_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter9.VAn_RMS
    HIL_OutAO(0x40b2, (float)_three_phase_meter9_vln_rms_calc_rms__RMS1);
    // Generated from the component: Three-phase Meter9.VBn_RMS
    HIL_OutAO(0x40b4, (float)_three_phase_meter9_vln_rms_calc_rms__RMS2);
    // Generated from the component: Three-phase Meter9.VCn_RMS
    HIL_OutAO(0x40b6, (float)_three_phase_meter9_vln_rms_calc_rms__RMS3);
    // Generated from the component: Three-phase Meter9.sumVLn_RMS
    _three_phase_meter9_sumvln_rms__out = _three_phase_meter9_vln_rms_calc_rms__RMS1 + _three_phase_meter9_vln_rms_calc_rms__RMS2 + _three_phase_meter9_vln_rms_calc_rms__RMS3;
    // Generated from the component: Three-phase Meter9.VN_RMS
    HIL_OutAO(0x40ba, (float)_three_phase_meter9_vn_rms_calc_1ph_rms__RMS1);
    // Generated from the component: Three-phase Meter9.PLL.PID.Gain1
    _three_phase_meter9_pll_pid_gain1__out = 714.2857 * _three_phase_meter9_pll_pid_sum8__out;
    // Generated from the component: Three-phase Meter1.gainI_RMS
    _three_phase_meter1_gaini_rms__out = 0.3333333333333333 * _three_phase_meter1_sumi_rms__out;
    // Generated from the component: Three-phase Meter1.gainVLL_RMS
    _three_phase_meter1_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter1_sumvll_rms__out;
    // Generated from the component: Three-phase Meter1.gainVLn_RMS
    _three_phase_meter1_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter1_sumvln_rms__out;
    // Generated from the component: Three-phase Meter1.PLL.PID.Sum5
    _three_phase_meter1_pll_pid_sum5__out = _three_phase_meter1_pll_pid_kp__out + _three_phase_meter1_pll_pid_gain1__out + _three_phase_meter1_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter10.gainI_RMS
    _three_phase_meter10_gaini_rms__out = 0.3333333333333333 * _three_phase_meter10_sumi_rms__out;
    // Generated from the component: Three-phase Meter10.gainVLL_RMS
    _three_phase_meter10_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter10_sumvll_rms__out;
    // Generated from the component: Three-phase Meter10.gainVLn_RMS
    _three_phase_meter10_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter10_sumvln_rms__out;
    // Generated from the component: Three-phase Meter10.PLL.PID.Sum5
    _three_phase_meter10_pll_pid_sum5__out = _three_phase_meter10_pll_pid_kp__out + _three_phase_meter10_pll_pid_gain1__out + _three_phase_meter10_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter11.gainI_RMS
    _three_phase_meter11_gaini_rms__out = 0.3333333333333333 * _three_phase_meter11_sumi_rms__out;
    // Generated from the component: Three-phase Meter11.gainVLL_RMS
    _three_phase_meter11_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter11_sumvll_rms__out;
    // Generated from the component: Three-phase Meter11.gainVLn_RMS
    _three_phase_meter11_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter11_sumvln_rms__out;
    // Generated from the component: Three-phase Meter11.PLL.PID.Sum5
    _three_phase_meter11_pll_pid_sum5__out = _three_phase_meter11_pll_pid_kp__out + _three_phase_meter11_pll_pid_gain1__out + _three_phase_meter11_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter2.gainI_RMS
    _three_phase_meter2_gaini_rms__out = 0.3333333333333333 * _three_phase_meter2_sumi_rms__out;
    // Generated from the component: Three-phase Meter2.gainVLL_RMS
    _three_phase_meter2_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter2_sumvll_rms__out;
    // Generated from the component: Three-phase Meter2.gainVLn_RMS
    _three_phase_meter2_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter2_sumvln_rms__out;
    // Generated from the component: Three-phase Meter2.PLL.PID.Sum5
    _three_phase_meter2_pll_pid_sum5__out = _three_phase_meter2_pll_pid_kp__out + _three_phase_meter2_pll_pid_gain1__out + _three_phase_meter2_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter3.gainI_RMS
    _three_phase_meter3_gaini_rms__out = 0.3333333333333333 * _three_phase_meter3_sumi_rms__out;
    // Generated from the component: Three-phase Meter3.gainVLL_RMS
    _three_phase_meter3_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter3_sumvll_rms__out;
    // Generated from the component: Three-phase Meter3.gainVLn_RMS
    _three_phase_meter3_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter3_sumvln_rms__out;
    // Generated from the component: Three-phase Meter3.PLL.PID.Sum5
    _three_phase_meter3_pll_pid_sum5__out = _three_phase_meter3_pll_pid_kp__out + _three_phase_meter3_pll_pid_gain1__out + _three_phase_meter3_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter4.gainI_RMS
    _three_phase_meter4_gaini_rms__out = 0.3333333333333333 * _three_phase_meter4_sumi_rms__out;
    // Generated from the component: Three-phase Meter4.gainVLL_RMS
    _three_phase_meter4_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter4_sumvll_rms__out;
    // Generated from the component: Three-phase Meter4.gainVLn_RMS
    _three_phase_meter4_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter4_sumvln_rms__out;
    // Generated from the component: Three-phase Meter4.PLL.PID.Sum5
    _three_phase_meter4_pll_pid_sum5__out = _three_phase_meter4_pll_pid_kp__out + _three_phase_meter4_pll_pid_gain1__out + _three_phase_meter4_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter5.gainI_RMS
    _three_phase_meter5_gaini_rms__out = 0.3333333333333333 * _three_phase_meter5_sumi_rms__out;
    // Generated from the component: Three-phase Meter5.gainVLL_RMS
    _three_phase_meter5_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter5_sumvll_rms__out;
    // Generated from the component: Three-phase Meter5.gainVLn_RMS
    _three_phase_meter5_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter5_sumvln_rms__out;
    // Generated from the component: Three-phase Meter5.PLL.PID.Sum5
    _three_phase_meter5_pll_pid_sum5__out = _three_phase_meter5_pll_pid_kp__out + _three_phase_meter5_pll_pid_gain1__out + _three_phase_meter5_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter6.gainI_RMS
    _three_phase_meter6_gaini_rms__out = 0.3333333333333333 * _three_phase_meter6_sumi_rms__out;
    // Generated from the component: Three-phase Meter6.gainVLL_RMS
    _three_phase_meter6_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter6_sumvll_rms__out;
    // Generated from the component: Three-phase Meter6.gainVLn_RMS
    _three_phase_meter6_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter6_sumvln_rms__out;
    // Generated from the component: Three-phase Meter6.PLL.PID.Sum5
    _three_phase_meter6_pll_pid_sum5__out = _three_phase_meter6_pll_pid_kp__out + _three_phase_meter6_pll_pid_gain1__out + _three_phase_meter6_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter7.gainI_RMS
    _three_phase_meter7_gaini_rms__out = 0.3333333333333333 * _three_phase_meter7_sumi_rms__out;
    // Generated from the component: Three-phase Meter7.gainVLL_RMS
    _three_phase_meter7_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter7_sumvll_rms__out;
    // Generated from the component: Three-phase Meter7.gainVLn_RMS
    _three_phase_meter7_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter7_sumvln_rms__out;
    // Generated from the component: Three-phase Meter7.PLL.PID.Sum5
    _three_phase_meter7_pll_pid_sum5__out = _three_phase_meter7_pll_pid_kp__out + _three_phase_meter7_pll_pid_gain1__out + _three_phase_meter7_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter8.gainI_RMS
    _three_phase_meter8_gaini_rms__out = 0.3333333333333333 * _three_phase_meter8_sumi_rms__out;
    // Generated from the component: Three-phase Meter8.gainVLL_RMS
    _three_phase_meter8_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter8_sumvll_rms__out;
    // Generated from the component: Three-phase Meter8.gainVLn_RMS
    _three_phase_meter8_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter8_sumvln_rms__out;
    // Generated from the component: Three-phase Meter8.PLL.PID.Sum5
    _three_phase_meter8_pll_pid_sum5__out = _three_phase_meter8_pll_pid_kp__out + _three_phase_meter8_pll_pid_gain1__out + _three_phase_meter8_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter9.gainI_RMS
    _three_phase_meter9_gaini_rms__out = 0.3333333333333333 * _three_phase_meter9_sumi_rms__out;
    // Generated from the component: Three-phase Meter9.gainVLL_RMS
    _three_phase_meter9_gainvll_rms__out = 0.3333333333333333 * _three_phase_meter9_sumvll_rms__out;
    // Generated from the component: Three-phase Meter9.gainVLn_RMS
    _three_phase_meter9_gainvln_rms__out = 0.3333333333333333 * _three_phase_meter9_sumvln_rms__out;
    // Generated from the component: Three-phase Meter9.PLL.PID.Sum5
    _three_phase_meter9_pll_pid_sum5__out = _three_phase_meter9_pll_pid_kp__out + _three_phase_meter9_pll_pid_gain1__out + _three_phase_meter9_pll_pid_integrator1__out;
    // Generated from the component: Three-phase Meter1.I_RMS
    HIL_OutAO(0x4006, (float)_three_phase_meter1_gaini_rms__out);
    // Generated from the component: Three-phase Meter1.VLL_RMS
    HIL_OutAO(0x400d, (float)_three_phase_meter1_gainvll_rms__out);
    // Generated from the component: Three-phase Meter1.VLn_RMS
    HIL_OutAO(0x400e, (float)_three_phase_meter1_gainvln_rms__out);
    // Generated from the component: Three-phase Meter1.output_bus
    _three_phase_meter1_output_bus__out[0] = _three_phase_meter1_van_va2__out;
    _three_phase_meter1_output_bus__out[1] = _three_phase_meter1_vbn_va2__out;
    _three_phase_meter1_output_bus__out[2] = _three_phase_meter1_vcn_va2__out;
    _three_phase_meter1_output_bus__out[3] = _three_phase_meter1_vab_va2__out;
    _three_phase_meter1_output_bus__out[4] = _three_phase_meter1_vbc_va2__out;
    _three_phase_meter1_output_bus__out[5] = _three_phase_meter1_vca_va2__out;
    _three_phase_meter1_output_bus__out[6] = _three_phase_meter1_ia_ia2__out;
    _three_phase_meter1_output_bus__out[7] = _three_phase_meter1_ib_ia2__out;
    _three_phase_meter1_output_bus__out[8] = _three_phase_meter1_ic_ia2__out;
    _three_phase_meter1_output_bus__out[9] = _three_phase_meter1_pll_to_hz__out;
    _three_phase_meter1_output_bus__out[10] = _three_phase_meter1_vln_rms_calc_rms__RMS1;
    _three_phase_meter1_output_bus__out[11] = _three_phase_meter1_vln_rms_calc_rms__RMS2;
    _three_phase_meter1_output_bus__out[12] = _three_phase_meter1_vln_rms_calc_rms__RMS3;
    _three_phase_meter1_output_bus__out[13] = _three_phase_meter1_gainvln_rms__out;
    _three_phase_meter1_output_bus__out[14] = _three_phase_meter1_vll_rms_calc_rms__RMS1;
    _three_phase_meter1_output_bus__out[15] = _three_phase_meter1_vll_rms_calc_rms__RMS2;
    _three_phase_meter1_output_bus__out[16] = _three_phase_meter1_vll_rms_calc_rms__RMS3;
    _three_phase_meter1_output_bus__out[17] = _three_phase_meter1_gainvll_rms__out;
    _three_phase_meter1_output_bus__out[18] = _three_phase_meter1_i_rms_calc_rms__RMS1;
    _three_phase_meter1_output_bus__out[19] = _three_phase_meter1_i_rms_calc_rms__RMS2;
    _three_phase_meter1_output_bus__out[20] = _three_phase_meter1_i_rms_calc_rms__RMS3;
    _three_phase_meter1_output_bus__out[21] = _three_phase_meter1_gaini_rms__out;
    _three_phase_meter1_output_bus__out[22] = _three_phase_meter1_zero__out;
    _three_phase_meter1_output_bus__out[23] = _three_phase_meter1_zero__out;
    _three_phase_meter1_output_bus__out[24] = _three_phase_meter1_zero__out;
    _three_phase_meter1_output_bus__out[25] = _three_phase_meter1_zero__out;
    _three_phase_meter1_output_bus__out[26] = _three_phase_meter1_sumvn__out;
    _three_phase_meter1_output_bus__out[27] = _three_phase_meter1_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter1_output_bus__out[28] = _three_phase_meter1_sumin__out;
    _three_phase_meter1_output_bus__out[29] = _three_phase_meter1_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter1.PLL.PID.Limit1
    _three_phase_meter1_pll_pid_limit1__out = MIN(MAX(_three_phase_meter1_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter10.I_RMS
    HIL_OutAO(0x4017, (float)_three_phase_meter10_gaini_rms__out);
    // Generated from the component: Three-phase Meter10.VLL_RMS
    HIL_OutAO(0x401e, (float)_three_phase_meter10_gainvll_rms__out);
    // Generated from the component: Three-phase Meter10.VLn_RMS
    HIL_OutAO(0x401f, (float)_three_phase_meter10_gainvln_rms__out);
    // Generated from the component: Three-phase Meter10.output_bus
    _three_phase_meter10_output_bus__out[0] = _three_phase_meter10_van_va2__out;
    _three_phase_meter10_output_bus__out[1] = _three_phase_meter10_vbn_va2__out;
    _three_phase_meter10_output_bus__out[2] = _three_phase_meter10_vcn_va2__out;
    _three_phase_meter10_output_bus__out[3] = _three_phase_meter10_vab_va2__out;
    _three_phase_meter10_output_bus__out[4] = _three_phase_meter10_vbc_va2__out;
    _three_phase_meter10_output_bus__out[5] = _three_phase_meter10_vca_va2__out;
    _three_phase_meter10_output_bus__out[6] = _three_phase_meter10_ia_ia2__out;
    _three_phase_meter10_output_bus__out[7] = _three_phase_meter10_ib_ia2__out;
    _three_phase_meter10_output_bus__out[8] = _three_phase_meter10_ic_ia2__out;
    _three_phase_meter10_output_bus__out[9] = _three_phase_meter10_pll_to_hz__out;
    _three_phase_meter10_output_bus__out[10] = _three_phase_meter10_vln_rms_calc_rms__RMS1;
    _three_phase_meter10_output_bus__out[11] = _three_phase_meter10_vln_rms_calc_rms__RMS2;
    _three_phase_meter10_output_bus__out[12] = _three_phase_meter10_vln_rms_calc_rms__RMS3;
    _three_phase_meter10_output_bus__out[13] = _three_phase_meter10_gainvln_rms__out;
    _three_phase_meter10_output_bus__out[14] = _three_phase_meter10_vll_rms_calc_rms__RMS1;
    _three_phase_meter10_output_bus__out[15] = _three_phase_meter10_vll_rms_calc_rms__RMS2;
    _three_phase_meter10_output_bus__out[16] = _three_phase_meter10_vll_rms_calc_rms__RMS3;
    _three_phase_meter10_output_bus__out[17] = _three_phase_meter10_gainvll_rms__out;
    _three_phase_meter10_output_bus__out[18] = _three_phase_meter10_i_rms_calc_rms__RMS1;
    _three_phase_meter10_output_bus__out[19] = _three_phase_meter10_i_rms_calc_rms__RMS2;
    _three_phase_meter10_output_bus__out[20] = _three_phase_meter10_i_rms_calc_rms__RMS3;
    _three_phase_meter10_output_bus__out[21] = _three_phase_meter10_gaini_rms__out;
    _three_phase_meter10_output_bus__out[22] = _three_phase_meter10_zero__out;
    _three_phase_meter10_output_bus__out[23] = _three_phase_meter10_zero__out;
    _three_phase_meter10_output_bus__out[24] = _three_phase_meter10_zero__out;
    _three_phase_meter10_output_bus__out[25] = _three_phase_meter10_zero__out;
    _three_phase_meter10_output_bus__out[26] = _three_phase_meter10_sumvn__out;
    _three_phase_meter10_output_bus__out[27] = _three_phase_meter10_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter10_output_bus__out[28] = _three_phase_meter10_sumin__out;
    _three_phase_meter10_output_bus__out[29] = _three_phase_meter10_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter10.PLL.PID.Limit1
    _three_phase_meter10_pll_pid_limit1__out = MIN(MAX(_three_phase_meter10_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter11.I_RMS
    HIL_OutAO(0x4028, (float)_three_phase_meter11_gaini_rms__out);
    // Generated from the component: Three-phase Meter11.VLL_RMS
    HIL_OutAO(0x402f, (float)_three_phase_meter11_gainvll_rms__out);
    // Generated from the component: Three-phase Meter11.VLn_RMS
    HIL_OutAO(0x4030, (float)_three_phase_meter11_gainvln_rms__out);
    // Generated from the component: Three-phase Meter11.output_bus
    _three_phase_meter11_output_bus__out[0] = _three_phase_meter11_van_va2__out;
    _three_phase_meter11_output_bus__out[1] = _three_phase_meter11_vbn_va2__out;
    _three_phase_meter11_output_bus__out[2] = _three_phase_meter11_vcn_va2__out;
    _three_phase_meter11_output_bus__out[3] = _three_phase_meter11_vab_va2__out;
    _three_phase_meter11_output_bus__out[4] = _three_phase_meter11_vbc_va2__out;
    _three_phase_meter11_output_bus__out[5] = _three_phase_meter11_vca_va2__out;
    _three_phase_meter11_output_bus__out[6] = _three_phase_meter11_ia_ia2__out;
    _three_phase_meter11_output_bus__out[7] = _three_phase_meter11_ib_ia2__out;
    _three_phase_meter11_output_bus__out[8] = _three_phase_meter11_ic_ia2__out;
    _three_phase_meter11_output_bus__out[9] = _three_phase_meter11_pll_to_hz__out;
    _three_phase_meter11_output_bus__out[10] = _three_phase_meter11_vln_rms_calc_rms__RMS1;
    _three_phase_meter11_output_bus__out[11] = _three_phase_meter11_vln_rms_calc_rms__RMS2;
    _three_phase_meter11_output_bus__out[12] = _three_phase_meter11_vln_rms_calc_rms__RMS3;
    _three_phase_meter11_output_bus__out[13] = _three_phase_meter11_gainvln_rms__out;
    _three_phase_meter11_output_bus__out[14] = _three_phase_meter11_vll_rms_calc_rms__RMS1;
    _three_phase_meter11_output_bus__out[15] = _three_phase_meter11_vll_rms_calc_rms__RMS2;
    _three_phase_meter11_output_bus__out[16] = _three_phase_meter11_vll_rms_calc_rms__RMS3;
    _three_phase_meter11_output_bus__out[17] = _three_phase_meter11_gainvll_rms__out;
    _three_phase_meter11_output_bus__out[18] = _three_phase_meter11_i_rms_calc_rms__RMS1;
    _three_phase_meter11_output_bus__out[19] = _three_phase_meter11_i_rms_calc_rms__RMS2;
    _three_phase_meter11_output_bus__out[20] = _three_phase_meter11_i_rms_calc_rms__RMS3;
    _three_phase_meter11_output_bus__out[21] = _three_phase_meter11_gaini_rms__out;
    _three_phase_meter11_output_bus__out[22] = _three_phase_meter11_zero__out;
    _three_phase_meter11_output_bus__out[23] = _three_phase_meter11_zero__out;
    _three_phase_meter11_output_bus__out[24] = _three_phase_meter11_zero__out;
    _three_phase_meter11_output_bus__out[25] = _three_phase_meter11_zero__out;
    _three_phase_meter11_output_bus__out[26] = _three_phase_meter11_sumvn__out;
    _three_phase_meter11_output_bus__out[27] = _three_phase_meter11_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter11_output_bus__out[28] = _three_phase_meter11_sumin__out;
    _three_phase_meter11_output_bus__out[29] = _three_phase_meter11_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter11.PLL.PID.Limit1
    _three_phase_meter11_pll_pid_limit1__out = MIN(MAX(_three_phase_meter11_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter2.I_RMS
    HIL_OutAO(0x4039, (float)_three_phase_meter2_gaini_rms__out);
    // Generated from the component: Three-phase Meter2.VLL_RMS
    HIL_OutAO(0x4040, (float)_three_phase_meter2_gainvll_rms__out);
    // Generated from the component: Three-phase Meter2.VLn_RMS
    HIL_OutAO(0x4041, (float)_three_phase_meter2_gainvln_rms__out);
    // Generated from the component: Three-phase Meter2.output_bus
    _three_phase_meter2_output_bus__out[0] = _three_phase_meter2_van_va2__out;
    _three_phase_meter2_output_bus__out[1] = _three_phase_meter2_vbn_va2__out;
    _three_phase_meter2_output_bus__out[2] = _three_phase_meter2_vcn_va2__out;
    _three_phase_meter2_output_bus__out[3] = _three_phase_meter2_vab_va2__out;
    _three_phase_meter2_output_bus__out[4] = _three_phase_meter2_vbc_va2__out;
    _three_phase_meter2_output_bus__out[5] = _three_phase_meter2_vca_va2__out;
    _three_phase_meter2_output_bus__out[6] = _three_phase_meter2_ia_ia2__out;
    _three_phase_meter2_output_bus__out[7] = _three_phase_meter2_ib_ia2__out;
    _three_phase_meter2_output_bus__out[8] = _three_phase_meter2_ic_ia2__out;
    _three_phase_meter2_output_bus__out[9] = _three_phase_meter2_pll_to_hz__out;
    _three_phase_meter2_output_bus__out[10] = _three_phase_meter2_vln_rms_calc_rms__RMS1;
    _three_phase_meter2_output_bus__out[11] = _three_phase_meter2_vln_rms_calc_rms__RMS2;
    _three_phase_meter2_output_bus__out[12] = _three_phase_meter2_vln_rms_calc_rms__RMS3;
    _three_phase_meter2_output_bus__out[13] = _three_phase_meter2_gainvln_rms__out;
    _three_phase_meter2_output_bus__out[14] = _three_phase_meter2_vll_rms_calc_rms__RMS1;
    _three_phase_meter2_output_bus__out[15] = _three_phase_meter2_vll_rms_calc_rms__RMS2;
    _three_phase_meter2_output_bus__out[16] = _three_phase_meter2_vll_rms_calc_rms__RMS3;
    _three_phase_meter2_output_bus__out[17] = _three_phase_meter2_gainvll_rms__out;
    _three_phase_meter2_output_bus__out[18] = _three_phase_meter2_i_rms_calc_rms__RMS1;
    _three_phase_meter2_output_bus__out[19] = _three_phase_meter2_i_rms_calc_rms__RMS2;
    _three_phase_meter2_output_bus__out[20] = _three_phase_meter2_i_rms_calc_rms__RMS3;
    _three_phase_meter2_output_bus__out[21] = _three_phase_meter2_gaini_rms__out;
    _three_phase_meter2_output_bus__out[22] = _three_phase_meter2_zero__out;
    _three_phase_meter2_output_bus__out[23] = _three_phase_meter2_zero__out;
    _three_phase_meter2_output_bus__out[24] = _three_phase_meter2_zero__out;
    _three_phase_meter2_output_bus__out[25] = _three_phase_meter2_zero__out;
    _three_phase_meter2_output_bus__out[26] = _three_phase_meter2_sumvn__out;
    _three_phase_meter2_output_bus__out[27] = _three_phase_meter2_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter2_output_bus__out[28] = _three_phase_meter2_sumin__out;
    _three_phase_meter2_output_bus__out[29] = _three_phase_meter2_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter2.PLL.PID.Limit1
    _three_phase_meter2_pll_pid_limit1__out = MIN(MAX(_three_phase_meter2_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter3.I_RMS
    HIL_OutAO(0x404a, (float)_three_phase_meter3_gaini_rms__out);
    // Generated from the component: Three-phase Meter3.VLL_RMS
    HIL_OutAO(0x4051, (float)_three_phase_meter3_gainvll_rms__out);
    // Generated from the component: Three-phase Meter3.VLn_RMS
    HIL_OutAO(0x4052, (float)_three_phase_meter3_gainvln_rms__out);
    // Generated from the component: Three-phase Meter3.output_bus
    _three_phase_meter3_output_bus__out[0] = _three_phase_meter3_van_va2__out;
    _three_phase_meter3_output_bus__out[1] = _three_phase_meter3_vbn_va2__out;
    _three_phase_meter3_output_bus__out[2] = _three_phase_meter3_vcn_va2__out;
    _three_phase_meter3_output_bus__out[3] = _three_phase_meter3_vab_va2__out;
    _three_phase_meter3_output_bus__out[4] = _three_phase_meter3_vbc_va2__out;
    _three_phase_meter3_output_bus__out[5] = _three_phase_meter3_vca_va2__out;
    _three_phase_meter3_output_bus__out[6] = _three_phase_meter3_ia_ia2__out;
    _three_phase_meter3_output_bus__out[7] = _three_phase_meter3_ib_ia2__out;
    _three_phase_meter3_output_bus__out[8] = _three_phase_meter3_ic_ia2__out;
    _three_phase_meter3_output_bus__out[9] = _three_phase_meter3_pll_to_hz__out;
    _three_phase_meter3_output_bus__out[10] = _three_phase_meter3_vln_rms_calc_rms__RMS1;
    _three_phase_meter3_output_bus__out[11] = _three_phase_meter3_vln_rms_calc_rms__RMS2;
    _three_phase_meter3_output_bus__out[12] = _three_phase_meter3_vln_rms_calc_rms__RMS3;
    _three_phase_meter3_output_bus__out[13] = _three_phase_meter3_gainvln_rms__out;
    _three_phase_meter3_output_bus__out[14] = _three_phase_meter3_vll_rms_calc_rms__RMS1;
    _three_phase_meter3_output_bus__out[15] = _three_phase_meter3_vll_rms_calc_rms__RMS2;
    _three_phase_meter3_output_bus__out[16] = _three_phase_meter3_vll_rms_calc_rms__RMS3;
    _three_phase_meter3_output_bus__out[17] = _three_phase_meter3_gainvll_rms__out;
    _three_phase_meter3_output_bus__out[18] = _three_phase_meter3_i_rms_calc_rms__RMS1;
    _three_phase_meter3_output_bus__out[19] = _three_phase_meter3_i_rms_calc_rms__RMS2;
    _three_phase_meter3_output_bus__out[20] = _three_phase_meter3_i_rms_calc_rms__RMS3;
    _three_phase_meter3_output_bus__out[21] = _three_phase_meter3_gaini_rms__out;
    _three_phase_meter3_output_bus__out[22] = _three_phase_meter3_zero__out;
    _three_phase_meter3_output_bus__out[23] = _three_phase_meter3_zero__out;
    _three_phase_meter3_output_bus__out[24] = _three_phase_meter3_zero__out;
    _three_phase_meter3_output_bus__out[25] = _three_phase_meter3_zero__out;
    _three_phase_meter3_output_bus__out[26] = _three_phase_meter3_sumvn__out;
    _three_phase_meter3_output_bus__out[27] = _three_phase_meter3_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter3_output_bus__out[28] = _three_phase_meter3_sumin__out;
    _three_phase_meter3_output_bus__out[29] = _three_phase_meter3_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter3.PLL.PID.Limit1
    _three_phase_meter3_pll_pid_limit1__out = MIN(MAX(_three_phase_meter3_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter4.I_RMS
    HIL_OutAO(0x405b, (float)_three_phase_meter4_gaini_rms__out);
    // Generated from the component: Three-phase Meter4.VLL_RMS
    HIL_OutAO(0x4062, (float)_three_phase_meter4_gainvll_rms__out);
    // Generated from the component: Three-phase Meter4.VLn_RMS
    HIL_OutAO(0x4063, (float)_three_phase_meter4_gainvln_rms__out);
    // Generated from the component: Three-phase Meter4.output_bus
    _three_phase_meter4_output_bus__out[0] = _three_phase_meter4_van_va2__out;
    _three_phase_meter4_output_bus__out[1] = _three_phase_meter4_vbn_va2__out;
    _three_phase_meter4_output_bus__out[2] = _three_phase_meter4_vcn_va2__out;
    _three_phase_meter4_output_bus__out[3] = _three_phase_meter4_vab_va2__out;
    _three_phase_meter4_output_bus__out[4] = _three_phase_meter4_vbc_va2__out;
    _three_phase_meter4_output_bus__out[5] = _three_phase_meter4_vca_va2__out;
    _three_phase_meter4_output_bus__out[6] = _three_phase_meter4_ia_ia2__out;
    _three_phase_meter4_output_bus__out[7] = _three_phase_meter4_ib_ia2__out;
    _three_phase_meter4_output_bus__out[8] = _three_phase_meter4_ic_ia2__out;
    _three_phase_meter4_output_bus__out[9] = _three_phase_meter4_pll_to_hz__out;
    _three_phase_meter4_output_bus__out[10] = _three_phase_meter4_vln_rms_calc_rms__RMS1;
    _three_phase_meter4_output_bus__out[11] = _three_phase_meter4_vln_rms_calc_rms__RMS2;
    _three_phase_meter4_output_bus__out[12] = _three_phase_meter4_vln_rms_calc_rms__RMS3;
    _three_phase_meter4_output_bus__out[13] = _three_phase_meter4_gainvln_rms__out;
    _three_phase_meter4_output_bus__out[14] = _three_phase_meter4_vll_rms_calc_rms__RMS1;
    _three_phase_meter4_output_bus__out[15] = _three_phase_meter4_vll_rms_calc_rms__RMS2;
    _three_phase_meter4_output_bus__out[16] = _three_phase_meter4_vll_rms_calc_rms__RMS3;
    _three_phase_meter4_output_bus__out[17] = _three_phase_meter4_gainvll_rms__out;
    _three_phase_meter4_output_bus__out[18] = _three_phase_meter4_i_rms_calc_rms__RMS1;
    _three_phase_meter4_output_bus__out[19] = _three_phase_meter4_i_rms_calc_rms__RMS2;
    _three_phase_meter4_output_bus__out[20] = _three_phase_meter4_i_rms_calc_rms__RMS3;
    _three_phase_meter4_output_bus__out[21] = _three_phase_meter4_gaini_rms__out;
    _three_phase_meter4_output_bus__out[22] = _three_phase_meter4_zero__out;
    _three_phase_meter4_output_bus__out[23] = _three_phase_meter4_zero__out;
    _three_phase_meter4_output_bus__out[24] = _three_phase_meter4_zero__out;
    _three_phase_meter4_output_bus__out[25] = _three_phase_meter4_zero__out;
    _three_phase_meter4_output_bus__out[26] = _three_phase_meter4_sumvn__out;
    _three_phase_meter4_output_bus__out[27] = _three_phase_meter4_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter4_output_bus__out[28] = _three_phase_meter4_sumin__out;
    _three_phase_meter4_output_bus__out[29] = _three_phase_meter4_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter4.PLL.PID.Limit1
    _three_phase_meter4_pll_pid_limit1__out = MIN(MAX(_three_phase_meter4_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter5.I_RMS
    HIL_OutAO(0x406c, (float)_three_phase_meter5_gaini_rms__out);
    // Generated from the component: Three-phase Meter5.VLL_RMS
    HIL_OutAO(0x4073, (float)_three_phase_meter5_gainvll_rms__out);
    // Generated from the component: Three-phase Meter5.VLn_RMS
    HIL_OutAO(0x4074, (float)_three_phase_meter5_gainvln_rms__out);
    // Generated from the component: Three-phase Meter5.output_bus
    _three_phase_meter5_output_bus__out[0] = _three_phase_meter5_van_va2__out;
    _three_phase_meter5_output_bus__out[1] = _three_phase_meter5_vbn_va2__out;
    _three_phase_meter5_output_bus__out[2] = _three_phase_meter5_vcn_va2__out;
    _three_phase_meter5_output_bus__out[3] = _three_phase_meter5_vab_va2__out;
    _three_phase_meter5_output_bus__out[4] = _three_phase_meter5_vbc_va2__out;
    _three_phase_meter5_output_bus__out[5] = _three_phase_meter5_vca_va2__out;
    _three_phase_meter5_output_bus__out[6] = _three_phase_meter5_ia_ia2__out;
    _three_phase_meter5_output_bus__out[7] = _three_phase_meter5_ib_ia2__out;
    _three_phase_meter5_output_bus__out[8] = _three_phase_meter5_ic_ia2__out;
    _three_phase_meter5_output_bus__out[9] = _three_phase_meter5_pll_to_hz__out;
    _three_phase_meter5_output_bus__out[10] = _three_phase_meter5_vln_rms_calc_rms__RMS1;
    _three_phase_meter5_output_bus__out[11] = _three_phase_meter5_vln_rms_calc_rms__RMS2;
    _three_phase_meter5_output_bus__out[12] = _three_phase_meter5_vln_rms_calc_rms__RMS3;
    _three_phase_meter5_output_bus__out[13] = _three_phase_meter5_gainvln_rms__out;
    _three_phase_meter5_output_bus__out[14] = _three_phase_meter5_vll_rms_calc_rms__RMS1;
    _three_phase_meter5_output_bus__out[15] = _three_phase_meter5_vll_rms_calc_rms__RMS2;
    _three_phase_meter5_output_bus__out[16] = _three_phase_meter5_vll_rms_calc_rms__RMS3;
    _three_phase_meter5_output_bus__out[17] = _three_phase_meter5_gainvll_rms__out;
    _three_phase_meter5_output_bus__out[18] = _three_phase_meter5_i_rms_calc_rms__RMS1;
    _three_phase_meter5_output_bus__out[19] = _three_phase_meter5_i_rms_calc_rms__RMS2;
    _three_phase_meter5_output_bus__out[20] = _three_phase_meter5_i_rms_calc_rms__RMS3;
    _three_phase_meter5_output_bus__out[21] = _three_phase_meter5_gaini_rms__out;
    _three_phase_meter5_output_bus__out[22] = _three_phase_meter5_zero__out;
    _three_phase_meter5_output_bus__out[23] = _three_phase_meter5_zero__out;
    _three_phase_meter5_output_bus__out[24] = _three_phase_meter5_zero__out;
    _three_phase_meter5_output_bus__out[25] = _three_phase_meter5_zero__out;
    _three_phase_meter5_output_bus__out[26] = _three_phase_meter5_sumvn__out;
    _three_phase_meter5_output_bus__out[27] = _three_phase_meter5_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter5_output_bus__out[28] = _three_phase_meter5_sumin__out;
    _three_phase_meter5_output_bus__out[29] = _three_phase_meter5_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter5.PLL.PID.Limit1
    _three_phase_meter5_pll_pid_limit1__out = MIN(MAX(_three_phase_meter5_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter6.I_RMS
    HIL_OutAO(0x407d, (float)_three_phase_meter6_gaini_rms__out);
    // Generated from the component: Three-phase Meter6.VLL_RMS
    HIL_OutAO(0x4084, (float)_three_phase_meter6_gainvll_rms__out);
    // Generated from the component: Three-phase Meter6.VLn_RMS
    HIL_OutAO(0x4085, (float)_three_phase_meter6_gainvln_rms__out);
    // Generated from the component: Three-phase Meter6.output_bus
    _three_phase_meter6_output_bus__out[0] = _three_phase_meter6_van_va2__out;
    _three_phase_meter6_output_bus__out[1] = _three_phase_meter6_vbn_va2__out;
    _three_phase_meter6_output_bus__out[2] = _three_phase_meter6_vcn_va2__out;
    _three_phase_meter6_output_bus__out[3] = _three_phase_meter6_vab_va2__out;
    _three_phase_meter6_output_bus__out[4] = _three_phase_meter6_vbc_va2__out;
    _three_phase_meter6_output_bus__out[5] = _three_phase_meter6_vca_va2__out;
    _three_phase_meter6_output_bus__out[6] = _three_phase_meter6_ia_ia2__out;
    _three_phase_meter6_output_bus__out[7] = _three_phase_meter6_ib_ia2__out;
    _three_phase_meter6_output_bus__out[8] = _three_phase_meter6_ic_ia2__out;
    _three_phase_meter6_output_bus__out[9] = _three_phase_meter6_pll_to_hz__out;
    _three_phase_meter6_output_bus__out[10] = _three_phase_meter6_vln_rms_calc_rms__RMS1;
    _three_phase_meter6_output_bus__out[11] = _three_phase_meter6_vln_rms_calc_rms__RMS2;
    _three_phase_meter6_output_bus__out[12] = _three_phase_meter6_vln_rms_calc_rms__RMS3;
    _three_phase_meter6_output_bus__out[13] = _three_phase_meter6_gainvln_rms__out;
    _three_phase_meter6_output_bus__out[14] = _three_phase_meter6_vll_rms_calc_rms__RMS1;
    _three_phase_meter6_output_bus__out[15] = _three_phase_meter6_vll_rms_calc_rms__RMS2;
    _three_phase_meter6_output_bus__out[16] = _three_phase_meter6_vll_rms_calc_rms__RMS3;
    _three_phase_meter6_output_bus__out[17] = _three_phase_meter6_gainvll_rms__out;
    _three_phase_meter6_output_bus__out[18] = _three_phase_meter6_i_rms_calc_rms__RMS1;
    _three_phase_meter6_output_bus__out[19] = _three_phase_meter6_i_rms_calc_rms__RMS2;
    _three_phase_meter6_output_bus__out[20] = _three_phase_meter6_i_rms_calc_rms__RMS3;
    _three_phase_meter6_output_bus__out[21] = _three_phase_meter6_gaini_rms__out;
    _three_phase_meter6_output_bus__out[22] = _three_phase_meter6_zero__out;
    _three_phase_meter6_output_bus__out[23] = _three_phase_meter6_zero__out;
    _three_phase_meter6_output_bus__out[24] = _three_phase_meter6_zero__out;
    _three_phase_meter6_output_bus__out[25] = _three_phase_meter6_zero__out;
    _three_phase_meter6_output_bus__out[26] = _three_phase_meter6_sumvn__out;
    _three_phase_meter6_output_bus__out[27] = _three_phase_meter6_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter6_output_bus__out[28] = _three_phase_meter6_sumin__out;
    _three_phase_meter6_output_bus__out[29] = _three_phase_meter6_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter6.PLL.PID.Limit1
    _three_phase_meter6_pll_pid_limit1__out = MIN(MAX(_three_phase_meter6_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter7.I_RMS
    HIL_OutAO(0x408e, (float)_three_phase_meter7_gaini_rms__out);
    // Generated from the component: Three-phase Meter7.VLL_RMS
    HIL_OutAO(0x4095, (float)_three_phase_meter7_gainvll_rms__out);
    // Generated from the component: Three-phase Meter7.VLn_RMS
    HIL_OutAO(0x4096, (float)_three_phase_meter7_gainvln_rms__out);
    // Generated from the component: Three-phase Meter7.output_bus
    _three_phase_meter7_output_bus__out[0] = _three_phase_meter7_van_va2__out;
    _three_phase_meter7_output_bus__out[1] = _three_phase_meter7_vbn_va2__out;
    _three_phase_meter7_output_bus__out[2] = _three_phase_meter7_vcn_va2__out;
    _three_phase_meter7_output_bus__out[3] = _three_phase_meter7_vab_va2__out;
    _three_phase_meter7_output_bus__out[4] = _three_phase_meter7_vbc_va2__out;
    _three_phase_meter7_output_bus__out[5] = _three_phase_meter7_vca_va2__out;
    _three_phase_meter7_output_bus__out[6] = _three_phase_meter7_ia_ia2__out;
    _three_phase_meter7_output_bus__out[7] = _three_phase_meter7_ib_ia2__out;
    _three_phase_meter7_output_bus__out[8] = _three_phase_meter7_ic_ia2__out;
    _three_phase_meter7_output_bus__out[9] = _three_phase_meter7_pll_to_hz__out;
    _three_phase_meter7_output_bus__out[10] = _three_phase_meter7_vln_rms_calc_rms__RMS1;
    _three_phase_meter7_output_bus__out[11] = _three_phase_meter7_vln_rms_calc_rms__RMS2;
    _three_phase_meter7_output_bus__out[12] = _three_phase_meter7_vln_rms_calc_rms__RMS3;
    _three_phase_meter7_output_bus__out[13] = _three_phase_meter7_gainvln_rms__out;
    _three_phase_meter7_output_bus__out[14] = _three_phase_meter7_vll_rms_calc_rms__RMS1;
    _three_phase_meter7_output_bus__out[15] = _three_phase_meter7_vll_rms_calc_rms__RMS2;
    _three_phase_meter7_output_bus__out[16] = _three_phase_meter7_vll_rms_calc_rms__RMS3;
    _three_phase_meter7_output_bus__out[17] = _three_phase_meter7_gainvll_rms__out;
    _three_phase_meter7_output_bus__out[18] = _three_phase_meter7_i_rms_calc_rms__RMS1;
    _three_phase_meter7_output_bus__out[19] = _three_phase_meter7_i_rms_calc_rms__RMS2;
    _three_phase_meter7_output_bus__out[20] = _three_phase_meter7_i_rms_calc_rms__RMS3;
    _three_phase_meter7_output_bus__out[21] = _three_phase_meter7_gaini_rms__out;
    _three_phase_meter7_output_bus__out[22] = _three_phase_meter7_zero__out;
    _three_phase_meter7_output_bus__out[23] = _three_phase_meter7_zero__out;
    _three_phase_meter7_output_bus__out[24] = _three_phase_meter7_zero__out;
    _three_phase_meter7_output_bus__out[25] = _three_phase_meter7_zero__out;
    _three_phase_meter7_output_bus__out[26] = _three_phase_meter7_sumvn__out;
    _three_phase_meter7_output_bus__out[27] = _three_phase_meter7_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter7_output_bus__out[28] = _three_phase_meter7_sumin__out;
    _three_phase_meter7_output_bus__out[29] = _three_phase_meter7_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter7.PLL.PID.Limit1
    _three_phase_meter7_pll_pid_limit1__out = MIN(MAX(_three_phase_meter7_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter8.I_RMS
    HIL_OutAO(0x409f, (float)_three_phase_meter8_gaini_rms__out);
    // Generated from the component: Three-phase Meter8.VLL_RMS
    HIL_OutAO(0x40a6, (float)_three_phase_meter8_gainvll_rms__out);
    // Generated from the component: Three-phase Meter8.VLn_RMS
    HIL_OutAO(0x40a7, (float)_three_phase_meter8_gainvln_rms__out);
    // Generated from the component: Three-phase Meter8.output_bus
    _three_phase_meter8_output_bus__out[0] = _three_phase_meter8_van_va2__out;
    _three_phase_meter8_output_bus__out[1] = _three_phase_meter8_vbn_va2__out;
    _three_phase_meter8_output_bus__out[2] = _three_phase_meter8_vcn_va2__out;
    _three_phase_meter8_output_bus__out[3] = _three_phase_meter8_vab_va2__out;
    _three_phase_meter8_output_bus__out[4] = _three_phase_meter8_vbc_va2__out;
    _three_phase_meter8_output_bus__out[5] = _three_phase_meter8_vca_va2__out;
    _three_phase_meter8_output_bus__out[6] = _three_phase_meter8_ia_ia2__out;
    _three_phase_meter8_output_bus__out[7] = _three_phase_meter8_ib_ia2__out;
    _three_phase_meter8_output_bus__out[8] = _three_phase_meter8_ic_ia2__out;
    _three_phase_meter8_output_bus__out[9] = _three_phase_meter8_pll_to_hz__out;
    _three_phase_meter8_output_bus__out[10] = _three_phase_meter8_vln_rms_calc_rms__RMS1;
    _three_phase_meter8_output_bus__out[11] = _three_phase_meter8_vln_rms_calc_rms__RMS2;
    _three_phase_meter8_output_bus__out[12] = _three_phase_meter8_vln_rms_calc_rms__RMS3;
    _three_phase_meter8_output_bus__out[13] = _three_phase_meter8_gainvln_rms__out;
    _three_phase_meter8_output_bus__out[14] = _three_phase_meter8_vll_rms_calc_rms__RMS1;
    _three_phase_meter8_output_bus__out[15] = _three_phase_meter8_vll_rms_calc_rms__RMS2;
    _three_phase_meter8_output_bus__out[16] = _three_phase_meter8_vll_rms_calc_rms__RMS3;
    _three_phase_meter8_output_bus__out[17] = _three_phase_meter8_gainvll_rms__out;
    _three_phase_meter8_output_bus__out[18] = _three_phase_meter8_i_rms_calc_rms__RMS1;
    _three_phase_meter8_output_bus__out[19] = _three_phase_meter8_i_rms_calc_rms__RMS2;
    _three_phase_meter8_output_bus__out[20] = _three_phase_meter8_i_rms_calc_rms__RMS3;
    _three_phase_meter8_output_bus__out[21] = _three_phase_meter8_gaini_rms__out;
    _three_phase_meter8_output_bus__out[22] = _three_phase_meter8_zero__out;
    _three_phase_meter8_output_bus__out[23] = _three_phase_meter8_zero__out;
    _three_phase_meter8_output_bus__out[24] = _three_phase_meter8_zero__out;
    _three_phase_meter8_output_bus__out[25] = _three_phase_meter8_zero__out;
    _three_phase_meter8_output_bus__out[26] = _three_phase_meter8_sumvn__out;
    _three_phase_meter8_output_bus__out[27] = _three_phase_meter8_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter8_output_bus__out[28] = _three_phase_meter8_sumin__out;
    _three_phase_meter8_output_bus__out[29] = _three_phase_meter8_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter8.PLL.PID.Limit1
    _three_phase_meter8_pll_pid_limit1__out = MIN(MAX(_three_phase_meter8_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Three-phase Meter9.I_RMS
    HIL_OutAO(0x40b0, (float)_three_phase_meter9_gaini_rms__out);
    // Generated from the component: Three-phase Meter9.VLL_RMS
    HIL_OutAO(0x40b7, (float)_three_phase_meter9_gainvll_rms__out);
    // Generated from the component: Three-phase Meter9.VLn_RMS
    HIL_OutAO(0x40b8, (float)_three_phase_meter9_gainvln_rms__out);
    // Generated from the component: Three-phase Meter9.output_bus
    _three_phase_meter9_output_bus__out[0] = _three_phase_meter9_van_va2__out;
    _three_phase_meter9_output_bus__out[1] = _three_phase_meter9_vbn_va2__out;
    _three_phase_meter9_output_bus__out[2] = _three_phase_meter9_vcn_va2__out;
    _three_phase_meter9_output_bus__out[3] = _three_phase_meter9_vab_va2__out;
    _three_phase_meter9_output_bus__out[4] = _three_phase_meter9_vbc_va2__out;
    _three_phase_meter9_output_bus__out[5] = _three_phase_meter9_vca_va2__out;
    _three_phase_meter9_output_bus__out[6] = _three_phase_meter9_ia_ia2__out;
    _three_phase_meter9_output_bus__out[7] = _three_phase_meter9_ib_ia2__out;
    _three_phase_meter9_output_bus__out[8] = _three_phase_meter9_ic_ia2__out;
    _three_phase_meter9_output_bus__out[9] = _three_phase_meter9_pll_to_hz__out;
    _three_phase_meter9_output_bus__out[10] = _three_phase_meter9_vln_rms_calc_rms__RMS1;
    _three_phase_meter9_output_bus__out[11] = _three_phase_meter9_vln_rms_calc_rms__RMS2;
    _three_phase_meter9_output_bus__out[12] = _three_phase_meter9_vln_rms_calc_rms__RMS3;
    _three_phase_meter9_output_bus__out[13] = _three_phase_meter9_gainvln_rms__out;
    _three_phase_meter9_output_bus__out[14] = _three_phase_meter9_vll_rms_calc_rms__RMS1;
    _three_phase_meter9_output_bus__out[15] = _three_phase_meter9_vll_rms_calc_rms__RMS2;
    _three_phase_meter9_output_bus__out[16] = _three_phase_meter9_vll_rms_calc_rms__RMS3;
    _three_phase_meter9_output_bus__out[17] = _three_phase_meter9_gainvll_rms__out;
    _three_phase_meter9_output_bus__out[18] = _three_phase_meter9_i_rms_calc_rms__RMS1;
    _three_phase_meter9_output_bus__out[19] = _three_phase_meter9_i_rms_calc_rms__RMS2;
    _three_phase_meter9_output_bus__out[20] = _three_phase_meter9_i_rms_calc_rms__RMS3;
    _three_phase_meter9_output_bus__out[21] = _three_phase_meter9_gaini_rms__out;
    _three_phase_meter9_output_bus__out[22] = _three_phase_meter9_zero__out;
    _three_phase_meter9_output_bus__out[23] = _three_phase_meter9_zero__out;
    _three_phase_meter9_output_bus__out[24] = _three_phase_meter9_zero__out;
    _three_phase_meter9_output_bus__out[25] = _three_phase_meter9_zero__out;
    _three_phase_meter9_output_bus__out[26] = _three_phase_meter9_sumvn__out;
    _three_phase_meter9_output_bus__out[27] = _three_phase_meter9_vn_rms_calc_1ph_rms__RMS1;
    _three_phase_meter9_output_bus__out[28] = _three_phase_meter9_sumin__out;
    _three_phase_meter9_output_bus__out[29] = _three_phase_meter9_in_rms_calc_1ph_rms__RMS1;
    // Generated from the component: Three-phase Meter9.PLL.PID.Limit1
    _three_phase_meter9_pll_pid_limit1__out = MIN(MAX(_three_phase_meter9_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Bay 1.Meter Split1.input_bus
    _bay_1_meter_split1_input_bus__out = _three_phase_meter1_output_bus__out[0];
    _bay_1_meter_split1_input_bus__out1 = _three_phase_meter1_output_bus__out[1];
    _bay_1_meter_split1_input_bus__out2 = _three_phase_meter1_output_bus__out[2];
    _bay_1_meter_split1_input_bus__out3 = _three_phase_meter1_output_bus__out[3];
    _bay_1_meter_split1_input_bus__out4 = _three_phase_meter1_output_bus__out[4];
    _bay_1_meter_split1_input_bus__out5 = _three_phase_meter1_output_bus__out[5];
    _bay_1_meter_split1_input_bus__out6 = _three_phase_meter1_output_bus__out[6];
    _bay_1_meter_split1_input_bus__out7 = _three_phase_meter1_output_bus__out[7];
    _bay_1_meter_split1_input_bus__out8 = _three_phase_meter1_output_bus__out[8];
    _bay_1_meter_split1_input_bus__out9 = _three_phase_meter1_output_bus__out[9];
    _bay_1_meter_split1_input_bus__out10 = _three_phase_meter1_output_bus__out[10];
    _bay_1_meter_split1_input_bus__out11 = _three_phase_meter1_output_bus__out[11];
    _bay_1_meter_split1_input_bus__out12 = _three_phase_meter1_output_bus__out[12];
    _bay_1_meter_split1_input_bus__out13 = _three_phase_meter1_output_bus__out[13];
    _bay_1_meter_split1_input_bus__out14 = _three_phase_meter1_output_bus__out[14];
    _bay_1_meter_split1_input_bus__out15 = _three_phase_meter1_output_bus__out[15];
    _bay_1_meter_split1_input_bus__out16 = _three_phase_meter1_output_bus__out[16];
    _bay_1_meter_split1_input_bus__out17 = _three_phase_meter1_output_bus__out[17];
    _bay_1_meter_split1_input_bus__out18 = _three_phase_meter1_output_bus__out[18];
    _bay_1_meter_split1_input_bus__out19 = _three_phase_meter1_output_bus__out[19];
    _bay_1_meter_split1_input_bus__out20 = _three_phase_meter1_output_bus__out[20];
    _bay_1_meter_split1_input_bus__out21 = _three_phase_meter1_output_bus__out[21];
    _bay_1_meter_split1_input_bus__out22 = _three_phase_meter1_output_bus__out[22];
    _bay_1_meter_split1_input_bus__out23 = _three_phase_meter1_output_bus__out[23];
    _bay_1_meter_split1_input_bus__out24 = _three_phase_meter1_output_bus__out[24];
    _bay_1_meter_split1_input_bus__out25 = _three_phase_meter1_output_bus__out[25];
    _bay_1_meter_split1_input_bus__out26 = _three_phase_meter1_output_bus__out[26];
    _bay_1_meter_split1_input_bus__out27 = _three_phase_meter1_output_bus__out[27];
    _bay_1_meter_split1_input_bus__out28 = _three_phase_meter1_output_bus__out[28];
    _bay_1_meter_split1_input_bus__out29 = _three_phase_meter1_output_bus__out[29];
    // Generated from the component: Three-phase Meter1.PLL.PID.Sum6
    _three_phase_meter1_pll_pid_sum6__out =  - _three_phase_meter1_pll_pid_sum5__out + _three_phase_meter1_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter1.PLL.Rate Limiter1
    _three_phase_meter1_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter1_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter1_pll_rate_limiter1__first_step) {
        _three_phase_meter1_pll_rate_limiter1__out = _three_phase_meter1_pll_pid_limit1__out;
        _three_phase_meter1_pll_rate_limiter1__state = _three_phase_meter1_pll_pid_limit1__out;
    } else {
        _three_phase_meter1_pll_rate_limiter1__out = _three_phase_meter1_pll_pid_limit1__out;
        if (_three_phase_meter1_pll_pid_limit1__out - _three_phase_meter1_pll_rate_limiter1__state > _three_phase_meter1_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter1_pll_rate_limiter1__out = _three_phase_meter1_pll_rate_limiter1__state + (_three_phase_meter1_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter1_pll_pid_limit1__out - _three_phase_meter1_pll_rate_limiter1__state < _three_phase_meter1_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter1_pll_rate_limiter1__out = _three_phase_meter1_pll_rate_limiter1__state + (_three_phase_meter1_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter1.PLL.integrator
    _three_phase_meter1_pll_integrator__in = _three_phase_meter1_pll_pid_limit1__out;
    {
        _three_phase_meter1_pll_integrator__state += 0.0001 * _three_phase_meter1_pll_integrator__in ;
        if ( _three_phase_meter1_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter1_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter1_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter1_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter1_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter1_pll_integrator__out = _three_phase_meter1_pll_integrator__state ;
    }
    // Generated from the component: Bay 9.Meter Split1.input_bus
    _bay_9_meter_split1_input_bus__out = _three_phase_meter10_output_bus__out[0];
    _bay_9_meter_split1_input_bus__out1 = _three_phase_meter10_output_bus__out[1];
    _bay_9_meter_split1_input_bus__out2 = _three_phase_meter10_output_bus__out[2];
    _bay_9_meter_split1_input_bus__out3 = _three_phase_meter10_output_bus__out[3];
    _bay_9_meter_split1_input_bus__out4 = _three_phase_meter10_output_bus__out[4];
    _bay_9_meter_split1_input_bus__out5 = _three_phase_meter10_output_bus__out[5];
    _bay_9_meter_split1_input_bus__out6 = _three_phase_meter10_output_bus__out[6];
    _bay_9_meter_split1_input_bus__out7 = _three_phase_meter10_output_bus__out[7];
    _bay_9_meter_split1_input_bus__out8 = _three_phase_meter10_output_bus__out[8];
    _bay_9_meter_split1_input_bus__out9 = _three_phase_meter10_output_bus__out[9];
    _bay_9_meter_split1_input_bus__out10 = _three_phase_meter10_output_bus__out[10];
    _bay_9_meter_split1_input_bus__out11 = _three_phase_meter10_output_bus__out[11];
    _bay_9_meter_split1_input_bus__out12 = _three_phase_meter10_output_bus__out[12];
    _bay_9_meter_split1_input_bus__out13 = _three_phase_meter10_output_bus__out[13];
    _bay_9_meter_split1_input_bus__out14 = _three_phase_meter10_output_bus__out[14];
    _bay_9_meter_split1_input_bus__out15 = _three_phase_meter10_output_bus__out[15];
    _bay_9_meter_split1_input_bus__out16 = _three_phase_meter10_output_bus__out[16];
    _bay_9_meter_split1_input_bus__out17 = _three_phase_meter10_output_bus__out[17];
    _bay_9_meter_split1_input_bus__out18 = _three_phase_meter10_output_bus__out[18];
    _bay_9_meter_split1_input_bus__out19 = _three_phase_meter10_output_bus__out[19];
    _bay_9_meter_split1_input_bus__out20 = _three_phase_meter10_output_bus__out[20];
    _bay_9_meter_split1_input_bus__out21 = _three_phase_meter10_output_bus__out[21];
    _bay_9_meter_split1_input_bus__out22 = _three_phase_meter10_output_bus__out[22];
    _bay_9_meter_split1_input_bus__out23 = _three_phase_meter10_output_bus__out[23];
    _bay_9_meter_split1_input_bus__out24 = _three_phase_meter10_output_bus__out[24];
    _bay_9_meter_split1_input_bus__out25 = _three_phase_meter10_output_bus__out[25];
    _bay_9_meter_split1_input_bus__out26 = _three_phase_meter10_output_bus__out[26];
    _bay_9_meter_split1_input_bus__out27 = _three_phase_meter10_output_bus__out[27];
    _bay_9_meter_split1_input_bus__out28 = _three_phase_meter10_output_bus__out[28];
    _bay_9_meter_split1_input_bus__out29 = _three_phase_meter10_output_bus__out[29];
    // Generated from the component: Three-phase Meter10.PLL.PID.Sum6
    _three_phase_meter10_pll_pid_sum6__out =  - _three_phase_meter10_pll_pid_sum5__out + _three_phase_meter10_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter10.PLL.Rate Limiter1
    _three_phase_meter10_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter10_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter10_pll_rate_limiter1__first_step) {
        _three_phase_meter10_pll_rate_limiter1__out = _three_phase_meter10_pll_pid_limit1__out;
        _three_phase_meter10_pll_rate_limiter1__state = _three_phase_meter10_pll_pid_limit1__out;
    } else {
        _three_phase_meter10_pll_rate_limiter1__out = _three_phase_meter10_pll_pid_limit1__out;
        if (_three_phase_meter10_pll_pid_limit1__out - _three_phase_meter10_pll_rate_limiter1__state > _three_phase_meter10_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter10_pll_rate_limiter1__out = _three_phase_meter10_pll_rate_limiter1__state + (_three_phase_meter10_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter10_pll_pid_limit1__out - _three_phase_meter10_pll_rate_limiter1__state < _three_phase_meter10_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter10_pll_rate_limiter1__out = _three_phase_meter10_pll_rate_limiter1__state + (_three_phase_meter10_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter10.PLL.integrator
    _three_phase_meter10_pll_integrator__in = _three_phase_meter10_pll_pid_limit1__out;
    {
        _three_phase_meter10_pll_integrator__state += 0.0001 * _three_phase_meter10_pll_integrator__in ;
        if ( _three_phase_meter10_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter10_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter10_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter10_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter10_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter10_pll_integrator__out = _three_phase_meter10_pll_integrator__state ;
    }
    // Generated from the component: Bay 10.Meter Split1.input_bus
    _bay_10_meter_split1_input_bus__out = _three_phase_meter11_output_bus__out[0];
    _bay_10_meter_split1_input_bus__out1 = _three_phase_meter11_output_bus__out[1];
    _bay_10_meter_split1_input_bus__out2 = _three_phase_meter11_output_bus__out[2];
    _bay_10_meter_split1_input_bus__out3 = _three_phase_meter11_output_bus__out[3];
    _bay_10_meter_split1_input_bus__out4 = _three_phase_meter11_output_bus__out[4];
    _bay_10_meter_split1_input_bus__out5 = _three_phase_meter11_output_bus__out[5];
    _bay_10_meter_split1_input_bus__out6 = _three_phase_meter11_output_bus__out[6];
    _bay_10_meter_split1_input_bus__out7 = _three_phase_meter11_output_bus__out[7];
    _bay_10_meter_split1_input_bus__out8 = _three_phase_meter11_output_bus__out[8];
    _bay_10_meter_split1_input_bus__out9 = _three_phase_meter11_output_bus__out[9];
    _bay_10_meter_split1_input_bus__out10 = _three_phase_meter11_output_bus__out[10];
    _bay_10_meter_split1_input_bus__out11 = _three_phase_meter11_output_bus__out[11];
    _bay_10_meter_split1_input_bus__out12 = _three_phase_meter11_output_bus__out[12];
    _bay_10_meter_split1_input_bus__out13 = _three_phase_meter11_output_bus__out[13];
    _bay_10_meter_split1_input_bus__out14 = _three_phase_meter11_output_bus__out[14];
    _bay_10_meter_split1_input_bus__out15 = _three_phase_meter11_output_bus__out[15];
    _bay_10_meter_split1_input_bus__out16 = _three_phase_meter11_output_bus__out[16];
    _bay_10_meter_split1_input_bus__out17 = _three_phase_meter11_output_bus__out[17];
    _bay_10_meter_split1_input_bus__out18 = _three_phase_meter11_output_bus__out[18];
    _bay_10_meter_split1_input_bus__out19 = _three_phase_meter11_output_bus__out[19];
    _bay_10_meter_split1_input_bus__out20 = _three_phase_meter11_output_bus__out[20];
    _bay_10_meter_split1_input_bus__out21 = _three_phase_meter11_output_bus__out[21];
    _bay_10_meter_split1_input_bus__out22 = _three_phase_meter11_output_bus__out[22];
    _bay_10_meter_split1_input_bus__out23 = _three_phase_meter11_output_bus__out[23];
    _bay_10_meter_split1_input_bus__out24 = _three_phase_meter11_output_bus__out[24];
    _bay_10_meter_split1_input_bus__out25 = _three_phase_meter11_output_bus__out[25];
    _bay_10_meter_split1_input_bus__out26 = _three_phase_meter11_output_bus__out[26];
    _bay_10_meter_split1_input_bus__out27 = _three_phase_meter11_output_bus__out[27];
    _bay_10_meter_split1_input_bus__out28 = _three_phase_meter11_output_bus__out[28];
    _bay_10_meter_split1_input_bus__out29 = _three_phase_meter11_output_bus__out[29];
    // Generated from the component: Three-phase Meter11.PLL.PID.Sum6
    _three_phase_meter11_pll_pid_sum6__out =  - _three_phase_meter11_pll_pid_sum5__out + _three_phase_meter11_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter11.PLL.Rate Limiter1
    _three_phase_meter11_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter11_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter11_pll_rate_limiter1__first_step) {
        _three_phase_meter11_pll_rate_limiter1__out = _three_phase_meter11_pll_pid_limit1__out;
        _three_phase_meter11_pll_rate_limiter1__state = _three_phase_meter11_pll_pid_limit1__out;
    } else {
        _three_phase_meter11_pll_rate_limiter1__out = _three_phase_meter11_pll_pid_limit1__out;
        if (_three_phase_meter11_pll_pid_limit1__out - _three_phase_meter11_pll_rate_limiter1__state > _three_phase_meter11_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter11_pll_rate_limiter1__out = _three_phase_meter11_pll_rate_limiter1__state + (_three_phase_meter11_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter11_pll_pid_limit1__out - _three_phase_meter11_pll_rate_limiter1__state < _three_phase_meter11_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter11_pll_rate_limiter1__out = _three_phase_meter11_pll_rate_limiter1__state + (_three_phase_meter11_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter11.PLL.integrator
    _three_phase_meter11_pll_integrator__in = _three_phase_meter11_pll_pid_limit1__out;
    {
        _three_phase_meter11_pll_integrator__state += 0.0001 * _three_phase_meter11_pll_integrator__in ;
        if ( _three_phase_meter11_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter11_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter11_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter11_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter11_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter11_pll_integrator__out = _three_phase_meter11_pll_integrator__state ;
    }
    // Generated from the component: Bay 2.Meter Split1.input_bus
    _bay_2_meter_split1_input_bus__out = _three_phase_meter2_output_bus__out[0];
    _bay_2_meter_split1_input_bus__out1 = _three_phase_meter2_output_bus__out[1];
    _bay_2_meter_split1_input_bus__out2 = _three_phase_meter2_output_bus__out[2];
    _bay_2_meter_split1_input_bus__out3 = _three_phase_meter2_output_bus__out[3];
    _bay_2_meter_split1_input_bus__out4 = _three_phase_meter2_output_bus__out[4];
    _bay_2_meter_split1_input_bus__out5 = _three_phase_meter2_output_bus__out[5];
    _bay_2_meter_split1_input_bus__out6 = _three_phase_meter2_output_bus__out[6];
    _bay_2_meter_split1_input_bus__out7 = _three_phase_meter2_output_bus__out[7];
    _bay_2_meter_split1_input_bus__out8 = _three_phase_meter2_output_bus__out[8];
    _bay_2_meter_split1_input_bus__out9 = _three_phase_meter2_output_bus__out[9];
    _bay_2_meter_split1_input_bus__out10 = _three_phase_meter2_output_bus__out[10];
    _bay_2_meter_split1_input_bus__out11 = _three_phase_meter2_output_bus__out[11];
    _bay_2_meter_split1_input_bus__out12 = _three_phase_meter2_output_bus__out[12];
    _bay_2_meter_split1_input_bus__out13 = _three_phase_meter2_output_bus__out[13];
    _bay_2_meter_split1_input_bus__out14 = _three_phase_meter2_output_bus__out[14];
    _bay_2_meter_split1_input_bus__out15 = _three_phase_meter2_output_bus__out[15];
    _bay_2_meter_split1_input_bus__out16 = _three_phase_meter2_output_bus__out[16];
    _bay_2_meter_split1_input_bus__out17 = _three_phase_meter2_output_bus__out[17];
    _bay_2_meter_split1_input_bus__out18 = _three_phase_meter2_output_bus__out[18];
    _bay_2_meter_split1_input_bus__out19 = _three_phase_meter2_output_bus__out[19];
    _bay_2_meter_split1_input_bus__out20 = _three_phase_meter2_output_bus__out[20];
    _bay_2_meter_split1_input_bus__out21 = _three_phase_meter2_output_bus__out[21];
    _bay_2_meter_split1_input_bus__out22 = _three_phase_meter2_output_bus__out[22];
    _bay_2_meter_split1_input_bus__out23 = _three_phase_meter2_output_bus__out[23];
    _bay_2_meter_split1_input_bus__out24 = _three_phase_meter2_output_bus__out[24];
    _bay_2_meter_split1_input_bus__out25 = _three_phase_meter2_output_bus__out[25];
    _bay_2_meter_split1_input_bus__out26 = _three_phase_meter2_output_bus__out[26];
    _bay_2_meter_split1_input_bus__out27 = _three_phase_meter2_output_bus__out[27];
    _bay_2_meter_split1_input_bus__out28 = _three_phase_meter2_output_bus__out[28];
    _bay_2_meter_split1_input_bus__out29 = _three_phase_meter2_output_bus__out[29];
    // Generated from the component: Three-phase Meter2.PLL.PID.Sum6
    _three_phase_meter2_pll_pid_sum6__out =  - _three_phase_meter2_pll_pid_sum5__out + _three_phase_meter2_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter2.PLL.Rate Limiter1
    _three_phase_meter2_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter2_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter2_pll_rate_limiter1__first_step) {
        _three_phase_meter2_pll_rate_limiter1__out = _three_phase_meter2_pll_pid_limit1__out;
        _three_phase_meter2_pll_rate_limiter1__state = _three_phase_meter2_pll_pid_limit1__out;
    } else {
        _three_phase_meter2_pll_rate_limiter1__out = _three_phase_meter2_pll_pid_limit1__out;
        if (_three_phase_meter2_pll_pid_limit1__out - _three_phase_meter2_pll_rate_limiter1__state > _three_phase_meter2_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter2_pll_rate_limiter1__out = _three_phase_meter2_pll_rate_limiter1__state + (_three_phase_meter2_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter2_pll_pid_limit1__out - _three_phase_meter2_pll_rate_limiter1__state < _three_phase_meter2_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter2_pll_rate_limiter1__out = _three_phase_meter2_pll_rate_limiter1__state + (_three_phase_meter2_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter2.PLL.integrator
    _three_phase_meter2_pll_integrator__in = _three_phase_meter2_pll_pid_limit1__out;
    {
        _three_phase_meter2_pll_integrator__state += 0.0001 * _three_phase_meter2_pll_integrator__in ;
        if ( _three_phase_meter2_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter2_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter2_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter2_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter2_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter2_pll_integrator__out = _three_phase_meter2_pll_integrator__state ;
    }
    // Generated from the component: Bay 3.Meter Split1.input_bus
    _bay_3_meter_split1_input_bus__out = _three_phase_meter3_output_bus__out[0];
    _bay_3_meter_split1_input_bus__out1 = _three_phase_meter3_output_bus__out[1];
    _bay_3_meter_split1_input_bus__out2 = _three_phase_meter3_output_bus__out[2];
    _bay_3_meter_split1_input_bus__out3 = _three_phase_meter3_output_bus__out[3];
    _bay_3_meter_split1_input_bus__out4 = _three_phase_meter3_output_bus__out[4];
    _bay_3_meter_split1_input_bus__out5 = _three_phase_meter3_output_bus__out[5];
    _bay_3_meter_split1_input_bus__out6 = _three_phase_meter3_output_bus__out[6];
    _bay_3_meter_split1_input_bus__out7 = _three_phase_meter3_output_bus__out[7];
    _bay_3_meter_split1_input_bus__out8 = _three_phase_meter3_output_bus__out[8];
    _bay_3_meter_split1_input_bus__out9 = _three_phase_meter3_output_bus__out[9];
    _bay_3_meter_split1_input_bus__out10 = _three_phase_meter3_output_bus__out[10];
    _bay_3_meter_split1_input_bus__out11 = _three_phase_meter3_output_bus__out[11];
    _bay_3_meter_split1_input_bus__out12 = _three_phase_meter3_output_bus__out[12];
    _bay_3_meter_split1_input_bus__out13 = _three_phase_meter3_output_bus__out[13];
    _bay_3_meter_split1_input_bus__out14 = _three_phase_meter3_output_bus__out[14];
    _bay_3_meter_split1_input_bus__out15 = _three_phase_meter3_output_bus__out[15];
    _bay_3_meter_split1_input_bus__out16 = _three_phase_meter3_output_bus__out[16];
    _bay_3_meter_split1_input_bus__out17 = _three_phase_meter3_output_bus__out[17];
    _bay_3_meter_split1_input_bus__out18 = _three_phase_meter3_output_bus__out[18];
    _bay_3_meter_split1_input_bus__out19 = _three_phase_meter3_output_bus__out[19];
    _bay_3_meter_split1_input_bus__out20 = _three_phase_meter3_output_bus__out[20];
    _bay_3_meter_split1_input_bus__out21 = _three_phase_meter3_output_bus__out[21];
    _bay_3_meter_split1_input_bus__out22 = _three_phase_meter3_output_bus__out[22];
    _bay_3_meter_split1_input_bus__out23 = _three_phase_meter3_output_bus__out[23];
    _bay_3_meter_split1_input_bus__out24 = _three_phase_meter3_output_bus__out[24];
    _bay_3_meter_split1_input_bus__out25 = _three_phase_meter3_output_bus__out[25];
    _bay_3_meter_split1_input_bus__out26 = _three_phase_meter3_output_bus__out[26];
    _bay_3_meter_split1_input_bus__out27 = _three_phase_meter3_output_bus__out[27];
    _bay_3_meter_split1_input_bus__out28 = _three_phase_meter3_output_bus__out[28];
    _bay_3_meter_split1_input_bus__out29 = _three_phase_meter3_output_bus__out[29];
    // Generated from the component: Three-phase Meter3.PLL.PID.Sum6
    _three_phase_meter3_pll_pid_sum6__out =  - _three_phase_meter3_pll_pid_sum5__out + _three_phase_meter3_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter3.PLL.Rate Limiter1
    _three_phase_meter3_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter3_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter3_pll_rate_limiter1__first_step) {
        _three_phase_meter3_pll_rate_limiter1__out = _three_phase_meter3_pll_pid_limit1__out;
        _three_phase_meter3_pll_rate_limiter1__state = _three_phase_meter3_pll_pid_limit1__out;
    } else {
        _three_phase_meter3_pll_rate_limiter1__out = _three_phase_meter3_pll_pid_limit1__out;
        if (_three_phase_meter3_pll_pid_limit1__out - _three_phase_meter3_pll_rate_limiter1__state > _three_phase_meter3_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter3_pll_rate_limiter1__out = _three_phase_meter3_pll_rate_limiter1__state + (_three_phase_meter3_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter3_pll_pid_limit1__out - _three_phase_meter3_pll_rate_limiter1__state < _three_phase_meter3_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter3_pll_rate_limiter1__out = _three_phase_meter3_pll_rate_limiter1__state + (_three_phase_meter3_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter3.PLL.integrator
    _three_phase_meter3_pll_integrator__in = _three_phase_meter3_pll_pid_limit1__out;
    {
        _three_phase_meter3_pll_integrator__state += 0.0001 * _three_phase_meter3_pll_integrator__in ;
        if ( _three_phase_meter3_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter3_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter3_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter3_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter3_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter3_pll_integrator__out = _three_phase_meter3_pll_integrator__state ;
    }
    // Generated from the component: HV Bay 1.Meter Split1.input_bus
    _hv_bay_1_meter_split1_input_bus__out = _three_phase_meter4_output_bus__out[0];
    _hv_bay_1_meter_split1_input_bus__out1 = _three_phase_meter4_output_bus__out[1];
    _hv_bay_1_meter_split1_input_bus__out2 = _three_phase_meter4_output_bus__out[2];
    _hv_bay_1_meter_split1_input_bus__out3 = _three_phase_meter4_output_bus__out[3];
    _hv_bay_1_meter_split1_input_bus__out4 = _three_phase_meter4_output_bus__out[4];
    _hv_bay_1_meter_split1_input_bus__out5 = _three_phase_meter4_output_bus__out[5];
    _hv_bay_1_meter_split1_input_bus__out6 = _three_phase_meter4_output_bus__out[6];
    _hv_bay_1_meter_split1_input_bus__out7 = _three_phase_meter4_output_bus__out[7];
    _hv_bay_1_meter_split1_input_bus__out8 = _three_phase_meter4_output_bus__out[8];
    _hv_bay_1_meter_split1_input_bus__out9 = _three_phase_meter4_output_bus__out[9];
    _hv_bay_1_meter_split1_input_bus__out10 = _three_phase_meter4_output_bus__out[10];
    _hv_bay_1_meter_split1_input_bus__out11 = _three_phase_meter4_output_bus__out[11];
    _hv_bay_1_meter_split1_input_bus__out12 = _three_phase_meter4_output_bus__out[12];
    _hv_bay_1_meter_split1_input_bus__out13 = _three_phase_meter4_output_bus__out[13];
    _hv_bay_1_meter_split1_input_bus__out14 = _three_phase_meter4_output_bus__out[14];
    _hv_bay_1_meter_split1_input_bus__out15 = _three_phase_meter4_output_bus__out[15];
    _hv_bay_1_meter_split1_input_bus__out16 = _three_phase_meter4_output_bus__out[16];
    _hv_bay_1_meter_split1_input_bus__out17 = _three_phase_meter4_output_bus__out[17];
    _hv_bay_1_meter_split1_input_bus__out18 = _three_phase_meter4_output_bus__out[18];
    _hv_bay_1_meter_split1_input_bus__out19 = _three_phase_meter4_output_bus__out[19];
    _hv_bay_1_meter_split1_input_bus__out20 = _three_phase_meter4_output_bus__out[20];
    _hv_bay_1_meter_split1_input_bus__out21 = _three_phase_meter4_output_bus__out[21];
    _hv_bay_1_meter_split1_input_bus__out22 = _three_phase_meter4_output_bus__out[22];
    _hv_bay_1_meter_split1_input_bus__out23 = _three_phase_meter4_output_bus__out[23];
    _hv_bay_1_meter_split1_input_bus__out24 = _three_phase_meter4_output_bus__out[24];
    _hv_bay_1_meter_split1_input_bus__out25 = _three_phase_meter4_output_bus__out[25];
    _hv_bay_1_meter_split1_input_bus__out26 = _three_phase_meter4_output_bus__out[26];
    _hv_bay_1_meter_split1_input_bus__out27 = _three_phase_meter4_output_bus__out[27];
    _hv_bay_1_meter_split1_input_bus__out28 = _three_phase_meter4_output_bus__out[28];
    _hv_bay_1_meter_split1_input_bus__out29 = _three_phase_meter4_output_bus__out[29];
    // Generated from the component: Three-phase Meter4.PLL.PID.Sum6
    _three_phase_meter4_pll_pid_sum6__out =  - _three_phase_meter4_pll_pid_sum5__out + _three_phase_meter4_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter4.PLL.Rate Limiter1
    _three_phase_meter4_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter4_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter4_pll_rate_limiter1__first_step) {
        _three_phase_meter4_pll_rate_limiter1__out = _three_phase_meter4_pll_pid_limit1__out;
        _three_phase_meter4_pll_rate_limiter1__state = _three_phase_meter4_pll_pid_limit1__out;
    } else {
        _three_phase_meter4_pll_rate_limiter1__out = _three_phase_meter4_pll_pid_limit1__out;
        if (_three_phase_meter4_pll_pid_limit1__out - _three_phase_meter4_pll_rate_limiter1__state > _three_phase_meter4_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter4_pll_rate_limiter1__out = _three_phase_meter4_pll_rate_limiter1__state + (_three_phase_meter4_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter4_pll_pid_limit1__out - _three_phase_meter4_pll_rate_limiter1__state < _three_phase_meter4_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter4_pll_rate_limiter1__out = _three_phase_meter4_pll_rate_limiter1__state + (_three_phase_meter4_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter4.PLL.integrator
    _three_phase_meter4_pll_integrator__in = _three_phase_meter4_pll_pid_limit1__out;
    {
        _three_phase_meter4_pll_integrator__state += 0.0001 * _three_phase_meter4_pll_integrator__in ;
        if ( _three_phase_meter4_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter4_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter4_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter4_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter4_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter4_pll_integrator__out = _three_phase_meter4_pll_integrator__state ;
    }
    // Generated from the component: Bay 4.Meter Split1.input_bus
    _bay_4_meter_split1_input_bus__out = _three_phase_meter5_output_bus__out[0];
    _bay_4_meter_split1_input_bus__out1 = _three_phase_meter5_output_bus__out[1];
    _bay_4_meter_split1_input_bus__out2 = _three_phase_meter5_output_bus__out[2];
    _bay_4_meter_split1_input_bus__out3 = _three_phase_meter5_output_bus__out[3];
    _bay_4_meter_split1_input_bus__out4 = _three_phase_meter5_output_bus__out[4];
    _bay_4_meter_split1_input_bus__out5 = _three_phase_meter5_output_bus__out[5];
    _bay_4_meter_split1_input_bus__out6 = _three_phase_meter5_output_bus__out[6];
    _bay_4_meter_split1_input_bus__out7 = _three_phase_meter5_output_bus__out[7];
    _bay_4_meter_split1_input_bus__out8 = _three_phase_meter5_output_bus__out[8];
    _bay_4_meter_split1_input_bus__out9 = _three_phase_meter5_output_bus__out[9];
    _bay_4_meter_split1_input_bus__out10 = _three_phase_meter5_output_bus__out[10];
    _bay_4_meter_split1_input_bus__out11 = _three_phase_meter5_output_bus__out[11];
    _bay_4_meter_split1_input_bus__out12 = _three_phase_meter5_output_bus__out[12];
    _bay_4_meter_split1_input_bus__out13 = _three_phase_meter5_output_bus__out[13];
    _bay_4_meter_split1_input_bus__out14 = _three_phase_meter5_output_bus__out[14];
    _bay_4_meter_split1_input_bus__out15 = _three_phase_meter5_output_bus__out[15];
    _bay_4_meter_split1_input_bus__out16 = _three_phase_meter5_output_bus__out[16];
    _bay_4_meter_split1_input_bus__out17 = _three_phase_meter5_output_bus__out[17];
    _bay_4_meter_split1_input_bus__out18 = _three_phase_meter5_output_bus__out[18];
    _bay_4_meter_split1_input_bus__out19 = _three_phase_meter5_output_bus__out[19];
    _bay_4_meter_split1_input_bus__out20 = _three_phase_meter5_output_bus__out[20];
    _bay_4_meter_split1_input_bus__out21 = _three_phase_meter5_output_bus__out[21];
    _bay_4_meter_split1_input_bus__out22 = _three_phase_meter5_output_bus__out[22];
    _bay_4_meter_split1_input_bus__out23 = _three_phase_meter5_output_bus__out[23];
    _bay_4_meter_split1_input_bus__out24 = _three_phase_meter5_output_bus__out[24];
    _bay_4_meter_split1_input_bus__out25 = _three_phase_meter5_output_bus__out[25];
    _bay_4_meter_split1_input_bus__out26 = _three_phase_meter5_output_bus__out[26];
    _bay_4_meter_split1_input_bus__out27 = _three_phase_meter5_output_bus__out[27];
    _bay_4_meter_split1_input_bus__out28 = _three_phase_meter5_output_bus__out[28];
    _bay_4_meter_split1_input_bus__out29 = _three_phase_meter5_output_bus__out[29];
    // Generated from the component: Three-phase Meter5.PLL.PID.Sum6
    _three_phase_meter5_pll_pid_sum6__out =  - _three_phase_meter5_pll_pid_sum5__out + _three_phase_meter5_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter5.PLL.Rate Limiter1
    _three_phase_meter5_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter5_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter5_pll_rate_limiter1__first_step) {
        _three_phase_meter5_pll_rate_limiter1__out = _three_phase_meter5_pll_pid_limit1__out;
        _three_phase_meter5_pll_rate_limiter1__state = _three_phase_meter5_pll_pid_limit1__out;
    } else {
        _three_phase_meter5_pll_rate_limiter1__out = _three_phase_meter5_pll_pid_limit1__out;
        if (_three_phase_meter5_pll_pid_limit1__out - _three_phase_meter5_pll_rate_limiter1__state > _three_phase_meter5_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter5_pll_rate_limiter1__out = _three_phase_meter5_pll_rate_limiter1__state + (_three_phase_meter5_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter5_pll_pid_limit1__out - _three_phase_meter5_pll_rate_limiter1__state < _three_phase_meter5_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter5_pll_rate_limiter1__out = _three_phase_meter5_pll_rate_limiter1__state + (_three_phase_meter5_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter5.PLL.integrator
    _three_phase_meter5_pll_integrator__in = _three_phase_meter5_pll_pid_limit1__out;
    {
        _three_phase_meter5_pll_integrator__state += 0.0001 * _three_phase_meter5_pll_integrator__in ;
        if ( _three_phase_meter5_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter5_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter5_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter5_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter5_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter5_pll_integrator__out = _three_phase_meter5_pll_integrator__state ;
    }
    // Generated from the component: Bay 5.Meter Split1.input_bus
    _bay_5_meter_split1_input_bus__out = _three_phase_meter6_output_bus__out[0];
    _bay_5_meter_split1_input_bus__out1 = _three_phase_meter6_output_bus__out[1];
    _bay_5_meter_split1_input_bus__out2 = _three_phase_meter6_output_bus__out[2];
    _bay_5_meter_split1_input_bus__out3 = _three_phase_meter6_output_bus__out[3];
    _bay_5_meter_split1_input_bus__out4 = _three_phase_meter6_output_bus__out[4];
    _bay_5_meter_split1_input_bus__out5 = _three_phase_meter6_output_bus__out[5];
    _bay_5_meter_split1_input_bus__out6 = _three_phase_meter6_output_bus__out[6];
    _bay_5_meter_split1_input_bus__out7 = _three_phase_meter6_output_bus__out[7];
    _bay_5_meter_split1_input_bus__out8 = _three_phase_meter6_output_bus__out[8];
    _bay_5_meter_split1_input_bus__out9 = _three_phase_meter6_output_bus__out[9];
    _bay_5_meter_split1_input_bus__out10 = _three_phase_meter6_output_bus__out[10];
    _bay_5_meter_split1_input_bus__out11 = _three_phase_meter6_output_bus__out[11];
    _bay_5_meter_split1_input_bus__out12 = _three_phase_meter6_output_bus__out[12];
    _bay_5_meter_split1_input_bus__out13 = _three_phase_meter6_output_bus__out[13];
    _bay_5_meter_split1_input_bus__out14 = _three_phase_meter6_output_bus__out[14];
    _bay_5_meter_split1_input_bus__out15 = _three_phase_meter6_output_bus__out[15];
    _bay_5_meter_split1_input_bus__out16 = _three_phase_meter6_output_bus__out[16];
    _bay_5_meter_split1_input_bus__out17 = _three_phase_meter6_output_bus__out[17];
    _bay_5_meter_split1_input_bus__out18 = _three_phase_meter6_output_bus__out[18];
    _bay_5_meter_split1_input_bus__out19 = _three_phase_meter6_output_bus__out[19];
    _bay_5_meter_split1_input_bus__out20 = _three_phase_meter6_output_bus__out[20];
    _bay_5_meter_split1_input_bus__out21 = _three_phase_meter6_output_bus__out[21];
    _bay_5_meter_split1_input_bus__out22 = _three_phase_meter6_output_bus__out[22];
    _bay_5_meter_split1_input_bus__out23 = _three_phase_meter6_output_bus__out[23];
    _bay_5_meter_split1_input_bus__out24 = _three_phase_meter6_output_bus__out[24];
    _bay_5_meter_split1_input_bus__out25 = _three_phase_meter6_output_bus__out[25];
    _bay_5_meter_split1_input_bus__out26 = _three_phase_meter6_output_bus__out[26];
    _bay_5_meter_split1_input_bus__out27 = _three_phase_meter6_output_bus__out[27];
    _bay_5_meter_split1_input_bus__out28 = _three_phase_meter6_output_bus__out[28];
    _bay_5_meter_split1_input_bus__out29 = _three_phase_meter6_output_bus__out[29];
    // Generated from the component: Three-phase Meter6.PLL.PID.Sum6
    _three_phase_meter6_pll_pid_sum6__out =  - _three_phase_meter6_pll_pid_sum5__out + _three_phase_meter6_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter6.PLL.Rate Limiter1
    _three_phase_meter6_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter6_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter6_pll_rate_limiter1__first_step) {
        _three_phase_meter6_pll_rate_limiter1__out = _three_phase_meter6_pll_pid_limit1__out;
        _three_phase_meter6_pll_rate_limiter1__state = _three_phase_meter6_pll_pid_limit1__out;
    } else {
        _three_phase_meter6_pll_rate_limiter1__out = _three_phase_meter6_pll_pid_limit1__out;
        if (_three_phase_meter6_pll_pid_limit1__out - _three_phase_meter6_pll_rate_limiter1__state > _three_phase_meter6_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter6_pll_rate_limiter1__out = _three_phase_meter6_pll_rate_limiter1__state + (_three_phase_meter6_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter6_pll_pid_limit1__out - _three_phase_meter6_pll_rate_limiter1__state < _three_phase_meter6_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter6_pll_rate_limiter1__out = _three_phase_meter6_pll_rate_limiter1__state + (_three_phase_meter6_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter6.PLL.integrator
    _three_phase_meter6_pll_integrator__in = _three_phase_meter6_pll_pid_limit1__out;
    {
        _three_phase_meter6_pll_integrator__state += 0.0001 * _three_phase_meter6_pll_integrator__in ;
        if ( _three_phase_meter6_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter6_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter6_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter6_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter6_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter6_pll_integrator__out = _three_phase_meter6_pll_integrator__state ;
    }
    // Generated from the component: Bay 6.Meter Split1.input_bus
    _bay_6_meter_split1_input_bus__out = _three_phase_meter7_output_bus__out[0];
    _bay_6_meter_split1_input_bus__out1 = _three_phase_meter7_output_bus__out[1];
    _bay_6_meter_split1_input_bus__out2 = _three_phase_meter7_output_bus__out[2];
    _bay_6_meter_split1_input_bus__out3 = _three_phase_meter7_output_bus__out[3];
    _bay_6_meter_split1_input_bus__out4 = _three_phase_meter7_output_bus__out[4];
    _bay_6_meter_split1_input_bus__out5 = _three_phase_meter7_output_bus__out[5];
    _bay_6_meter_split1_input_bus__out6 = _three_phase_meter7_output_bus__out[6];
    _bay_6_meter_split1_input_bus__out7 = _three_phase_meter7_output_bus__out[7];
    _bay_6_meter_split1_input_bus__out8 = _three_phase_meter7_output_bus__out[8];
    _bay_6_meter_split1_input_bus__out9 = _three_phase_meter7_output_bus__out[9];
    _bay_6_meter_split1_input_bus__out10 = _three_phase_meter7_output_bus__out[10];
    _bay_6_meter_split1_input_bus__out11 = _three_phase_meter7_output_bus__out[11];
    _bay_6_meter_split1_input_bus__out12 = _three_phase_meter7_output_bus__out[12];
    _bay_6_meter_split1_input_bus__out13 = _three_phase_meter7_output_bus__out[13];
    _bay_6_meter_split1_input_bus__out14 = _three_phase_meter7_output_bus__out[14];
    _bay_6_meter_split1_input_bus__out15 = _three_phase_meter7_output_bus__out[15];
    _bay_6_meter_split1_input_bus__out16 = _three_phase_meter7_output_bus__out[16];
    _bay_6_meter_split1_input_bus__out17 = _three_phase_meter7_output_bus__out[17];
    _bay_6_meter_split1_input_bus__out18 = _three_phase_meter7_output_bus__out[18];
    _bay_6_meter_split1_input_bus__out19 = _three_phase_meter7_output_bus__out[19];
    _bay_6_meter_split1_input_bus__out20 = _three_phase_meter7_output_bus__out[20];
    _bay_6_meter_split1_input_bus__out21 = _three_phase_meter7_output_bus__out[21];
    _bay_6_meter_split1_input_bus__out22 = _three_phase_meter7_output_bus__out[22];
    _bay_6_meter_split1_input_bus__out23 = _three_phase_meter7_output_bus__out[23];
    _bay_6_meter_split1_input_bus__out24 = _three_phase_meter7_output_bus__out[24];
    _bay_6_meter_split1_input_bus__out25 = _three_phase_meter7_output_bus__out[25];
    _bay_6_meter_split1_input_bus__out26 = _three_phase_meter7_output_bus__out[26];
    _bay_6_meter_split1_input_bus__out27 = _three_phase_meter7_output_bus__out[27];
    _bay_6_meter_split1_input_bus__out28 = _three_phase_meter7_output_bus__out[28];
    _bay_6_meter_split1_input_bus__out29 = _three_phase_meter7_output_bus__out[29];
    // Generated from the component: Three-phase Meter7.PLL.PID.Sum6
    _three_phase_meter7_pll_pid_sum6__out =  - _three_phase_meter7_pll_pid_sum5__out + _three_phase_meter7_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter7.PLL.Rate Limiter1
    _three_phase_meter7_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter7_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter7_pll_rate_limiter1__first_step) {
        _three_phase_meter7_pll_rate_limiter1__out = _three_phase_meter7_pll_pid_limit1__out;
        _three_phase_meter7_pll_rate_limiter1__state = _three_phase_meter7_pll_pid_limit1__out;
    } else {
        _three_phase_meter7_pll_rate_limiter1__out = _three_phase_meter7_pll_pid_limit1__out;
        if (_three_phase_meter7_pll_pid_limit1__out - _three_phase_meter7_pll_rate_limiter1__state > _three_phase_meter7_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter7_pll_rate_limiter1__out = _three_phase_meter7_pll_rate_limiter1__state + (_three_phase_meter7_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter7_pll_pid_limit1__out - _three_phase_meter7_pll_rate_limiter1__state < _three_phase_meter7_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter7_pll_rate_limiter1__out = _three_phase_meter7_pll_rate_limiter1__state + (_three_phase_meter7_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter7.PLL.integrator
    _three_phase_meter7_pll_integrator__in = _three_phase_meter7_pll_pid_limit1__out;
    {
        _three_phase_meter7_pll_integrator__state += 0.0001 * _three_phase_meter7_pll_integrator__in ;
        if ( _three_phase_meter7_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter7_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter7_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter7_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter7_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter7_pll_integrator__out = _three_phase_meter7_pll_integrator__state ;
    }
    // Generated from the component: Bay 7.Meter Split1.input_bus
    _bay_7_meter_split1_input_bus__out = _three_phase_meter8_output_bus__out[0];
    _bay_7_meter_split1_input_bus__out1 = _three_phase_meter8_output_bus__out[1];
    _bay_7_meter_split1_input_bus__out2 = _three_phase_meter8_output_bus__out[2];
    _bay_7_meter_split1_input_bus__out3 = _three_phase_meter8_output_bus__out[3];
    _bay_7_meter_split1_input_bus__out4 = _three_phase_meter8_output_bus__out[4];
    _bay_7_meter_split1_input_bus__out5 = _three_phase_meter8_output_bus__out[5];
    _bay_7_meter_split1_input_bus__out6 = _three_phase_meter8_output_bus__out[6];
    _bay_7_meter_split1_input_bus__out7 = _three_phase_meter8_output_bus__out[7];
    _bay_7_meter_split1_input_bus__out8 = _three_phase_meter8_output_bus__out[8];
    _bay_7_meter_split1_input_bus__out9 = _three_phase_meter8_output_bus__out[9];
    _bay_7_meter_split1_input_bus__out10 = _three_phase_meter8_output_bus__out[10];
    _bay_7_meter_split1_input_bus__out11 = _three_phase_meter8_output_bus__out[11];
    _bay_7_meter_split1_input_bus__out12 = _three_phase_meter8_output_bus__out[12];
    _bay_7_meter_split1_input_bus__out13 = _three_phase_meter8_output_bus__out[13];
    _bay_7_meter_split1_input_bus__out14 = _three_phase_meter8_output_bus__out[14];
    _bay_7_meter_split1_input_bus__out15 = _three_phase_meter8_output_bus__out[15];
    _bay_7_meter_split1_input_bus__out16 = _three_phase_meter8_output_bus__out[16];
    _bay_7_meter_split1_input_bus__out17 = _three_phase_meter8_output_bus__out[17];
    _bay_7_meter_split1_input_bus__out18 = _three_phase_meter8_output_bus__out[18];
    _bay_7_meter_split1_input_bus__out19 = _three_phase_meter8_output_bus__out[19];
    _bay_7_meter_split1_input_bus__out20 = _three_phase_meter8_output_bus__out[20];
    _bay_7_meter_split1_input_bus__out21 = _three_phase_meter8_output_bus__out[21];
    _bay_7_meter_split1_input_bus__out22 = _three_phase_meter8_output_bus__out[22];
    _bay_7_meter_split1_input_bus__out23 = _three_phase_meter8_output_bus__out[23];
    _bay_7_meter_split1_input_bus__out24 = _three_phase_meter8_output_bus__out[24];
    _bay_7_meter_split1_input_bus__out25 = _three_phase_meter8_output_bus__out[25];
    _bay_7_meter_split1_input_bus__out26 = _three_phase_meter8_output_bus__out[26];
    _bay_7_meter_split1_input_bus__out27 = _three_phase_meter8_output_bus__out[27];
    _bay_7_meter_split1_input_bus__out28 = _three_phase_meter8_output_bus__out[28];
    _bay_7_meter_split1_input_bus__out29 = _three_phase_meter8_output_bus__out[29];
    // Generated from the component: Three-phase Meter8.PLL.PID.Sum6
    _three_phase_meter8_pll_pid_sum6__out =  - _three_phase_meter8_pll_pid_sum5__out + _three_phase_meter8_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter8.PLL.Rate Limiter1
    _three_phase_meter8_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter8_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter8_pll_rate_limiter1__first_step) {
        _three_phase_meter8_pll_rate_limiter1__out = _three_phase_meter8_pll_pid_limit1__out;
        _three_phase_meter8_pll_rate_limiter1__state = _three_phase_meter8_pll_pid_limit1__out;
    } else {
        _three_phase_meter8_pll_rate_limiter1__out = _three_phase_meter8_pll_pid_limit1__out;
        if (_three_phase_meter8_pll_pid_limit1__out - _three_phase_meter8_pll_rate_limiter1__state > _three_phase_meter8_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter8_pll_rate_limiter1__out = _three_phase_meter8_pll_rate_limiter1__state + (_three_phase_meter8_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter8_pll_pid_limit1__out - _three_phase_meter8_pll_rate_limiter1__state < _three_phase_meter8_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter8_pll_rate_limiter1__out = _three_phase_meter8_pll_rate_limiter1__state + (_three_phase_meter8_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter8.PLL.integrator
    _three_phase_meter8_pll_integrator__in = _three_phase_meter8_pll_pid_limit1__out;
    {
        _three_phase_meter8_pll_integrator__state += 0.0001 * _three_phase_meter8_pll_integrator__in ;
        if ( _three_phase_meter8_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter8_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter8_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter8_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter8_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter8_pll_integrator__out = _three_phase_meter8_pll_integrator__state ;
    }
    // Generated from the component: Bay 8.Meter Split1.input_bus
    _bay_8_meter_split1_input_bus__out = _three_phase_meter9_output_bus__out[0];
    _bay_8_meter_split1_input_bus__out1 = _three_phase_meter9_output_bus__out[1];
    _bay_8_meter_split1_input_bus__out2 = _three_phase_meter9_output_bus__out[2];
    _bay_8_meter_split1_input_bus__out3 = _three_phase_meter9_output_bus__out[3];
    _bay_8_meter_split1_input_bus__out4 = _three_phase_meter9_output_bus__out[4];
    _bay_8_meter_split1_input_bus__out5 = _three_phase_meter9_output_bus__out[5];
    _bay_8_meter_split1_input_bus__out6 = _three_phase_meter9_output_bus__out[6];
    _bay_8_meter_split1_input_bus__out7 = _three_phase_meter9_output_bus__out[7];
    _bay_8_meter_split1_input_bus__out8 = _three_phase_meter9_output_bus__out[8];
    _bay_8_meter_split1_input_bus__out9 = _three_phase_meter9_output_bus__out[9];
    _bay_8_meter_split1_input_bus__out10 = _three_phase_meter9_output_bus__out[10];
    _bay_8_meter_split1_input_bus__out11 = _three_phase_meter9_output_bus__out[11];
    _bay_8_meter_split1_input_bus__out12 = _three_phase_meter9_output_bus__out[12];
    _bay_8_meter_split1_input_bus__out13 = _three_phase_meter9_output_bus__out[13];
    _bay_8_meter_split1_input_bus__out14 = _three_phase_meter9_output_bus__out[14];
    _bay_8_meter_split1_input_bus__out15 = _three_phase_meter9_output_bus__out[15];
    _bay_8_meter_split1_input_bus__out16 = _three_phase_meter9_output_bus__out[16];
    _bay_8_meter_split1_input_bus__out17 = _three_phase_meter9_output_bus__out[17];
    _bay_8_meter_split1_input_bus__out18 = _three_phase_meter9_output_bus__out[18];
    _bay_8_meter_split1_input_bus__out19 = _three_phase_meter9_output_bus__out[19];
    _bay_8_meter_split1_input_bus__out20 = _three_phase_meter9_output_bus__out[20];
    _bay_8_meter_split1_input_bus__out21 = _three_phase_meter9_output_bus__out[21];
    _bay_8_meter_split1_input_bus__out22 = _three_phase_meter9_output_bus__out[22];
    _bay_8_meter_split1_input_bus__out23 = _three_phase_meter9_output_bus__out[23];
    _bay_8_meter_split1_input_bus__out24 = _three_phase_meter9_output_bus__out[24];
    _bay_8_meter_split1_input_bus__out25 = _three_phase_meter9_output_bus__out[25];
    _bay_8_meter_split1_input_bus__out26 = _three_phase_meter9_output_bus__out[26];
    _bay_8_meter_split1_input_bus__out27 = _three_phase_meter9_output_bus__out[27];
    _bay_8_meter_split1_input_bus__out28 = _three_phase_meter9_output_bus__out[28];
    _bay_8_meter_split1_input_bus__out29 = _three_phase_meter9_output_bus__out[29];
    // Generated from the component: Three-phase Meter9.PLL.PID.Sum6
    _three_phase_meter9_pll_pid_sum6__out =  - _three_phase_meter9_pll_pid_sum5__out + _three_phase_meter9_pll_pid_limit1__out;
    // Generated from the component: Three-phase Meter9.PLL.Rate Limiter1
    _three_phase_meter9_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter9_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter9_pll_rate_limiter1__first_step) {
        _three_phase_meter9_pll_rate_limiter1__out = _three_phase_meter9_pll_pid_limit1__out;
        _three_phase_meter9_pll_rate_limiter1__state = _three_phase_meter9_pll_pid_limit1__out;
    } else {
        _three_phase_meter9_pll_rate_limiter1__out = _three_phase_meter9_pll_pid_limit1__out;
        if (_three_phase_meter9_pll_pid_limit1__out - _three_phase_meter9_pll_rate_limiter1__state > _three_phase_meter9_pll_rate_limiter1__rising_rate_lim[0])
            _three_phase_meter9_pll_rate_limiter1__out = _three_phase_meter9_pll_rate_limiter1__state + (_three_phase_meter9_pll_rate_limiter1__rising_rate_lim[0]);
        if (_three_phase_meter9_pll_pid_limit1__out - _three_phase_meter9_pll_rate_limiter1__state < _three_phase_meter9_pll_rate_limiter1__falling_rate_lim[0])
            _three_phase_meter9_pll_rate_limiter1__out = _three_phase_meter9_pll_rate_limiter1__state + (_three_phase_meter9_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: Three-phase Meter9.PLL.integrator
    _three_phase_meter9_pll_integrator__in = _three_phase_meter9_pll_pid_limit1__out;
    {
        _three_phase_meter9_pll_integrator__state += 0.0001 * _three_phase_meter9_pll_integrator__in ;
        if ( _three_phase_meter9_pll_integrator__in >= 0.0 )     {
            if ( _three_phase_meter9_pll_integrator__state >= 6.283185307179586 )         {
                _three_phase_meter9_pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _three_phase_meter9_pll_integrator__state <= - 6.283185307179586 )         {
                _three_phase_meter9_pll_integrator__state += 6.283185307179586 ;
            }
        }
        _three_phase_meter9_pll_integrator__out = _three_phase_meter9_pll_integrator__state ;
    }
    // Generated from the component: Bay 1.Bus Join2
    _bay_1_bus_join2__out[0] = _bay_1_meter_split1_input_bus__out6;
    _bay_1_bus_join2__out[1] = _bay_1_meter_split1_input_bus__out7;
    _bay_1_bus_join2__out[2] = _bay_1_meter_split1_input_bus__out8;
    _bay_1_bus_join2__out[3] = _bay_1_meter_split1_input_bus__out28;
    // Generated from the component: Bay 1.Bus Join9
    _bay_1_bus_join9__out[0] = _bay_1_meter_split1_input_bus__out;
    _bay_1_bus_join9__out[1] = _bay_1_meter_split1_input_bus__out1;
    _bay_1_bus_join9__out[2] = _bay_1_meter_split1_input_bus__out2;
    _bay_1_bus_join9__out[3] = _bay_1_meter_split1_input_bus__out26;
    // Generated from the component: Bay 1.Meter Split1.Freq
    // Generated from the component: Bay 1.Meter Split1.IA_RMS
    // Generated from the component: Bay 1.Meter Split1.IB_RMS
    // Generated from the component: Bay 1.Meter Split1.IC_RMS
    // Generated from the component: Bay 1.Meter Split1.IN_RMS
    // Generated from the component: Bay 1.Meter Split1.I_RMS
    // Generated from the component: Bay 1.Meter Split1.POWER_P
    // Generated from the component: Bay 1.Meter Split1.POWER_PF
    // Generated from the component: Bay 1.Meter Split1.POWER_Q
    // Generated from the component: Bay 1.Meter Split1.POWER_S
    // Generated from the component: Bay 1.Meter Split1.VAB
    // Generated from the component: Bay 1.Meter Split1.VAB_RMS
    // Generated from the component: Bay 1.Meter Split1.VAn_RMS
    // Generated from the component: Bay 1.Meter Split1.VBC
    // Generated from the component: Bay 1.Meter Split1.VBC_RMS
    // Generated from the component: Bay 1.Meter Split1.VBn_RMS
    // Generated from the component: Bay 1.Meter Split1.VCA
    // Generated from the component: Bay 1.Meter Split1.VCA_RMS
    // Generated from the component: Bay 1.Meter Split1.VCn_RMS
    // Generated from the component: Bay 1.Meter Split1.VLL_RMS
    // Generated from the component: Bay 1.Meter Split1.VLn_RMS
    // Generated from the component: Bay 1.Meter Split1.VN_RMS
    // Generated from the component: Bay 1.Meter Split1.gain
    _bay_1_meter_split1_gain__out[0] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[1] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[2] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[3] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[4] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[5] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[6] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[7] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[8] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[9] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[10] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    _bay_1_meter_split1_gain__out[11] = 0.0 * _bay_1_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter1.PLL.PID.Kb
    _three_phase_meter1_pll_pid_kb__out = 1.0 * _three_phase_meter1_pll_pid_sum6__out;
    // Generated from the component: Bay 9.Bus Join2
    _bay_9_bus_join2__out[0] = _bay_9_meter_split1_input_bus__out6;
    _bay_9_bus_join2__out[1] = _bay_9_meter_split1_input_bus__out7;
    _bay_9_bus_join2__out[2] = _bay_9_meter_split1_input_bus__out8;
    _bay_9_bus_join2__out[3] = _bay_9_meter_split1_input_bus__out28;
    // Generated from the component: Bay 9.Bus Join9
    _bay_9_bus_join9__out[0] = _bay_9_meter_split1_input_bus__out;
    _bay_9_bus_join9__out[1] = _bay_9_meter_split1_input_bus__out1;
    _bay_9_bus_join9__out[2] = _bay_9_meter_split1_input_bus__out2;
    _bay_9_bus_join9__out[3] = _bay_9_meter_split1_input_bus__out26;
    // Generated from the component: Bay 9.Meter Split1.Freq
    // Generated from the component: Bay 9.Meter Split1.IA_RMS
    // Generated from the component: Bay 9.Meter Split1.IB_RMS
    // Generated from the component: Bay 9.Meter Split1.IC_RMS
    // Generated from the component: Bay 9.Meter Split1.IN_RMS
    // Generated from the component: Bay 9.Meter Split1.I_RMS
    // Generated from the component: Bay 9.Meter Split1.POWER_P
    // Generated from the component: Bay 9.Meter Split1.POWER_PF
    // Generated from the component: Bay 9.Meter Split1.POWER_Q
    // Generated from the component: Bay 9.Meter Split1.POWER_S
    // Generated from the component: Bay 9.Meter Split1.VAB
    // Generated from the component: Bay 9.Meter Split1.VAB_RMS
    // Generated from the component: Bay 9.Meter Split1.VAn_RMS
    // Generated from the component: Bay 9.Meter Split1.VBC
    // Generated from the component: Bay 9.Meter Split1.VBC_RMS
    // Generated from the component: Bay 9.Meter Split1.VBn_RMS
    // Generated from the component: Bay 9.Meter Split1.VCA
    // Generated from the component: Bay 9.Meter Split1.VCA_RMS
    // Generated from the component: Bay 9.Meter Split1.VCn_RMS
    // Generated from the component: Bay 9.Meter Split1.VLL_RMS
    // Generated from the component: Bay 9.Meter Split1.VLn_RMS
    // Generated from the component: Bay 9.Meter Split1.VN_RMS
    // Generated from the component: Bay 9.Meter Split1.gain
    _bay_9_meter_split1_gain__out[0] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[1] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[2] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[3] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[4] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[5] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[6] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[7] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[8] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[9] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[10] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    _bay_9_meter_split1_gain__out[11] = 0.0 * _bay_9_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter10.PLL.PID.Kb
    _three_phase_meter10_pll_pid_kb__out = 1.0 * _three_phase_meter10_pll_pid_sum6__out;
    // Generated from the component: Bay 10.Bus Join2
    _bay_10_bus_join2__out[0] = _bay_10_meter_split1_input_bus__out6;
    _bay_10_bus_join2__out[1] = _bay_10_meter_split1_input_bus__out7;
    _bay_10_bus_join2__out[2] = _bay_10_meter_split1_input_bus__out8;
    _bay_10_bus_join2__out[3] = _bay_10_meter_split1_input_bus__out28;
    // Generated from the component: Bay 10.Bus Join9
    _bay_10_bus_join9__out[0] = _bay_10_meter_split1_input_bus__out;
    _bay_10_bus_join9__out[1] = _bay_10_meter_split1_input_bus__out1;
    _bay_10_bus_join9__out[2] = _bay_10_meter_split1_input_bus__out2;
    _bay_10_bus_join9__out[3] = _bay_10_meter_split1_input_bus__out26;
    // Generated from the component: Bay 10.Meter Split1.Freq
    // Generated from the component: Bay 10.Meter Split1.IA_RMS
    // Generated from the component: Bay 10.Meter Split1.IB_RMS
    // Generated from the component: Bay 10.Meter Split1.IC_RMS
    // Generated from the component: Bay 10.Meter Split1.IN_RMS
    // Generated from the component: Bay 10.Meter Split1.I_RMS
    // Generated from the component: Bay 10.Meter Split1.POWER_P
    // Generated from the component: Bay 10.Meter Split1.POWER_PF
    // Generated from the component: Bay 10.Meter Split1.POWER_Q
    // Generated from the component: Bay 10.Meter Split1.POWER_S
    // Generated from the component: Bay 10.Meter Split1.VAB
    // Generated from the component: Bay 10.Meter Split1.VAB_RMS
    // Generated from the component: Bay 10.Meter Split1.VAn_RMS
    // Generated from the component: Bay 10.Meter Split1.VBC
    // Generated from the component: Bay 10.Meter Split1.VBC_RMS
    // Generated from the component: Bay 10.Meter Split1.VBn_RMS
    // Generated from the component: Bay 10.Meter Split1.VCA
    // Generated from the component: Bay 10.Meter Split1.VCA_RMS
    // Generated from the component: Bay 10.Meter Split1.VCn_RMS
    // Generated from the component: Bay 10.Meter Split1.VLL_RMS
    // Generated from the component: Bay 10.Meter Split1.VLn_RMS
    // Generated from the component: Bay 10.Meter Split1.VN_RMS
    // Generated from the component: Bay 10.Meter Split1.gain
    _bay_10_meter_split1_gain__out[0] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[1] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[2] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[3] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[4] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[5] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[6] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[7] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[8] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[9] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[10] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    _bay_10_meter_split1_gain__out[11] = 0.0 * _bay_10_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter11.PLL.PID.Kb
    _three_phase_meter11_pll_pid_kb__out = 1.0 * _three_phase_meter11_pll_pid_sum6__out;
    // Generated from the component: Bay 2.Bus Join2
    _bay_2_bus_join2__out[0] = _bay_2_meter_split1_input_bus__out6;
    _bay_2_bus_join2__out[1] = _bay_2_meter_split1_input_bus__out7;
    _bay_2_bus_join2__out[2] = _bay_2_meter_split1_input_bus__out8;
    _bay_2_bus_join2__out[3] = _bay_2_meter_split1_input_bus__out28;
    // Generated from the component: Bay 2.Bus Join9
    _bay_2_bus_join9__out[0] = _bay_2_meter_split1_input_bus__out;
    _bay_2_bus_join9__out[1] = _bay_2_meter_split1_input_bus__out1;
    _bay_2_bus_join9__out[2] = _bay_2_meter_split1_input_bus__out2;
    _bay_2_bus_join9__out[3] = _bay_2_meter_split1_input_bus__out26;
    // Generated from the component: Bay 2.Meter Split1.Freq
    // Generated from the component: Bay 2.Meter Split1.IA_RMS
    // Generated from the component: Bay 2.Meter Split1.IB_RMS
    // Generated from the component: Bay 2.Meter Split1.IC_RMS
    // Generated from the component: Bay 2.Meter Split1.IN_RMS
    // Generated from the component: Bay 2.Meter Split1.I_RMS
    // Generated from the component: Bay 2.Meter Split1.POWER_P
    // Generated from the component: Bay 2.Meter Split1.POWER_PF
    // Generated from the component: Bay 2.Meter Split1.POWER_Q
    // Generated from the component: Bay 2.Meter Split1.POWER_S
    // Generated from the component: Bay 2.Meter Split1.VAB
    // Generated from the component: Bay 2.Meter Split1.VAB_RMS
    // Generated from the component: Bay 2.Meter Split1.VAn_RMS
    // Generated from the component: Bay 2.Meter Split1.VBC
    // Generated from the component: Bay 2.Meter Split1.VBC_RMS
    // Generated from the component: Bay 2.Meter Split1.VBn_RMS
    // Generated from the component: Bay 2.Meter Split1.VCA
    // Generated from the component: Bay 2.Meter Split1.VCA_RMS
    // Generated from the component: Bay 2.Meter Split1.VCn_RMS
    // Generated from the component: Bay 2.Meter Split1.VLL_RMS
    // Generated from the component: Bay 2.Meter Split1.VLn_RMS
    // Generated from the component: Bay 2.Meter Split1.VN_RMS
    // Generated from the component: Bay 2.Meter Split1.gain
    _bay_2_meter_split1_gain__out[0] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[1] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[2] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[3] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[4] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[5] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[6] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[7] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[8] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[9] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[10] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    _bay_2_meter_split1_gain__out[11] = 0.0 * _bay_2_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter2.PLL.PID.Kb
    _three_phase_meter2_pll_pid_kb__out = 1.0 * _three_phase_meter2_pll_pid_sum6__out;
    // Generated from the component: Bay 3.Bus Join2
    _bay_3_bus_join2__out[0] = _bay_3_meter_split1_input_bus__out6;
    _bay_3_bus_join2__out[1] = _bay_3_meter_split1_input_bus__out7;
    _bay_3_bus_join2__out[2] = _bay_3_meter_split1_input_bus__out8;
    _bay_3_bus_join2__out[3] = _bay_3_meter_split1_input_bus__out28;
    // Generated from the component: Bay 3.Bus Join9
    _bay_3_bus_join9__out[0] = _bay_3_meter_split1_input_bus__out;
    _bay_3_bus_join9__out[1] = _bay_3_meter_split1_input_bus__out1;
    _bay_3_bus_join9__out[2] = _bay_3_meter_split1_input_bus__out2;
    _bay_3_bus_join9__out[3] = _bay_3_meter_split1_input_bus__out26;
    // Generated from the component: Bay 3.Meter Split1.Freq
    // Generated from the component: Bay 3.Meter Split1.IA_RMS
    // Generated from the component: Bay 3.Meter Split1.IB_RMS
    // Generated from the component: Bay 3.Meter Split1.IC_RMS
    // Generated from the component: Bay 3.Meter Split1.IN_RMS
    // Generated from the component: Bay 3.Meter Split1.I_RMS
    // Generated from the component: Bay 3.Meter Split1.POWER_P
    // Generated from the component: Bay 3.Meter Split1.POWER_PF
    // Generated from the component: Bay 3.Meter Split1.POWER_Q
    // Generated from the component: Bay 3.Meter Split1.POWER_S
    // Generated from the component: Bay 3.Meter Split1.VAB
    // Generated from the component: Bay 3.Meter Split1.VAB_RMS
    // Generated from the component: Bay 3.Meter Split1.VAn_RMS
    // Generated from the component: Bay 3.Meter Split1.VBC
    // Generated from the component: Bay 3.Meter Split1.VBC_RMS
    // Generated from the component: Bay 3.Meter Split1.VBn_RMS
    // Generated from the component: Bay 3.Meter Split1.VCA
    // Generated from the component: Bay 3.Meter Split1.VCA_RMS
    // Generated from the component: Bay 3.Meter Split1.VCn_RMS
    // Generated from the component: Bay 3.Meter Split1.VLL_RMS
    // Generated from the component: Bay 3.Meter Split1.VLn_RMS
    // Generated from the component: Bay 3.Meter Split1.VN_RMS
    // Generated from the component: Bay 3.Meter Split1.gain
    _bay_3_meter_split1_gain__out[0] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[1] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[2] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[3] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[4] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[5] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[6] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[7] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[8] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[9] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[10] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    _bay_3_meter_split1_gain__out[11] = 0.0 * _bay_3_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter3.PLL.PID.Kb
    _three_phase_meter3_pll_pid_kb__out = 1.0 * _three_phase_meter3_pll_pid_sum6__out;
    // Generated from the component: HV Bay 1.Bus Join8
    _hv_bay_1_bus_join8__out[0] = _hv_bay_1_meter_split1_input_bus__out6;
    _hv_bay_1_bus_join8__out[1] = _hv_bay_1_meter_split1_input_bus__out7;
    _hv_bay_1_bus_join8__out[2] = _hv_bay_1_meter_split1_input_bus__out8;
    _hv_bay_1_bus_join8__out[3] = _hv_bay_1_meter_split1_input_bus__out28;
    // Generated from the component: HV Bay 1.Bus Join9
    _hv_bay_1_bus_join9__out[0] = _hv_bay_1_meter_split1_input_bus__out;
    _hv_bay_1_bus_join9__out[1] = _hv_bay_1_meter_split1_input_bus__out1;
    _hv_bay_1_bus_join9__out[2] = _hv_bay_1_meter_split1_input_bus__out2;
    _hv_bay_1_bus_join9__out[3] = _hv_bay_1_meter_split1_input_bus__out26;
    // Generated from the component: HV Bay 1.Meter Split1.Freq
    // Generated from the component: HV Bay 1.Meter Split1.IA_RMS
    // Generated from the component: HV Bay 1.Meter Split1.IB_RMS
    // Generated from the component: HV Bay 1.Meter Split1.IC_RMS
    // Generated from the component: HV Bay 1.Meter Split1.IN_RMS
    // Generated from the component: HV Bay 1.Meter Split1.I_RMS
    // Generated from the component: HV Bay 1.Meter Split1.POWER_P
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PF
    // Generated from the component: HV Bay 1.Meter Split1.POWER_Q
    // Generated from the component: HV Bay 1.Meter Split1.POWER_S
    // Generated from the component: HV Bay 1.Meter Split1.VAB
    // Generated from the component: HV Bay 1.Meter Split1.VAB_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VAn_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VBC
    // Generated from the component: HV Bay 1.Meter Split1.VBC_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VBn_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VCA
    // Generated from the component: HV Bay 1.Meter Split1.VCA_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VCn_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VLL_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VLn_RMS
    // Generated from the component: HV Bay 1.Meter Split1.VN_RMS
    // Generated from the component: HV Bay 1.Meter Split1.gain
    _hv_bay_1_meter_split1_gain__out[0] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[1] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[2] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[3] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[4] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[5] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[6] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[7] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[8] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[9] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[10] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    _hv_bay_1_meter_split1_gain__out[11] = 0.0 * _hv_bay_1_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter4.PLL.PID.Kb
    _three_phase_meter4_pll_pid_kb__out = 1.0 * _three_phase_meter4_pll_pid_sum6__out;
    // Generated from the component: Bay 4.Bus Join2
    _bay_4_bus_join2__out[0] = _bay_4_meter_split1_input_bus__out6;
    _bay_4_bus_join2__out[1] = _bay_4_meter_split1_input_bus__out7;
    _bay_4_bus_join2__out[2] = _bay_4_meter_split1_input_bus__out8;
    _bay_4_bus_join2__out[3] = _bay_4_meter_split1_input_bus__out28;
    // Generated from the component: Bay 4.Bus Join9
    _bay_4_bus_join9__out[0] = _bay_4_meter_split1_input_bus__out;
    _bay_4_bus_join9__out[1] = _bay_4_meter_split1_input_bus__out1;
    _bay_4_bus_join9__out[2] = _bay_4_meter_split1_input_bus__out2;
    _bay_4_bus_join9__out[3] = _bay_4_meter_split1_input_bus__out26;
    // Generated from the component: Bay 4.Meter Split1.Freq
    // Generated from the component: Bay 4.Meter Split1.IA_RMS
    // Generated from the component: Bay 4.Meter Split1.IB_RMS
    // Generated from the component: Bay 4.Meter Split1.IC_RMS
    // Generated from the component: Bay 4.Meter Split1.IN_RMS
    // Generated from the component: Bay 4.Meter Split1.I_RMS
    // Generated from the component: Bay 4.Meter Split1.POWER_P
    // Generated from the component: Bay 4.Meter Split1.POWER_PF
    // Generated from the component: Bay 4.Meter Split1.POWER_Q
    // Generated from the component: Bay 4.Meter Split1.POWER_S
    // Generated from the component: Bay 4.Meter Split1.VAB
    // Generated from the component: Bay 4.Meter Split1.VAB_RMS
    // Generated from the component: Bay 4.Meter Split1.VAn_RMS
    // Generated from the component: Bay 4.Meter Split1.VBC
    // Generated from the component: Bay 4.Meter Split1.VBC_RMS
    // Generated from the component: Bay 4.Meter Split1.VBn_RMS
    // Generated from the component: Bay 4.Meter Split1.VCA
    // Generated from the component: Bay 4.Meter Split1.VCA_RMS
    // Generated from the component: Bay 4.Meter Split1.VCn_RMS
    // Generated from the component: Bay 4.Meter Split1.VLL_RMS
    // Generated from the component: Bay 4.Meter Split1.VLn_RMS
    // Generated from the component: Bay 4.Meter Split1.VN_RMS
    // Generated from the component: Bay 4.Meter Split1.gain
    _bay_4_meter_split1_gain__out[0] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[1] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[2] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[3] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[4] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[5] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[6] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[7] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[8] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[9] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[10] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    _bay_4_meter_split1_gain__out[11] = 0.0 * _bay_4_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter5.PLL.PID.Kb
    _three_phase_meter5_pll_pid_kb__out = 1.0 * _three_phase_meter5_pll_pid_sum6__out;
    // Generated from the component: Bay 5.Bus Join2
    _bay_5_bus_join2__out[0] = _bay_5_meter_split1_input_bus__out6;
    _bay_5_bus_join2__out[1] = _bay_5_meter_split1_input_bus__out7;
    _bay_5_bus_join2__out[2] = _bay_5_meter_split1_input_bus__out8;
    _bay_5_bus_join2__out[3] = _bay_5_meter_split1_input_bus__out28;
    // Generated from the component: Bay 5.Bus Join9
    _bay_5_bus_join9__out[0] = _bay_5_meter_split1_input_bus__out;
    _bay_5_bus_join9__out[1] = _bay_5_meter_split1_input_bus__out1;
    _bay_5_bus_join9__out[2] = _bay_5_meter_split1_input_bus__out2;
    _bay_5_bus_join9__out[3] = _bay_5_meter_split1_input_bus__out26;
    // Generated from the component: Bay 5.Meter Split1.Freq
    // Generated from the component: Bay 5.Meter Split1.IA_RMS
    // Generated from the component: Bay 5.Meter Split1.IB_RMS
    // Generated from the component: Bay 5.Meter Split1.IC_RMS
    // Generated from the component: Bay 5.Meter Split1.IN_RMS
    // Generated from the component: Bay 5.Meter Split1.I_RMS
    // Generated from the component: Bay 5.Meter Split1.POWER_P
    // Generated from the component: Bay 5.Meter Split1.POWER_PF
    // Generated from the component: Bay 5.Meter Split1.POWER_Q
    // Generated from the component: Bay 5.Meter Split1.POWER_S
    // Generated from the component: Bay 5.Meter Split1.VAB
    // Generated from the component: Bay 5.Meter Split1.VAB_RMS
    // Generated from the component: Bay 5.Meter Split1.VAn_RMS
    // Generated from the component: Bay 5.Meter Split1.VBC
    // Generated from the component: Bay 5.Meter Split1.VBC_RMS
    // Generated from the component: Bay 5.Meter Split1.VBn_RMS
    // Generated from the component: Bay 5.Meter Split1.VCA
    // Generated from the component: Bay 5.Meter Split1.VCA_RMS
    // Generated from the component: Bay 5.Meter Split1.VCn_RMS
    // Generated from the component: Bay 5.Meter Split1.VLL_RMS
    // Generated from the component: Bay 5.Meter Split1.VLn_RMS
    // Generated from the component: Bay 5.Meter Split1.VN_RMS
    // Generated from the component: Bay 5.Meter Split1.gain
    _bay_5_meter_split1_gain__out[0] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[1] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[2] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[3] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[4] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[5] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[6] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[7] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[8] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[9] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[10] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    _bay_5_meter_split1_gain__out[11] = 0.0 * _bay_5_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter6.PLL.PID.Kb
    _three_phase_meter6_pll_pid_kb__out = 1.0 * _three_phase_meter6_pll_pid_sum6__out;
    // Generated from the component: Bay 6.Bus Join2
    _bay_6_bus_join2__out[0] = _bay_6_meter_split1_input_bus__out6;
    _bay_6_bus_join2__out[1] = _bay_6_meter_split1_input_bus__out7;
    _bay_6_bus_join2__out[2] = _bay_6_meter_split1_input_bus__out8;
    _bay_6_bus_join2__out[3] = _bay_6_meter_split1_input_bus__out28;
    // Generated from the component: Bay 6.Bus Join9
    _bay_6_bus_join9__out[0] = _bay_6_meter_split1_input_bus__out;
    _bay_6_bus_join9__out[1] = _bay_6_meter_split1_input_bus__out1;
    _bay_6_bus_join9__out[2] = _bay_6_meter_split1_input_bus__out2;
    _bay_6_bus_join9__out[3] = _bay_6_meter_split1_input_bus__out26;
    // Generated from the component: Bay 6.Meter Split1.Freq
    // Generated from the component: Bay 6.Meter Split1.IA_RMS
    // Generated from the component: Bay 6.Meter Split1.IB_RMS
    // Generated from the component: Bay 6.Meter Split1.IC_RMS
    // Generated from the component: Bay 6.Meter Split1.IN_RMS
    // Generated from the component: Bay 6.Meter Split1.I_RMS
    // Generated from the component: Bay 6.Meter Split1.POWER_P
    // Generated from the component: Bay 6.Meter Split1.POWER_PF
    // Generated from the component: Bay 6.Meter Split1.POWER_Q
    // Generated from the component: Bay 6.Meter Split1.POWER_S
    // Generated from the component: Bay 6.Meter Split1.VAB
    // Generated from the component: Bay 6.Meter Split1.VAB_RMS
    // Generated from the component: Bay 6.Meter Split1.VAn_RMS
    // Generated from the component: Bay 6.Meter Split1.VBC
    // Generated from the component: Bay 6.Meter Split1.VBC_RMS
    // Generated from the component: Bay 6.Meter Split1.VBn_RMS
    // Generated from the component: Bay 6.Meter Split1.VCA
    // Generated from the component: Bay 6.Meter Split1.VCA_RMS
    // Generated from the component: Bay 6.Meter Split1.VCn_RMS
    // Generated from the component: Bay 6.Meter Split1.VLL_RMS
    // Generated from the component: Bay 6.Meter Split1.VLn_RMS
    // Generated from the component: Bay 6.Meter Split1.VN_RMS
    // Generated from the component: Bay 6.Meter Split1.gain
    _bay_6_meter_split1_gain__out[0] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[1] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[2] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[3] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[4] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[5] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[6] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[7] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[8] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[9] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[10] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    _bay_6_meter_split1_gain__out[11] = 0.0 * _bay_6_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter7.PLL.PID.Kb
    _three_phase_meter7_pll_pid_kb__out = 1.0 * _three_phase_meter7_pll_pid_sum6__out;
    // Generated from the component: Bay 7.Bus Join2
    _bay_7_bus_join2__out[0] = _bay_7_meter_split1_input_bus__out6;
    _bay_7_bus_join2__out[1] = _bay_7_meter_split1_input_bus__out7;
    _bay_7_bus_join2__out[2] = _bay_7_meter_split1_input_bus__out8;
    _bay_7_bus_join2__out[3] = _bay_7_meter_split1_input_bus__out28;
    // Generated from the component: Bay 7.Bus Join9
    _bay_7_bus_join9__out[0] = _bay_7_meter_split1_input_bus__out;
    _bay_7_bus_join9__out[1] = _bay_7_meter_split1_input_bus__out1;
    _bay_7_bus_join9__out[2] = _bay_7_meter_split1_input_bus__out2;
    _bay_7_bus_join9__out[3] = _bay_7_meter_split1_input_bus__out26;
    // Generated from the component: Bay 7.Meter Split1.Freq
    // Generated from the component: Bay 7.Meter Split1.IA_RMS
    // Generated from the component: Bay 7.Meter Split1.IB_RMS
    // Generated from the component: Bay 7.Meter Split1.IC_RMS
    // Generated from the component: Bay 7.Meter Split1.IN_RMS
    // Generated from the component: Bay 7.Meter Split1.I_RMS
    // Generated from the component: Bay 7.Meter Split1.POWER_P
    // Generated from the component: Bay 7.Meter Split1.POWER_PF
    // Generated from the component: Bay 7.Meter Split1.POWER_Q
    // Generated from the component: Bay 7.Meter Split1.POWER_S
    // Generated from the component: Bay 7.Meter Split1.VAB
    // Generated from the component: Bay 7.Meter Split1.VAB_RMS
    // Generated from the component: Bay 7.Meter Split1.VAn_RMS
    // Generated from the component: Bay 7.Meter Split1.VBC
    // Generated from the component: Bay 7.Meter Split1.VBC_RMS
    // Generated from the component: Bay 7.Meter Split1.VBn_RMS
    // Generated from the component: Bay 7.Meter Split1.VCA
    // Generated from the component: Bay 7.Meter Split1.VCA_RMS
    // Generated from the component: Bay 7.Meter Split1.VCn_RMS
    // Generated from the component: Bay 7.Meter Split1.VLL_RMS
    // Generated from the component: Bay 7.Meter Split1.VLn_RMS
    // Generated from the component: Bay 7.Meter Split1.VN_RMS
    // Generated from the component: Bay 7.Meter Split1.gain
    _bay_7_meter_split1_gain__out[0] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[1] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[2] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[3] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[4] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[5] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[6] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[7] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[8] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[9] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[10] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    _bay_7_meter_split1_gain__out[11] = 0.0 * _bay_7_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter8.PLL.PID.Kb
    _three_phase_meter8_pll_pid_kb__out = 1.0 * _three_phase_meter8_pll_pid_sum6__out;
    // Generated from the component: Bay 8.Bus Join2
    _bay_8_bus_join2__out[0] = _bay_8_meter_split1_input_bus__out6;
    _bay_8_bus_join2__out[1] = _bay_8_meter_split1_input_bus__out7;
    _bay_8_bus_join2__out[2] = _bay_8_meter_split1_input_bus__out8;
    _bay_8_bus_join2__out[3] = _bay_8_meter_split1_input_bus__out28;
    // Generated from the component: Bay 8.Bus Join9
    _bay_8_bus_join9__out[0] = _bay_8_meter_split1_input_bus__out;
    _bay_8_bus_join9__out[1] = _bay_8_meter_split1_input_bus__out1;
    _bay_8_bus_join9__out[2] = _bay_8_meter_split1_input_bus__out2;
    _bay_8_bus_join9__out[3] = _bay_8_meter_split1_input_bus__out26;
    // Generated from the component: Bay 8.Meter Split1.Freq
    // Generated from the component: Bay 8.Meter Split1.IA_RMS
    // Generated from the component: Bay 8.Meter Split1.IB_RMS
    // Generated from the component: Bay 8.Meter Split1.IC_RMS
    // Generated from the component: Bay 8.Meter Split1.IN_RMS
    // Generated from the component: Bay 8.Meter Split1.I_RMS
    // Generated from the component: Bay 8.Meter Split1.POWER_P
    // Generated from the component: Bay 8.Meter Split1.POWER_PF
    // Generated from the component: Bay 8.Meter Split1.POWER_Q
    // Generated from the component: Bay 8.Meter Split1.POWER_S
    // Generated from the component: Bay 8.Meter Split1.VAB
    // Generated from the component: Bay 8.Meter Split1.VAB_RMS
    // Generated from the component: Bay 8.Meter Split1.VAn_RMS
    // Generated from the component: Bay 8.Meter Split1.VBC
    // Generated from the component: Bay 8.Meter Split1.VBC_RMS
    // Generated from the component: Bay 8.Meter Split1.VBn_RMS
    // Generated from the component: Bay 8.Meter Split1.VCA
    // Generated from the component: Bay 8.Meter Split1.VCA_RMS
    // Generated from the component: Bay 8.Meter Split1.VCn_RMS
    // Generated from the component: Bay 8.Meter Split1.VLL_RMS
    // Generated from the component: Bay 8.Meter Split1.VLn_RMS
    // Generated from the component: Bay 8.Meter Split1.VN_RMS
    // Generated from the component: Bay 8.Meter Split1.gain
    _bay_8_meter_split1_gain__out[0] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[1] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[2] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[3] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[4] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[5] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[6] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[7] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[8] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[9] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[10] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    _bay_8_meter_split1_gain__out[11] = 0.0 * _bay_8_meter_split1_input_bus__out29;
    // Generated from the component: Three-phase Meter9.PLL.PID.Kb
    _three_phase_meter9_pll_pid_kb__out = 1.0 * _three_phase_meter9_pll_pid_sum6__out;
    // Generated from the component: Bay 1.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_i_scale__out[0] = 0;
    _bay_1_sv_publisher1_i_scale__out[1] = 0;
    _bay_1_sv_publisher1_i_scale__out[2] = 0;
    _bay_1_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 1.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_v_scale__out[0] = 0;
    _bay_1_sv_publisher1_v_scale__out[1] = 0;
    _bay_1_sv_publisher1_v_scale__out[2] = 0;
    _bay_1_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 1.Meter Split1.extra_input_bus
    _bay_1_meter_split1_extra_input_bus__out = _bay_1_meter_split1_gain__out[0];
    _bay_1_meter_split1_extra_input_bus__out1 = _bay_1_meter_split1_gain__out[1];
    _bay_1_meter_split1_extra_input_bus__out2 = _bay_1_meter_split1_gain__out[2];
    _bay_1_meter_split1_extra_input_bus__out3 = _bay_1_meter_split1_gain__out[3];
    _bay_1_meter_split1_extra_input_bus__out4 = _bay_1_meter_split1_gain__out[4];
    _bay_1_meter_split1_extra_input_bus__out5 = _bay_1_meter_split1_gain__out[5];
    _bay_1_meter_split1_extra_input_bus__out6 = _bay_1_meter_split1_gain__out[6];
    _bay_1_meter_split1_extra_input_bus__out7 = _bay_1_meter_split1_gain__out[7];
    _bay_1_meter_split1_extra_input_bus__out8 = _bay_1_meter_split1_gain__out[8];
    _bay_1_meter_split1_extra_input_bus__out9 = _bay_1_meter_split1_gain__out[9];
    _bay_1_meter_split1_extra_input_bus__out10 = _bay_1_meter_split1_gain__out[10];
    _bay_1_meter_split1_extra_input_bus__out11 = _bay_1_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter1.PLL.PID.Sum7
    _three_phase_meter1_pll_pid_sum7__out = _three_phase_meter1_pll_pid_ki__out + _three_phase_meter1_pll_pid_kb__out;
    // Generated from the component: Bay 9.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_i_scale__out[0] = 0;
    _bay_9_sv_publisher1_i_scale__out[1] = 0;
    _bay_9_sv_publisher1_i_scale__out[2] = 0;
    _bay_9_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 9.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_v_scale__out[0] = 0;
    _bay_9_sv_publisher1_v_scale__out[1] = 0;
    _bay_9_sv_publisher1_v_scale__out[2] = 0;
    _bay_9_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 9.Meter Split1.extra_input_bus
    _bay_9_meter_split1_extra_input_bus__out = _bay_9_meter_split1_gain__out[0];
    _bay_9_meter_split1_extra_input_bus__out1 = _bay_9_meter_split1_gain__out[1];
    _bay_9_meter_split1_extra_input_bus__out2 = _bay_9_meter_split1_gain__out[2];
    _bay_9_meter_split1_extra_input_bus__out3 = _bay_9_meter_split1_gain__out[3];
    _bay_9_meter_split1_extra_input_bus__out4 = _bay_9_meter_split1_gain__out[4];
    _bay_9_meter_split1_extra_input_bus__out5 = _bay_9_meter_split1_gain__out[5];
    _bay_9_meter_split1_extra_input_bus__out6 = _bay_9_meter_split1_gain__out[6];
    _bay_9_meter_split1_extra_input_bus__out7 = _bay_9_meter_split1_gain__out[7];
    _bay_9_meter_split1_extra_input_bus__out8 = _bay_9_meter_split1_gain__out[8];
    _bay_9_meter_split1_extra_input_bus__out9 = _bay_9_meter_split1_gain__out[9];
    _bay_9_meter_split1_extra_input_bus__out10 = _bay_9_meter_split1_gain__out[10];
    _bay_9_meter_split1_extra_input_bus__out11 = _bay_9_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter10.PLL.PID.Sum7
    _three_phase_meter10_pll_pid_sum7__out = _three_phase_meter10_pll_pid_ki__out + _three_phase_meter10_pll_pid_kb__out;
    // Generated from the component: Bay 10.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_i_scale__out[0] = 0;
    _bay_10_sv_publisher1_i_scale__out[1] = 0;
    _bay_10_sv_publisher1_i_scale__out[2] = 0;
    _bay_10_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 10.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_v_scale__out[0] = 0;
    _bay_10_sv_publisher1_v_scale__out[1] = 0;
    _bay_10_sv_publisher1_v_scale__out[2] = 0;
    _bay_10_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 10.Meter Split1.extra_input_bus
    _bay_10_meter_split1_extra_input_bus__out = _bay_10_meter_split1_gain__out[0];
    _bay_10_meter_split1_extra_input_bus__out1 = _bay_10_meter_split1_gain__out[1];
    _bay_10_meter_split1_extra_input_bus__out2 = _bay_10_meter_split1_gain__out[2];
    _bay_10_meter_split1_extra_input_bus__out3 = _bay_10_meter_split1_gain__out[3];
    _bay_10_meter_split1_extra_input_bus__out4 = _bay_10_meter_split1_gain__out[4];
    _bay_10_meter_split1_extra_input_bus__out5 = _bay_10_meter_split1_gain__out[5];
    _bay_10_meter_split1_extra_input_bus__out6 = _bay_10_meter_split1_gain__out[6];
    _bay_10_meter_split1_extra_input_bus__out7 = _bay_10_meter_split1_gain__out[7];
    _bay_10_meter_split1_extra_input_bus__out8 = _bay_10_meter_split1_gain__out[8];
    _bay_10_meter_split1_extra_input_bus__out9 = _bay_10_meter_split1_gain__out[9];
    _bay_10_meter_split1_extra_input_bus__out10 = _bay_10_meter_split1_gain__out[10];
    _bay_10_meter_split1_extra_input_bus__out11 = _bay_10_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter11.PLL.PID.Sum7
    _three_phase_meter11_pll_pid_sum7__out = _three_phase_meter11_pll_pid_ki__out + _three_phase_meter11_pll_pid_kb__out;
    // Generated from the component: Bay 2.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_i_scale__out[0] = 0;
    _bay_2_sv_publisher1_i_scale__out[1] = 0;
    _bay_2_sv_publisher1_i_scale__out[2] = 0;
    _bay_2_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 2.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_v_scale__out[0] = 0;
    _bay_2_sv_publisher1_v_scale__out[1] = 0;
    _bay_2_sv_publisher1_v_scale__out[2] = 0;
    _bay_2_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 2.Meter Split1.extra_input_bus
    _bay_2_meter_split1_extra_input_bus__out = _bay_2_meter_split1_gain__out[0];
    _bay_2_meter_split1_extra_input_bus__out1 = _bay_2_meter_split1_gain__out[1];
    _bay_2_meter_split1_extra_input_bus__out2 = _bay_2_meter_split1_gain__out[2];
    _bay_2_meter_split1_extra_input_bus__out3 = _bay_2_meter_split1_gain__out[3];
    _bay_2_meter_split1_extra_input_bus__out4 = _bay_2_meter_split1_gain__out[4];
    _bay_2_meter_split1_extra_input_bus__out5 = _bay_2_meter_split1_gain__out[5];
    _bay_2_meter_split1_extra_input_bus__out6 = _bay_2_meter_split1_gain__out[6];
    _bay_2_meter_split1_extra_input_bus__out7 = _bay_2_meter_split1_gain__out[7];
    _bay_2_meter_split1_extra_input_bus__out8 = _bay_2_meter_split1_gain__out[8];
    _bay_2_meter_split1_extra_input_bus__out9 = _bay_2_meter_split1_gain__out[9];
    _bay_2_meter_split1_extra_input_bus__out10 = _bay_2_meter_split1_gain__out[10];
    _bay_2_meter_split1_extra_input_bus__out11 = _bay_2_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter2.PLL.PID.Sum7
    _three_phase_meter2_pll_pid_sum7__out = _three_phase_meter2_pll_pid_ki__out + _three_phase_meter2_pll_pid_kb__out;
    // Generated from the component: Bay 3.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_i_scale__out[0] = 0;
    _bay_3_sv_publisher1_i_scale__out[1] = 0;
    _bay_3_sv_publisher1_i_scale__out[2] = 0;
    _bay_3_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 3.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_v_scale__out[0] = 0;
    _bay_3_sv_publisher1_v_scale__out[1] = 0;
    _bay_3_sv_publisher1_v_scale__out[2] = 0;
    _bay_3_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 3.Meter Split1.extra_input_bus
    _bay_3_meter_split1_extra_input_bus__out = _bay_3_meter_split1_gain__out[0];
    _bay_3_meter_split1_extra_input_bus__out1 = _bay_3_meter_split1_gain__out[1];
    _bay_3_meter_split1_extra_input_bus__out2 = _bay_3_meter_split1_gain__out[2];
    _bay_3_meter_split1_extra_input_bus__out3 = _bay_3_meter_split1_gain__out[3];
    _bay_3_meter_split1_extra_input_bus__out4 = _bay_3_meter_split1_gain__out[4];
    _bay_3_meter_split1_extra_input_bus__out5 = _bay_3_meter_split1_gain__out[5];
    _bay_3_meter_split1_extra_input_bus__out6 = _bay_3_meter_split1_gain__out[6];
    _bay_3_meter_split1_extra_input_bus__out7 = _bay_3_meter_split1_gain__out[7];
    _bay_3_meter_split1_extra_input_bus__out8 = _bay_3_meter_split1_gain__out[8];
    _bay_3_meter_split1_extra_input_bus__out9 = _bay_3_meter_split1_gain__out[9];
    _bay_3_meter_split1_extra_input_bus__out10 = _bay_3_meter_split1_gain__out[10];
    _bay_3_meter_split1_extra_input_bus__out11 = _bay_3_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter3.PLL.PID.Sum7
    _three_phase_meter3_pll_pid_sum7__out = _three_phase_meter3_pll_pid_ki__out + _three_phase_meter3_pll_pid_kb__out;
    // Generated from the component: HV Bay 1.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_i_scale__out[0] = 0;
    _hv_bay_1_sv_publisher1_i_scale__out[1] = 0;
    _hv_bay_1_sv_publisher1_i_scale__out[2] = 0;
    _hv_bay_1_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_v_scale__out[0] = 0;
    _hv_bay_1_sv_publisher1_v_scale__out[1] = 0;
    _hv_bay_1_sv_publisher1_v_scale__out[2] = 0;
    _hv_bay_1_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: HV Bay 1.Meter Split1.extra_input_bus
    _hv_bay_1_meter_split1_extra_input_bus__out = _hv_bay_1_meter_split1_gain__out[0];
    _hv_bay_1_meter_split1_extra_input_bus__out1 = _hv_bay_1_meter_split1_gain__out[1];
    _hv_bay_1_meter_split1_extra_input_bus__out2 = _hv_bay_1_meter_split1_gain__out[2];
    _hv_bay_1_meter_split1_extra_input_bus__out3 = _hv_bay_1_meter_split1_gain__out[3];
    _hv_bay_1_meter_split1_extra_input_bus__out4 = _hv_bay_1_meter_split1_gain__out[4];
    _hv_bay_1_meter_split1_extra_input_bus__out5 = _hv_bay_1_meter_split1_gain__out[5];
    _hv_bay_1_meter_split1_extra_input_bus__out6 = _hv_bay_1_meter_split1_gain__out[6];
    _hv_bay_1_meter_split1_extra_input_bus__out7 = _hv_bay_1_meter_split1_gain__out[7];
    _hv_bay_1_meter_split1_extra_input_bus__out8 = _hv_bay_1_meter_split1_gain__out[8];
    _hv_bay_1_meter_split1_extra_input_bus__out9 = _hv_bay_1_meter_split1_gain__out[9];
    _hv_bay_1_meter_split1_extra_input_bus__out10 = _hv_bay_1_meter_split1_gain__out[10];
    _hv_bay_1_meter_split1_extra_input_bus__out11 = _hv_bay_1_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter4.PLL.PID.Sum7
    _three_phase_meter4_pll_pid_sum7__out = _three_phase_meter4_pll_pid_ki__out + _three_phase_meter4_pll_pid_kb__out;
    // Generated from the component: Bay 4.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_i_scale__out[0] = 0;
    _bay_4_sv_publisher1_i_scale__out[1] = 0;
    _bay_4_sv_publisher1_i_scale__out[2] = 0;
    _bay_4_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 4.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_v_scale__out[0] = 0;
    _bay_4_sv_publisher1_v_scale__out[1] = 0;
    _bay_4_sv_publisher1_v_scale__out[2] = 0;
    _bay_4_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 4.Meter Split1.extra_input_bus
    _bay_4_meter_split1_extra_input_bus__out = _bay_4_meter_split1_gain__out[0];
    _bay_4_meter_split1_extra_input_bus__out1 = _bay_4_meter_split1_gain__out[1];
    _bay_4_meter_split1_extra_input_bus__out2 = _bay_4_meter_split1_gain__out[2];
    _bay_4_meter_split1_extra_input_bus__out3 = _bay_4_meter_split1_gain__out[3];
    _bay_4_meter_split1_extra_input_bus__out4 = _bay_4_meter_split1_gain__out[4];
    _bay_4_meter_split1_extra_input_bus__out5 = _bay_4_meter_split1_gain__out[5];
    _bay_4_meter_split1_extra_input_bus__out6 = _bay_4_meter_split1_gain__out[6];
    _bay_4_meter_split1_extra_input_bus__out7 = _bay_4_meter_split1_gain__out[7];
    _bay_4_meter_split1_extra_input_bus__out8 = _bay_4_meter_split1_gain__out[8];
    _bay_4_meter_split1_extra_input_bus__out9 = _bay_4_meter_split1_gain__out[9];
    _bay_4_meter_split1_extra_input_bus__out10 = _bay_4_meter_split1_gain__out[10];
    _bay_4_meter_split1_extra_input_bus__out11 = _bay_4_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter5.PLL.PID.Sum7
    _three_phase_meter5_pll_pid_sum7__out = _three_phase_meter5_pll_pid_ki__out + _three_phase_meter5_pll_pid_kb__out;
    // Generated from the component: Bay 5.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_i_scale__out[0] = 0;
    _bay_5_sv_publisher1_i_scale__out[1] = 0;
    _bay_5_sv_publisher1_i_scale__out[2] = 0;
    _bay_5_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 5.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_v_scale__out[0] = 0;
    _bay_5_sv_publisher1_v_scale__out[1] = 0;
    _bay_5_sv_publisher1_v_scale__out[2] = 0;
    _bay_5_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 5.Meter Split1.extra_input_bus
    _bay_5_meter_split1_extra_input_bus__out = _bay_5_meter_split1_gain__out[0];
    _bay_5_meter_split1_extra_input_bus__out1 = _bay_5_meter_split1_gain__out[1];
    _bay_5_meter_split1_extra_input_bus__out2 = _bay_5_meter_split1_gain__out[2];
    _bay_5_meter_split1_extra_input_bus__out3 = _bay_5_meter_split1_gain__out[3];
    _bay_5_meter_split1_extra_input_bus__out4 = _bay_5_meter_split1_gain__out[4];
    _bay_5_meter_split1_extra_input_bus__out5 = _bay_5_meter_split1_gain__out[5];
    _bay_5_meter_split1_extra_input_bus__out6 = _bay_5_meter_split1_gain__out[6];
    _bay_5_meter_split1_extra_input_bus__out7 = _bay_5_meter_split1_gain__out[7];
    _bay_5_meter_split1_extra_input_bus__out8 = _bay_5_meter_split1_gain__out[8];
    _bay_5_meter_split1_extra_input_bus__out9 = _bay_5_meter_split1_gain__out[9];
    _bay_5_meter_split1_extra_input_bus__out10 = _bay_5_meter_split1_gain__out[10];
    _bay_5_meter_split1_extra_input_bus__out11 = _bay_5_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter6.PLL.PID.Sum7
    _three_phase_meter6_pll_pid_sum7__out = _three_phase_meter6_pll_pid_ki__out + _three_phase_meter6_pll_pid_kb__out;
    // Generated from the component: Bay 6.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_i_scale__out[0] = 0;
    _bay_6_sv_publisher1_i_scale__out[1] = 0;
    _bay_6_sv_publisher1_i_scale__out[2] = 0;
    _bay_6_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 6.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_v_scale__out[0] = 0;
    _bay_6_sv_publisher1_v_scale__out[1] = 0;
    _bay_6_sv_publisher1_v_scale__out[2] = 0;
    _bay_6_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 6.Meter Split1.extra_input_bus
    _bay_6_meter_split1_extra_input_bus__out = _bay_6_meter_split1_gain__out[0];
    _bay_6_meter_split1_extra_input_bus__out1 = _bay_6_meter_split1_gain__out[1];
    _bay_6_meter_split1_extra_input_bus__out2 = _bay_6_meter_split1_gain__out[2];
    _bay_6_meter_split1_extra_input_bus__out3 = _bay_6_meter_split1_gain__out[3];
    _bay_6_meter_split1_extra_input_bus__out4 = _bay_6_meter_split1_gain__out[4];
    _bay_6_meter_split1_extra_input_bus__out5 = _bay_6_meter_split1_gain__out[5];
    _bay_6_meter_split1_extra_input_bus__out6 = _bay_6_meter_split1_gain__out[6];
    _bay_6_meter_split1_extra_input_bus__out7 = _bay_6_meter_split1_gain__out[7];
    _bay_6_meter_split1_extra_input_bus__out8 = _bay_6_meter_split1_gain__out[8];
    _bay_6_meter_split1_extra_input_bus__out9 = _bay_6_meter_split1_gain__out[9];
    _bay_6_meter_split1_extra_input_bus__out10 = _bay_6_meter_split1_gain__out[10];
    _bay_6_meter_split1_extra_input_bus__out11 = _bay_6_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter7.PLL.PID.Sum7
    _three_phase_meter7_pll_pid_sum7__out = _three_phase_meter7_pll_pid_ki__out + _three_phase_meter7_pll_pid_kb__out;
    // Generated from the component: Bay 7.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_i_scale__out[0] = 0;
    _bay_7_sv_publisher1_i_scale__out[1] = 0;
    _bay_7_sv_publisher1_i_scale__out[2] = 0;
    _bay_7_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 7.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_v_scale__out[0] = 0;
    _bay_7_sv_publisher1_v_scale__out[1] = 0;
    _bay_7_sv_publisher1_v_scale__out[2] = 0;
    _bay_7_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 7.Meter Split1.extra_input_bus
    _bay_7_meter_split1_extra_input_bus__out = _bay_7_meter_split1_gain__out[0];
    _bay_7_meter_split1_extra_input_bus__out1 = _bay_7_meter_split1_gain__out[1];
    _bay_7_meter_split1_extra_input_bus__out2 = _bay_7_meter_split1_gain__out[2];
    _bay_7_meter_split1_extra_input_bus__out3 = _bay_7_meter_split1_gain__out[3];
    _bay_7_meter_split1_extra_input_bus__out4 = _bay_7_meter_split1_gain__out[4];
    _bay_7_meter_split1_extra_input_bus__out5 = _bay_7_meter_split1_gain__out[5];
    _bay_7_meter_split1_extra_input_bus__out6 = _bay_7_meter_split1_gain__out[6];
    _bay_7_meter_split1_extra_input_bus__out7 = _bay_7_meter_split1_gain__out[7];
    _bay_7_meter_split1_extra_input_bus__out8 = _bay_7_meter_split1_gain__out[8];
    _bay_7_meter_split1_extra_input_bus__out9 = _bay_7_meter_split1_gain__out[9];
    _bay_7_meter_split1_extra_input_bus__out10 = _bay_7_meter_split1_gain__out[10];
    _bay_7_meter_split1_extra_input_bus__out11 = _bay_7_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter8.PLL.PID.Sum7
    _three_phase_meter8_pll_pid_sum7__out = _three_phase_meter8_pll_pid_ki__out + _three_phase_meter8_pll_pid_kb__out;
    // Generated from the component: Bay 8.SV Publisher1.I_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_i_scale__out[0] = 0;
    _bay_8_sv_publisher1_i_scale__out[1] = 0;
    _bay_8_sv_publisher1_i_scale__out[2] = 0;
    _bay_8_sv_publisher1_i_scale__out[3] = 0;
    // Generated from the component: Bay 8.SV Publisher1.V_scale
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_v_scale__out[0] = 0;
    _bay_8_sv_publisher1_v_scale__out[1] = 0;
    _bay_8_sv_publisher1_v_scale__out[2] = 0;
    _bay_8_sv_publisher1_v_scale__out[3] = 0;
    // Generated from the component: Bay 8.Meter Split1.extra_input_bus
    _bay_8_meter_split1_extra_input_bus__out = _bay_8_meter_split1_gain__out[0];
    _bay_8_meter_split1_extra_input_bus__out1 = _bay_8_meter_split1_gain__out[1];
    _bay_8_meter_split1_extra_input_bus__out2 = _bay_8_meter_split1_gain__out[2];
    _bay_8_meter_split1_extra_input_bus__out3 = _bay_8_meter_split1_gain__out[3];
    _bay_8_meter_split1_extra_input_bus__out4 = _bay_8_meter_split1_gain__out[4];
    _bay_8_meter_split1_extra_input_bus__out5 = _bay_8_meter_split1_gain__out[5];
    _bay_8_meter_split1_extra_input_bus__out6 = _bay_8_meter_split1_gain__out[6];
    _bay_8_meter_split1_extra_input_bus__out7 = _bay_8_meter_split1_gain__out[7];
    _bay_8_meter_split1_extra_input_bus__out8 = _bay_8_meter_split1_gain__out[8];
    _bay_8_meter_split1_extra_input_bus__out9 = _bay_8_meter_split1_gain__out[9];
    _bay_8_meter_split1_extra_input_bus__out10 = _bay_8_meter_split1_gain__out[10];
    _bay_8_meter_split1_extra_input_bus__out11 = _bay_8_meter_split1_gain__out[11];
    // Generated from the component: Three-phase Meter9.PLL.PID.Sum7
    _three_phase_meter9_pll_pid_sum7__out = _three_phase_meter9_pll_pid_ki__out + _three_phase_meter9_pll_pid_kb__out;
    // Generated from the component: Bay 1.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_i_convert__out[0] = 0;
    _bay_1_sv_publisher1_i_convert__out[1] = 0;
    _bay_1_sv_publisher1_i_convert__out[2] = 0;
    _bay_1_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 1.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_v_convert__out[0] = 0;
    _bay_1_sv_publisher1_v_convert__out[1] = 0;
    _bay_1_sv_publisher1_v_convert__out[2] = 0;
    _bay_1_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 1.Meter Split1.POWER_PA
    // Generated from the component: Bay 1.Meter Split1.POWER_PB
    // Generated from the component: Bay 1.Meter Split1.POWER_PC
    // Generated from the component: Bay 1.Meter Split1.POWER_PFA
    // Generated from the component: Bay 1.Meter Split1.POWER_PFB
    // Generated from the component: Bay 1.Meter Split1.POWER_PFC
    // Generated from the component: Bay 1.Meter Split1.POWER_QA
    // Generated from the component: Bay 1.Meter Split1.POWER_QB
    // Generated from the component: Bay 1.Meter Split1.POWER_QC
    // Generated from the component: Bay 1.Meter Split1.POWER_SA
    // Generated from the component: Bay 1.Meter Split1.POWER_SB
    // Generated from the component: Bay 1.Meter Split1.POWER_SC
    // Generated from the component: Bay 9.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_i_convert__out[0] = 0;
    _bay_9_sv_publisher1_i_convert__out[1] = 0;
    _bay_9_sv_publisher1_i_convert__out[2] = 0;
    _bay_9_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 9.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_v_convert__out[0] = 0;
    _bay_9_sv_publisher1_v_convert__out[1] = 0;
    _bay_9_sv_publisher1_v_convert__out[2] = 0;
    _bay_9_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 9.Meter Split1.POWER_PA
    // Generated from the component: Bay 9.Meter Split1.POWER_PB
    // Generated from the component: Bay 9.Meter Split1.POWER_PC
    // Generated from the component: Bay 9.Meter Split1.POWER_PFA
    // Generated from the component: Bay 9.Meter Split1.POWER_PFB
    // Generated from the component: Bay 9.Meter Split1.POWER_PFC
    // Generated from the component: Bay 9.Meter Split1.POWER_QA
    // Generated from the component: Bay 9.Meter Split1.POWER_QB
    // Generated from the component: Bay 9.Meter Split1.POWER_QC
    // Generated from the component: Bay 9.Meter Split1.POWER_SA
    // Generated from the component: Bay 9.Meter Split1.POWER_SB
    // Generated from the component: Bay 9.Meter Split1.POWER_SC
    // Generated from the component: Bay 10.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_i_convert__out[0] = 0;
    _bay_10_sv_publisher1_i_convert__out[1] = 0;
    _bay_10_sv_publisher1_i_convert__out[2] = 0;
    _bay_10_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 10.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_v_convert__out[0] = 0;
    _bay_10_sv_publisher1_v_convert__out[1] = 0;
    _bay_10_sv_publisher1_v_convert__out[2] = 0;
    _bay_10_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 10.Meter Split1.POWER_PA
    // Generated from the component: Bay 10.Meter Split1.POWER_PB
    // Generated from the component: Bay 10.Meter Split1.POWER_PC
    // Generated from the component: Bay 10.Meter Split1.POWER_PFA
    // Generated from the component: Bay 10.Meter Split1.POWER_PFB
    // Generated from the component: Bay 10.Meter Split1.POWER_PFC
    // Generated from the component: Bay 10.Meter Split1.POWER_QA
    // Generated from the component: Bay 10.Meter Split1.POWER_QB
    // Generated from the component: Bay 10.Meter Split1.POWER_QC
    // Generated from the component: Bay 10.Meter Split1.POWER_SA
    // Generated from the component: Bay 10.Meter Split1.POWER_SB
    // Generated from the component: Bay 10.Meter Split1.POWER_SC
    // Generated from the component: Bay 2.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_i_convert__out[0] = 0;
    _bay_2_sv_publisher1_i_convert__out[1] = 0;
    _bay_2_sv_publisher1_i_convert__out[2] = 0;
    _bay_2_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 2.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_v_convert__out[0] = 0;
    _bay_2_sv_publisher1_v_convert__out[1] = 0;
    _bay_2_sv_publisher1_v_convert__out[2] = 0;
    _bay_2_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 2.Meter Split1.POWER_PA
    // Generated from the component: Bay 2.Meter Split1.POWER_PB
    // Generated from the component: Bay 2.Meter Split1.POWER_PC
    // Generated from the component: Bay 2.Meter Split1.POWER_PFA
    // Generated from the component: Bay 2.Meter Split1.POWER_PFB
    // Generated from the component: Bay 2.Meter Split1.POWER_PFC
    // Generated from the component: Bay 2.Meter Split1.POWER_QA
    // Generated from the component: Bay 2.Meter Split1.POWER_QB
    // Generated from the component: Bay 2.Meter Split1.POWER_QC
    // Generated from the component: Bay 2.Meter Split1.POWER_SA
    // Generated from the component: Bay 2.Meter Split1.POWER_SB
    // Generated from the component: Bay 2.Meter Split1.POWER_SC
    // Generated from the component: Bay 3.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_i_convert__out[0] = 0;
    _bay_3_sv_publisher1_i_convert__out[1] = 0;
    _bay_3_sv_publisher1_i_convert__out[2] = 0;
    _bay_3_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 3.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_v_convert__out[0] = 0;
    _bay_3_sv_publisher1_v_convert__out[1] = 0;
    _bay_3_sv_publisher1_v_convert__out[2] = 0;
    _bay_3_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 3.Meter Split1.POWER_PA
    // Generated from the component: Bay 3.Meter Split1.POWER_PB
    // Generated from the component: Bay 3.Meter Split1.POWER_PC
    // Generated from the component: Bay 3.Meter Split1.POWER_PFA
    // Generated from the component: Bay 3.Meter Split1.POWER_PFB
    // Generated from the component: Bay 3.Meter Split1.POWER_PFC
    // Generated from the component: Bay 3.Meter Split1.POWER_QA
    // Generated from the component: Bay 3.Meter Split1.POWER_QB
    // Generated from the component: Bay 3.Meter Split1.POWER_QC
    // Generated from the component: Bay 3.Meter Split1.POWER_SA
    // Generated from the component: Bay 3.Meter Split1.POWER_SB
    // Generated from the component: Bay 3.Meter Split1.POWER_SC
    // Generated from the component: HV Bay 1.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_i_convert__out[0] = 0;
    _hv_bay_1_sv_publisher1_i_convert__out[1] = 0;
    _hv_bay_1_sv_publisher1_i_convert__out[2] = 0;
    _hv_bay_1_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_v_convert__out[0] = 0;
    _hv_bay_1_sv_publisher1_v_convert__out[1] = 0;
    _hv_bay_1_sv_publisher1_v_convert__out[2] = 0;
    _hv_bay_1_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PA
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PB
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PC
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PFA
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PFB
    // Generated from the component: HV Bay 1.Meter Split1.POWER_PFC
    // Generated from the component: HV Bay 1.Meter Split1.POWER_QA
    // Generated from the component: HV Bay 1.Meter Split1.POWER_QB
    // Generated from the component: HV Bay 1.Meter Split1.POWER_QC
    // Generated from the component: HV Bay 1.Meter Split1.POWER_SA
    // Generated from the component: HV Bay 1.Meter Split1.POWER_SB
    // Generated from the component: HV Bay 1.Meter Split1.POWER_SC
    // Generated from the component: Bay 4.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_i_convert__out[0] = 0;
    _bay_4_sv_publisher1_i_convert__out[1] = 0;
    _bay_4_sv_publisher1_i_convert__out[2] = 0;
    _bay_4_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 4.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_v_convert__out[0] = 0;
    _bay_4_sv_publisher1_v_convert__out[1] = 0;
    _bay_4_sv_publisher1_v_convert__out[2] = 0;
    _bay_4_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 4.Meter Split1.POWER_PA
    // Generated from the component: Bay 4.Meter Split1.POWER_PB
    // Generated from the component: Bay 4.Meter Split1.POWER_PC
    // Generated from the component: Bay 4.Meter Split1.POWER_PFA
    // Generated from the component: Bay 4.Meter Split1.POWER_PFB
    // Generated from the component: Bay 4.Meter Split1.POWER_PFC
    // Generated from the component: Bay 4.Meter Split1.POWER_QA
    // Generated from the component: Bay 4.Meter Split1.POWER_QB
    // Generated from the component: Bay 4.Meter Split1.POWER_QC
    // Generated from the component: Bay 4.Meter Split1.POWER_SA
    // Generated from the component: Bay 4.Meter Split1.POWER_SB
    // Generated from the component: Bay 4.Meter Split1.POWER_SC
    // Generated from the component: Bay 5.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_i_convert__out[0] = 0;
    _bay_5_sv_publisher1_i_convert__out[1] = 0;
    _bay_5_sv_publisher1_i_convert__out[2] = 0;
    _bay_5_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 5.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_v_convert__out[0] = 0;
    _bay_5_sv_publisher1_v_convert__out[1] = 0;
    _bay_5_sv_publisher1_v_convert__out[2] = 0;
    _bay_5_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 5.Meter Split1.POWER_PA
    // Generated from the component: Bay 5.Meter Split1.POWER_PB
    // Generated from the component: Bay 5.Meter Split1.POWER_PC
    // Generated from the component: Bay 5.Meter Split1.POWER_PFA
    // Generated from the component: Bay 5.Meter Split1.POWER_PFB
    // Generated from the component: Bay 5.Meter Split1.POWER_PFC
    // Generated from the component: Bay 5.Meter Split1.POWER_QA
    // Generated from the component: Bay 5.Meter Split1.POWER_QB
    // Generated from the component: Bay 5.Meter Split1.POWER_QC
    // Generated from the component: Bay 5.Meter Split1.POWER_SA
    // Generated from the component: Bay 5.Meter Split1.POWER_SB
    // Generated from the component: Bay 5.Meter Split1.POWER_SC
    // Generated from the component: Bay 6.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_i_convert__out[0] = 0;
    _bay_6_sv_publisher1_i_convert__out[1] = 0;
    _bay_6_sv_publisher1_i_convert__out[2] = 0;
    _bay_6_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 6.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_v_convert__out[0] = 0;
    _bay_6_sv_publisher1_v_convert__out[1] = 0;
    _bay_6_sv_publisher1_v_convert__out[2] = 0;
    _bay_6_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 6.Meter Split1.POWER_PA
    // Generated from the component: Bay 6.Meter Split1.POWER_PB
    // Generated from the component: Bay 6.Meter Split1.POWER_PC
    // Generated from the component: Bay 6.Meter Split1.POWER_PFA
    // Generated from the component: Bay 6.Meter Split1.POWER_PFB
    // Generated from the component: Bay 6.Meter Split1.POWER_PFC
    // Generated from the component: Bay 6.Meter Split1.POWER_QA
    // Generated from the component: Bay 6.Meter Split1.POWER_QB
    // Generated from the component: Bay 6.Meter Split1.POWER_QC
    // Generated from the component: Bay 6.Meter Split1.POWER_SA
    // Generated from the component: Bay 6.Meter Split1.POWER_SB
    // Generated from the component: Bay 6.Meter Split1.POWER_SC
    // Generated from the component: Bay 7.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_i_convert__out[0] = 0;
    _bay_7_sv_publisher1_i_convert__out[1] = 0;
    _bay_7_sv_publisher1_i_convert__out[2] = 0;
    _bay_7_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 7.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_v_convert__out[0] = 0;
    _bay_7_sv_publisher1_v_convert__out[1] = 0;
    _bay_7_sv_publisher1_v_convert__out[2] = 0;
    _bay_7_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 7.Meter Split1.POWER_PA
    // Generated from the component: Bay 7.Meter Split1.POWER_PB
    // Generated from the component: Bay 7.Meter Split1.POWER_PC
    // Generated from the component: Bay 7.Meter Split1.POWER_PFA
    // Generated from the component: Bay 7.Meter Split1.POWER_PFB
    // Generated from the component: Bay 7.Meter Split1.POWER_PFC
    // Generated from the component: Bay 7.Meter Split1.POWER_QA
    // Generated from the component: Bay 7.Meter Split1.POWER_QB
    // Generated from the component: Bay 7.Meter Split1.POWER_QC
    // Generated from the component: Bay 7.Meter Split1.POWER_SA
    // Generated from the component: Bay 7.Meter Split1.POWER_SB
    // Generated from the component: Bay 7.Meter Split1.POWER_SC
    // Generated from the component: Bay 8.SV Publisher1.I_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_i_convert__out[0] = 0;
    _bay_8_sv_publisher1_i_convert__out[1] = 0;
    _bay_8_sv_publisher1_i_convert__out[2] = 0;
    _bay_8_sv_publisher1_i_convert__out[3] = 0;
    // Generated from the component: Bay 8.SV Publisher1.V_convert
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_v_convert__out[0] = 0;
    _bay_8_sv_publisher1_v_convert__out[1] = 0;
    _bay_8_sv_publisher1_v_convert__out[2] = 0;
    _bay_8_sv_publisher1_v_convert__out[3] = 0;
    // Generated from the component: Bay 8.Meter Split1.POWER_PA
    // Generated from the component: Bay 8.Meter Split1.POWER_PB
    // Generated from the component: Bay 8.Meter Split1.POWER_PC
    // Generated from the component: Bay 8.Meter Split1.POWER_PFA
    // Generated from the component: Bay 8.Meter Split1.POWER_PFB
    // Generated from the component: Bay 8.Meter Split1.POWER_PFC
    // Generated from the component: Bay 8.Meter Split1.POWER_QA
    // Generated from the component: Bay 8.Meter Split1.POWER_QB
    // Generated from the component: Bay 8.Meter Split1.POWER_QC
    // Generated from the component: Bay 8.Meter Split1.POWER_SA
    // Generated from the component: Bay 8.Meter Split1.POWER_SB
    // Generated from the component: Bay 8.Meter Split1.POWER_SC
    // Generated from the component: Bay 1.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_1_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_1_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_1_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 1.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_1_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_1_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_1_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 9.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_9_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_9_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_9_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 9.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_9_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_9_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_9_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 10.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_10_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_10_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_10_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 10.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_10_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_10_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_10_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 2.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_2_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_2_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_2_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 2.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_2_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_2_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_2_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 3.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_3_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_3_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_3_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 3.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_3_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_3_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_3_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_i_byte_swap__out[0] = 0;
    _hv_bay_1_sv_publisher1_i_byte_swap__out[1] = 0;
    _hv_bay_1_sv_publisher1_i_byte_swap__out[2] = 0;
    _hv_bay_1_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_v_byte_swap__out[0] = 0;
    _hv_bay_1_sv_publisher1_v_byte_swap__out[1] = 0;
    _hv_bay_1_sv_publisher1_v_byte_swap__out[2] = 0;
    _hv_bay_1_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 4.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_4_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_4_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_4_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 4.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_4_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_4_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_4_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 5.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_5_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_5_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_5_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 5.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_5_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_5_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_5_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 6.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_6_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_6_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_6_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 6.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_6_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_6_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_6_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 7.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_7_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_7_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_7_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 7.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_7_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_7_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_7_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 8.SV Publisher1.I_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_i_byte_swap__out[0] = 0;
    _bay_8_sv_publisher1_i_byte_swap__out[1] = 0;
    _bay_8_sv_publisher1_i_byte_swap__out[2] = 0;
    _bay_8_sv_publisher1_i_byte_swap__out[3] = 0;
    // Generated from the component: Bay 8.SV Publisher1.V_byte_swap
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_v_byte_swap__out[0] = 0;
    _bay_8_sv_publisher1_v_byte_swap__out[1] = 0;
    _bay_8_sv_publisher1_v_byte_swap__out[2] = 0;
    _bay_8_sv_publisher1_v_byte_swap__out[3] = 0;
    // Generated from the component: Bay 1.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_i_bus_split__out = 0;
    _bay_1_sv_publisher1_i_bus_split__out1 = 0;
    _bay_1_sv_publisher1_i_bus_split__out2 = 0;
    _bay_1_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 1.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_v_bus_split__out = 0;
    _bay_1_sv_publisher1_v_bus_split__out1 = 0;
    _bay_1_sv_publisher1_v_bus_split__out2 = 0;
    _bay_1_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 9.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_i_bus_split__out = 0;
    _bay_9_sv_publisher1_i_bus_split__out1 = 0;
    _bay_9_sv_publisher1_i_bus_split__out2 = 0;
    _bay_9_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 9.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_v_bus_split__out = 0;
    _bay_9_sv_publisher1_v_bus_split__out1 = 0;
    _bay_9_sv_publisher1_v_bus_split__out2 = 0;
    _bay_9_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 10.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_i_bus_split__out = 0;
    _bay_10_sv_publisher1_i_bus_split__out1 = 0;
    _bay_10_sv_publisher1_i_bus_split__out2 = 0;
    _bay_10_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 10.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_v_bus_split__out = 0;
    _bay_10_sv_publisher1_v_bus_split__out1 = 0;
    _bay_10_sv_publisher1_v_bus_split__out2 = 0;
    _bay_10_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 2.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_i_bus_split__out = 0;
    _bay_2_sv_publisher1_i_bus_split__out1 = 0;
    _bay_2_sv_publisher1_i_bus_split__out2 = 0;
    _bay_2_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 2.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_v_bus_split__out = 0;
    _bay_2_sv_publisher1_v_bus_split__out1 = 0;
    _bay_2_sv_publisher1_v_bus_split__out2 = 0;
    _bay_2_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 3.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_i_bus_split__out = 0;
    _bay_3_sv_publisher1_i_bus_split__out1 = 0;
    _bay_3_sv_publisher1_i_bus_split__out2 = 0;
    _bay_3_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 3.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_v_bus_split__out = 0;
    _bay_3_sv_publisher1_v_bus_split__out1 = 0;
    _bay_3_sv_publisher1_v_bus_split__out2 = 0;
    _bay_3_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_i_bus_split__out = 0;
    _hv_bay_1_sv_publisher1_i_bus_split__out1 = 0;
    _hv_bay_1_sv_publisher1_i_bus_split__out2 = 0;
    _hv_bay_1_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_v_bus_split__out = 0;
    _hv_bay_1_sv_publisher1_v_bus_split__out1 = 0;
    _hv_bay_1_sv_publisher1_v_bus_split__out2 = 0;
    _hv_bay_1_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 4.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_i_bus_split__out = 0;
    _bay_4_sv_publisher1_i_bus_split__out1 = 0;
    _bay_4_sv_publisher1_i_bus_split__out2 = 0;
    _bay_4_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 4.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_v_bus_split__out = 0;
    _bay_4_sv_publisher1_v_bus_split__out1 = 0;
    _bay_4_sv_publisher1_v_bus_split__out2 = 0;
    _bay_4_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 5.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_i_bus_split__out = 0;
    _bay_5_sv_publisher1_i_bus_split__out1 = 0;
    _bay_5_sv_publisher1_i_bus_split__out2 = 0;
    _bay_5_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 5.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_v_bus_split__out = 0;
    _bay_5_sv_publisher1_v_bus_split__out1 = 0;
    _bay_5_sv_publisher1_v_bus_split__out2 = 0;
    _bay_5_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 6.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_i_bus_split__out = 0;
    _bay_6_sv_publisher1_i_bus_split__out1 = 0;
    _bay_6_sv_publisher1_i_bus_split__out2 = 0;
    _bay_6_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 6.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_v_bus_split__out = 0;
    _bay_6_sv_publisher1_v_bus_split__out1 = 0;
    _bay_6_sv_publisher1_v_bus_split__out2 = 0;
    _bay_6_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 7.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_i_bus_split__out = 0;
    _bay_7_sv_publisher1_i_bus_split__out1 = 0;
    _bay_7_sv_publisher1_i_bus_split__out2 = 0;
    _bay_7_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 7.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_v_bus_split__out = 0;
    _bay_7_sv_publisher1_v_bus_split__out1 = 0;
    _bay_7_sv_publisher1_v_bus_split__out2 = 0;
    _bay_7_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 8.SV Publisher1.I_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_i_bus_split__out = 0;
    _bay_8_sv_publisher1_i_bus_split__out1 = 0;
    _bay_8_sv_publisher1_i_bus_split__out2 = 0;
    _bay_8_sv_publisher1_i_bus_split__out3 = 0;
    // Generated from the component: Bay 8.SV Publisher1.V_bus_split
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_v_bus_split__out = 0;
    _bay_8_sv_publisher1_v_bus_split__out1 = 0;
    _bay_8_sv_publisher1_v_bus_split__out2 = 0;
    _bay_8_sv_publisher1_v_bus_split__out3 = 0;
    // Generated from the component: Bay 1.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_1_sv_publisher1_bus_join__out[0] = 0;
    _bay_1_sv_publisher1_bus_join__out[1] = 0;
    _bay_1_sv_publisher1_bus_join__out[2] = 0;
    _bay_1_sv_publisher1_bus_join__out[3] = 0;
    _bay_1_sv_publisher1_bus_join__out[4] = 0;
    _bay_1_sv_publisher1_bus_join__out[5] = 0;
    _bay_1_sv_publisher1_bus_join__out[6] = 0;
    _bay_1_sv_publisher1_bus_join__out[7] = 0;
    _bay_1_sv_publisher1_bus_join__out[8] = 0;
    _bay_1_sv_publisher1_bus_join__out[9] = 0;
    _bay_1_sv_publisher1_bus_join__out[10] = 0;
    _bay_1_sv_publisher1_bus_join__out[11] = 0;
    _bay_1_sv_publisher1_bus_join__out[12] = 0;
    _bay_1_sv_publisher1_bus_join__out[13] = 0;
    _bay_1_sv_publisher1_bus_join__out[14] = 0;
    _bay_1_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 9.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_9_sv_publisher1_bus_join__out[0] = 0;
    _bay_9_sv_publisher1_bus_join__out[1] = 0;
    _bay_9_sv_publisher1_bus_join__out[2] = 0;
    _bay_9_sv_publisher1_bus_join__out[3] = 0;
    _bay_9_sv_publisher1_bus_join__out[4] = 0;
    _bay_9_sv_publisher1_bus_join__out[5] = 0;
    _bay_9_sv_publisher1_bus_join__out[6] = 0;
    _bay_9_sv_publisher1_bus_join__out[7] = 0;
    _bay_9_sv_publisher1_bus_join__out[8] = 0;
    _bay_9_sv_publisher1_bus_join__out[9] = 0;
    _bay_9_sv_publisher1_bus_join__out[10] = 0;
    _bay_9_sv_publisher1_bus_join__out[11] = 0;
    _bay_9_sv_publisher1_bus_join__out[12] = 0;
    _bay_9_sv_publisher1_bus_join__out[13] = 0;
    _bay_9_sv_publisher1_bus_join__out[14] = 0;
    _bay_9_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 10.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_10_sv_publisher1_bus_join__out[0] = 0;
    _bay_10_sv_publisher1_bus_join__out[1] = 0;
    _bay_10_sv_publisher1_bus_join__out[2] = 0;
    _bay_10_sv_publisher1_bus_join__out[3] = 0;
    _bay_10_sv_publisher1_bus_join__out[4] = 0;
    _bay_10_sv_publisher1_bus_join__out[5] = 0;
    _bay_10_sv_publisher1_bus_join__out[6] = 0;
    _bay_10_sv_publisher1_bus_join__out[7] = 0;
    _bay_10_sv_publisher1_bus_join__out[8] = 0;
    _bay_10_sv_publisher1_bus_join__out[9] = 0;
    _bay_10_sv_publisher1_bus_join__out[10] = 0;
    _bay_10_sv_publisher1_bus_join__out[11] = 0;
    _bay_10_sv_publisher1_bus_join__out[12] = 0;
    _bay_10_sv_publisher1_bus_join__out[13] = 0;
    _bay_10_sv_publisher1_bus_join__out[14] = 0;
    _bay_10_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 2.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_2_sv_publisher1_bus_join__out[0] = 0;
    _bay_2_sv_publisher1_bus_join__out[1] = 0;
    _bay_2_sv_publisher1_bus_join__out[2] = 0;
    _bay_2_sv_publisher1_bus_join__out[3] = 0;
    _bay_2_sv_publisher1_bus_join__out[4] = 0;
    _bay_2_sv_publisher1_bus_join__out[5] = 0;
    _bay_2_sv_publisher1_bus_join__out[6] = 0;
    _bay_2_sv_publisher1_bus_join__out[7] = 0;
    _bay_2_sv_publisher1_bus_join__out[8] = 0;
    _bay_2_sv_publisher1_bus_join__out[9] = 0;
    _bay_2_sv_publisher1_bus_join__out[10] = 0;
    _bay_2_sv_publisher1_bus_join__out[11] = 0;
    _bay_2_sv_publisher1_bus_join__out[12] = 0;
    _bay_2_sv_publisher1_bus_join__out[13] = 0;
    _bay_2_sv_publisher1_bus_join__out[14] = 0;
    _bay_2_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 3.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_3_sv_publisher1_bus_join__out[0] = 0;
    _bay_3_sv_publisher1_bus_join__out[1] = 0;
    _bay_3_sv_publisher1_bus_join__out[2] = 0;
    _bay_3_sv_publisher1_bus_join__out[3] = 0;
    _bay_3_sv_publisher1_bus_join__out[4] = 0;
    _bay_3_sv_publisher1_bus_join__out[5] = 0;
    _bay_3_sv_publisher1_bus_join__out[6] = 0;
    _bay_3_sv_publisher1_bus_join__out[7] = 0;
    _bay_3_sv_publisher1_bus_join__out[8] = 0;
    _bay_3_sv_publisher1_bus_join__out[9] = 0;
    _bay_3_sv_publisher1_bus_join__out[10] = 0;
    _bay_3_sv_publisher1_bus_join__out[11] = 0;
    _bay_3_sv_publisher1_bus_join__out[12] = 0;
    _bay_3_sv_publisher1_bus_join__out[13] = 0;
    _bay_3_sv_publisher1_bus_join__out[14] = 0;
    _bay_3_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: HV Bay 1.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _hv_bay_1_sv_publisher1_bus_join__out[0] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[1] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[2] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[3] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[4] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[5] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[6] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[7] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[8] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[9] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[10] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[11] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[12] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[13] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[14] = 0;
    _hv_bay_1_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 4.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_4_sv_publisher1_bus_join__out[0] = 0;
    _bay_4_sv_publisher1_bus_join__out[1] = 0;
    _bay_4_sv_publisher1_bus_join__out[2] = 0;
    _bay_4_sv_publisher1_bus_join__out[3] = 0;
    _bay_4_sv_publisher1_bus_join__out[4] = 0;
    _bay_4_sv_publisher1_bus_join__out[5] = 0;
    _bay_4_sv_publisher1_bus_join__out[6] = 0;
    _bay_4_sv_publisher1_bus_join__out[7] = 0;
    _bay_4_sv_publisher1_bus_join__out[8] = 0;
    _bay_4_sv_publisher1_bus_join__out[9] = 0;
    _bay_4_sv_publisher1_bus_join__out[10] = 0;
    _bay_4_sv_publisher1_bus_join__out[11] = 0;
    _bay_4_sv_publisher1_bus_join__out[12] = 0;
    _bay_4_sv_publisher1_bus_join__out[13] = 0;
    _bay_4_sv_publisher1_bus_join__out[14] = 0;
    _bay_4_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 5.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_5_sv_publisher1_bus_join__out[0] = 0;
    _bay_5_sv_publisher1_bus_join__out[1] = 0;
    _bay_5_sv_publisher1_bus_join__out[2] = 0;
    _bay_5_sv_publisher1_bus_join__out[3] = 0;
    _bay_5_sv_publisher1_bus_join__out[4] = 0;
    _bay_5_sv_publisher1_bus_join__out[5] = 0;
    _bay_5_sv_publisher1_bus_join__out[6] = 0;
    _bay_5_sv_publisher1_bus_join__out[7] = 0;
    _bay_5_sv_publisher1_bus_join__out[8] = 0;
    _bay_5_sv_publisher1_bus_join__out[9] = 0;
    _bay_5_sv_publisher1_bus_join__out[10] = 0;
    _bay_5_sv_publisher1_bus_join__out[11] = 0;
    _bay_5_sv_publisher1_bus_join__out[12] = 0;
    _bay_5_sv_publisher1_bus_join__out[13] = 0;
    _bay_5_sv_publisher1_bus_join__out[14] = 0;
    _bay_5_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 6.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_6_sv_publisher1_bus_join__out[0] = 0;
    _bay_6_sv_publisher1_bus_join__out[1] = 0;
    _bay_6_sv_publisher1_bus_join__out[2] = 0;
    _bay_6_sv_publisher1_bus_join__out[3] = 0;
    _bay_6_sv_publisher1_bus_join__out[4] = 0;
    _bay_6_sv_publisher1_bus_join__out[5] = 0;
    _bay_6_sv_publisher1_bus_join__out[6] = 0;
    _bay_6_sv_publisher1_bus_join__out[7] = 0;
    _bay_6_sv_publisher1_bus_join__out[8] = 0;
    _bay_6_sv_publisher1_bus_join__out[9] = 0;
    _bay_6_sv_publisher1_bus_join__out[10] = 0;
    _bay_6_sv_publisher1_bus_join__out[11] = 0;
    _bay_6_sv_publisher1_bus_join__out[12] = 0;
    _bay_6_sv_publisher1_bus_join__out[13] = 0;
    _bay_6_sv_publisher1_bus_join__out[14] = 0;
    _bay_6_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 7.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_7_sv_publisher1_bus_join__out[0] = 0;
    _bay_7_sv_publisher1_bus_join__out[1] = 0;
    _bay_7_sv_publisher1_bus_join__out[2] = 0;
    _bay_7_sv_publisher1_bus_join__out[3] = 0;
    _bay_7_sv_publisher1_bus_join__out[4] = 0;
    _bay_7_sv_publisher1_bus_join__out[5] = 0;
    _bay_7_sv_publisher1_bus_join__out[6] = 0;
    _bay_7_sv_publisher1_bus_join__out[7] = 0;
    _bay_7_sv_publisher1_bus_join__out[8] = 0;
    _bay_7_sv_publisher1_bus_join__out[9] = 0;
    _bay_7_sv_publisher1_bus_join__out[10] = 0;
    _bay_7_sv_publisher1_bus_join__out[11] = 0;
    _bay_7_sv_publisher1_bus_join__out[12] = 0;
    _bay_7_sv_publisher1_bus_join__out[13] = 0;
    _bay_7_sv_publisher1_bus_join__out[14] = 0;
    _bay_7_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 8.SV Publisher1.bus_join
    // Component not supported for this platform. Outputs are zeroed.
    _bay_8_sv_publisher1_bus_join__out[0] = 0;
    _bay_8_sv_publisher1_bus_join__out[1] = 0;
    _bay_8_sv_publisher1_bus_join__out[2] = 0;
    _bay_8_sv_publisher1_bus_join__out[3] = 0;
    _bay_8_sv_publisher1_bus_join__out[4] = 0;
    _bay_8_sv_publisher1_bus_join__out[5] = 0;
    _bay_8_sv_publisher1_bus_join__out[6] = 0;
    _bay_8_sv_publisher1_bus_join__out[7] = 0;
    _bay_8_sv_publisher1_bus_join__out[8] = 0;
    _bay_8_sv_publisher1_bus_join__out[9] = 0;
    _bay_8_sv_publisher1_bus_join__out[10] = 0;
    _bay_8_sv_publisher1_bus_join__out[11] = 0;
    _bay_8_sv_publisher1_bus_join__out[12] = 0;
    _bay_8_sv_publisher1_bus_join__out[13] = 0;
    _bay_8_sv_publisher1_bus_join__out[14] = 0;
    _bay_8_sv_publisher1_bus_join__out[15] = 0;
    // Generated from the component: Bay 1.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 9.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 10.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 2.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 3.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: HV Bay 1.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 4.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 5.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 6.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 7.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Bay 8.SV Publisher1.SV_data
    // Component not supported for this platform. Outputs are zeroed.
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Bay 1.SR Flip Flop2
    if ((_bay_1_dc1_close__out != 0x0) && (_bay_1_logical_operator15__out == 0x0))
        _bay_1_sr_flip_flop2__state = 1;
    else if ((_bay_1_dc1_close__out == 0x0) && (_bay_1_logical_operator15__out != 0x0))
        _bay_1_sr_flip_flop2__state = 0;
    else if ((_bay_1_dc1_close__out != 0x0) && (_bay_1_logical_operator15__out != 0x0))
        _bay_1_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 1.SR Flip Flop4
    if ((_bay_1_dc2_close__out != 0x0) && (_bay_1_logical_operator17__out == 0x0))
        _bay_1_sr_flip_flop4__state = 1;
    else if ((_bay_1_dc2_close__out == 0x0) && (_bay_1_logical_operator17__out != 0x0))
        _bay_1_sr_flip_flop4__state = 0;
    else if ((_bay_1_dc2_close__out != 0x0) && (_bay_1_logical_operator17__out != 0x0))
        _bay_1_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 1.SR Flip Flop5
    if ((_bay_1_logical_operator7__out != 0x0) && (_bay_1_logical_operator8__out == 0x0))
        _bay_1_sr_flip_flop5__state = 1;
    else if ((_bay_1_logical_operator7__out == 0x0) && (_bay_1_logical_operator8__out != 0x0))
        _bay_1_sr_flip_flop5__state = 0;
    else if ((_bay_1_logical_operator7__out != 0x0) && (_bay_1_logical_operator8__out != 0x0))
        _bay_1_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 1.Step1
    if (_bay_1_step1__state <= 0.1)
        _bay_1_step1__state += 0.0001;
    // Generated from the component: Bay 1.Step2
    if (_bay_1_step2__state <= 0.1)
        _bay_1_step2__state += 0.0001;
    // Generated from the component: Bay 1.Step3
    if (_bay_1_step3__state <= 0.1)
        _bay_1_step3__state += 0.0001;
    // Generated from the component: Bay 10.SR Flip Flop2
    if ((_bay_10_dc1_close__out != 0x0) && (_bay_10_logical_operator15__out == 0x0))
        _bay_10_sr_flip_flop2__state = 1;
    else if ((_bay_10_dc1_close__out == 0x0) && (_bay_10_logical_operator15__out != 0x0))
        _bay_10_sr_flip_flop2__state = 0;
    else if ((_bay_10_dc1_close__out != 0x0) && (_bay_10_logical_operator15__out != 0x0))
        _bay_10_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 10.SR Flip Flop4
    if ((_bay_10_dc2_close__out != 0x0) && (_bay_10_logical_operator17__out == 0x0))
        _bay_10_sr_flip_flop4__state = 1;
    else if ((_bay_10_dc2_close__out == 0x0) && (_bay_10_logical_operator17__out != 0x0))
        _bay_10_sr_flip_flop4__state = 0;
    else if ((_bay_10_dc2_close__out != 0x0) && (_bay_10_logical_operator17__out != 0x0))
        _bay_10_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 10.SR Flip Flop5
    if ((_bay_10_logical_operator7__out != 0x0) && (_bay_10_logical_operator8__out == 0x0))
        _bay_10_sr_flip_flop5__state = 1;
    else if ((_bay_10_logical_operator7__out == 0x0) && (_bay_10_logical_operator8__out != 0x0))
        _bay_10_sr_flip_flop5__state = 0;
    else if ((_bay_10_logical_operator7__out != 0x0) && (_bay_10_logical_operator8__out != 0x0))
        _bay_10_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 10.Step1
    if (_bay_10_step1__state <= 0.1)
        _bay_10_step1__state += 0.0001;
    // Generated from the component: Bay 10.Step2
    if (_bay_10_step2__state <= 0.1)
        _bay_10_step2__state += 0.0001;
    // Generated from the component: Bay 10.Step3
    if (_bay_10_step3__state <= 0.1)
        _bay_10_step3__state += 0.0001;
    // Generated from the component: Bay 2.SR Flip Flop2
    if ((_bay_2_dc1_close__out != 0x0) && (_bay_2_logical_operator15__out == 0x0))
        _bay_2_sr_flip_flop2__state = 1;
    else if ((_bay_2_dc1_close__out == 0x0) && (_bay_2_logical_operator15__out != 0x0))
        _bay_2_sr_flip_flop2__state = 0;
    else if ((_bay_2_dc1_close__out != 0x0) && (_bay_2_logical_operator15__out != 0x0))
        _bay_2_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 2.SR Flip Flop4
    if ((_bay_2_dc2_close__out != 0x0) && (_bay_2_logical_operator17__out == 0x0))
        _bay_2_sr_flip_flop4__state = 1;
    else if ((_bay_2_dc2_close__out == 0x0) && (_bay_2_logical_operator17__out != 0x0))
        _bay_2_sr_flip_flop4__state = 0;
    else if ((_bay_2_dc2_close__out != 0x0) && (_bay_2_logical_operator17__out != 0x0))
        _bay_2_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 2.SR Flip Flop5
    if ((_bay_2_logical_operator7__out != 0x0) && (_bay_2_logical_operator8__out == 0x0))
        _bay_2_sr_flip_flop5__state = 1;
    else if ((_bay_2_logical_operator7__out == 0x0) && (_bay_2_logical_operator8__out != 0x0))
        _bay_2_sr_flip_flop5__state = 0;
    else if ((_bay_2_logical_operator7__out != 0x0) && (_bay_2_logical_operator8__out != 0x0))
        _bay_2_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 2.Step1
    if (_bay_2_step1__state <= 0.1)
        _bay_2_step1__state += 0.0001;
    // Generated from the component: Bay 2.Step2
    if (_bay_2_step2__state <= 0.1)
        _bay_2_step2__state += 0.0001;
    // Generated from the component: Bay 2.Step3
    if (_bay_2_step3__state <= 0.1)
        _bay_2_step3__state += 0.0001;
    // Generated from the component: Bay 3.SR Flip Flop2
    if ((_bay_3_dc1_close__out != 0x0) && (_bay_3_logical_operator15__out == 0x0))
        _bay_3_sr_flip_flop2__state = 1;
    else if ((_bay_3_dc1_close__out == 0x0) && (_bay_3_logical_operator15__out != 0x0))
        _bay_3_sr_flip_flop2__state = 0;
    else if ((_bay_3_dc1_close__out != 0x0) && (_bay_3_logical_operator15__out != 0x0))
        _bay_3_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 3.SR Flip Flop4
    if ((_bay_3_dc2_close__out != 0x0) && (_bay_3_logical_operator17__out == 0x0))
        _bay_3_sr_flip_flop4__state = 1;
    else if ((_bay_3_dc2_close__out == 0x0) && (_bay_3_logical_operator17__out != 0x0))
        _bay_3_sr_flip_flop4__state = 0;
    else if ((_bay_3_dc2_close__out != 0x0) && (_bay_3_logical_operator17__out != 0x0))
        _bay_3_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 3.SR Flip Flop5
    if ((_bay_3_logical_operator7__out != 0x0) && (_bay_3_logical_operator8__out == 0x0))
        _bay_3_sr_flip_flop5__state = 1;
    else if ((_bay_3_logical_operator7__out == 0x0) && (_bay_3_logical_operator8__out != 0x0))
        _bay_3_sr_flip_flop5__state = 0;
    else if ((_bay_3_logical_operator7__out != 0x0) && (_bay_3_logical_operator8__out != 0x0))
        _bay_3_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 3.Step1
    if (_bay_3_step1__state <= 0.1)
        _bay_3_step1__state += 0.0001;
    // Generated from the component: Bay 3.Step2
    if (_bay_3_step2__state <= 0.1)
        _bay_3_step2__state += 0.0001;
    // Generated from the component: Bay 3.Step3
    if (_bay_3_step3__state <= 0.1)
        _bay_3_step3__state += 0.0001;
    // Generated from the component: Bay 4.SR Flip Flop2
    if ((_bay_4_dc1_close__out != 0x0) && (_bay_4_logical_operator15__out == 0x0))
        _bay_4_sr_flip_flop2__state = 1;
    else if ((_bay_4_dc1_close__out == 0x0) && (_bay_4_logical_operator15__out != 0x0))
        _bay_4_sr_flip_flop2__state = 0;
    else if ((_bay_4_dc1_close__out != 0x0) && (_bay_4_logical_operator15__out != 0x0))
        _bay_4_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 4.SR Flip Flop4
    if ((_bay_4_dc2_close__out != 0x0) && (_bay_4_logical_operator17__out == 0x0))
        _bay_4_sr_flip_flop4__state = 1;
    else if ((_bay_4_dc2_close__out == 0x0) && (_bay_4_logical_operator17__out != 0x0))
        _bay_4_sr_flip_flop4__state = 0;
    else if ((_bay_4_dc2_close__out != 0x0) && (_bay_4_logical_operator17__out != 0x0))
        _bay_4_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 4.SR Flip Flop5
    if ((_bay_4_logical_operator7__out != 0x0) && (_bay_4_logical_operator8__out == 0x0))
        _bay_4_sr_flip_flop5__state = 1;
    else if ((_bay_4_logical_operator7__out == 0x0) && (_bay_4_logical_operator8__out != 0x0))
        _bay_4_sr_flip_flop5__state = 0;
    else if ((_bay_4_logical_operator7__out != 0x0) && (_bay_4_logical_operator8__out != 0x0))
        _bay_4_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 4.Step1
    if (_bay_4_step1__state <= 0.1)
        _bay_4_step1__state += 0.0001;
    // Generated from the component: Bay 4.Step2
    if (_bay_4_step2__state <= 0.1)
        _bay_4_step2__state += 0.0001;
    // Generated from the component: Bay 4.Step3
    if (_bay_4_step3__state <= 0.1)
        _bay_4_step3__state += 0.0001;
    // Generated from the component: Bay 5.SR Flip Flop2
    if ((_bay_5_dc1_close__out != 0x0) && (_bay_5_logical_operator15__out == 0x0))
        _bay_5_sr_flip_flop2__state = 1;
    else if ((_bay_5_dc1_close__out == 0x0) && (_bay_5_logical_operator15__out != 0x0))
        _bay_5_sr_flip_flop2__state = 0;
    else if ((_bay_5_dc1_close__out != 0x0) && (_bay_5_logical_operator15__out != 0x0))
        _bay_5_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 5.SR Flip Flop4
    if ((_bay_5_dc2_close__out != 0x0) && (_bay_5_logical_operator17__out == 0x0))
        _bay_5_sr_flip_flop4__state = 1;
    else if ((_bay_5_dc2_close__out == 0x0) && (_bay_5_logical_operator17__out != 0x0))
        _bay_5_sr_flip_flop4__state = 0;
    else if ((_bay_5_dc2_close__out != 0x0) && (_bay_5_logical_operator17__out != 0x0))
        _bay_5_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 5.SR Flip Flop5
    if ((_bay_5_logical_operator7__out != 0x0) && (_bay_5_logical_operator8__out == 0x0))
        _bay_5_sr_flip_flop5__state = 1;
    else if ((_bay_5_logical_operator7__out == 0x0) && (_bay_5_logical_operator8__out != 0x0))
        _bay_5_sr_flip_flop5__state = 0;
    else if ((_bay_5_logical_operator7__out != 0x0) && (_bay_5_logical_operator8__out != 0x0))
        _bay_5_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 5.Step1
    if (_bay_5_step1__state <= 0.1)
        _bay_5_step1__state += 0.0001;
    // Generated from the component: Bay 5.Step2
    if (_bay_5_step2__state <= 0.1)
        _bay_5_step2__state += 0.0001;
    // Generated from the component: Bay 5.Step3
    if (_bay_5_step3__state <= 0.1)
        _bay_5_step3__state += 0.0001;
    // Generated from the component: Bay 6.SR Flip Flop2
    if ((_bay_6_dc1_close__out != 0x0) && (_bay_6_logical_operator15__out == 0x0))
        _bay_6_sr_flip_flop2__state = 1;
    else if ((_bay_6_dc1_close__out == 0x0) && (_bay_6_logical_operator15__out != 0x0))
        _bay_6_sr_flip_flop2__state = 0;
    else if ((_bay_6_dc1_close__out != 0x0) && (_bay_6_logical_operator15__out != 0x0))
        _bay_6_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 6.SR Flip Flop4
    if ((_bay_6_dc2_close__out != 0x0) && (_bay_6_logical_operator17__out == 0x0))
        _bay_6_sr_flip_flop4__state = 1;
    else if ((_bay_6_dc2_close__out == 0x0) && (_bay_6_logical_operator17__out != 0x0))
        _bay_6_sr_flip_flop4__state = 0;
    else if ((_bay_6_dc2_close__out != 0x0) && (_bay_6_logical_operator17__out != 0x0))
        _bay_6_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 6.SR Flip Flop5
    if ((_bay_6_logical_operator7__out != 0x0) && (_bay_6_logical_operator8__out == 0x0))
        _bay_6_sr_flip_flop5__state = 1;
    else if ((_bay_6_logical_operator7__out == 0x0) && (_bay_6_logical_operator8__out != 0x0))
        _bay_6_sr_flip_flop5__state = 0;
    else if ((_bay_6_logical_operator7__out != 0x0) && (_bay_6_logical_operator8__out != 0x0))
        _bay_6_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 6.Step1
    if (_bay_6_step1__state <= 0.1)
        _bay_6_step1__state += 0.0001;
    // Generated from the component: Bay 6.Step2
    if (_bay_6_step2__state <= 0.1)
        _bay_6_step2__state += 0.0001;
    // Generated from the component: Bay 6.Step3
    if (_bay_6_step3__state <= 0.1)
        _bay_6_step3__state += 0.0001;
    // Generated from the component: Bay 7.SR Flip Flop2
    if ((_bay_7_dc1_close__out != 0x0) && (_bay_7_logical_operator15__out == 0x0))
        _bay_7_sr_flip_flop2__state = 1;
    else if ((_bay_7_dc1_close__out == 0x0) && (_bay_7_logical_operator15__out != 0x0))
        _bay_7_sr_flip_flop2__state = 0;
    else if ((_bay_7_dc1_close__out != 0x0) && (_bay_7_logical_operator15__out != 0x0))
        _bay_7_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 7.SR Flip Flop4
    if ((_bay_7_dc2_close__out != 0x0) && (_bay_7_logical_operator17__out == 0x0))
        _bay_7_sr_flip_flop4__state = 1;
    else if ((_bay_7_dc2_close__out == 0x0) && (_bay_7_logical_operator17__out != 0x0))
        _bay_7_sr_flip_flop4__state = 0;
    else if ((_bay_7_dc2_close__out != 0x0) && (_bay_7_logical_operator17__out != 0x0))
        _bay_7_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 7.SR Flip Flop5
    if ((_bay_7_logical_operator7__out != 0x0) && (_bay_7_logical_operator8__out == 0x0))
        _bay_7_sr_flip_flop5__state = 1;
    else if ((_bay_7_logical_operator7__out == 0x0) && (_bay_7_logical_operator8__out != 0x0))
        _bay_7_sr_flip_flop5__state = 0;
    else if ((_bay_7_logical_operator7__out != 0x0) && (_bay_7_logical_operator8__out != 0x0))
        _bay_7_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 7.Step1
    if (_bay_7_step1__state <= 0.1)
        _bay_7_step1__state += 0.0001;
    // Generated from the component: Bay 7.Step2
    if (_bay_7_step2__state <= 0.1)
        _bay_7_step2__state += 0.0001;
    // Generated from the component: Bay 7.Step3
    if (_bay_7_step3__state <= 0.1)
        _bay_7_step3__state += 0.0001;
    // Generated from the component: Bay 8.SR Flip Flop2
    if ((_bay_8_dc1_close__out != 0x0) && (_bay_8_logical_operator15__out == 0x0))
        _bay_8_sr_flip_flop2__state = 1;
    else if ((_bay_8_dc1_close__out == 0x0) && (_bay_8_logical_operator15__out != 0x0))
        _bay_8_sr_flip_flop2__state = 0;
    else if ((_bay_8_dc1_close__out != 0x0) && (_bay_8_logical_operator15__out != 0x0))
        _bay_8_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 8.SR Flip Flop4
    if ((_bay_8_dc2_close__out != 0x0) && (_bay_8_logical_operator17__out == 0x0))
        _bay_8_sr_flip_flop4__state = 1;
    else if ((_bay_8_dc2_close__out == 0x0) && (_bay_8_logical_operator17__out != 0x0))
        _bay_8_sr_flip_flop4__state = 0;
    else if ((_bay_8_dc2_close__out != 0x0) && (_bay_8_logical_operator17__out != 0x0))
        _bay_8_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 8.SR Flip Flop5
    if ((_bay_8_logical_operator7__out != 0x0) && (_bay_8_logical_operator8__out == 0x0))
        _bay_8_sr_flip_flop5__state = 1;
    else if ((_bay_8_logical_operator7__out == 0x0) && (_bay_8_logical_operator8__out != 0x0))
        _bay_8_sr_flip_flop5__state = 0;
    else if ((_bay_8_logical_operator7__out != 0x0) && (_bay_8_logical_operator8__out != 0x0))
        _bay_8_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 8.Step1
    if (_bay_8_step1__state <= 0.1)
        _bay_8_step1__state += 0.0001;
    // Generated from the component: Bay 8.Step2
    if (_bay_8_step2__state <= 0.1)
        _bay_8_step2__state += 0.0001;
    // Generated from the component: Bay 8.Step3
    if (_bay_8_step3__state <= 0.1)
        _bay_8_step3__state += 0.0001;
    // Generated from the component: Bay 9.SR Flip Flop2
    if ((_bay_9_dc1_close__out != 0x0) && (_bay_9_logical_operator15__out == 0x0))
        _bay_9_sr_flip_flop2__state = 1;
    else if ((_bay_9_dc1_close__out == 0x0) && (_bay_9_logical_operator15__out != 0x0))
        _bay_9_sr_flip_flop2__state = 0;
    else if ((_bay_9_dc1_close__out != 0x0) && (_bay_9_logical_operator15__out != 0x0))
        _bay_9_sr_flip_flop2__state = -1;
    // Generated from the component: Bay 9.SR Flip Flop4
    if ((_bay_9_dc2_close__out != 0x0) && (_bay_9_logical_operator17__out == 0x0))
        _bay_9_sr_flip_flop4__state = 1;
    else if ((_bay_9_dc2_close__out == 0x0) && (_bay_9_logical_operator17__out != 0x0))
        _bay_9_sr_flip_flop4__state = 0;
    else if ((_bay_9_dc2_close__out != 0x0) && (_bay_9_logical_operator17__out != 0x0))
        _bay_9_sr_flip_flop4__state = -1;
    // Generated from the component: Bay 9.SR Flip Flop5
    if ((_bay_9_logical_operator7__out != 0x0) && (_bay_9_logical_operator8__out == 0x0))
        _bay_9_sr_flip_flop5__state = 1;
    else if ((_bay_9_logical_operator7__out == 0x0) && (_bay_9_logical_operator8__out != 0x0))
        _bay_9_sr_flip_flop5__state = 0;
    else if ((_bay_9_logical_operator7__out != 0x0) && (_bay_9_logical_operator8__out != 0x0))
        _bay_9_sr_flip_flop5__state = -1;
    // Generated from the component: Bay 9.Step1
    if (_bay_9_step1__state <= 0.1)
        _bay_9_step1__state += 0.0001;
    // Generated from the component: Bay 9.Step2
    if (_bay_9_step2__state <= 0.1)
        _bay_9_step2__state += 0.0001;
    // Generated from the component: Bay 9.Step3
    if (_bay_9_step3__state <= 0.1)
        _bay_9_step3__state += 0.0001;
    // Generated from the component: HV Bay 1.SR Flip Flop2
    if ((_hv_bay_1_dc1_close__out != 0x0) && (_hv_bay_1_logical_operator15__out == 0x0))
        _hv_bay_1_sr_flip_flop2__state = 1;
    else if ((_hv_bay_1_dc1_close__out == 0x0) && (_hv_bay_1_logical_operator15__out != 0x0))
        _hv_bay_1_sr_flip_flop2__state = 0;
    else if ((_hv_bay_1_dc1_close__out != 0x0) && (_hv_bay_1_logical_operator15__out != 0x0))
        _hv_bay_1_sr_flip_flop2__state = -1;
    // Generated from the component: HV Bay 1.SR Flip Flop4
    if ((_hv_bay_1_dc2_close__out != 0x0) && (_hv_bay_1_logical_operator17__out == 0x0))
        _hv_bay_1_sr_flip_flop4__state = 1;
    else if ((_hv_bay_1_dc2_close__out == 0x0) && (_hv_bay_1_logical_operator17__out != 0x0))
        _hv_bay_1_sr_flip_flop4__state = 0;
    else if ((_hv_bay_1_dc2_close__out != 0x0) && (_hv_bay_1_logical_operator17__out != 0x0))
        _hv_bay_1_sr_flip_flop4__state = -1;
    // Generated from the component: HV Bay 1.SR Flip Flop5
    if ((_hv_bay_1_cb_close__out != 0x0) && (_hv_bay_1_logical_operator20__out == 0x0))
        _hv_bay_1_sr_flip_flop5__state = 1;
    else if ((_hv_bay_1_cb_close__out == 0x0) && (_hv_bay_1_logical_operator20__out != 0x0))
        _hv_bay_1_sr_flip_flop5__state = 0;
    else if ((_hv_bay_1_cb_close__out != 0x0) && (_hv_bay_1_logical_operator20__out != 0x0))
        _hv_bay_1_sr_flip_flop5__state = -1;
    // Generated from the component: HV Bay 1.Step1
    if (_hv_bay_1_step1__state <= 0.1)
        _hv_bay_1_step1__state += 0.0001;
    // Generated from the component: HV Bay 1.Step2
    if (_hv_bay_1_step2__state <= 0.1)
        _hv_bay_1_step2__state += 0.0001;
    // Generated from the component: HV Bay 1.Step3
    if (_hv_bay_1_step3__state <= 0.1)
        _hv_bay_1_step3__state += 0.0001;
    // Generated from the component: Three-phase Meter1.PLL.LPF.LPF
    for (_three_phase_meter1_pll_lpf_lpf__i = 1; _three_phase_meter1_pll_lpf_lpf__i > 0; _three_phase_meter1_pll_lpf_lpf__i--) {
        _three_phase_meter1_pll_lpf_lpf__a_sum += _three_phase_meter1_pll_lpf_lpf__a_coeff[_three_phase_meter1_pll_lpf_lpf__i + 1] * _three_phase_meter1_pll_lpf_lpf__states[_three_phase_meter1_pll_lpf_lpf__i];
    }
    _three_phase_meter1_pll_lpf_lpf__a_sum += _three_phase_meter1_pll_lpf_lpf__states[0] * _three_phase_meter1_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter1_pll_lpf_lpf__delay_line_in = _three_phase_meter1_pll_rate_limiter1__out - _three_phase_meter1_pll_lpf_lpf__a_sum;
    for (_three_phase_meter1_pll_lpf_lpf__i = 1; _three_phase_meter1_pll_lpf_lpf__i > 0; _three_phase_meter1_pll_lpf_lpf__i--) {
        _three_phase_meter1_pll_lpf_lpf__states[_three_phase_meter1_pll_lpf_lpf__i] = _three_phase_meter1_pll_lpf_lpf__states[_three_phase_meter1_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter1_pll_lpf_lpf__states[0] = _three_phase_meter1_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter1.PLL.PID.Integrator1
    _three_phase_meter1_pll_pid_integrator1__state += _three_phase_meter1_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter1.PLL.PID.Integrator2
    _three_phase_meter1_pll_pid_integrator2__state += _three_phase_meter1_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter1.PLL.Unit Delay1
    _three_phase_meter1_pll_unit_delay1__state = _three_phase_meter1_pll_integrator__out;
    // Generated from the component: Three-phase Meter1.PLL.abc to dq.LPF_d
    _three_phase_meter1_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter1.PLL.abc to dq.LPF_q
    _three_phase_meter1_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter1_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter10.PLL.LPF.LPF
    for (_three_phase_meter10_pll_lpf_lpf__i = 1; _three_phase_meter10_pll_lpf_lpf__i > 0; _three_phase_meter10_pll_lpf_lpf__i--) {
        _three_phase_meter10_pll_lpf_lpf__a_sum += _three_phase_meter10_pll_lpf_lpf__a_coeff[_three_phase_meter10_pll_lpf_lpf__i + 1] * _three_phase_meter10_pll_lpf_lpf__states[_three_phase_meter10_pll_lpf_lpf__i];
    }
    _three_phase_meter10_pll_lpf_lpf__a_sum += _three_phase_meter10_pll_lpf_lpf__states[0] * _three_phase_meter10_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter10_pll_lpf_lpf__delay_line_in = _three_phase_meter10_pll_rate_limiter1__out - _three_phase_meter10_pll_lpf_lpf__a_sum;
    for (_three_phase_meter10_pll_lpf_lpf__i = 1; _three_phase_meter10_pll_lpf_lpf__i > 0; _three_phase_meter10_pll_lpf_lpf__i--) {
        _three_phase_meter10_pll_lpf_lpf__states[_three_phase_meter10_pll_lpf_lpf__i] = _three_phase_meter10_pll_lpf_lpf__states[_three_phase_meter10_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter10_pll_lpf_lpf__states[0] = _three_phase_meter10_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter10.PLL.PID.Integrator1
    _three_phase_meter10_pll_pid_integrator1__state += _three_phase_meter10_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter10.PLL.PID.Integrator2
    _three_phase_meter10_pll_pid_integrator2__state += _three_phase_meter10_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter10.PLL.Unit Delay1
    _three_phase_meter10_pll_unit_delay1__state = _three_phase_meter10_pll_integrator__out;
    // Generated from the component: Three-phase Meter10.PLL.abc to dq.LPF_d
    _three_phase_meter10_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter10.PLL.abc to dq.LPF_q
    _three_phase_meter10_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter10_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter11.PLL.LPF.LPF
    for (_three_phase_meter11_pll_lpf_lpf__i = 1; _three_phase_meter11_pll_lpf_lpf__i > 0; _three_phase_meter11_pll_lpf_lpf__i--) {
        _three_phase_meter11_pll_lpf_lpf__a_sum += _three_phase_meter11_pll_lpf_lpf__a_coeff[_three_phase_meter11_pll_lpf_lpf__i + 1] * _three_phase_meter11_pll_lpf_lpf__states[_three_phase_meter11_pll_lpf_lpf__i];
    }
    _three_phase_meter11_pll_lpf_lpf__a_sum += _three_phase_meter11_pll_lpf_lpf__states[0] * _three_phase_meter11_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter11_pll_lpf_lpf__delay_line_in = _three_phase_meter11_pll_rate_limiter1__out - _three_phase_meter11_pll_lpf_lpf__a_sum;
    for (_three_phase_meter11_pll_lpf_lpf__i = 1; _three_phase_meter11_pll_lpf_lpf__i > 0; _three_phase_meter11_pll_lpf_lpf__i--) {
        _three_phase_meter11_pll_lpf_lpf__states[_three_phase_meter11_pll_lpf_lpf__i] = _three_phase_meter11_pll_lpf_lpf__states[_three_phase_meter11_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter11_pll_lpf_lpf__states[0] = _three_phase_meter11_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter11.PLL.PID.Integrator1
    _three_phase_meter11_pll_pid_integrator1__state += _three_phase_meter11_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter11.PLL.PID.Integrator2
    _three_phase_meter11_pll_pid_integrator2__state += _three_phase_meter11_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter11.PLL.Unit Delay1
    _three_phase_meter11_pll_unit_delay1__state = _three_phase_meter11_pll_integrator__out;
    // Generated from the component: Three-phase Meter11.PLL.abc to dq.LPF_d
    _three_phase_meter11_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter11.PLL.abc to dq.LPF_q
    _three_phase_meter11_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter11_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter2.PLL.LPF.LPF
    for (_three_phase_meter2_pll_lpf_lpf__i = 1; _three_phase_meter2_pll_lpf_lpf__i > 0; _three_phase_meter2_pll_lpf_lpf__i--) {
        _three_phase_meter2_pll_lpf_lpf__a_sum += _three_phase_meter2_pll_lpf_lpf__a_coeff[_three_phase_meter2_pll_lpf_lpf__i + 1] * _three_phase_meter2_pll_lpf_lpf__states[_three_phase_meter2_pll_lpf_lpf__i];
    }
    _three_phase_meter2_pll_lpf_lpf__a_sum += _three_phase_meter2_pll_lpf_lpf__states[0] * _three_phase_meter2_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter2_pll_lpf_lpf__delay_line_in = _three_phase_meter2_pll_rate_limiter1__out - _three_phase_meter2_pll_lpf_lpf__a_sum;
    for (_three_phase_meter2_pll_lpf_lpf__i = 1; _three_phase_meter2_pll_lpf_lpf__i > 0; _three_phase_meter2_pll_lpf_lpf__i--) {
        _three_phase_meter2_pll_lpf_lpf__states[_three_phase_meter2_pll_lpf_lpf__i] = _three_phase_meter2_pll_lpf_lpf__states[_three_phase_meter2_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter2_pll_lpf_lpf__states[0] = _three_phase_meter2_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter2.PLL.PID.Integrator1
    _three_phase_meter2_pll_pid_integrator1__state += _three_phase_meter2_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter2.PLL.PID.Integrator2
    _three_phase_meter2_pll_pid_integrator2__state += _three_phase_meter2_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter2.PLL.Unit Delay1
    _three_phase_meter2_pll_unit_delay1__state = _three_phase_meter2_pll_integrator__out;
    // Generated from the component: Three-phase Meter2.PLL.abc to dq.LPF_d
    _three_phase_meter2_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter2.PLL.abc to dq.LPF_q
    _three_phase_meter2_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter2_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter3.PLL.LPF.LPF
    for (_three_phase_meter3_pll_lpf_lpf__i = 1; _three_phase_meter3_pll_lpf_lpf__i > 0; _three_phase_meter3_pll_lpf_lpf__i--) {
        _three_phase_meter3_pll_lpf_lpf__a_sum += _three_phase_meter3_pll_lpf_lpf__a_coeff[_three_phase_meter3_pll_lpf_lpf__i + 1] * _three_phase_meter3_pll_lpf_lpf__states[_three_phase_meter3_pll_lpf_lpf__i];
    }
    _three_phase_meter3_pll_lpf_lpf__a_sum += _three_phase_meter3_pll_lpf_lpf__states[0] * _three_phase_meter3_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter3_pll_lpf_lpf__delay_line_in = _three_phase_meter3_pll_rate_limiter1__out - _three_phase_meter3_pll_lpf_lpf__a_sum;
    for (_three_phase_meter3_pll_lpf_lpf__i = 1; _three_phase_meter3_pll_lpf_lpf__i > 0; _three_phase_meter3_pll_lpf_lpf__i--) {
        _three_phase_meter3_pll_lpf_lpf__states[_three_phase_meter3_pll_lpf_lpf__i] = _three_phase_meter3_pll_lpf_lpf__states[_three_phase_meter3_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter3_pll_lpf_lpf__states[0] = _three_phase_meter3_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter3.PLL.PID.Integrator1
    _three_phase_meter3_pll_pid_integrator1__state += _three_phase_meter3_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter3.PLL.PID.Integrator2
    _three_phase_meter3_pll_pid_integrator2__state += _three_phase_meter3_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter3.PLL.Unit Delay1
    _three_phase_meter3_pll_unit_delay1__state = _three_phase_meter3_pll_integrator__out;
    // Generated from the component: Three-phase Meter3.PLL.abc to dq.LPF_d
    _three_phase_meter3_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter3.PLL.abc to dq.LPF_q
    _three_phase_meter3_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter3_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter4.PLL.LPF.LPF
    for (_three_phase_meter4_pll_lpf_lpf__i = 1; _three_phase_meter4_pll_lpf_lpf__i > 0; _three_phase_meter4_pll_lpf_lpf__i--) {
        _three_phase_meter4_pll_lpf_lpf__a_sum += _three_phase_meter4_pll_lpf_lpf__a_coeff[_three_phase_meter4_pll_lpf_lpf__i + 1] * _three_phase_meter4_pll_lpf_lpf__states[_three_phase_meter4_pll_lpf_lpf__i];
    }
    _three_phase_meter4_pll_lpf_lpf__a_sum += _three_phase_meter4_pll_lpf_lpf__states[0] * _three_phase_meter4_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter4_pll_lpf_lpf__delay_line_in = _three_phase_meter4_pll_rate_limiter1__out - _three_phase_meter4_pll_lpf_lpf__a_sum;
    for (_three_phase_meter4_pll_lpf_lpf__i = 1; _three_phase_meter4_pll_lpf_lpf__i > 0; _three_phase_meter4_pll_lpf_lpf__i--) {
        _three_phase_meter4_pll_lpf_lpf__states[_three_phase_meter4_pll_lpf_lpf__i] = _three_phase_meter4_pll_lpf_lpf__states[_three_phase_meter4_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter4_pll_lpf_lpf__states[0] = _three_phase_meter4_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter4.PLL.PID.Integrator1
    _three_phase_meter4_pll_pid_integrator1__state += _three_phase_meter4_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter4.PLL.PID.Integrator2
    _three_phase_meter4_pll_pid_integrator2__state += _three_phase_meter4_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter4.PLL.Unit Delay1
    _three_phase_meter4_pll_unit_delay1__state = _three_phase_meter4_pll_integrator__out;
    // Generated from the component: Three-phase Meter4.PLL.abc to dq.LPF_d
    _three_phase_meter4_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter4.PLL.abc to dq.LPF_q
    _three_phase_meter4_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter4_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter5.PLL.LPF.LPF
    for (_three_phase_meter5_pll_lpf_lpf__i = 1; _three_phase_meter5_pll_lpf_lpf__i > 0; _three_phase_meter5_pll_lpf_lpf__i--) {
        _three_phase_meter5_pll_lpf_lpf__a_sum += _three_phase_meter5_pll_lpf_lpf__a_coeff[_three_phase_meter5_pll_lpf_lpf__i + 1] * _three_phase_meter5_pll_lpf_lpf__states[_three_phase_meter5_pll_lpf_lpf__i];
    }
    _three_phase_meter5_pll_lpf_lpf__a_sum += _three_phase_meter5_pll_lpf_lpf__states[0] * _three_phase_meter5_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter5_pll_lpf_lpf__delay_line_in = _three_phase_meter5_pll_rate_limiter1__out - _three_phase_meter5_pll_lpf_lpf__a_sum;
    for (_three_phase_meter5_pll_lpf_lpf__i = 1; _three_phase_meter5_pll_lpf_lpf__i > 0; _three_phase_meter5_pll_lpf_lpf__i--) {
        _three_phase_meter5_pll_lpf_lpf__states[_three_phase_meter5_pll_lpf_lpf__i] = _three_phase_meter5_pll_lpf_lpf__states[_three_phase_meter5_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter5_pll_lpf_lpf__states[0] = _three_phase_meter5_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter5.PLL.PID.Integrator1
    _three_phase_meter5_pll_pid_integrator1__state += _three_phase_meter5_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter5.PLL.PID.Integrator2
    _three_phase_meter5_pll_pid_integrator2__state += _three_phase_meter5_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter5.PLL.Unit Delay1
    _three_phase_meter5_pll_unit_delay1__state = _three_phase_meter5_pll_integrator__out;
    // Generated from the component: Three-phase Meter5.PLL.abc to dq.LPF_d
    _three_phase_meter5_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter5.PLL.abc to dq.LPF_q
    _three_phase_meter5_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter5_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter6.PLL.LPF.LPF
    for (_three_phase_meter6_pll_lpf_lpf__i = 1; _three_phase_meter6_pll_lpf_lpf__i > 0; _three_phase_meter6_pll_lpf_lpf__i--) {
        _three_phase_meter6_pll_lpf_lpf__a_sum += _three_phase_meter6_pll_lpf_lpf__a_coeff[_three_phase_meter6_pll_lpf_lpf__i + 1] * _three_phase_meter6_pll_lpf_lpf__states[_three_phase_meter6_pll_lpf_lpf__i];
    }
    _three_phase_meter6_pll_lpf_lpf__a_sum += _three_phase_meter6_pll_lpf_lpf__states[0] * _three_phase_meter6_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter6_pll_lpf_lpf__delay_line_in = _three_phase_meter6_pll_rate_limiter1__out - _three_phase_meter6_pll_lpf_lpf__a_sum;
    for (_three_phase_meter6_pll_lpf_lpf__i = 1; _three_phase_meter6_pll_lpf_lpf__i > 0; _three_phase_meter6_pll_lpf_lpf__i--) {
        _three_phase_meter6_pll_lpf_lpf__states[_three_phase_meter6_pll_lpf_lpf__i] = _three_phase_meter6_pll_lpf_lpf__states[_three_phase_meter6_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter6_pll_lpf_lpf__states[0] = _three_phase_meter6_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter6.PLL.PID.Integrator1
    _three_phase_meter6_pll_pid_integrator1__state += _three_phase_meter6_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter6.PLL.PID.Integrator2
    _three_phase_meter6_pll_pid_integrator2__state += _three_phase_meter6_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter6.PLL.Unit Delay1
    _three_phase_meter6_pll_unit_delay1__state = _three_phase_meter6_pll_integrator__out;
    // Generated from the component: Three-phase Meter6.PLL.abc to dq.LPF_d
    _three_phase_meter6_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter6.PLL.abc to dq.LPF_q
    _three_phase_meter6_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter6_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter7.PLL.LPF.LPF
    for (_three_phase_meter7_pll_lpf_lpf__i = 1; _three_phase_meter7_pll_lpf_lpf__i > 0; _three_phase_meter7_pll_lpf_lpf__i--) {
        _three_phase_meter7_pll_lpf_lpf__a_sum += _three_phase_meter7_pll_lpf_lpf__a_coeff[_three_phase_meter7_pll_lpf_lpf__i + 1] * _three_phase_meter7_pll_lpf_lpf__states[_three_phase_meter7_pll_lpf_lpf__i];
    }
    _three_phase_meter7_pll_lpf_lpf__a_sum += _three_phase_meter7_pll_lpf_lpf__states[0] * _three_phase_meter7_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter7_pll_lpf_lpf__delay_line_in = _three_phase_meter7_pll_rate_limiter1__out - _three_phase_meter7_pll_lpf_lpf__a_sum;
    for (_three_phase_meter7_pll_lpf_lpf__i = 1; _three_phase_meter7_pll_lpf_lpf__i > 0; _three_phase_meter7_pll_lpf_lpf__i--) {
        _three_phase_meter7_pll_lpf_lpf__states[_three_phase_meter7_pll_lpf_lpf__i] = _three_phase_meter7_pll_lpf_lpf__states[_three_phase_meter7_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter7_pll_lpf_lpf__states[0] = _three_phase_meter7_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter7.PLL.PID.Integrator1
    _three_phase_meter7_pll_pid_integrator1__state += _three_phase_meter7_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter7.PLL.PID.Integrator2
    _three_phase_meter7_pll_pid_integrator2__state += _three_phase_meter7_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter7.PLL.Unit Delay1
    _three_phase_meter7_pll_unit_delay1__state = _three_phase_meter7_pll_integrator__out;
    // Generated from the component: Three-phase Meter7.PLL.abc to dq.LPF_d
    _three_phase_meter7_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter7.PLL.abc to dq.LPF_q
    _three_phase_meter7_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter7_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter8.PLL.LPF.LPF
    for (_three_phase_meter8_pll_lpf_lpf__i = 1; _three_phase_meter8_pll_lpf_lpf__i > 0; _three_phase_meter8_pll_lpf_lpf__i--) {
        _three_phase_meter8_pll_lpf_lpf__a_sum += _three_phase_meter8_pll_lpf_lpf__a_coeff[_three_phase_meter8_pll_lpf_lpf__i + 1] * _three_phase_meter8_pll_lpf_lpf__states[_three_phase_meter8_pll_lpf_lpf__i];
    }
    _three_phase_meter8_pll_lpf_lpf__a_sum += _three_phase_meter8_pll_lpf_lpf__states[0] * _three_phase_meter8_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter8_pll_lpf_lpf__delay_line_in = _three_phase_meter8_pll_rate_limiter1__out - _three_phase_meter8_pll_lpf_lpf__a_sum;
    for (_three_phase_meter8_pll_lpf_lpf__i = 1; _three_phase_meter8_pll_lpf_lpf__i > 0; _three_phase_meter8_pll_lpf_lpf__i--) {
        _three_phase_meter8_pll_lpf_lpf__states[_three_phase_meter8_pll_lpf_lpf__i] = _three_phase_meter8_pll_lpf_lpf__states[_three_phase_meter8_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter8_pll_lpf_lpf__states[0] = _three_phase_meter8_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter8.PLL.PID.Integrator1
    _three_phase_meter8_pll_pid_integrator1__state += _three_phase_meter8_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter8.PLL.PID.Integrator2
    _three_phase_meter8_pll_pid_integrator2__state += _three_phase_meter8_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter8.PLL.Unit Delay1
    _three_phase_meter8_pll_unit_delay1__state = _three_phase_meter8_pll_integrator__out;
    // Generated from the component: Three-phase Meter8.PLL.abc to dq.LPF_d
    _three_phase_meter8_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter8.PLL.abc to dq.LPF_q
    _three_phase_meter8_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter8_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Three-phase Meter9.PLL.LPF.LPF
    for (_three_phase_meter9_pll_lpf_lpf__i = 1; _three_phase_meter9_pll_lpf_lpf__i > 0; _three_phase_meter9_pll_lpf_lpf__i--) {
        _three_phase_meter9_pll_lpf_lpf__a_sum += _three_phase_meter9_pll_lpf_lpf__a_coeff[_three_phase_meter9_pll_lpf_lpf__i + 1] * _three_phase_meter9_pll_lpf_lpf__states[_three_phase_meter9_pll_lpf_lpf__i];
    }
    _three_phase_meter9_pll_lpf_lpf__a_sum += _three_phase_meter9_pll_lpf_lpf__states[0] * _three_phase_meter9_pll_lpf_lpf__a_coeff[1];
    _three_phase_meter9_pll_lpf_lpf__delay_line_in = _three_phase_meter9_pll_rate_limiter1__out - _three_phase_meter9_pll_lpf_lpf__a_sum;
    for (_three_phase_meter9_pll_lpf_lpf__i = 1; _three_phase_meter9_pll_lpf_lpf__i > 0; _three_phase_meter9_pll_lpf_lpf__i--) {
        _three_phase_meter9_pll_lpf_lpf__states[_three_phase_meter9_pll_lpf_lpf__i] = _three_phase_meter9_pll_lpf_lpf__states[_three_phase_meter9_pll_lpf_lpf__i - 1];
    }
    _three_phase_meter9_pll_lpf_lpf__states[0] = _three_phase_meter9_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Three-phase Meter9.PLL.PID.Integrator1
    _three_phase_meter9_pll_pid_integrator1__state += _three_phase_meter9_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Three-phase Meter9.PLL.PID.Integrator2
    _three_phase_meter9_pll_pid_integrator2__state += _three_phase_meter9_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Three-phase Meter9.PLL.Unit Delay1
    _three_phase_meter9_pll_unit_delay1__state = _three_phase_meter9_pll_integrator__out;
    // Generated from the component: Three-phase Meter9.PLL.abc to dq.LPF_d
    _three_phase_meter9_pll_abc_to_dq_lpf_d__previous_in = _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Three-phase Meter9.PLL.abc to dq.LPF_q
    _three_phase_meter9_pll_abc_to_dq_lpf_q__previous_in = _three_phase_meter9_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Dynamic Grid Fault1.Control state machine
    // Generated from the component: Fault Q10.Control state machine
    // Generated from the component: Fault Q3.Control state machine
    // Generated from the component: Fault Q7.Control state machine
    // Generated from the component: FaultBB.Control state machine
    // Generated from the component: Three-phase Meter1.PLL.normalize
    // Generated from the component: Three-phase Meter10.PLL.normalize
    // Generated from the component: Three-phase Meter11.PLL.normalize
    // Generated from the component: Three-phase Meter2.PLL.normalize
    // Generated from the component: Three-phase Meter3.PLL.normalize
    // Generated from the component: Three-phase Meter4.PLL.normalize
    // Generated from the component: Three-phase Meter5.PLL.normalize
    // Generated from the component: Three-phase Meter6.PLL.normalize
    // Generated from the component: Three-phase Meter7.PLL.normalize
    // Generated from the component: Three-phase Meter8.PLL.normalize
    // Generated from the component: Three-phase Meter9.PLL.normalize
    // Generated from the component: Three-phase Meter1.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter10.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter11.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter2.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter3.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter4.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter5.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter6.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter7.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter8.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter9.measSM.mode_and_dFract
    // Generated from the component: Three-phase Meter1.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter1.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter1.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter1.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter1.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter10.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter10.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter10.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter10.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter10.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter11.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter11.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter11.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter11.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter11.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter2.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter2.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter2.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter2.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter2.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter3.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter3.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter3.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter3.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter3.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter4.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter4.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter4.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter4.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter4.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter5.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter5.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter5.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter5.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter5.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter6.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter6.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter6.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter6.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter6.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter7.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter7.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter7.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter7.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter7.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter8.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter8.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter8.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter8.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter8.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter9.IN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter9.I_RMS_calc.RMS
    // Generated from the component: Three-phase Meter9.VLL_RMS_calc.RMS
    // Generated from the component: Three-phase Meter9.VLn_RMS_calc.RMS
    // Generated from the component: Three-phase Meter9.VN_RMS_calc.1ph_RMS
    // Generated from the component: Three-phase Meter1.PLL.Rate Limiter1
    _three_phase_meter1_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter1_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter1_pll_pid_limit1__out - _three_phase_meter1_pll_rate_limiter1__state > _three_phase_meter1_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter1_pll_rate_limiter1__state += _three_phase_meter1_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter1_pll_pid_limit1__out - _three_phase_meter1_pll_rate_limiter1__state < _three_phase_meter1_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter1_pll_rate_limiter1__state += (_three_phase_meter1_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter1_pll_rate_limiter1__state = _three_phase_meter1_pll_pid_limit1__out;
    _three_phase_meter1_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter1.PLL.integrator
    // Generated from the component: Three-phase Meter10.PLL.Rate Limiter1
    _three_phase_meter10_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter10_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter10_pll_pid_limit1__out - _three_phase_meter10_pll_rate_limiter1__state > _three_phase_meter10_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter10_pll_rate_limiter1__state += _three_phase_meter10_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter10_pll_pid_limit1__out - _three_phase_meter10_pll_rate_limiter1__state < _three_phase_meter10_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter10_pll_rate_limiter1__state += (_three_phase_meter10_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter10_pll_rate_limiter1__state = _three_phase_meter10_pll_pid_limit1__out;
    _three_phase_meter10_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter10.PLL.integrator
    // Generated from the component: Three-phase Meter11.PLL.Rate Limiter1
    _three_phase_meter11_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter11_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter11_pll_pid_limit1__out - _three_phase_meter11_pll_rate_limiter1__state > _three_phase_meter11_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter11_pll_rate_limiter1__state += _three_phase_meter11_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter11_pll_pid_limit1__out - _three_phase_meter11_pll_rate_limiter1__state < _three_phase_meter11_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter11_pll_rate_limiter1__state += (_three_phase_meter11_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter11_pll_rate_limiter1__state = _three_phase_meter11_pll_pid_limit1__out;
    _three_phase_meter11_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter11.PLL.integrator
    // Generated from the component: Three-phase Meter2.PLL.Rate Limiter1
    _three_phase_meter2_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter2_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter2_pll_pid_limit1__out - _three_phase_meter2_pll_rate_limiter1__state > _three_phase_meter2_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter2_pll_rate_limiter1__state += _three_phase_meter2_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter2_pll_pid_limit1__out - _three_phase_meter2_pll_rate_limiter1__state < _three_phase_meter2_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter2_pll_rate_limiter1__state += (_three_phase_meter2_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter2_pll_rate_limiter1__state = _three_phase_meter2_pll_pid_limit1__out;
    _three_phase_meter2_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter2.PLL.integrator
    // Generated from the component: Three-phase Meter3.PLL.Rate Limiter1
    _three_phase_meter3_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter3_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter3_pll_pid_limit1__out - _three_phase_meter3_pll_rate_limiter1__state > _three_phase_meter3_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter3_pll_rate_limiter1__state += _three_phase_meter3_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter3_pll_pid_limit1__out - _three_phase_meter3_pll_rate_limiter1__state < _three_phase_meter3_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter3_pll_rate_limiter1__state += (_three_phase_meter3_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter3_pll_rate_limiter1__state = _three_phase_meter3_pll_pid_limit1__out;
    _three_phase_meter3_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter3.PLL.integrator
    // Generated from the component: Three-phase Meter4.PLL.Rate Limiter1
    _three_phase_meter4_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter4_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter4_pll_pid_limit1__out - _three_phase_meter4_pll_rate_limiter1__state > _three_phase_meter4_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter4_pll_rate_limiter1__state += _three_phase_meter4_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter4_pll_pid_limit1__out - _three_phase_meter4_pll_rate_limiter1__state < _three_phase_meter4_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter4_pll_rate_limiter1__state += (_three_phase_meter4_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter4_pll_rate_limiter1__state = _three_phase_meter4_pll_pid_limit1__out;
    _three_phase_meter4_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter4.PLL.integrator
    // Generated from the component: Three-phase Meter5.PLL.Rate Limiter1
    _three_phase_meter5_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter5_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter5_pll_pid_limit1__out - _three_phase_meter5_pll_rate_limiter1__state > _three_phase_meter5_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter5_pll_rate_limiter1__state += _three_phase_meter5_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter5_pll_pid_limit1__out - _three_phase_meter5_pll_rate_limiter1__state < _three_phase_meter5_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter5_pll_rate_limiter1__state += (_three_phase_meter5_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter5_pll_rate_limiter1__state = _three_phase_meter5_pll_pid_limit1__out;
    _three_phase_meter5_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter5.PLL.integrator
    // Generated from the component: Three-phase Meter6.PLL.Rate Limiter1
    _three_phase_meter6_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter6_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter6_pll_pid_limit1__out - _three_phase_meter6_pll_rate_limiter1__state > _three_phase_meter6_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter6_pll_rate_limiter1__state += _three_phase_meter6_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter6_pll_pid_limit1__out - _three_phase_meter6_pll_rate_limiter1__state < _three_phase_meter6_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter6_pll_rate_limiter1__state += (_three_phase_meter6_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter6_pll_rate_limiter1__state = _three_phase_meter6_pll_pid_limit1__out;
    _three_phase_meter6_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter6.PLL.integrator
    // Generated from the component: Three-phase Meter7.PLL.Rate Limiter1
    _three_phase_meter7_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter7_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter7_pll_pid_limit1__out - _three_phase_meter7_pll_rate_limiter1__state > _three_phase_meter7_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter7_pll_rate_limiter1__state += _three_phase_meter7_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter7_pll_pid_limit1__out - _three_phase_meter7_pll_rate_limiter1__state < _three_phase_meter7_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter7_pll_rate_limiter1__state += (_three_phase_meter7_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter7_pll_rate_limiter1__state = _three_phase_meter7_pll_pid_limit1__out;
    _three_phase_meter7_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter7.PLL.integrator
    // Generated from the component: Three-phase Meter8.PLL.Rate Limiter1
    _three_phase_meter8_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter8_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter8_pll_pid_limit1__out - _three_phase_meter8_pll_rate_limiter1__state > _three_phase_meter8_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter8_pll_rate_limiter1__state += _three_phase_meter8_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter8_pll_pid_limit1__out - _three_phase_meter8_pll_rate_limiter1__state < _three_phase_meter8_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter8_pll_rate_limiter1__state += (_three_phase_meter8_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter8_pll_rate_limiter1__state = _three_phase_meter8_pll_pid_limit1__out;
    _three_phase_meter8_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter8.PLL.integrator
    // Generated from the component: Three-phase Meter9.PLL.Rate Limiter1
    _three_phase_meter9_pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.0001;
    _three_phase_meter9_pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.0001;
    if (_three_phase_meter9_pll_pid_limit1__out - _three_phase_meter9_pll_rate_limiter1__state > _three_phase_meter9_pll_rate_limiter1__rising_rate_lim[0])
        _three_phase_meter9_pll_rate_limiter1__state += _three_phase_meter9_pll_rate_limiter1__rising_rate_lim[0];
    else  if (_three_phase_meter9_pll_pid_limit1__out - _three_phase_meter9_pll_rate_limiter1__state < _three_phase_meter9_pll_rate_limiter1__falling_rate_lim[0])
        _three_phase_meter9_pll_rate_limiter1__state += (_three_phase_meter9_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _three_phase_meter9_pll_rate_limiter1__state = _three_phase_meter9_pll_pid_limit1__out;
    _three_phase_meter9_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Three-phase Meter9.PLL.integrator
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------