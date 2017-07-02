#include <iostream>

using namespace std;

//1-trojkat,2-prosotkat,3-rownoleglobok,4-trapez

typedef struct figura{
    int fig;
    int a;
    int b;
    int h;
}figura;


int Pole(figura f)
{
    if(f.fig == 1){
        return f.a*f.h/2;
    }
    else if(f.fig == 2){
        return f.a*f.b;
    }
    else if(f.fig == 3){
        return f.a*f.h;
    }
    else if(f.fig == 4){
        return ((f.a+f.b)/2)*f.h;
    }
}


int main()
{
    figura f = {2,10,10,5};
    int c = Pole(f);
    cout << c;

}
