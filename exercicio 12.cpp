#include <stdio.h>

int main() {
    int n, maior, menor, i;
    printf("Digite 10 numeros:\n");
    scanf("%d", &n);
    maior = menor = n;
    
    for (i = 1; i < 10; i++) {
        scanf("%d", &n);
        if (n > maior) maior = n;
        if (n < menor) menor = n;
    }
    
    printf("Maior: %d\n Menor: %d\n", maior, menor);
    return 0;
}