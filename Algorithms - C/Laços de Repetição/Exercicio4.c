#include<stdio.h>

int main(){
    
    const int base = 3;
    int resul;

    resul = base;
    for (int i = 0; i <= 15; i++)
    {
       resul = (resul*base);
       printf("%d \n", resul);
    }

    return 0;
}