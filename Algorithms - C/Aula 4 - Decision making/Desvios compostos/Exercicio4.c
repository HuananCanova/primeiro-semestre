#include<stdio.h>
#include<math.h>

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num%7==0){
        printf("Numero divisivel por 7!");
    } else {
        printf("Numero nao e divisivel por 7!");
    }
    
    return 0;
}