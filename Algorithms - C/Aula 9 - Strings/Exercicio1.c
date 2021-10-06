#include<stdio.h>
#include<string.h>


int main(){

    char string[40];

    printf("digite em maiusculo: ");
    fgets(string, 40, stdin);

    strlwr(string);

    puts(string);


    return 0;
}