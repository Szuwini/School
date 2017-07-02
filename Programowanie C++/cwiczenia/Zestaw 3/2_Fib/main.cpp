#include<iostream>
#include<cstdlib>
using namespace std;

void fib(int n)
{
     int a = 0, b = 1;

     for(int i=0;i != n;i++)
     {
            b = b+a;
            a = b-a;
     }
     cout<<a<<endl;
}

int main()
{
    int n;
    cout<<"Podaj ktory wyraz ciagu chcesz poznac: ";
    cin>>n;
    fib(n);

    return 0;
}
