#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    int c=0;
    cout << "Wpisz liczby: \n";

    do{
        cin >> a;
        if(a>0 && a != 0){
        b++;}
        else if(a<0 && a != 0){
        c++;}

    }while(a!=0);
    cout << "Liczba liczb dodatnich wynosi: " << b << "\nLiczba liczb ujemnych wynosi: " << c;
}
