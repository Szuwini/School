#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char a, x; //definiowanie zmiennych typu char
    int l;  //definiowanie zmiennej typu int
    l = 0; //ustalanie wartosci zmienej l na 0
    while( (x = getchar()) != "\n" ) { //petla ktora przypisuje do zmiennej x wartosc podana przez uzytkownika i przechodzi do nowej lini
        if( l == 0 ) {
        l = 1; //zamiana pozycji charow ze soba (pierwszy z drugim, trzeci z czwartym itd)
        a = x;
} else {
l = 0;
putchar(x); //drukowanie zmiennej
putchar(a);
}
}
return 0;

}
