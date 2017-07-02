#include <stdio.h>
#include <stdlib.h>



void mnozenie_skalar(int macierz[2][2])
{
    int x;
    printf("Podaj skalar: ");
    scanf("%d",&x);
    for(int i=0;i!=2;i++){
        for(int j=0;j!=2;j++){
            macierz[i][j]*=x;
        }
    }
    printf("Macierz po pomnozeniu przez skalar:");
    drukuj(macierz);
}

void mnozenie_macierzy(int macierz[2][2],int macierz2[2][2])
{
    int macierz3[2][2];
    macierz3[0][0]=(macierz[0][0]*macierz2[0][0])+(macierz[0][1]*macierz2[1][0]);
    macierz3[0][1]=(macierz[0][0]*macierz2[0][1])+(macierz[0][1]*macierz2[1][1]);
    macierz3[1][0]=(macierz[1][0]*macierz2[0][0])+(macierz[1][1]*macierz2[1][0]);
    macierz3[1][1]=(macierz[1][0]*macierz2[0][1])+(macierz[1][1]*macierz2[1][1]);
    printf("Macierz po przemnozeniu dwoch macierzy:\n");
    drukuj(macierz3);
}

void wyznacznik(int macierz[2][2])
{
    int wyznacznik=0;
    wyznacznik = (macierz[0][0]*macierz[1][1])-(macierz[0][1]*macierz[1][0]);
    printf("Wyznacznik wynosi: %d",wyznacznik);
}

void drukuj(int macierz[2][2])
{
    for(int i=0;i!=2;i++){
            printf("\n");
        for(int j=0;j!=2;j++){
            printf("| %d",macierz[i][j]);
        }
    }
    printf("\n");
}

int main()
{

    int macierz[2][2]={1,2,3,4};
    int macierz2[2][2]={5,6,7,8};
    //mnozenie_skalar(macierz);
    printf("\n");
    mnozenie_macierzy(macierz,macierz2);
    wyznacznik(macierz);


    return 0;
}
