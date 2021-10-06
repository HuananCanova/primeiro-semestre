struct registros{

    char usuario[20];
    char email[20];
    char senha[20];

}usua[200];


void redeSocial(){
    int op;
    int i = 0, k = 0, e = 0; //variáveis de controle
    int retorno;

    do //do while (op != 3) para que o programa só termine quando o usuário digitar 3 no menu;
    {
        printf("--------MENU--------\n");
        printf("1. Criar conta\n");
        printf("2. Acessar perfil\n");
        printf("3. Sair\n");

        
        printf("\nOpcao desejada: \n");
        scanf("%d", &op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            do 
            {
                k = 0;  //Sempre que o laço é executado a variável de controle K é setada para 0 assim o laço só executa novamente
                        //se o nome digitado já foi cadastrado anteriormente;

                printf("\nNome de usuario: ");
                fgets(usua[i].usuario, 20, stdin);

                if (i > 0)   //Entra no if apenas se existir mais de um usuário cadastrado, ou seja, quando é necessária a comparação
                {  
                    for (int j = 0; j < i; j++) //Laço para fazer a comparação entre o nome digitado e os que já foram cadastrados 
                    {                   
                        //comparação de strings(optei por usar strcasecmp, ou seja, HUANAN e huanan são consideradas strings iguais)
                        retorno = strcasecmp(usua[i].usuario, usua[j].usuario); 
                        if (retorno == 0)     //retorno = 0 significa que as strings são iguais;
                        {
                            printf("\nNome de usuario ja cadastrado!\n"); //Mensagem caso o nome já tenha sido cadastrado anteriormente;
                            k++; //Incremento da variável de controle K para que o laço seja TRUE e execute novamente pedindo o nome de usuário;
                        }
                    }
                }

            } while (k > 0);    //Condição de saída do laço, pelo fato de K ser setado para 0 no inicio do laço e incrementado dentro do
                                //if a condição só será verdadeira caso o retorno da comparação seja = 0 (strings iguais);
            


            do   //A lógica no email é exatamente a mesma utilizada para o nome de usuário;
            {   
                e = 0;
                
                printf("Email: ");
                fgets(usua[i].email, 20, stdin);

                if (i > 0) //Executa apenas se existir mais de um usuário cadastrado;
                {  
                    for (int j = 0; j < i; j++)
                    {
                        retorno = strcasecmp(usua[i].email, usua[j].email);
                        if (retorno == 0)
                        {
                            printf("\nEmail ja cadastrado!\n");
                            e++;
                        }
                    }
                }

            } while (e > 0);
            

            printf("Senha: ");
            fgets(usua[i].senha, 20, stdin);

            i++; //Incremento da variável utilizada como índice usua[i], mantém o controle das contas cadastradas e serve de condição para saber
                 //se as comparações são necessários ou não(exite alguma conta cadastrada ou não);
            break;
        case 2:
            if (i > 0) //If para mostrar a mensagem de bem-vindo apenas se alguma conta já foi cadastrada;
            {
                printf("\nBem-vindo(a) ao seu perfil!\n");
            }else{
                printf("\nNenhuma conta cadastrada!\n");
            }
            
            break;
        case 3:
            printf("\nFIM DO PROGRAMA!\n");
            exit(0);  //Termina o programa;
            break;
        
        default:
            printf("\nOPCAO INVALIDA!\n\n"); //Mensagem caso o usuário digite algo diferente de (1,2,3) no menu;
            break;
        }
    } while (op != 3);
}
