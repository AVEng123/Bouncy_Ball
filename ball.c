#include <stdio.h>
#include <SDL2/SDL.h>

#define WIDTH 900
#define HEIGHT 600



int main(){


    printf("Hello Bouncy Ball!\n");
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Bouncy Ball", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
    SDL_Surface* surface = SDL_GetWindowSurface(window);

    SDL_Rect rect = (SDL_Rect) {200,200,200,200};
    SDL_FillRect(surface, &rect, 0xffffffff);
    SDL_UpdateWindowSurface(window);



    SDL_Delay(3000);
}