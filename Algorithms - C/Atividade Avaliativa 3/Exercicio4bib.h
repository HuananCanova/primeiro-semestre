struct infoLivros{
    char titulo[20];
    int ano;
    int paginas;
}livros[10];

void biblioteca(){
    float mediaPaginas = 0;
    int op, zero = 0, cont = 0, consulta;

    for (int i = 0; i < 10; i++) //Laço solicitando as informações de 10 livros;
    {
        printf("%d Informe o titulo: \n", i);
        fgets(livros[i].titulo, 20, stdin);

        printf("Ano de edicao: \n");
        scanf("%d", &livros[i].ano);

        printf("Numero de paginas: \n");
        scanf("%d", &livros[i].paginas);
        fflush(stdin);
    }


    do //Menu para o usuário escolher se deseja calcular a média, solicitar um relatório ou finalizar o programa;
    {
    printf("\n------MENU------\n");
    printf("1. Calculo da media\n");
    printf("2. Relatorio\n");
    printf("3. Sair\n");
    scanf("%d", &op);
    
    switch (op)
    {
    case 1: //Caso o usuário digite 1 é feito o cálculo da méida de páginas;
        for (int i = 0; i < 10; i++)
        {
            if (livros[i].paginas > 0)//If para verificar se o número de páginas do livro é válido (páginas > 0);
            {
                mediaPaginas += livros[i].paginas;
            }else{
                zero++; //Contador para saber quantos livros devem ser desconsiderados para o cálculo da média;
            }
        
        }

        printf("\n\nMedia de paginas lidas: %.2f\n", (mediaPaginas/(10-zero))); //Apresentação e cálculo da média;

        zero = 0; //As variáves devem ser resetadas no caso do usuário solicitar a média novamente, para que não iniciem já com o valor final;
        mediaPaginas = 0; //Mesma coisa com a variável que armazena a média;
        break;
    
    case 2://Caso o usuário digite 2 é feita a consulta através do ano de edição;

        printf("\nInforme o ano de edicao: \n"); //Solicita o ano de edição para a consulta;
        scanf("%d", &consulta);

        for (int i = 0; i < 10; i++) //Laço para verificar todos as datas dos livros;
        {
            if (consulta == livros[i].ano) //If para verificar se o ano digitado é igual em algum dos livros;
            {
                printf("\nLIVRO ENCONTRADO!\n");
                printf("Titulo: %sAno: %d\nPaginas: %d\n", livros[i].titulo, livros[i].ano, livros[i].paginas);//Apresenta as infos do livro;
                cont++;//Incrementa o cont;
            }
        }

        if (cont == 0)//Caso nenhum livro seja encontrado o valor de cont não será incrementado nenhuma vez e a condição é TRUE;
        {
            printf("\nLIVRO NAO ENCONTRADO!\n");
        }
        cont = 0;//Seta o contador para zero no caso do usuário optar por outra consulta no menu;
        
        break;
    case 3:
        printf("\nFIM DO PROGRAMA\n");
        exit(0); //Termina o programa;
        break;
    default:
        printf("\nOpcao invalida!\n\n"); //Em caso do usuário escolher uma opção que não está no menu (1,2,3);
        break;
    }

    } while (op != 3); //Só termina o programa caso o usuário escolha a opção sair - (3);
    
}