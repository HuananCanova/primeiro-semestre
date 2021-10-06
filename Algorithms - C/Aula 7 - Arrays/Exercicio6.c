#include<stdio.h>

void vetorPorcent();

int main(){

    vetorPorcent();
    return 0;
    
}

void vetorPorcent(){
    
    float vet[20];

    for (int i = 0; i < 10; i++)
    {
        printf("Valor vet: ");
        scanf("%f", &vet[i]);
    }

    for (int j = 10; j < 20; j++)
    {   
        if(j % 2 == 0){
            vet[j] = (vet[(j-10)] + 0.02);
            printf("Vetor - %d: %.3f \n", j, vet[j]);
        }else{
            vet[j] = (vet[(j-10)] + 0.05);
            printf("Vetor - %d: %.3f \n", j, vet[j]);
        }
    }

}