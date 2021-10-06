void dadosPessoas(){
    float salario, maiorSalario=0, mediaSalario=0, mediaFilhos=0, percentual;
    int pessoas=0, i=0, filhos, p350=0;
    char op = 's';

    printf("Informe o numero de pessoas: ");
    scanf("%d", &pessoas);

    while (pessoas > i)
    {
        
        printf("inserir salario e numero de filhos: ");
        scanf("%f %d", &salario, &filhos);
        mediaSalario = mediaSalario + salario;
        mediaFilhos = mediaFilhos + filhos;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        if(salario <= 350){
            p350++;
        }
        i++;
    }
    
        mediaSalario = mediaSalario/pessoas;
        mediaFilhos = mediaFilhos/pessoas;
        percentual = (p350*100)/pessoas;
        printf("Media de salario: %.2f \n", mediaSalario);
        printf("Media de filhos: %.2f \n", mediaFilhos);
        printf("Maior salario: %.2f \n", maiorSalario);
        printf("Percentual de salarios ate 350: %.2f", percentual);

}
