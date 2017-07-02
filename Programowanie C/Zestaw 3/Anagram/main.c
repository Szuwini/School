#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool czyAnagram (const char *A, const char *B)
{
    unsigned litery['Z'-'A'+1];
    int i=0;

    for(i='A';i<='Z';i++)
        litery[i-'A'] = 0;

    for(i=0;A[i] !=0;i++){
        if(isalpha(A[i])){
            litery[toupper(A[i]) - 'A']++;
        }
    }

    for(i=0;B[i] != 0;i++){
        if(isalpha(B[i])){
            litery[toupper(B[i])-'A']--;
        }
    }
    for(i='A';i<='Z';i++){
        if(litery[i-'A'] !=0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    if(czyAnagram("Kapa","apakw")){
        printf("Anagram");
    }
    else{
        printf("Nie Anagram");
    }
}
