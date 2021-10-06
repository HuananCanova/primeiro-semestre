#include<stdio.h>

int main(){

    int num, tab;
    int i = 1;
    
    printf("Informe um numero: ");
    scanf("%d", &num);

    do{
        tab = (num*i);
        printf("%d x %d = %d\n", num, i, tab);
        i++;
    }while (i<=10);
    


    
    return 0;
}