#include <stdio.h>

int main() {
    int numero;
    int quantidade = 0;
    int soma = 0;
    float media;

    printf("\n--- 2) Soma e Media ate Sentinela (-1) ---\n");
    printf("Digite um numero (digite -1 para parar): ");
    scanf("%d", &numero);

    while (numero != -1) {
        soma += numero;
        quantidade++;
        
        printf("Digite um numero (digite -1 para parar): ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        // A média deve ser calculada com ponto flutuante
        media = (float)soma / quantidade; 
        printf("\nResultados:\n");
        printf("Quantidade de numeros digitados: %d\n", quantidade);
        printf("Soma total: %d\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum numero valido foi digitado (exceto o -1).\n");
    }

    return 0;
}
