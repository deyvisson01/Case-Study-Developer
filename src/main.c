#include <stdio.h>
#include <stdlib.h>

int main(){
    // VARIÁVEIS
    int opt;


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