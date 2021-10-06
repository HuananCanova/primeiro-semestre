#include<stdio.h>
#include<stdlib.h>


int diferencaFunc();

int main(){
    //variável que vai armazenar o que retornar da diferencaFunc();
    int diff;

    diff = diferencaFunc();
    //print da diferença - valor de diff retorna da função;
    printf("\nDiferenca absoluta: %d", diff);

    return 0;
}


int diferencaFunc(){
    int n, num, diff, maiordiff = 0, pos1, pos2;

    printf("Total de valores a serem lidos: ");
    scanf("%d", &n);

    int vetor[n];

    //loop para preencher o vetor
    for (int i = 0; i < n; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor[i]);
    }

    //loop para conferir a diferença entre o elemento no índice [j] com o próximo [j+1]
                       //(n-1) para desconsiderar a última posição []
    for (int j = 0; j < (n-1); j++)
    {
        //diff recebe o valor absoluto entre ([j] + [j+1]) (sempre positivo)
        //função -abs- importada da biblioteca stdlib.h para desconsiderar o negativo
        diff = abs(vetor[j] - vetor[(j+1)]);


        //if para salvar o valor da difirença que for maior
        //e as posições dos dois vetores que tem a maior diferença
        if (diff > maiordiff)
        {
            pos1 = vetor[j];
            pos2 = vetor[(j+1)]; //pos2 = vetor[j+1] - pois a diferença é feita com o próximo elemento
            maiordiff = diff;
        }

    }

    //print para mostrar as posições com a maior diferença entre os elementos
    printf("\nVetores: %d e %d", pos1, pos2);

    //retorno do valor para a função main;
    return maiordiff;
}
