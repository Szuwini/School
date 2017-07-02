#include <iostream>

using namespace std;


class Punkt3
{
private:
    friend class Punkt;
    int x,y,z;
public:
    void wczytaj();
    void wypisz();
};

class Punkt
{
private:
    int x,y;
public:
    void rzutuj(Punkt3 p);
    void wczytaj();
    int wypisz();
};


void Punkt::rzutuj(Punkt3 p)
{
    x = p.x;
    y = p.y;

}

void Punkt::wczytaj()
{
    cout << "Podaj wspolrzedne x oraz y: ";
    cin >> x >> y;
}

int Punkt::wypisz()
{
    cout << "\nX: "<<x<<"\nY: "<<y;
}

void Punkt3::wczytaj()
{
    cout << "Podaj wspolrzedne x,y,z: ";
    cin >>x>>y>>z;
}

void Punkt3::wypisz()
{
    cout << "\nX wynosi: "<<x<<"\nY wynosi: "<<y<<"\nZ wynosi: "<<z;
}

int main()
{
    Punkt3 p;
    Punkt s;
    p.wczytaj();
    s.rzutuj(p);

    return 0;
}
