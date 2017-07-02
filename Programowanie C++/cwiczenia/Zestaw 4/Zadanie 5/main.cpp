#include <iostream>

using namespace std;

int zamien(int &referencja, int *wskaznik)
{
    int c;
    c = referencja;
    referencja = *wskaznik;
    *wskaznik = c;

    cout <<"\nreferencja 2: " << referencja << "\n" <<"wskaznik 2: " << *wskaznik;
}


int main()
{
    int a = 10;
    int b = 20;

    int &referencja = a;
    int *wskaznik;
    wskaznik = &b;
    cout << referencja << "\n" << *wskaznik;

    zamien(referencja, wskaznik);


    return 0;
}
