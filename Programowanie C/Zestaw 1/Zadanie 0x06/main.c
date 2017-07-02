#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
char a[]="Zamiana   tabulacji na    spacje";



    for (int i=0; i<100;i++)
    {
        if (a[i]==' ')
        {for(int j=0;j<4;j++){
            a[i]='____';}
        }
     }
     printf("Zmienione zdanie to: %s",a);
}

