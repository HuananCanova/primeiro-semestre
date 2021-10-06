#include<stdio.h>

int main(){

    int num, tab;
    int i;
    
    printf("Informe um numero: ");
    scanf("%d", &num);

    for (i = 0; i <= 10; i++)
    {
        tab = (num*i);
        printf("%d x %d = %d\n", num, i, tab);
    }
    
       
    
    


    
    return 0;
}