#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i;
    int maior, menor;
    int soma = 0;
    float media;

    printf("\n--- 4) Maior, Menor e Media em Vetor (10 posicoes) ---\n");
    printf("Por favor, digite 10 numeros inteiros:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];

        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }
    
    media = (float)soma / TAMANHO;

    printf("\n--- Resultados ---\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
