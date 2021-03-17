#include <stdio.h>
#include <stdlib.h>

int main(){
    // VARIÁVEIS

    // VARIÁVEIS DE VENDAS
    int opt, cod_vendedor, cod_venda, cod_produto, quantidade;
    float valor_final;
    char cliente[20];

    // VARIÁVEIS DO VENDEDOR
    char vendedor[50];
    int cpf;
    
    // VARIÁVEIS DO PRODUTO
    char descrição_produto[50];
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
            case 1:
                printf("\nOPÇÕES DE GERENCIAMENTO:\n");
                printf("1 - Inserir venda\n");
                printf("2 - Listar suas vendas\n");
                printf("7 - Retornar ao início\n");

                printf("\nEntre com o identificador desejado:");
                scanf("%i", &opt);
                switch (opt)
                {
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

                    case 2:
                        printf("Código da venda ->");
                        scanf("%i", &cod_venda);

                        break;
                    
                    default:
                        break;
                    }

                        break;
                    
                    case 7:

                    break;
                    
                    default:
                        break;
                }
            break;

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
                    case 1:
                        printf("INSIRA OS DADOS PARA ADICIONAR UM NOVO VENDEDOR!\n");
                        
                        printf("Nome ->");
                        scanf("%s",descrição_produto);

                        printf("CPF (Somente números) ->");
                        scanf("%i", &cpf);

                    break;

                    case 2:
                        printf("INSIRA OS DADOS PARA ADICIONAR UM NOVO PRODUTO!\n");
                        
                        printf("Descrição ->");
                        scanf("%s",descrição_produto);

                        printf("Preço ->");
                        scanf("%f", &valor_individual);
                    break;

                    case 3:

                    break;

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

                        case 2:
                            printf("Código da venda ->");
                            scanf("%i", &cod_venda);

                            break;
                        
                        default:
                            break;
                        }
                            break;

                        break;
                    
                    case 7:

                    break;
                    
                    default:
                        break;
                }
                
            break;
            default :
                printf ("ERROR: ENTRADA INVÁLIDA!\n");
        }
}