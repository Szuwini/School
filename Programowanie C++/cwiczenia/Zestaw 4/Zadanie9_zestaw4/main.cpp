#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int srednia(int tab[10][10],int x,int y)
{
    int suma=0;
    int k = 0;
    int z;
    for(int i=0;i!=x;i++){
        if(suma/10 > k){
            k=suma/10;
            z = i;}
        suma = 0;
        for(int j=0;j!=y;j++){
            suma += tab[i][j];
        }
    }
    cout <<"\nNajwieksza srednia wartosc to: "<<k<<" i znajduje sie w wierszu: "<<z;
}

int main()
{
    srand( time( NULL ) );
    int a;
    int tab[10][10];


    for(int i=0;i!=10;i++){
        for(int j=0;j!=10;j++){
            a = rand()%100;
            tab[i][j]=a;
        }
    }
        for(int i=0;i!=10;i++){
        cout<<"\n";
        for(int j=0;j!=10;j++){
            cout <<tab[i][j]<<',';
        }
    }
    srednia(tab,10,10);
    return 0;
}
