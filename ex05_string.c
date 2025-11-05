#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar tolower()

#define MAX_TAM 101

int main() {
    char texto[MAX_TAM];
    int i;
    int contador_vogais = 0;

    printf("\n--- 5) Contador de Vogais em String ---\n");
    printf("Digite uma linha (maximo %d caracteres):\n", MAX_TAM - 1);
    
    while (getchar() != '\n'); 
    
    fgets(texto, MAX_TAM, stdin); 
  
    texto[strcspn(texto, "\n")] = 0; 

    for (i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]); 
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador_vogais++;
        }
    }

    printf("Texto digitado: \"%s\"\n", texto);
    printf("Total de vogais encontradas: %d\n", contador_vogais);

    return 0;
}
