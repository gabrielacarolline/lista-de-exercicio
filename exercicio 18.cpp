#include <stdio.h>

struct Aluno {
    char nome[50];
    float notas[3];
};

int main() {
    struct Aluno aluno;
    float soma = 0, media;
    int i;
    
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite as 3 notas:\n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &aluno.notas[i]);
        soma += aluno.notas[i];
    }
    
    media = soma / 3;
    printf("\nNome: %s\n", aluno.nome);
    printf("Média: %.2f\n", media);
    printf("Situação: %s\n", media >= 7 ? "Aprovado" : "Reprovado");
    
    return 0;
}