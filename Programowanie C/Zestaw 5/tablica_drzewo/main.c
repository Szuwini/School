#include<stdlib.h>
#include<stdio.h>

typedef struct Drzewo {
    float dane;
    struct Drzewo *prawy, *lewy;
}Drzewo;

typedef struct Drzewo wezel;

wezel *korzen=NULL;

void wstaw(wezel **drzewo, float wartosc)
{
    wezel *temp = NULL;
    if(*drzewo==NULL)
    {
        wezel *temp =malloc(sizeof(wezel));
        temp->lewy = NULL;
        temp->prawy = NULL;
        temp->dane = wartosc;
        *drzewo = temp;
        return;
    }

    if(wartosc < (*drzewo)->dane)
    {
        wstaw(&(*drzewo)->lewy, wartosc);
    }
    else if(wartosc > (*drzewo)->dane)
    {
        wstaw(&(*drzewo)->prawy, wartosc);
    }

}

void preorder(wezel *drzewo)
{
    if (drzewo)
    {
        printf("%.2f\n",drzewo->dane);
        preorder(drzewo->lewy);
        preorder(drzewo->prawy);
    }

}

void inorder(wezel *drzewo)
{
    if (drzewo)
    {
        inorder(drzewo->lewy);
        printf("%.2f\n",drzewo->dane);
        inorder(drzewo->prawy);
    }
}

void postorder(wezel *drzewo)
{
    if (drzewo)
    {
        postorder(drzewo->lewy);
        postorder(drzewo->prawy);
        printf("%.2f\n",drzewo->dane);
    }
}

void main()
{

    //float tablica[7]={9.14,4.18,5.16,6.2,12.25,17.99,2.8};
    float tablica[7]={2.80,4.18,5.16,6.20,9.14,12.25,17.99};
    for (int i=0;i!=7;i++){
        wstaw(&korzen,tablica[i]);
    }

    printf("Pre Order \n");
    preorder(korzen);

    printf("In Order \n");
    inorder(korzen);

    printf("Post Order \n");
    postorder(korzen);
}
