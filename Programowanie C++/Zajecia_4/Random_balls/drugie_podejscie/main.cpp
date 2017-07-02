#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2_gfxPrimitives.h>

using namespace std;

int Collide(int circleX,int circleY,int wektor)
{
    //int wektor=0;

    if(circleX == 620){
        wektor = 1;

    }
    else if(circleX == 1){
        wektor = 0;
    }

    return wektor;
}


int animated(SDL_Renderer *renderer,int circleX, int circleY,int circleR,int n,int wektor)
{

    if(Collide(circleX,circleY,wektor) == 0){
        circleX = circleX+10;

    }
    else {
        circleX = circleX-100;
    }
    n = n-1;
    filledCircleColor(renderer, circleX, circleY, circleR, 0xFF0000FF);
    SDL_RenderPresent(renderer);
    SDL_Delay(10);
    filledCircleColor(renderer, circleX, circleY, circleR, 0xFF0000FF);
    SDL_SetRenderDrawColor(renderer, 0,0,0,255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    return animated(renderer,circleX,circleY, circleR,n-1,wektor);


}


int main()
{
   SDL_Window* window ;
   SDL_Renderer* renderer ;
   SDL_Texture *texture;
   SDL_Event event;
   SDL_Rect r;



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
   Sint16 circleY = 300;
   int n = 10;
   int i = 10;

    while (1) {
                i= i+20;
                SDL_PollEvent(&event);
                if(event.type == SDL_QUIT)
                        break;
                r.x=rand()%500;
                r.y=rand()%500;

                SDL_SetRenderTarget(renderer, texture);
                SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
                SDL_RenderClear(renderer);
                filledCircleColor(renderer, circleX+i, circleY, circleR, 0xFF0000FF);
                SDL_Delay(20);
                SDL_SetRenderTarget(renderer, NULL);
                SDL_RenderCopy(renderer, texture, NULL, NULL);
                SDL_RenderPresent(renderer);
        }


       //animated(renderer,circleX,circleY+80, circleR,n,wektor);



   /*while(n>0){
   //SDL_SetRenderDrawColor(renderer, 252,3,0,255);
   filledCircleColor(renderer, circleX, circleY, circleR, 0xFF0000FF);
   SDL_RenderPresent(renderer);
   SDL_Delay(10);
   SDL_SetRenderDrawColor(renderer, 0,0,0,255);
   SDL_RenderClear(renderer);
   filledCircleColor(renderer, circleX+20, circleY, circleR, 0xFF0000FF);
   SDL_RenderPresent(renderer);


   //circleX = circleX+70;
   //circle = filledCircleColor(renderer, circleX, circleY+50, circleR, 0xFF0000FF);
   n = n-1;
   }*/




   SDL_RenderPresent(renderer);

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

