#include <SDL/SDL.h>

#include<SDL/SDL_image.h>

#include <SDL/SDL_mixer.h>
#ifndef DEF_ANIMATION
#define DEF_ANIMATION
#include "animation.c"

int main (int argc , char *argv[]);
SDL_Init(SDL_INIT_VIDEO); 
SDL_WM_Setcaption("SDL Move","SDL Move");
SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,0,0);
SDL_SetColorKey(sprite,SDL_SRCCOLORKEY | SDL_RLEACCEL, colorkey);
SDL_PollEvent(&event));
SDL_KEYDOWN;
SDL_GetKeyState(NULL);
SDL_BlitSurface(sprite,NULL,screen,&rcGrass);

#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480
#define SPRITE_SIZE    32


