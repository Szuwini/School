#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void random(int n)
{
    double a,Xn;
    a = (((double)rand()*(1) / RAND_MAX) - 1) *(-1);
    int counter = 1;
    cout << counter << ":" << a;
    while(n != 0)
    {
        Xn = 1 - a*a;
        counter = counter+1;
        cout <<"\n" << counter << ":" << Xn;
        a = Xn;
        n = n-1;
    }

}


int main()
{
    int n;
    srand (time(NULL));
    cout << "Podaj ile chcesz liczb wylosowac: " << endl;
    cin >> n;
    random(n);
    return 0;
}
