/*

eyecandy: GPU code

all of this code is from chenboot_triangle
and probably all the gte code would be from
ps1-bare-metal repo. soo i'll figure out a license 
when im done with it

*/
void eyecandy_write_gp0_command(uint32_t v);
void eyecandy_write_gp0_data(uint32_t v);
void eyecandy_write_gp1(uint32_t v);
void eyecandy_gpu_init(int vid_mode, int bpp, int pal);
void eyecandy_gte_init();
