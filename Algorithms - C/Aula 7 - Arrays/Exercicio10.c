#include<stdio.h>

void deslocando(int num){

    int vetAntes[num], temp=0;

    for (int i = 0; i < num; i++)
    {
        printf("%d - Valor: ", (i+1));
        scanf("%d", &vetAntes[i]);
    }
    
    for (int j = 0; j < num; j++)
    {
        printf("\nVetor Antes - %d: %d ",(j+1) , vetAntes[j]);
    }
    
    temp = vetAntes[0];

    for (int k = 0; k < num; k++)
    {
        vetAntes[k] = vetAntes[(k+1)];
        vetAntes[(num)] = temp;
        printf("\nVetor Depois - %d: %d ",(k+1) , vetAntes[k]);
    }
    
    

}


int main(){

    int n;

    printf("Numero de elementos do vetor: ");
    scanf("%d", &n);

    deslocando(n);
    return 0;
}