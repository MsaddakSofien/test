#ifndef ENEMY_H
#define ENEMY_H
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#define SCREEN_W 800
#define SCREEN_H 600
void SDL_Delay(Uint32 ms);

typedef struct
{
	SDL_Rect pos1;
	SDL_Rect pos2;
	SDL_Surface *img;
	int direction;// 1 right -1 left
	int life;// 0 dead, 1 alive
	
}Enemy;

typedef struct
{
	int x;
	int y;
	int w;
	int h;
}AABB;

//initialize
void initEnemy(Enemy *e);

//display
void displayEnemy(Enemy e, SDL_Surface *screen);

//animation
void animateEnemy(Enemy *e);


//movement
void moveEnemy(Enemy *e);


//collision
int BBCollision(Enemy p, Enemy e, SDL_Rect posp, SDL_Rect pose);

//free
void freeEnemy(Enemy *e);


#endif
