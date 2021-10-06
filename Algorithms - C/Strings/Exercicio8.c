#include<stdio.h>
#include<string.h>


int main(){

    char sA[50], sB[50], sC[100];
    int a = 0, b = 0, i = 0;

    printf("Palavra A: ");
    scanf("%s", &sA);
    
    printf("Palavra B: ");
    scanf("%s", &sB);
    
    int tamS = strlen(sA) + strlen(sB);
   

   while (sA[a] != '\0' && sB[b] != '\0')
   {
       sC[i] = sA[a];
       sC[i+1] = sB[b];

       a++;
       b++;
       i+=2;
   }

    while (sA[a] != '\0')
    {
       sC[i] = sA[a];
       i++;
       a++;
    }
    
    while (sB[b] != '\0')
    {
        sC[i] = sB[b];
        i++;
        b++;
    }
    
    sC[tamS] = '\0';

    puts(sC);
   
        

    return 0;
}