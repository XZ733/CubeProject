#ifndef _pwm_H
#define _pwm_H

#include "system.h"

void TIM1_PWM_Init(u16 per,u16 psc);
void TIM3_PWM_Init(u16 per,u16 psc);
void TIM4_PWM_Init(u16 per,u16 psc);
void TIM1_SetCompare3(u32 compare);
void TIM1_SetCompare4(u32 compare);
void TIM3_SetCompare1(u32 compare);
void TIM3_SetCompare2(u32 compare);
void TIM3_SetCompare3(u32 compare);
void TIM3_SetCompare4(u32 compare);
void TIM4_SetCompare3(u32 compare);
void TIM4_SetCompare4(u32 compare);
#endif

