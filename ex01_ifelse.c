#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um Numero: ");
    scanf("%d", &numero);
    
    if (numero <0 ) { 
    printf("O numero %d é negativo.\n", numero);
    
    } if (numero >0) { 
    printf("o numero %d é positivo.\n", numero);
    }
    if (numero == 0) { 
    printf("O número %d é nulo.\n", numero);
    }
    
    if (numero % 2 == 0) {
    
    printf("O número %d é PAR.\n", numero);
    } else {
    printf("O número %d é ÍMPAR.\n", numero);
    }
    
    return 0;
}
