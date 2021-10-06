#include<stdio.h>

int main(){

    char sexo;
    float altura, peso;

    printf("Inform your gender 'm' or 'f': ");
    scanf("%c", &sexo);
    fflush(stdin);

    printf("Inform your height: ");
    scanf("%f", &altura);


    switch(sexo){
        case 'm':{
            peso = (72.7*altura) - 58;
           break;
        }
        case 'f':{
            peso = (62.1*altura) - 44;
            break;
        }
        default:{
            printf("Invalid gender.");
            break;
        }

    }
    printf("Ideal weight (m): %.2f", peso);
    return 0;
    
}