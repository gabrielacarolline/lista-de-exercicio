#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];
    char busca[50];
    int i, encontrado = 0;
    
    printf("Digite os dados de 3 alunos:\n");
    for (i = 0; i < 3; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
    
    printf("\nDigite o nome para busca: ");
    scanf("%s", busca);
    
    for (i = 0; i < 3; i++) {
        if (strcmp(alunos[i].nome, busca) == 0) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;
            break;
        }
    }
    
    if (!encontrado) printf("Aluno não encontrado.\n");
    
    return 0;
}