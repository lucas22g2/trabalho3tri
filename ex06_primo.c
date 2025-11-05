#include <stdio.h>
#include <stdbool.h> // Para usar o tipo bool

int main() {
    int n, i;
    bool eh_primo = true;
    int menor_divisor = -1;

    printf("\n--- 6) Teste de Primo ---\n");
    printf("Digite um inteiro N (N >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O numero deve ser maior ou igual a 2.\n");
        return 1;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            eh_primo = false;
            menor_divisor = i;
            break; // Encontrou o menor divisor, pode parar o loop
        }
    }

    printf("\nResultado para N = %d:\n", n);
    if (eh_primo) {
        printf("O numero %d **E PRIMO**.\n", n);
    } else {
        printf("O numero %d **NAO E PRIMO**.\n", n);
        printf("O menor divisor (>1) encontrado e: %d\n", menor_divisor);
    }

    return 0;
}
