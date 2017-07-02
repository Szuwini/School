#include <iostream>

using namespace std;

int fun(int *wskaznik1, int *wskaznik2)
{
    //jesli wskaznik1 jest wiekszy to zamien

    if(*wskaznik1 > *wskaznik2){
        int a = *wskaznik1;
        *wskaznik1 = *wskaznik2;
        *wskaznik2 = a;
    }
    cout <<"\nDrugie: "<<*wskaznik1<<","<<*wskaznik2;
}


int main()
{

    int liczba1 =80;
    int liczba2 = 50;
    int *wskaznik1 = &liczba1;
    int *wskaznik2 = &liczba2;
    cout <<"Pierwsze: "<<*wskaznik1<<","<<*wskaznik2;
    fun(wskaznik1,wskaznik2);


    return 0;
}
