/*

eyecandy: GPU code

all of this code is from chenboot_triangle
and probably all the gte code would be from
ps1-bare-metal repo. soo i'll figure out a license 
when im done with it


*/

#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <errno.h>

#include <eyecandy.h>
#include <psxdefs.h>

void eyecandy_write_gp0_command(uint32_t v)
{
	int i;

	for(i = 0; i < 1000; i+=1) {
		if((PSXREG_GPU_GPUSTAT & (1<<26)) != 0) {
			break;
		}
	}

	PSXREG_GPU_GP0 = v;
}

void eyecandy_write_gp0_data(uint32_t v)
{
	int i;

	for(i = 0; i < 1000; i+=1) {
		if((PSXREG_GPU_GPUSTAT & (1<<28)) != 0) {
			break;
		}
	}

	PSXREG_GPU_GP0 = v;
}

void eyecandy_write_gp1(uint32_t v)
{
	PSXREG_GPU_GP1 = v;
}

