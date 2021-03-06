#include "SDL.h"
#include <SDL2_gfxPrimitives.h>


/* Moving Rectangle */
int main(int argc, char *argv[])
{
        SDL_Window *window;
        SDL_Renderer *renderer;
        SDL_Texture *texture;
        SDL_Event event;
        SDL_Rect r;

        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
                SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
                return 3;
        }

        window = SDL_CreateWindow("SDL_CreateTexture",
                        SDL_WINDOWPOS_UNDEFINED,
                        SDL_WINDOWPOS_UNDEFINED,
                        640, 480,
                        SDL_WINDOW_RESIZABLE);

        r.w = 100;
        r.h = 50;

        renderer = SDL_CreateRenderer(window, -1, 0);

        texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 640, 480);
           Sint16 circleR = 25;
   Sint16 circleX = 200;
   Sint16 circleY = 300;


        while (1) {

                SDL_PollEvent(&event);
                if(event.type == SDL_QUIT)
                        break;
                r.x=rand()%500;
                r.y=rand()%500;

                SDL_SetRenderTarget(renderer, texture);
                SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
                SDL_RenderClear(renderer);
                filledCircleColor(renderer, circleX, circleY, circleR, 0xFF0000FF);
                SDL_Delay(20);
                SDL_SetRenderTarget(renderer, NULL);
                SDL_RenderCopy(renderer, texture, NULL, NULL);
                SDL_RenderPresent(renderer);
        }
        SDL_DestroyRenderer(renderer);
        SDL_Quit();
        return 0;
}
