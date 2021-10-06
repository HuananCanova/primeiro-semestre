void impares (){
    
    int num, countImpar = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num % 2 != 0){
            countImpar++;
        }
    }

    printf("Total de numeros impares %d", countImpar);
}