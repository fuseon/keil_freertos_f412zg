#ifndef __USER_H__
#define __USER_H__

void adc_isr(void);

void lia(double adc_in, double dds_cos, double dds_sin, double *x, double *y);
void create_and_start_task(void);

#endif
