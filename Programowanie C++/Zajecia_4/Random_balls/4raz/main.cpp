#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2_gfxPrimitives.h>

using namespace std;




int Collide(int circleX,int circleY,int wektor)
{
    if(circleX > 11 && circleX < 619 && circleY > 11 && circleY < 459){
        wektor = 0;
    }

    else if(circleX == 620){
        wektor = 1;

    }
    else if(circleX ==10){
        wektor = 2;
    }
    else if(circleY == 460){
        wektor = 3;

    }
    else if(circleY ==10){
        wektor = 4;
    }

    return wektor;
}

void animated(SDL_Renderer *renderer,SDL_Texture *texture,int circleX, int circleY,int circleR)
{


                SDL_SetRenderTarget(renderer, texture);
                SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
                SDL_RenderClear(renderer);
                filledCircleColor(renderer, circleX, circleY, circleR, 0xFF0000FF);
                SDL_Delay(20);
                SDL_SetRenderTarget(renderer, NULL);
                SDL_RenderCopy(renderer, texture, NULL, NULL);
                SDL_RenderPresent(renderer);
}


int main()
{
   SDL_Window* window ;
   SDL_Renderer* renderer ;
   SDL_Texture *texture;
   SDL_Event event;


   if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
   {
      std::cout << "Could not initialise" << std::endl;
      return 1;
   }

   window = SDL_CreateWindow("Elastic_Collision",
                             SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED,
                             640,
                             480,
                             SDL_WINDOW_SHOWN);
   if(!window)
   {
      std::cout << "Could not create the window" << std::endl;
      return 1;
   }

   renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
   texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 640, 480);
   SDL_RenderClear(renderer);

   Sint16 circleR = 25;
   Sint16 circleX = 200;
   Sint16 circleY = 200;
   int vx=10;
   int vy=2;
   int z = 0;
   int wektor = 0;


        while(1){
            z++;
            if(Collide(circleX,circleY,wektor) == 0){
                circleX = circleX+vx;
                circleY = circleY+vy;

            }
            else if(Collide(circleX,circleY,wektor)==1){
                circleX = circleX-vx;
                vx = -vx;
            }
            else if(Collide(circleX,circleY,wektor)==2){
                circleX = circleX+(-vx);
                vx = -vx;
            }
            else if(Collide(circleX,circleY,wektor)==3){
                circleY = circleY+(-vy);
                vy = -vy;
            }
            else if(Collide(circleX,circleY,wektor)==4){
                circleY = circleY+(-vy);
                vy = -vy;
            }

            animated(renderer,texture,circleX,circleY, circleR);
        }

   bool run = true;
   while(run)
   {
      SDL_Event event;
      while (SDL_PollEvent(&event))
      {
         if(event.type == SDL_QUIT)
         {
            run = false;
         }
      }

   }

   SDL_Quit();
   return 0;
}

