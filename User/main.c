#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "PWM.h"
#include "Exti.h"
#include "RGB.h"
uint8_t i;
void EXTI2_IRQHandler(void);
int main(void)
{
	//OLED_Init();
	PWM_Init();
	KEY_EXTI_Config();
	//rgb_init();
	while (1)
	{
		
	}
		
}


