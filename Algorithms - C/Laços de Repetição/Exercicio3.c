#include<stdio.h>

int main(){

    printf("divisiveis por 4\n");
    for (int i = 1; i <= 200; i++)
    {
        if(i % 4 == 0){
            printf("%d \n", i);
        }
    }

    return 0;
}