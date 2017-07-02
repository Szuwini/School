#include <iostream>

using namespace std;

int a(int n, int tab1[],int tab2[], int tab3[])
{
    int suma =0;
    for(int i=0;i != n;i++){
        suma = tab1[i]+tab2[i];
        tab3[i] = suma;
        suma = 0;
    }
    for(int j=0;j != n;j++){
        cout << tab3[j]<<"\n";
    }

}

int b(int n, int tab1[],int tab2[], int tab3[])
{
    for(int i = 0; i != n; i++){
        if(tab1[i] > tab2[i]){
            tab3[i] = tab1[i];
        }
        else{
            tab3[i]=tab2[i];}
    }
        for(int j=0;j != n;j++){
        cout << tab3[j]<<"\n";
    }

}

int c(int n, int tab1[],int tab2[], int tab3[])
{
    int tab4[4];
    for(int i = 0; i != n;i++){
        tab4[i] = tab1[i];
    }
    // 3 do 1
    for(int j = 0; j != n;j++){
        tab1[j] = tab3[j];
    }
    // 2 do 3
    for(int x = 0; x != n;x++){
        tab3[x] = tab2[x];
    }
    // 1 do 2
    for(int y = 0; y != n;y++){
        tab2[y] = tab4[y];
    }
}

int main()
{
    int n = 4;
    int tab1[4] = {2,5,9,10};
    int tab2[4] = {10,60,12,8};
    int tab3[4] = {5,1,6,8};
    //a(n,tab1,tab2,tab3);
    //b(n,tab1,tab2,tab3);
    c(n,tab1,tab2,tab3);
    return 0;
}
