#include<stdio.h>

int main(){

    char letra;

    printf("Informe uma letra (letra minuscula): ");
    scanf("%c", &letra);
    

        switch(letra) {
        case 'a':{
            printf("VOGAL");
            break;
        } 
        case 'e':{
            printf("VOGAL");
            break;
        } 
        case 'i':{
            printf("VOGAL");
            break;
        } 
        case 'o':{
            printf("VOGAL");
            break;
        } 
        case 'u':{
            printf("VOGAL");
            break;
        }
        default:{
            printf("CONSOANTE");
            break;
        }
    }
    
    return 0;
}