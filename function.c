#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "function.h"

void SDL_Delay(Uint32 ms);

//initialize

void initEnemy(Enemy *e)
{
	e->life=1;
	e->direction=1;

	e->img=IMG_Load("enemy.png");
	if(e->img==NULL)
	{
		printf("Unable to load background image %s \n", SDL_GetError());
		return;
	}
	e->pos1.x=0;
	e->pos1.y=0;
	e->pos2.x=0;
	e->pos2.y=0;
	e->pos2.w=140;
	e->pos2.h=160;

}


//display
void displayEnemy(Enemy e, SDL_Surface *screen)
{
	SDL_BlitSurface(e.img, &e.pos2, screen, &e.pos1);
}
//animation
void animateEnemy(Enemy *e)
{
	
}

//movement
void moveEnemy(Enemy *e)
{
	
}

//collision
//int BBCollision(tmpenemy p, Enemy e, SDL_Rect posp, SDL_Rect pose)
/*{
	if(tmpenemy.x+tmpenemy.w<Enemy.x)||(tmpenemy.x>Enemy.x&&Enemy.w)||(tmpenemy.y&&tmpenemy.h<Enemy.y)||(tmpenemy.y>Enemy.y&&Enemy.h)
	{
		BBCollision=0;
	}
	else
	{
		BBCollision=1;
	}
}*/

//free

void freeEnemy(Enemy *e)
{
	SDL_FreeSurface(e->img);
}

