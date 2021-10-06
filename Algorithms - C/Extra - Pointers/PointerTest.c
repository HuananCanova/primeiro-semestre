#include<stdio.h>


int main(){

    int age = 21;
    int *pAge = &age; 

    printf("Memory adress: %d", *pAge);
    

    return 0;
}