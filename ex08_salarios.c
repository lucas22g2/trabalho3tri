#include <stdio.h>
#define MAX_SALARIOS 10

int main() {
    int N, i;
    double salarios[MAX_SALARIOS];
    int escolha;
    double soma_salarios = 0.0;
    double media_salarios;

    printf("\n--- 8) Menu de Salarios (Listar ou Media) ---\n");
    
    // Leitura de N (1..10)
    do {
        printf("Quantos salarios serao lidos (1 a %d)? N = ", MAX_SALARIOS);
        scanf("%d", &N);
    } while (N < 1 || N > MAX_SALARIOS);

    // Leitura dos salarios
    for (i = 0; i < N; i++) {
        printf("Digite o salario %d: R$ ", i + 1);
        scanf("%lf", &salarios[i]);
    }

    do {
        printf("\n--- MENU SALARIOS ---\n");
        printf("1) Listar salarios\n");
        printf("2) Média dos salarios\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\n--- LISTAGEM DE SALARIOS ---\n");
                for (i = 0; i < N; i++) {
                    printf("Salario %d: R$ %.2lf\n", i + 1, salarios[i]);
                }
                break;
            
            case 2:
                // Recalcula a soma para garantir, embora ja tenhamos feito a leitura
                soma_salarios = 0.0; 
                for (i = 0; i < N; i++) {
                    soma_salarios += salarios[i];
                }
                media_salarios = soma_salarios / N;
                
                printf("\n--- MEDIA DE SALARIOS ---\n");
                printf("Soma Total: R$ %.2lf\n", soma_salarios);
                printf("Media (%.0f salarios): R$ %.2lf\n", (double)N, media_salarios);
                break;

            case 0:
                printf("\nSaindo do menu de salarios.\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
