void extensaoChange(char arq[20]){

    //String para armazenar a nova extensão
    char nExtensao[6];

    //Variável para armazenar o retorno da função strtok
    // "*" pois o retorno da função é um ponteiro;
    char *nArquivo;

    printf("Informe a nova extensao: ");
    fgets(nExtensao, 6, stdin);
    
    //Pesquisando sobre manipualação de strings encontrei a função STRTOK
    //ela permite que uma string seja separada em um determinado caracter, neste caso defini ao encontrar um ".";
    //A função recebe dois parâmetros, primeiro a string a ser dividida e depois o caracter onde será feita 
    //a divisão; ex: (String = foto1.png)    *nArquivo = foto1

    nArquivo = strtok(arq, ".");

    //Após dividir a string basta concatenar com a nova extensão (nExtensao), mas antes de concatenar com a extensão desejada
    //é preciso inserir um ponto entre elas; como a função strcat só recebe dois parâmetros precisei concatenar duas vezes
    //ex 1° - (foto1 + .)      2° - (foto1. + nExtensao)  = nArquivo = foto1.jpeg

    strcat(nArquivo, ".");
    strcat(nArquivo, nExtensao);

    printf("Arquivo com nova extensao: %s\n", nArquivo);
}