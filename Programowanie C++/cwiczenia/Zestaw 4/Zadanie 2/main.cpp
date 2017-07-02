#include <iostream>

using namespace std;

int multiply(int n, int m)
{
    if (m==0){
        return n*n;
    }
    else{
        return n*m;
    }

}


int main()
{
    int n,m,c;
    cout << "Podaj dwie liczby" << endl;
    cin >> n >> m;
    c = multiply(n,m);
    cout << c;
    return 0;
}
