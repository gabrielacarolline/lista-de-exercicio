#include <stdio.h>

int main() {
    char nome[50];
    float media, soma;
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nAluno %d\nNome: ", i + 1);
        fgets(nome, 50, stdin);
        
        printf("Media final: ");
        scanf("%f", &media);
        getchar(); // Limpa o buffer
        
        soma += media;
    }

    printf("\nMedia geral da turma: %.2f\n", soma / 5);

    return 0;
}