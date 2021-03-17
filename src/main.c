#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // VARIÁVEIS DE VENDAS
    int opt, cod_vendedor, cod_venda, cod_produto, quantidade, aux;
    float valor_final;
    char cliente[20];

    // VARIÁVEIS DO VENDEDOR
    char codigo_vendedor[] = "111";
    char vendedor[50]; 
    char cpf[12];
    
    // VARIÁVEIS DO PRODUTO
    char descricao_produto[50];
    float valor_individual;

    printf("                                 SISTEMA DE GERENCIAMENTO DE VENDAS           \n"); 
    printf("                                         SEJA BEM-VINDO(A)!                   \n\n");
    printf("                                TABELA DE VENDA DOS FUNCIONÁRIOS                   \n\n");

    printf("CÓDIGO DA VENDA | CÓDIGO DO VENDEDOR | CÓDIGO DO PRODUTO | CLIENTE |    DATA    | QUANTIDADE | VALOR FINAL\n");

    printf("\nOPÇÕES DE GERENCIAMENTO:\n");
    printf("1 - Área do vendedor\n");
    printf("2 - Área da administração\n");

    printf("\nEntre com o identificador desejado:");
    scanf("%i", &opt);

    switch (opt)
        {
            // INÍCIO DA ÁREA DO VENDEDOR
            case 1:
                printf("\nOPÇÕES DE GERENCIAMENTO:\n");
                printf("1 - Inserir venda\n");
                printf("2 - Listar suas vendas\n");
                printf("7 - Retornar ao início\n");

                printf("\nEntre com o identificador desejado:");
                scanf("%i", &opt);
                switch (opt)
                {
                    // INÍCIO DA OPÇÃO DE INSERÇÃO DE VENDA - VENDEDOR
                    case 1:
                        printf("INSIRA OS DADOS PARA VENDA!\n");
                        printf("Código do vendedor ->");
                        scanf("%i", &cod_vendedor);

                        printf("Cliente ->");
                        scanf("%s",cliente);

                        printf("Código do produto ->");
                        scanf("%i", &cod_produto);

                        printf("Quantidade ->");
                        scanf("%i", &quantidade);

                        printf("Valor final da venda ->");
                        scanf("%f", &valor_final);
                    break;

                    // INÍCIO DA OPÇÃO DE LISTAGEM DE VENDA - VENDEDOR
                    case 2:
                    // LISTAGEM DE VENDAS
                        printf("\nOPÇÕES DE ALTERAÇÃO DE VENDAS:\n");
                        printf("1 - Editar venda\n");
                        printf("2 - Deletar venda\n");
                        printf("7 - Retornar ao início\n");

                        printf("\nEntre com o identificador desejado:");
                        scanf("%i", &opt);

                        switch (opt)
                        {
                        // INÍCIO DA OPÇÃO DE EDIÇÃO DE VENDA - VENDEDOR
                        case 1:
                            printf("INSIRA OS NOVOS DADOS DA VENDA!\n");
                            printf("Código do vendedor ->");
                            scanf("%i", &cod_vendedor);

                            printf("Cliente ->");
                            scanf("%s",cliente);

                            printf("Código do produto ->");
                            scanf("%i", &cod_produto);

                            printf("Quantidade ->");
                            scanf("%i", &quantidade);

                            printf("Valor final da venda ->");
                            scanf("%f", &valor_final);
                            break;

                        // INÍCIO DA OPÇÃO DE DELETAR VENDA - VENDEDOR
                        case 2:
                            printf("Código da venda ->");
                            scanf("%i", &cod_venda);
                        break;
                        
                        default:
                            printf ("ERROR: ENTRADA INVÁLIDA!\n");
                            break;
                        }

                        break;
                    
                    case 7:

                    break;
                    
                    default:
                        printf ("ERROR: ENTRADA INVÁLIDA!\n");
                    break;
                }
            break;
            // INÍCIO DA ÁREA DO ADMINISTRADOR
            case 2:
                printf("\nOPÇÕES DE GERENCIAMENTO ADMINISTRATIVAS:\n");
                printf("1 - Inserir vendedor\n");
                printf("2 - Inserir produto\n");
                printf("3 - Listar vendedores e o valor de suas vendas mensais\n");
                printf("4 - Listar todas as vendas\n");
                printf("7 - Retornar ao início\n");

                printf("\nEntre com o identificador desejado:");
                scanf("%i", &opt);
                switch (opt)
                {
                    // INÍCIO DA OPÇÃO DE INSERIR VENDEDOR
                    case 1:
                        printf("INSIRA OS DADOS PARA ADICIONAR UM NOVO VENDEDOR!\n");
                        
                        printf("Nome ->");
                        scanf("%s", vendedor);

                        printf("CPF (Somente números) ->");
                        scanf("%s", cpf);

                        InsertSeller(vendedor, cpf);

                    break;

                    // INÍCIO DA OPÇÃO DE INSERIR PRODUTO
                    case 2:
                        printf("INSIRA OS DADOS PARA ADICIONAR UM NOVO PRODUTO!\n");
                        
                        printf("Descrição ->");
                        scanf("%s",descricao_produto);

                        free(scanf);

                        printf("Preço ->");
                        scanf("%f", &valor_individual);
                    break;

                    case 3:

                    break;
                    // INÍCIO DA OPÇÃO DE LISTAGEM DE VENDA - ADMINISTRADOR
                    case 4:
                        // LISTAGEM DE VENDAS
                        printf("\nOPÇÕES DE ALTERAÇÃO DE VENDAS:\n");
                        printf("1 - Editar venda\n");
                        printf("2 - Deletar venda\n");
                        printf("7 - Retornar ao início\n");

                        printf("\nEntre com o identificador desejado:");
                        scanf("%i", &opt);

                        switch (opt)
                        {
                        // INÍCIO DA OPÇÃO DE EDIÇÃO DE VENDA - VENDEDOR
                        case 1:
                            printf("INSIRA OS NOVOS DADOS DA VENDA!\n");
                            printf("Código do vendedor ->");
                            scanf("%i", &cod_vendedor);

                            printf("Cliente ->");
                            scanf("%s",cliente);

                            printf("Código do produto ->");
                            scanf("%i", &cod_produto);

                            printf("Quantidade ->");
                            scanf("%i", &quantidade);

                            printf("Valor final da venda ->");
                            scanf("%f", &valor_final);
                            break;

                        // INÍCIO DA OPÇÃO DE DELETAR VENDA - ADMINISTRADOR
                        case 2:
                            printf("Código da venda ->");
                            scanf("%i", &cod_venda);
                        break;
                        
                        default:
                            printf ("ERROR: ENTRADA INVÁLIDA!\n");
                            break;
                        }
                        break;

                    break;
                    
                    case 7:

                    break;
                    
                    default:
                        printf ("ERROR: ENTRADA INVÁLIDA!\n");
                    break;
                }
                
            break;
            // FIM DA ÁREA DO ADMINISTRADOR
            default :
                printf ("ERROR: ENTRADA INVÁLIDA!\n");
        }


}

    //MÉTODOS
    void InsertSeller(char *nome_vendedor, char *cpf){
        char vendedor[100];
        char codigo[5];
        FILE *sellers;
            char text[200], letra = '\n';
            int vezes;
            sellers = fopen("sellers/sellers.txt","r");
            fread (&text, sizeof(char), 200, sellers);
            for (int i = 0; i < strlen(text); i++){
                if(text[i] == letra){
                    vezes++;
                }
            }
            vezes = vezes-2;
            fclose(sellers);

        sprintf(codigo, "%d", vezes);
        strcat(vendedor, codigo);
        strcat(vendedor, ",");
        strcat(vendedor, nome_vendedor);
        strcat(vendedor, ",");
        strcat(vendedor, cpf);
        strcat(vendedor, "\n");


        sellers = fopen("sellers/sellers.txt", "a");
            if(sellers == NULL)
            {
                printf("Erro na abertura do arquivo!");
                return 1;
            }
        fprintf(sellers, "%s", vendedor);
        fclose(sellers);

        printf("Vendedor adicionado!\n");
    }
