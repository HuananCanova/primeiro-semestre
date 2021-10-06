#include<stdio.h>

int main(){

    int cod, quant;
    float valorPagar;

    printf("Especificacao       Codigo  Preco\n");
    printf("Cafe pequeno          100    2,00\n");
    printf("Cafe grande           101    3,00\n");
    printf("Cafe c/leite pequeno  102    2,50\n");
    printf("Cafe c/leite grande   103    3,50\n");
    printf("Agua sem gas (200ml)  104    1,50\n");
    printf("Agua com gas (500ml)  105    2,40\n");

    printf("Inform the code: ");
    scanf("%d", &cod);

    printf("Inform the quantity: ");
    scanf("%d", &quant);

    if(cod == 100){
        valorPagar = quant*2;
        printf("Valor a pagar: %.2f", valorPagar);
    } else if(cod == 101){
        valorPagar = quant*3;
        printf("Valor a pagar: %.2f", valorPagar);
    } else if(cod == 102){
        valorPagar = quant*2.5;
        printf("Valor a pagar: %.2f", valorPagar);
    } else if(cod == 103){
        valorPagar = quant*3.5;
        printf("Valor a pagar: %.2f", valorPagar);
    } else if(cod == 104){
        valorPagar = quant*1.5;
        printf("Valor a pagar: %.2f", valorPagar);
    } else if(cod == 105){
        valorPagar = quant*2.4;
        printf("Valor a pagar: %.2f", valorPagar);
    }else{
        printf("Codigo invalido!!!!");
    }
    
    return 0;
}