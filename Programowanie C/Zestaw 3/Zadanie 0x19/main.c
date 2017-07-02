#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 100





int main()
{
    float x[3]={0.25,0.5,0.25};
    float sygnal[ROZMIAR];
    for (int i=0;i<100;i++){
        sygnal[i]=i;
    }
    for (int i=0;i<100;i++){
        printf("%f\n",sygnal[i]);
    }
    for (int j=0;j<100;j++){
        sygnal[j]=sygnal[j-1]*x[0]+sygnal[j]*x[1]+sygnal[j+1]*x[2];
    }
    for(int z=0;z<100;z++){
        printf("%f\n",sygnal[z]);
    }
}
