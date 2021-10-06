#include<stdio.h>
#include<string.h>

struct veiculos{
    
    char placa[20], descr[20], fabricante[20], cor[20];
    int ano;
    float preco;
    
}carro[12];


int main(){

    int menu;
    int i = 0;

    do
    {
        printf("\n------- FASTCAR --------\n");
        printf("1. Cadastrar automovel\n");
        printf("2. Consultar automovel\n");
        printf("3. Gerar reslatorio\n");
        printf("4. Sair do programa\n");

        printf("\nQual a opcao desejada: ");
        scanf("%d", &menu);
        fflush(stdin);

        char op;

        char placaCmp[20];
        int retorno;

        switch (menu)
        {
        case 1:
        //CADASTRO VEÍCULO

            do
            {
                printf("%d Informe a placa\n", i);
                fgets(carro[i].placa, 20, stdin);
                printf("Informe a descricao\n");
                fgets(carro[i].descr, 20, stdin);
                printf("Informe o fabricante\n");
                fgets(carro[i].fabricante, 20, stdin);
                printf("Informe a cor\n");
                fgets(carro[i].cor, 20, stdin);
                fflush(stdin);
                printf("Informe o ano\n");
                scanf("%d", &carro[i].ano);
                fflush(stdin);
                printf("Informe o preco\n");
                scanf("%f", &carro[i].preco);
                fflush(stdin);
                i++;

                printf("\nDeseja cadastrar outro veiculo (S/N): ");
                scanf("%c", &op);
                fflush(stdin);
                
            } while ((op != 'n') || (i > 12));
            printf("\nValor de i: %d\n", i);
            break;
        case 2:
        //CONSULTA VEÍCULO PLACA
            printf("Informe a placa para pesquisa: ");
            fgets(placaCmp, 20, stdin);

            int cont = 0;
            for (int j = 0; j < (i+1); j++)
            {
                
                retorno = strcmp(placaCmp, carro[j].placa);
                if (retorno == 0)
                {
                    printf("\n----INFORMACOES DO VEICULO----\n");
                    printf("Placa: %s Descricao: %s Fabricante: %s Cor: %s Ano: %d\n Preco: %.2f\n",carro[j].placa, carro[j].descr, carro[j].fabricante, carro[j].cor, carro[j].ano, carro[j].preco);
                    cont++;
                } else if (cont == 0)
                {
                    printf("\nPLACA NAO ENCONTRADA!!!\n");
                }
                

            }
            break;
        case 3:
        //LISTA DE TODOS OS VEÍCULOS CADASTRADOS
            printf("\n-------LISTA DE VEICULOS-------\n");
            if (i == 0)
            {
                printf("\nNenhum automovel cadastrado! %d\n\n", i);
            }else{
                for (int j = 0; j < i; j++)
                {
                    printf("\nAutomovel %d:", (j+1));
                    printf("Placa: %s Descricao: %s Fabricante: %s Cor: %s Ano: %d\n Preco: %.2f\n",carro[j].placa, carro[j].descr, carro[j].fabricante, carro[j].cor, carro[j].ano,carro[j].preco);
                }
            }
            
            break;
        case 4:
            printf("\nFIM DO PROGRAMA!!");
            return 0;
            break;
        default:
            printf("Opcao invalida!!!!\n\n");
            break;
        }
    } while (menu != 4);
    
    return 0;
}