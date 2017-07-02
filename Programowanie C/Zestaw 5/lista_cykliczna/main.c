#include <stdio.h>
#include <stdlib.h>

typedef struct wezel_{
    struct wezel_ *nastepny;
    int wartosc;
}wezel;

wezel *head;

void dopisz(int wartosc){
    wezel *x=malloc(sizeof(wezel));
    x->wartosc = wartosc;
    x->nastepny = head;
    head=x;
}

unsigned rozmiar(wezel *head){
    int c = 0;
    wezel *p=head;
    //if(p)

    do{
        c++;
        p = p->nastepny;
    }while(p != head);
    printf("Rozmiar to: %d",c);
    return c;
}


int main()
{
int a;
do{
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    dopisz(a);
}while(a!=0);
rozmiar(head);

}
