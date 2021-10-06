#include<stdio.h>

int main(){

    float nota1, nota2, nota3, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    if(nota1 > nota3 && nota2 > nota3){
        media = (nota1 + nota2)/2;
        printf("Media final das notas: %.2f", media);
    } else if(nota1 > nota2 && nota3 > nota2){
        media = (nota1 + nota3)/2;
        printf("Media final das notas: %.2f", media);
    } else {
        media = (nota2 + nota3)/2;
        printf("Media final das notas: %.2f", media);
    }
    
    return 0;
}