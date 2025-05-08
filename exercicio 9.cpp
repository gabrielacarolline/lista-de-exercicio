#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibe o menu
        printf("\n=== MENU ===\n");
        printf("1. Subtrair\n");
        printf("2. somar\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao (1-3): ");
        scanf("%d", &opcao);

        // Verifica a opção escolhida
        switch (opcao) {
            case 1: // Somar
                printf("Digite dois numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2: // Subtrair
                printf("Digite dois numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3: // Sair
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3); // Repete até escolher Sair

    return 0;
}