#include <iostream>

using namespace std;

double pot(double n, unsigned int m)
{
    return n*m;
}

int pot(int n, unsigned int m)
{
    return n*m;
}

unsigned int pot(unsigned int n, unsigned int m)
{
    return n*m;
}


int main()
{
    int c,d,e;
    double n = 20;
    int z = 30;
    unsigned int x = 15;
    unsigned int m = 10;
    c = pot(n,m);
    d = pot(z,m);
    e = pot(x,m);
    cout << "Pot double: "<< c << "\nPot int: " << d << "\n Pot unsigned int: " << e;
    return 0;
}
