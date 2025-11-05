#include <stdio.h>
#define FILIAIS 2
#define MESES 2

int main() {
    double vendas[FILIAIS][MESES]; // [Filial][Mes]
    int i, j;
    int escolha;

    printf("\n--- 9) Vendas (Matriz 2x2) ---\n");
    printf("Digite os valores de vendas (R$) para 2 Filiais e 2 Meses:\n");

    // Leitura da matriz 2x2
    for (i = 0; i < FILIAIS; i++) {
        for (j = 0; j < MESES; j++) {
            printf("Venda [%d Filial] [%d Mes]: R$ ", i + 1, j + 1);
            scanf("%lf", &vendas[i][j]);
        }
    }

    do {
        printf("\n--- MENU DE TOTAIS ---\n");
        printf("1) Total por Filial (Linha)\n");
        printf("2) Total por Mes (Coluna)\n");
        printf("3) Total Geral\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\n--- Total por Filial ---\n");
                for (i = 0; i < FILIAIS; i++) {
                    double total_filial = 0.0;
                    for (j = 0; j < MESES; j++) {
                        total_filial += vendas[i][j];
                    }
                    printf("Filial %d: R$ %.2lf\n", i + 1, total_filial);
                }
                break;
            
            case 2:
                printf("\n--- Total por Mes ---\n");
                for (j = 0; j < MESES; j++) {
                    double total_mes = 0.0;
                    for (i = 0; i < FILIAIS; i++) {
                        total_mes += vendas[i][j];
                    }
                    printf("Mes %d: R$ %.2lf\n", j + 1, total_mes);
                }
                break;

            case 3:
                printf("\n--- Total Geral ---\n");
                double total_geral = 0.0;
                for (i = 0; i < FILIAIS; i++) {
                    for (j = 0; j < MESES; j++) {
                        total_geral += vendas[i][j];
                    }
                }
                printf("Total Geral de Vendas: R$ %.2lf\n", total_geral);
                break;

            case 0:
                printf("\nSaindo do menu de vendas.\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
