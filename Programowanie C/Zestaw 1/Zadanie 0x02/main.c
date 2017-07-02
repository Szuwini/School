#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    scanf("%d%d", &a, &b);
    scanf("\n%c", &c);
    if (c=='+') {
        int suma = a+b;
        printf("Wynik dodawania to %d",suma);
    }
    else if(c=='-'){
        int roznica = a-b;
        printf("Wynik odejmowania to %d",roznica);
    }
    else if(c=='*'){
        int iloczyn = a*b;
        printf("Wynik mnożenia to %d",iloczyn);
    }
    else if(c=='/'){
        float iloraz = ((double)a)/b;
        printf("Wynik dzielenia to %f",iloraz);
        }

    return 0;
}
