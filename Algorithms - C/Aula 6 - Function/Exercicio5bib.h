float mediaFinal (float n1, float n2, float n3)
{
    float media;
    char letra;
    printf("Informe a letra  (A): media aritmetica // (P): media ponderada: ");
    scanf("%c", &letra);

    if(letra == 'a' ||letra == 'A'){
        return media = (n1 + n2 + n3) / 3;
    }else if (letra == 'p' ||letra == 'P'){
        return media = ((n1*1) + (n2*2) + (n3*3)) / (1+1+4);
    }
    
    
}
