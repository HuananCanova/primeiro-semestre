#include<stdio.h>

int main(){

    int x,y,z, temp;

    printf("Informe o primeiro valor: ");
    scanf("%d",&x);
    printf("Informe o segundo valor: ");
    scanf("%d",&y);
    printf("Informe o terceiro valor: ");
    scanf("%d",&z);

    if(x>=y && x>=z){
        printf("Maior numero e(x): %d", x);
    }
    else if(y>=x && y>=z){
        printf("Maior numero e(y): %d", y);
    }
    else {
        printf("Maior numero e(z): %d", z);
    }



    return 0;
}