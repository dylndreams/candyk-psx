LIBS_EYECANDY_OBJS = \
	src/eyecandy/eyecandy.o

OUTPUT_LIBS += $(OUTPUT_LIBDIR)libeyecandy.a
OUTPUT_LIBS_OBJS += $(LIBS_EYECANDY_OBJS)

LIBS_EYECANDY_INCS =

src/eyecandy/%.o: src/eyecandy/%.c
	$(TARGET_CC) -c -o $@ $< $(TARGET_CFLAGS)

$(OUTPUT_LIBDIR)libeyecandy.a: $(LIBS_EYECANDY_OBJS) $(LIBS_EYECANDY_INCS)
	$(TARGET_AR) crs $@ $(LIBS_EYECANDY_OBJS)
