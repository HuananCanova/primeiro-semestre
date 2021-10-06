float desconto (float valor, float desc){
    float valorDesc;
    return valorDesc = (valor*(desc/100));
}

float valorTotal (int qtd, float valor, float valorDesc){
    float valorTotal;
    return valorTotal = (qtd*valor) - valorDesc;

}