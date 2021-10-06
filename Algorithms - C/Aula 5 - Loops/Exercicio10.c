#include<stdio.h>

int main(){

    int num, numT, tent = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);
    
    //answer
    do
    {
        printf("Tentativa: ");
        scanf("%d", &numT);

        if(numT > num){
            printf("O numero e menor! \n");
        } else if(numT < num){
            printf("Numero e maior! \n");
        }else{
            printf("Parabens voce acertou o numero %d em %d tentativas!!!", num, (tent+1));
        }
        tent++;

    } while (numT != num);
    

    
    return 0;
}