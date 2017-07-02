#include <iostream>

using namespace std;

void Pitagoras(int n)
{
    int a,b,c;
    for(a = 1; a <= n - 2; a++){
        for(b = a + 1; b <= n - 1; b++){
            for(c = b + 1; c <= n; c++){
                if(a*a + b*b == c*c){
                    cout << a <<"^2" << "*" << b <<"^2"<< "=" << c <<"^2"<< endl;
                }
            }
        }
    }
}


int main()
{
    int n;
    cout << "Podaj liczbe naturalna n: " << endl;
    cin >> n;
    Pitagoras(n);
    return 0;
}
