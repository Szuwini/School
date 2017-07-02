#include <iostream>
#include <math.h>

using namespace std;

int srednia(int n, unsigned int tab[])
{
    int iloczyn = 1;
    double s;
    for (int i=1;i != n+1;i++){
        iloczyn = iloczyn * tab[i];
    }

    s = pow(iloczyn,1.0/n);
    cout << s;
}

int main()
{
    int n = 10;
    unsigned int tab[n];
    for (int i=1;i != n+1;i++){
        tab[i] = i;
    }
    srednia(n,tab);
    return 0;
}
