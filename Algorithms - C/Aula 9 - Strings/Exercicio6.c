#include<stdio.h>
#include<string.h>


int main(){

    char frase[50], letra, temp;

    printf("Frase: ");
    fgets(frase, 50, stdin);
    
    printf("letra: ");
    scanf("%c", &letra);

    for (int i = 0; i < strlen(frase); i++)
    {
        temp = frase[i];

        if (letra == temp)
        {
            frase[i] = '*';
        }
        
    }
    
    puts(frase);
    



    return 0;
}