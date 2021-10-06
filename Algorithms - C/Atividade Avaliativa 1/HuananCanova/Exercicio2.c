#include<stdio.h>


int main(){

    int num, temp = (-32768);
    //temp = (-32768) é para que o primeiro número digitado seja verdadeiro na condição
    //Utilizei -32768 pois é o número inteiro mínimo que um INTEGER consegue armazenar. 
    //Isso fará com que a condição de comparação abaixo seja true na primeira execução.


    //optei por usar do while para que o código execute pelo menos uma vez, pois o primeiro número digitado
    //precisa ser válido
    do
    {
        printf("Informe um numero (para sair: -999): ");
        scanf("%d", &num);

        if(num > temp && num != (-999))
        {
            printf("%d\n", num);
            
            //para que o número comparado seja apenas o último -número válido digitado-, a atribuição
            //de temp=num deve ser feita dentro do if após confirmar a válidade do último número digitado.

            temp = num;
        }else if(num != -999)
        {
            printf("Numero invalido! Digite um numero maior ao anterior: %d\n", temp);
        }else
        {
            printf("\nFIM DO PROGRAMA!");
        }
    
    }while (num != (-999));
    
    



    return 0;
}