#include<stdio.h>


int main(){


    int cont = 0;

    while(cont<10){
        if(cont%2==0){
            printf("%d\n", cont);
        }
        cont++;
    }

    return 0;
}