#include <iostream>

using namespace std;

void NWD1(int a, int b)
{
    while (true){
        if (a==b){
            cout << "Metoda odejmowania,NWD wynosi: " << a << endl;
            break;
        }
        else if(a < b){
            b = b-a;
        }
        else if(b < a){
            a = a-b;
        }
   }
}

void NWD2(int a, int b)
{
    int r;
    while(true){
        if(b==0){
            cout << "Metoda dzielenia,NWD wynosi: "<< a << endl;
            break;
        }
        r = a%b;
        a = b;
        b = r;
    }
}


int main()
{
    int a,b;
    cout << "Podaj 2 nie ujemne liczby: "<< endl;
    cin >> a >> b;
    NWD1(a,b);
    NWD2(a,b);
    return 0;
}
