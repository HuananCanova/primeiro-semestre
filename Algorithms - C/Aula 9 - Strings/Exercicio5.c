#include<stdio.h>
#include<string.h>


int main(){

    char frase[50], temp;
    int eBranco = 0, diff = 0;

    printf("Frase: ");
    fgets(frase, 50, stdin);

    for (int i = 0; i < strlen(frase); i++)
    {
        // temp = frase[i];
        if (frase[i] == ' ')
        {
            eBranco++;
        }else{
            diff++;
        }
        
    }
    
    printf("Espacos em branco: %d \n", eBranco);
    printf("Caracteres diferentes: %d \n", (diff-1));


    return 0;
}