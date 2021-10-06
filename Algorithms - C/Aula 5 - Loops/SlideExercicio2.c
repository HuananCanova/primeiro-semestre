#include<stdio.h>


int main(){

    int cont = 0;

    do{
        if(cont%2==0){
            printf("%d\n", cont);
        }
        cont++;
    }while(cont<10);

    return 0;
}