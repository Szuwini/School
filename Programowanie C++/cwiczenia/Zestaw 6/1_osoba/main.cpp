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


int main()
{
    Osoba p("ja","on");
    p.wczytaj();
    p.wypisz();
    return 0;
}
