#include <stdio.h>

int main(){
    float numero, soma, media;
    int contador;

    for (contador = 1; contador <= 10; contador++) {
        printf("Digite o numero: ", contador);
        scanf("%f", &numero);
        soma + numero; 
    }

    // Calcula a média
    media = soma / 10;

    // Exibe o resultado
    printf("A media dos 10 numeros eh: %.2f\n", media);

    return 0;
}