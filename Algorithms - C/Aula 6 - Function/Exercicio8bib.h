int idadeFunction (){
    int totalIdade, anos, meses, dias;
    printf("\nInforme sua idade em (anos) (meses) (dias): \n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("meses: ");
    scanf("%d", &meses);
    printf("dias: ");
    scanf("%d", &dias);

    printf("Idade: %d %d %d", anos, meses, dias);

    return totalIdade = ((anos*360) + (meses*30) + dias);
}