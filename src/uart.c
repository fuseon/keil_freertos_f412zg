#include "includes.h"

extern UART_HandleTypeDef huart3;

void __io_putchar(uint8_t c)
{
	HAL_UART_Transmit(&huart3, &c, 1, 10);
}

int stdout_putchar (int ch)
{
	if(ch == '\n') {
		__io_putchar('\r');
	}
	__io_putchar(ch);
	return ch;
}

int stderr_putchar (int ch)
{
	if(ch == '\n') {
		__io_putchar('\r');
	}
	__io_putchar(ch);
	return ch;
}
