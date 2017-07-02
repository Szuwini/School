#include <iostream>
#include <gst/gst.h>

using namespace std;

class portfel
{
private:
    double kwota;
public:
    void inicjuj();
    void zarobki(double a);
    void wydatki(double b);
    double zawartosc();
};

void portfel::inicjuj()
{
    kwota = 0;
}

void portfel::zarobki(double a)
{
    kwota =+ a;
}

void portfel::wydatki(double b)
{
    kwota = kwota-b;
}

double portfel::zawartosc()
{
    return kwota;
}

int main()
{
    portfel c;
    c.inicjuj();
    c.zarobki(100);
    c.wydatki(50);
    cout << c.zawartosc() << endl;
    return 0;
}
