#include "stm32f4xx.h"
	void delayMs(int n);
	int main(void)
	{
		RCC->AHB1ENR |= 1;
		GPIOA->MODER &= ~0x00000C00;
		GPIOA->MODER |= 0x00000400;
		while(1)
		{
			GPIOA->ODR |= 0x00000020; /* turn on LED */
			delayMs(2000);
			GPIOA->ODR &= ~0x00000020; /* turn off LED */
			delayMs(2000);
		}
	}
/* 16 MHz SYSCLK */
	void delayMs(int n) {
		int i;
		for (; n > 0; n--)
			for (i = 0; i < 3195; i++) ;
	}
