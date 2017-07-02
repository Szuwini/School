#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    cout << "Wpisz liczby dodatnie: \n";

    do{
        cin >>a;
        b++;

    }while(a>0);
    cout << "Liczba liczb dodatnich wynosi: " << b-1;
}
