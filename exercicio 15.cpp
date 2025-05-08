#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno aluno;
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite a idade: ");
    scanf("%d", &aluno.idade);
    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);
    
    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);
    return 0;
}