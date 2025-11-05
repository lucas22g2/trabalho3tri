#include <stdio.h>
#define MAX_FUNC 10

int main() {
    int N, i;
    int ids[MAX_FUNC];
    double salarios[MAX_FUNC];
    int escolha;

    // --- Cadastro ---
    printf("\n--- 10) Cadastro RH (ID e Salario) ---\n");
    do {
        printf("Quantos funcionarios serao cadastrados (1 a %d)? N = ", MAX_FUNC);
        scanf("%d", &N);
    } while (N < 1 || N > MAX_FUNC);

    for (i = 0; i < N; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Digite o ID: ");
        scanf("%d", &ids[i]);
        printf("Digite o salario: R$ ");
        scanf("%lf", &salarios[i]);
    }
    // --- Fim do Cadastro ---

    do {
        printf("\n--- MENU FUNCIONARIOS ---\n");
        printf("1) Listar todos (ID e Salario)\n");
        printf("2) Mostrar o maior salario e seu ID\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\n--- LISTAGEM DE FUNCIONARIOS ---\n");
                printf("ID\t| Salario (R$)\n");
                printf("------------------------\n");
                for (i = 0; i < N; i++) {
                    printf("%d\t| %.2lf\n", ids[i], salarios[i]);
                }
                break;
            
            case 2:
                if (N == 0) {
                    printf("\nNenhum funcionario cadastrado.\n");
                    break;
                }
                
                // Inicializa com o primeiro elemento
                double maior_salario = salarios[0];
                int id_maior_salario = ids[0];
                
                // Procura o maior a partir do segundo elemento
                for (i = 1; i < N; i++) {
                    if (salarios[i] > maior_salario) {
                        maior_salario = salarios[i];
                        id_maior_salario = ids[i];
                    }
                }
                
                printf("\n--- MAIOR SALARIO ---\n");
                printf("O maior salario encontrado foi: R$ %.2lf\n", maior_salario);
                printf("Corresponde ao funcionario com ID: %d\n", id_maior_salario);
                break;

            case 0:
                printf("\nSaindo do sistema de cadastro.\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
