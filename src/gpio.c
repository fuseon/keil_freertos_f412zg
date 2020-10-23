#include "includes.h"

void tick_pin_toggle()
{
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
}

void led_on()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, (GPIO_PinState)1);
}

void led_off()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, (GPIO_PinState)0);
}

void led_toggle()
{
	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
}
