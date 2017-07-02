#include <iostream>
#include <vector>

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
    cout << "Podaj imie i nazwisko\n";
    cin >>imie>>nazwisko;
}

void Osoba::wypisz()
{
    cout << imie << " " <<nazwisko << endl;
}

vector<Osoba> Wektor(int n)
{

    return  vector<Osoba>(n,Osoba("Jan","Kowalski"));
}

int main()
{
    int i=4;
    vector<Osoba> a = Wektor(i);
    for(int j=0; j < i;j++){
        a[j].wypisz();
    }


    return 0;
}
