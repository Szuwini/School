#include <iostream>

using namespace std;

class liczba {
private:
    int wart_licz;
public :
    void wczytaj();
    void wypisz();
    void nadaj_w(int);
    int wartosc();
    unsigned int abs();
};

void liczba::wczytaj()
{
    cout<<" Podaj wartosc liczby: ";
    cin >> wart_licz;
}

void liczba::wypisz()
{
    cout<<" Przechowywana liczba to: "<<wart_licz;;
}

void liczba::nadaj_w(int n)
{
    wart_licz=n;
}

int liczba::wartosc()
{
    return wart_licz;
}

unsigned int liczba::abs()
{
    if (wart_licz >=0){
        return wart_licz;
    }
    else{
        return -wart_licz;
    }
}

int main()
{
    liczba numer;
    numer.wczytaj();
    numer.wypisz();
    return 0;
}
