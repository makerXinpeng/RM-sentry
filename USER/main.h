/**
  ***************************(C) COPYRIGHT 2019 HQURM***************************
  * @file       main.c/h
  * @brief      stm32初始化以及开始任务TIM6。
  * @note       
  * @history
  *  Version    Date            Author          Modification
  *  V1.0.0     Feb-15-2019     陈新朋          1. 未加freeRTOS
  *
  @verbatim
  ==============================================================================

  ==============================================================================
  @endverbatim
  ***************************(C) COPYRIGHT 2019 HQURM***************************
  */
#ifndef MAIN_H
#define MAIN_H

typedef signed char int8_t;
typedef signed short int int16_t;
typedef signed int int32_t;
typedef signed long long int64_t;

/* exact-width unsigned integer types */
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned char bool_t;
typedef float fp32;
typedef double fp64;

//云台电机可能can发送失败的情况，尝试使用 随机延迟发送控制指令的方式解决
#define GIMBAL_MOTOR_6020_CAN_LOSE_SLOVE 0

#define SysCoreClock 180

#define RC_NVIC 4

#define CAN1_NVIC 4
#define CAN2_NVIC 4
#define TIM3_NVIC 5
#define TIM6_NVIC 4
#define SPI5_RX_NVIC 5
#define MPU_INT_NVIC 5

#define Latitude_At_ShenZhen 22.57025f

#ifndef NULL
#define NULL 0
#endif
#define CLOCK_TIME 50000
#ifndef PI
#define PI 3.14159265358979f
#endif

#endif /* __MAIN_H */
