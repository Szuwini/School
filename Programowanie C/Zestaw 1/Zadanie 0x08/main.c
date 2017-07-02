#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{


    static int max=100; static int min=0; static int liczba = 0;
    char a[200];char s1[]="tak";char s2[] ="nie";char s3[] = "ok";
    printf("Pomyśl liczbe od 0 do 100 a ja postaram się ją zgadnąć. Odpowiadaj tylko tak lub nie. Jeśli zgadne liczbę wpisz ok. \n");

    do {
        srand(time(NULL));
        liczba = rand()%(max-min)+min;
        printf("Czy wymyślona liczba jest większa od  %d\n",  liczba);
        scanf("%s", &a);
        if(strcmp(s1,a) == 0){
        min = liczba+1;
        }
        else if(strcmp(s2,a) == 0){
        max = liczba-1;
        }

    } while(strcmp(s3,a) !=0);


    return 0;
}
