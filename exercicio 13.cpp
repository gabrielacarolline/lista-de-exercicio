#include <stdio.h>

int main() {
    int vetor[10], i, pares = 0;
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) pares++;
    }
    printf("Quantidade de pares: %d\n", pares);
    return 0;
}