#include <stdio.h>
#include <stdlib.h>

int main(){
    // VARIÁVEIS
    int opt, cod_vendedor, cod_venda, cod_produto, quantidade;
    float valor_final;
    char cliente[20];

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

                    break;
                    
                    case 7:

                    break;
                    
                    default:
                        break;
                }
            break;

            case 2:
                
            break;
            default :
                printf ("ERROR: ENTRADA INVÁLIDA!\n");
        }
}