#include<stdio.h>

int main(){

    float capacidade, peso, pesoTotal, nPessoas;
    int i = 0;
    
    //--ATÉ(pode ser menos pessoas, mas não mais que 6) 6 pessoas--

    printf("Informe a capacidade do elevador (kg): ");
    scanf("%f", &capacidade);

    printf("Informe quantas pessoas irão utilizar o elevador (max 6 pessoas): ");
    scanf("%f", &nPessoas);

    //Condição (if) para verificar se o número de pessoas digitado é válido ou não
    //Caso seja válidada a condição, o loop -Do While- executa pedindo o peso de nPessoas (i < nPessoas)
    //Caso seja inválida a condição o programa mostra uma mensagem com o erro e termina a execução
    //-return 0-;

    if (nPessoas <= 6 && nPessoas > 0)
    {
            do
            {
            printf("Qual o peso da %d pessoa: ", (i+1));
            scanf("%f", &peso);

            pesoTotal+= peso;

            i++;
        } while (i < nPessoas);
    }else{
        printf("\nNumero de pessoas invalido! (maximo 6)");
        return 0;
    }

    //Condição para testar se a capacidade do elevador foi excedida ou não
    //E mostra a carga máxima suportada e a soma dos pesos 

    if(pesoTotal <= capacidade)
    {
        printf("\nElevador liberado para funcionar!\n");
        printf("Carga maxima: %.2f, peso total: %.2f", capacidade, pesoTotal);
    }else{
        printf("\nCarga maxima excedida!\n");
        printf("Carga maxima: %.2f, peso total: %.2f", capacidade, pesoTotal);
    }

    return 0;
}