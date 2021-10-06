#include<stdio.h>
#include<string.h>


int main(){

    char sA[50], sB[50], sC[100];
    int j = 0, i = 0;

    printf("Palavra A: ");
    scanf("%s", &sA);
    
    printf("Palavra B: ");
    scanf("%s", &sB);
    
    int tamA = strlen(sA);
    int tamB = strlen(sB);
    int tamS = strlen(sA) + strlen(sB);

    do
    {
        if (i < tamA)
        {
            sC[j] = sA[i];
            j++;
        }
        if (i < tamB)
        {
            sC[j] = sB[i];
            j++;
        }
  
        i++;
    } while ((i < tamA) || (i < tamB));
    sC[tamS] = '\0';
    puts(sC);

    return 0;
}