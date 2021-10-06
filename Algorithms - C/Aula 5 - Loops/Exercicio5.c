#include<stdio.h>

int main(){
    
    int input;
    int cont = 0;
    
   
    while (input != (-999)){
        printf("informe um numero (para sair digite -999): ");
        scanf("%d", &input);

        if(input % 2 == 1){
            cont++;
        }
    }
    printf("Quantia de numeros primos %d", cont);
    

    return 0;
}


  