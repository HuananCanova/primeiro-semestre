#include<stdio.h>

int main(){
    
    int n;

    printf("Informe um numero positivo: ");
    scanf("%d", &n);

    if(n > 0){
        printf("POSITIVO!\n");
    }
    printf("Fim do programa.");
    return 0;
}