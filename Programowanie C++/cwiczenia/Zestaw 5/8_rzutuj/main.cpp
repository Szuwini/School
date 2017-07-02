#include <iostream>

using namespace std;

class Punkt3;

class Punkt
{
private:
    friend Punkt rzutuj(Punkt3);
    int x,y;
public:
    void wczytaj();
    int wypisz();
};

class Punkt3
{
private:
    friend Punkt rzutuj(Punkt3);
    int x,y,z;
public:
    void wczytaj();
    void wypisz();
};



Punkt rzutuj(Punkt3 p)
{
    Punkt s;
    s.x = p.x;
    s.y = p.y;

    return s;
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
    rzutuj(p);

    return 0;
}
