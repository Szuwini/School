#include <stdio.h>
#include <stdlib.h>

typedef struct wezel_{
    struct wezel_ *nastepny;
    int wartosc;
}wezel;

wezel *pierwszy;

void dopisz(int wartosc){
    wezel *x=malloc(sizeof(wezel));
    x->wartosc=wartosc;
    x->nastepny=pierwszy;
    pierwszy = x;
}

void wypisz_komorke(wezel *p){
    printf("%d\n",p->wartosc);
}

void wypisz_liste(){
    for (wezel *p=pierwszy;p !=NULL;p=p->nastepny)
        wypisz_komorke(p);
}

void sortuj(wezel *pierwszy){
    int swapped, i;
    wezel *ptr1;
    wezel *lptr = NULL;

    do{
        swapped = 0;
        ptr1 = pierwszy;

        while(ptr1->nastepny !=lptr){
            if(ptr1->wartosc > ptr1->nastepny->wartosc)
            {
                swap(ptr1, ptr1->nastepny);
                swapped = 1;
            }
            ptr1 = ptr1->nastepny;
        }
        lptr = ptr1->nastepny;
    }while(swapped);
}

void swap(wezel *a, wezel *b){
    int temp = a->wartosc;
    a->wartosc = b->wartosc;
    b->wartosc = temp;
}

int main()
{
int a;
do{
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    dopisz(a);
}while(a!=0);
wypisz_liste();
printf("\n");
sortuj(pierwszy);
wypisz_liste();
}
