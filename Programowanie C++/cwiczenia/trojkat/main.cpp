#include <iostream>

using namespace std;

class trojkat
{
public:
    int wysokosc;
    int podstawa;
    void wczytaj();
    void wypisz();
    double pole();
};

void trojkat::wczytaj()
{
    cout << "Podaj wysokosc oraz podstawe trojkata: "<<endl;
    cin >> wysokosc >> podstawa;
}

void trojkat::wypisz()
{
    cout << "Podstawa: "<<podstawa<<" Wysokosc: "<<wysokosc<<endl;
}

double trojkat::pole()
{
    return ((podstawa*wysokosc)/2);
}

double wiekszy(trojkat a, trojkat b)
{
    if (a.pole()<b.pole()){
        b.wypisz();
    }
    else{
        a.wypisz();
    }

}

int main()
{
    trojkat a,b;
    a.wczytaj();
    b.wczytaj();
    wiekszy(a,b);
    return 0;
}
