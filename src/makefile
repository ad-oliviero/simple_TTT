name = "Simple TTT"
files = main.c gameplay.c gui.c shapes.c
src_dir = 
build_dir = ../
cflags = -O3 -Wall -Wextra
ldflags = -L raylib/ -l:libraylib.a -lpthread -lm -ldl
flags_w64 = $(ldflags) -lopengl32 -lwinmm -lgdi32 -Wl,--subsystem,windows

all: linux windows

linux:
	gcc $(cflags) $(src_dir)$(files) -o $(build_dir)$(name) $(ldflags)
	@echo Compilation Successfull!

windows:
	x86_64-w64-mingw32-gcc -O3 $(src_dir)$(files) -o $(build_dir)$(name).exe $(flags_w64)

clean:
	rm ../$(name)*
