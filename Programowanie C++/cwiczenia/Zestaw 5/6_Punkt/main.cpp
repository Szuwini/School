#include <iostream>

using namespace std;

class Punkt
{
private :
    int x;
    int y;
public:
    void wczytaj();
    int wypisz();

};

void Punkt::wczytaj()
{
    cout << "Podaj wspolrzedne x oraz y: ";
    cin >> x >> y;
}

int Punkt::wypisz()
{
    cout << "\nX: "<<x<<"\nY: "<<y;
}


int main()
{
    Punkt z;
    z.wczytaj();
    z.wypisz();
    return 0;
}
