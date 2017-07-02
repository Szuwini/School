#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char *tytul;
    char *autor;
    double cena;
    int ilosc;
}ksiazka;

typedef struct wezel_{
    ksiazka dane;
    struct wezel_ *nastepny, *poprzedni;
}wezel;

extern wezel *pierwszy;


int main()
{
    printf("Hello world!\n");
    return 0;
}
