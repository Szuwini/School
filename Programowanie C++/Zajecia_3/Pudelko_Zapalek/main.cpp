#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;


int srednia(int n)
{
    int licznik = 0;
    int liczba_prob = 0;
    int wylosowana;
    int tab[n];

    for(int i=0;i<=n;i++){
        tab[i] = 0;
    }

    while (licznik < n){

        wylosowana = rand() % n + 0;

        if(tab[wylosowana]==0){
            tab[wylosowana] = 1;
            licznik++;
        }
        liczba_prob++;
    }
    cout << liczba_prob << ",";
    return liczba_prob;
}


int main()
{
    int n,M;
    int suma = 0;
    int a = 0;
    cout << "Podaj ilosc zapalek: " << endl;
    cin >> n;
    cout << "\nPodaj ilosc pudelek: ";
    cin >> M;

    srand( 7 );

    while (a != M-1){
        suma += srednia(n);
        a++;
    }
    cout << "Srednia: " << suma/M;

}
