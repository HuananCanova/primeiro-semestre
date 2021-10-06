void troca (){
    int a, b, c, temp;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    printf("Informe o valor de C: ");
    scanf("%d", &c);

    if(a >= b && b >= c){ //A = MAIOR E C = MENOR
        printf("%d %d %d", a, b, c);
    }else if(a >= c && c >= b){ //A = MAIOR E B = MENOR
        temp = c;
        c = b;
        b = temp;
        printf("%d %d %d", a, b, c);
    }else if(b >= c && c >= a){ //B = MAIOR E A = MENOR
        temp = a;
        a = b;
        b = c;
        c = temp;
        printf("%d %d %d", a, b, c);
    }else if(b >= a && a >= c){ //B = MAIOR E C = MENOR
        temp = a;
        a = b;
        b = temp;
        printf("%d %d %d", a, b, c);
    }else if(c >= b && b >= a){ //C = MAIOR E A = MENOR
        temp = a;
        a = c;
        c = temp;
        printf("%d %d %d", a, b, c);
    }else if(c >= a && a >= b){ //C = MAIOR E B = MENOR
        temp = a;
        a = c;
        c = b;
        b = temp;
        printf("%d %d %d", a, b, c);
    }

}