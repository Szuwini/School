#include <iostream>
#include <SDL2/SDL.h>
#include <string>
#include <math.h>

#define PI 3.1415926535

using namespace std;


int Draw(SDL_Renderer *renderer,float x1,float y1,float lenght,int angle,int n)
{
    float x2,y2;
    x2 = x1 + lenght * cos(angle*PI/300);
    y2 = y1 + lenght * sin(angle*PI/300);

    if(n==0){
        return 0;
    }
    else{
        if(n < 5){
            SDL_SetRenderDrawColor( renderer, 0,128,0, 255);
        }
        else{
        SDL_SetRenderDrawColor( renderer, 150,75,0, 255);}
        SDL_RenderDrawLine( renderer, x1,y1,x2,y2);
        SDL_RenderPresent( renderer );
        Draw(renderer,x2,y2,lenght*0.83, angle+50, n-1);//+27
        Draw(renderer,x2,y2,lenght*0.83, angle-50, n-1);//-57
    }


}


int main()
{
    enum { Width = 720, Height = 720 };
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "SDL_Init(SDL_INIT_VIDEO)\n";
        return -1;
    }
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_CreateWindowAndRenderer(Width, Height, SDL_WINDOW_OPENGL | SDL_WINDOW_BORDERLESS, &window, &renderer);
    SDL_SetWindowPosition(window, 65, 50);
    SDL_SetRenderDrawColor( renderer, 0,0,0, 255);
    SDL_RenderClear( renderer );

    SDL_SetRenderDrawColor( renderer, 255,255,255, 255);

    Draw(renderer,400,500,90,-150,12);

  SDL_RenderPresent(renderer);
  std::cin.get();

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  SDL_Quit();
    return 0;
}
