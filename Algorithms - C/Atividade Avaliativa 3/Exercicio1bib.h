void calculaMatriz(int n){
    int mat[n][n];
    int vet[n];

    //for para popular a matriz [n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Informe o valor da posicao %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //Como cada posição no vetor deve ser a soma do primeiro elemento com o último da MESMA linha
            //no primeiro elemento apenas a linha vai variar, já a coluna mantém sempre em 0
            //isso permite que eu sempre receba o primeiro valor de cada linha;
            //Já o segundo elemento (último elemento de cada linha) eu consigo através do [n-1];
            vet[i] = mat[i][0] + mat[i][n-1];
        }
        printf("Vetor %i: %d\n", i, vet[i]);
    }
    
}
