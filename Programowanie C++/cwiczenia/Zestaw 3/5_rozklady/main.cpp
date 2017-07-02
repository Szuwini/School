#include <iostream>

using namespace std;

void rozkladA(int n)
{
    int a,b;

    for(a=1;a != n/2;a++){
        for(b=1;b != n/2;b++){
            if((a*a)+(b*b)==n){
                cout <<"\na= " <<a <<" b= "<< b;
            }
        }
    }

}

void rozkladB(int n)
{
    int a,b;

    for(a=1;a != n/2;a++){
        for(b=1;b != n/2;b++){
            if((a*a)+(b*b)==n && a > b){
                cout <<"\na= " <<a <<" b= "<< b;
            }
        }
    }

}


int main()
{
    int n;
    cout << "Podaj liczbe: "<< endl;
    cin >> n;
    rozkladA(n);
    cout << "\nB";
    rozkladB(n);
    return 0;
}
