#include "stdio.h"
#include "math.h"

using namespace std;

int main()
{
    int n;
    int i = 2;

    printf("Podaj wartosc x: \n");
    scanf("%d", &n);
    printf("Czynniki pierwsze liczby %d to:", n);

    while (i <= sqrt(n)) {
        while ((n % i) == 0) {
            n /= i;
            printf(" %d", i);
            }
        i++;
        }
    if (n > 1){
        printf(" %d", n);
    }
}


