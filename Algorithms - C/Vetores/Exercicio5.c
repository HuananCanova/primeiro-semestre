#include<stdio.h>

void somaVetor();

int main(){
    somaVetor();
    return 0;
}

void somaVetor(){

    int n, total = 0;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
   
    int vetA[n], vetB[n];

    for (int i = 0; i < n; i++)
    {
        printf("Valor vetA: ");
        scanf("%d", &vetA[i]);
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k <= vetA[j]; k++)
        {
            total = total + k;
        }
        
        vetB[j] = total;
        printf("Vet B - %d = %d \n", j, vetB[j]);
        total = 0;
    }
    

}