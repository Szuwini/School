#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int a;
//    a = 0;
//    static int maks;
//    static int min;
//    static int kosz;
//    while (a>=0){
//        scanf("%d", &a);
//        if (a>maks){
//            maks = a;
//        }
//        else if(a<maks){
//            if (a >= 0){
//                min = a;
//                }
//            else if( a < 0){
//                kosz = a;
//            }
//        }
//
//    }
//    printf("Maks to %d, Min to %d", maks, min);
//}


 int main()
 {
     int temp=0, max=0, c=1, c_max=1, min=0, c_min = 1;
     printf("Podaj liczbe: ");
     scanf("%d", &temp);
     min = temp;
     max = temp;
     while(temp >= 0)
     {

         c += 1;

         if(temp > max)
         {
             max = temp;
             c_max = c;
         }
         if(temp < min)
         {
             min = temp;
             c_min = c;
         }
         printf("Podaj liczbe: ");
         scanf("%d", &temp);
     }
     printf("Maksymalny: %d ind: %d\nMinimalny %d in: %d\n", max, c_max, min, c_min);

     return 0;
 }

