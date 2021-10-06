#include<stdio.h>

int main(){

    int i, num;

    for (i = 15; i < 100; i++)
    {
        num = i*i;
        printf("quadrado de %d: %d \n", i, num);
    }
    

    return 0;
}