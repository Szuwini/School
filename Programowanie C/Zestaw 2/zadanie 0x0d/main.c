#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int a;
    int b;
    int c;                // Tworzymy zmienną c o typie int
    scanf("%d\n",&a);
    scanf("%d",&b);
    x = a;
    y = b;
    while(b != 0)             // Tworzymy pętlę działającą gdy b ≠ 0
    {
        c = a % b;              // Zmienna c przyjmuje wartość a modulo b
        a = b;                // Przypisujemy b do a
        b = c;                // Przypisujemy c do b
    }
    printf("NWD wynosi: %d\n",a);
    printf("NWW wynosi: %d",(x+y)/a);
    return a;                 // Zwracamy a, czyli żądane NWD(a,b)
}
