#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,delta,x1,x2;
    cout << "Podaj wspolczynniki a,b oraz c";
    cin >> a >> b >> c;

    if(a==0){
        delta = pow(b,2);

        cout << "Delta wynosi: "<<delta<<"\nNie ma pierwiastkow kwadratowych";
        }
    else{
        delta = pow(b,2)+4*a*c;
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        cout << "Delta wynosi: "<<delta<<"\nPierwiastek x1: "<< x1 <<"\nPierwiastek x2: "<< x2;
    }


    return 0;
}
