#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "function.h"


int main()
{
	SDL_Surface *screen;
	SDL_Event event;
	Enemy e,p;
	int loop=1;

	if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO)!=0)
	{
		printf("Error %s\n", SDL_GetError());
		return 1;
	}
	
	screen=SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
	
	initEnemy(&e);
	initEnemy(&p);

	while(loop)
	{		
		displayEnemy(e, screen);
		displayEnemy(p, screen);
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{

				case SDL_QUIT:
				loop=0;
				break;
		
			}
		}
	//	animateEnemy(&e);
	//	moveEnemy(&e);
	}

	freeEnemy(&e);

	return(0);
}
