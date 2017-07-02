#include<stdlib.h>
#include<stdio.h>

typedef struct Drzewo {
    int dane;
    struct Drzewo *prawy, *lewy;
}Drzewo;

typedef struct Drzewo wezel;

wezel *korzen=NULL;

void insert(wezel **drzewo, int wartosc)
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
        insert(&(*drzewo)->lewy, wartosc);
    }
    else if(wartosc > (*drzewo)->dane)
    {
        insert(&(*drzewo)->prawy, wartosc);
    }

}

void preorder(wezel *drzewo)
{
    if (drzewo)
    {
        printf("%d\n",drzewo->dane);
        preorder(drzewo->lewy);
        preorder(drzewo->prawy);
    }

}

void inorder(wezel *drzewo)
{
    if (drzewo)
    {
        inorder(drzewo->lewy);
        printf("%d\n",drzewo->dane);
        inorder(drzewo->prawy);
    }
}

void postorder(wezel *drzewo)
{
    if (drzewo)
    {
        postorder(drzewo->lewy);
        postorder(drzewo->prawy);
        printf("%d\n",drzewo->dane);
    }
}

void main()
{
    insert(&korzen, 9);
    insert(&korzen, 4);
    insert(&korzen, 15);
    insert(&korzen, 6);
    insert(&korzen, 12);
    insert(&korzen, 17);
    insert(&korzen, 2);


    printf("Pre Order \n");
    preorder(korzen);

    printf("In Order \n");
    inorder(korzen);

    printf("Post Order \n");
    postorder(korzen);
}
