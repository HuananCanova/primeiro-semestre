#include<stdio.h>
#include<math.h>

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    num = num % 7;
    
    num == 0? printf("Divisivel por 7") : printf("Nao divisivel por 7");

    return 0;
}