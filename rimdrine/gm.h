#ifndef  ALEATOIRE_H_INCLUDED 
#define ALEATOIRE_H_INCLUDED
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>


typedef struct 
{
    char question[50];
    char rep1[50],rep2[50],rep3[50];
    int solution;
}enigme;

enigme generer();
void afficherEnigme(enigme *e, SDL_Surface * screen);
 #endif
