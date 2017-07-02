#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wynik = 1;
    for(int i = 0; i <= 16; i++){
        printf("2 do potęgi %d równa się %d\t",i,wynik);
        wynik = wynik*2;
    }
    return 0;
}
