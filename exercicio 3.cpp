#include <stdio.h>

int main() {
    float nota1, nota2, media; // declara variáveis 

    printf("Digite a primeira nota: "); // pedindo para adicionar a nota
    scanf("%f", &nota1); // guardar variavel 

    printf("Digite a segunda nota: "); // pedindo para adicionar outra nota
    scanf("%f", &nota2); // guardar variavel

    media = (nota1 + nota2) / 2; //calculo total da media

    //deteminar se o aluno está Reprovado ou Aprovado
    if (media >= 7) {
        printf("Está Aprovado: %.2f\n", media); //se essa nota for maior ou igual a 7, ele está Aprovado
    } 
    else // ou se ele está Reprovado
    {
        printf("Está Reprovado: %.2f\n", media);
    }

    return 0; //final da programação.
}
