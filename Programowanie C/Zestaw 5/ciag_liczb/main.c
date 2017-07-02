#include <stdio.h>
#include <stdlib.h>



typedef struct lista {
    struct lista*next;
    int wartosc;
}lista;

lista *head=NULL;

void dopisz(int wartosc){
    lista *x=malloc(sizeof(lista));
    x->wartosc = wartosc;
    x->next = head;
    head=x;
}

void wypisz_komorke(lista *p){
    printf("%d\n",p->wartosc);
}

void wypisz_liste(){
    for(lista *p=head; p !=NULL; p=p->next)
        wypisz_komorke(p);
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
}
