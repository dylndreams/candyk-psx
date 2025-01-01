

volatile uint32_t vblank_counter = 0;
volatile int out_vidy = 0;
volatile int real_out_vidy = 0;

void eyecandy_write_gp0_command(uint32_t v);
void eyecandy_write_gp0_data(uint32_t v);
void eyecandy_write_gp1(uint32_t v);
void eyecandy_gpu_init(int vid_mode, int bpp, int pal);
void eyecandy_gte_init();
