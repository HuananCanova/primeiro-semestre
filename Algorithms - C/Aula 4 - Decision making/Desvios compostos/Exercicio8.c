#include<stdio.h>

int main(){

    char letra;

    printf("Informe uma letra: ");
    scanf("%c", &letra);
    

    if(letra == 'a' || letra == 'A'){
        printf("VOGAL");
    } else if(letra == 'e' || letra == 'E'){
        printf("VOGAL");
    } else if(letra == 'i' || letra == 'I'){
        printf("VOGAL");
    } else if(letra == 'o' || letra == 'O'){
        printf("VOGAL");
    } else if(letra == 'u' || letra == 'U'){
        printf("VOGAL");
    } else {
        printf("CONSOANTE");
    }
    
    return 0;
}