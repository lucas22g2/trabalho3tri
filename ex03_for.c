#include <stdio.h>

int main() {
    int n, i;

    printf("\n--- 3) Tabuada (For) ---\n");
    printf("Digite um inteiro N para ver sua tabuada: ");
    scanf("%d", &n);

    printf("\nTabuada de %d:\n", n);
    for (i = 1; i <= 10; i++) {
        // Imprime a operacao N x i = resultado
        printf("%d x %2d = %3d\n", n, i, n * i);
    }

    return 0;
}
