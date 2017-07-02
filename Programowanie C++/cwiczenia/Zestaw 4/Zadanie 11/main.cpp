#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"Wpisz dzialanie: ";
    cin >>a>>c>>b;
    //cout <<"\nPodaj operator: ";
    //cin >> c;
    //cout<<"\nPodaj druga liczbe: ";
    //cin >> b;

    switch(c)
    {
        case '*':
            cout <<a*b;
            break;
        case '/':
            cout << a/b;
            break;
        case '+':
            cout << a+b;
            break;
        default:
            cout << "Podales zly operator";

    }

    return 0;
}
