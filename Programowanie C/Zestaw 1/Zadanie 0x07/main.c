#include <stdio.h>
#include <stdlib.h>


int main()
{
    char napis[]="Przykladowy napis";
    static int i=0, a,j=0,c;
    float b=0.0;
    while(napis[i] != '\0')
    {
        while(napis[a++] != '\0');
        i++;
        //c++;
        printf("i to %d c to %d",i,i);

    }
    for(i;i>0;i--){
    if(napis[i] =='a'){j++;}
    }
    b = ((double)j)/i*100;
    printf("Czestotliwosc wystepowania zadanego znaku to  %f procent",b);


}


