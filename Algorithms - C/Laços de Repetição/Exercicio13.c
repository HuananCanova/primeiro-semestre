#include<stdio.h>

int main(){

    int num, fato, temp1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    temp1 = num;
    fato = num;
    
    for (int i = 1; i < num; i++)
    {  
        
        fato = (fato * (temp1-1));
        temp1--;
    
    }
    
        printf("Fatorial de %d! = %d", num, fato);
    
  
    return 0;
}