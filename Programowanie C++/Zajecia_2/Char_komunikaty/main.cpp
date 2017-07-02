#include <iostream>
#include <cctype>
#include <stdio.h>

using namespace std;

int main()
{
    char a;
    cout << "Podaj litere: ";
    cin >> a;
    if ((a > 47) && (a < 58)) {
        cout << a << "\tNie jest litera" << endl;}

    else if((a > 96) && (a < 123)){
        printf("Duza litera to: %c", toupper(a));}

    else if((a >64) && (a <91)){
        printf("Mala litera to: %c", tolower(a));}
}
