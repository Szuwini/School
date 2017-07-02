#include <iostream>

using namespace std;

class Punkt3
{
    private:
        int x,y,z;
    public:
        void wczytaj();
        void wypisz();
};

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
    Punkt3 z;
    z.wczytaj();
    z.wypisz();
    return 0;
}
