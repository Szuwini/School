#include <stdio.h>
#include <stdlib.h>

typedef struct stack_{
    int data;
    struct stack_ *next;
}stack;

stack *head;

void push(int data)
{
    if(isdigit(data)){
    stack *x = malloc(sizeof(stack));
    x->data=data;
    x->next=head;
    head=x;}
}


void Size()
{
    int i=0;
    for(stack *q=head;q!=NULL;q=q->next)
    {
        i++;
    }
    printf("Wielkos stosu to: %d\n", i);
}

void Top()
{
    stack *w=head;
    w = w->data;

    printf("Element na gorze stosu to %d\n",w);
}

void drukuj()
{
    for(stack *p=head;p!=NULL;p=p->next)
    {
        printf("%d\n",p->data);
    }
}
int main()
{
    push(5);
    push(7);
    push(8);
    push(9);
    drukuj();
    Size();
    //Top();

}
