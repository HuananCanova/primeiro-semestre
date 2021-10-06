#include<stdio.h>


void hotelFunc(int d);
 

int main(){
    
    int diaria;
    //Scan das diárias para enviar por parâmetro
    printf("Numero de diarias: ");
    scanf("%d", &diaria);

    hotelFunc(diaria);

    return 0;
}


void hotelFunc(int d){

    float valorTotal = 0;

    //If para os diferentes valores das taxas de servico
    if (d > 15)
    {
        valorTotal = ((d * 85) + (6.50 * d));
        printf("Valor total com a taxa de servico: %.2f", valorTotal);
    } else if ((d > 10) && (d <= 15))
    {
        valorTotal = ((d * 85) + (7.50 * d));
        printf("Valor total com a taxa de servico: %.2f", valorTotal);
    } else if((d <= 10) && (d > 0))
    {
        valorTotal = ((d * 85) + (8.50 * d));
        printf("Valor total com a taxa de servico: %.2f", valorTotal);
    }else
    {
        //mensagem caso o número de diárias seja menor que 1
        printf("\nQuantia invalida.");
    }

}