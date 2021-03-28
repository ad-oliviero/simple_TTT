name = "Simple TTT"
files = main.c gameplay.c gui.c shapes.c
src_dir = 
build_dir = ../
flags = -lraylib
flags_w64 = -L lib/ $(flags) -lopengl32 -lwinmm -lgdi32 -static lib/libwinpthread-1.dll -Wl,--subsystem,windows

all: linux windows

linux:
	gcc -O3 -W -Wall -Wextra $(flags) $(src_dir)$(files) -o $(build_dir)$(name)
	@echo Compilation Successfull!

windows:
	x86_64-w64-mingw32-gcc -O3 $(src_dir)$(files) -o $(build_dir)$(name).exe $(flags_w64)

clean:
	rm ../$(name)*
