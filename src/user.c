#include "includes.h"

#define TASK_A_PRIORITY			(tskIDLE_PRIORITY + 1)
#define TASK_B_PRIORITY			(tskIDLE_PRIORITY + 2)

void TaskA( void *pvParameters )
{
	int cnt = 0;

	printf("Hello FreeRTOS\n");

	while(1) {
		log_printf("cnt = %d\n", ++cnt);
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}

void TaskB( void *pvParameters )
{
	while(1) {
		led_toggle();
		vTaskDelay(pdMS_TO_TICKS(500));
	}
}

void vApplicationTickHook()
{
	tick_pin_toggle();
}

void create_and_start_task()
{
	xTaskCreate(TaskA, "TaskA", configMINIMAL_STACK_SIZE, NULL, TASK_A_PRIORITY, (TaskHandle_t *)NULL);
	xTaskCreate(TaskB, "TaskB", configMINIMAL_STACK_SIZE, NULL, TASK_B_PRIORITY, (TaskHandle_t *)NULL);

	vTaskStartScheduler();
}
