prog:function.o main.o
	gcc function.o main.o -o prog -g -lSDL -lSDL_mixer -lSDL_ttf -lSDL_image  
main.o:main.c
	gcc -c main.c -g
function.o:function.c
	gcc -c function.c -g
