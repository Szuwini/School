#include <iostream>

using namespace std;

class Osoba
{
    private:
        string imie;
        string nazwisko;
    public:
        Osoba(string a,string b);
        void wczytaj();
        void wypisz();
};

class tab_osob
{
private:
    Osoba **tab;
public:
    tab_osob(int n, string imie, string nazwisko);
    ~tab_osob();
    Osoba& aat(int a);

};

Osoba::Osoba(string a,string b)
{
    imie = a;
    nazwisko = b;
}

void Osoba::wczytaj()
{
    cout << "Podaj imie i naziwsko";
    cin >>imie>>nazwisko;
}

void Osoba::wypisz()
{
    cout << imie << nazwisko << endl;
}

tab_osob::tab_osob(int n, string imie, string nazwisko)
{
    tab = new Osoba*[n];
    int i = 0;
    while (i < n){
        tab[i++] = new Osoba(imie,nazwisko);
    }
}

tab_osob::~tab_osob()
{
    delete []tab;
}

Osoba& tab_osob::aat(int a)
{
    return *tab[a];
}

int main()
{
    tab_osob x(4,"Jan","Kowalski");
    Osoba y = x.aat(2);
    y.wypisz();
    y.wczytaj();
    y.wypisz();
    return 0;
}
