#include <stdio.h>

int main() {
    int idade; // declara uma variável inteira

    printf("Digite sua idade: "); // faz o pedido de digitação de um número
    scanf("%d", &idade); // guardar variavel

    //denominar se a pessoa pode ou não votar
    if (idade < 16) {
        printf("Não vota.\n"); //se a pessoa tiver menos que 16 anos não vota
    } 
    else if ((idade >= 16 && idade < 18) || idade > 70) //se a pessoa tiver 16 ou mais, menos que 18 e mais que 70
    {
        printf("Voto facultativo.\n"); //o voto é opcional
    } 
    else //caso não, o voto é obrigatório
    {
        printf("Voto obrigatório.\n"); 
    }

    return 0; //finaliza a programação
}