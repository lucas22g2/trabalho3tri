#include <stdio.h>

int main() {
    double salario_mensal;
    int escolha;
    double inss, valor_hora, hora_extra_valor;

    printf("\n--- 7) Menu RH (INSS ou Hora Extra) ---\n");
    printf("Digite o salario mensal do colaborador: R$ ");
    scanf("%lf", &salario_mensal);

    do {
        printf("\n--- MENU RH ---\n");
        printf("1) Calcular INSS (8%%)\n");
        printf("2) Calcular Valor das Horas Extras (Adicional 50%%)\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // 1) Calcular INSS (8% do salario)
                inss = salario_mensal * 0.08;
                printf("\n--- Calculo INSS ---\n");
                printf("Salario: R$ %.2lf\n", salario_mensal);
                printf("Desconto INSS (8%%): R$ %.2lf\n", inss);
                break;
            
            case 2:
                // 2) Calcular valor das horas extras (valor-hora = salario/220; adicional 50%)
                valor_hora = salario_mensal / 220.0;
                // Adicional de 50% = valor_hora * 1.5
                double valor_hora_extra_com_adicional = valor_hora * 1.5; 

                printf("\n--- Calculo Horas Extras ---\n");
                printf("Valor base da hora (Salario/220): R$ %.4lf\n", valor_hora);
                printf("Valor da Hora Extra (com 50%% de adicional): R$ %.4lf\n", valor_hora_extra_com_adicional);
                
                printf("Digite quantas horas extras foram trabalhadas: ");
                scanf("%lf", &hora_extra_valor);
                
                double total_horas_extras = hora_extra_valor * valor_hora_extra_com_adicional;
                printf("Total a receber por %.1f horas extras: R$ %.2lf\n", hora_extra_valor, total_horas_extras);
                break;

            case 0:
                printf("\nSaindo do menu RH. Ate mais!\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
