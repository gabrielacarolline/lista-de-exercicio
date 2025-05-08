#include <stdio.h>

int main() {
    int n1, n2; // declara uma variável por inteira
    
    printf("Digite o primeiro número: ");     // pedido para adicionar um número
    scanf("%d", &n1);     // guardar variavel

    printf("Digite o segundo número: "); //  // pedido para adicionar um número novamente
    scanf("%d", &n2); // guardar variavel
    
    //definir qual é numero é maior
    if (n1 > n2) { // se o numero 1 for maior 
        printf("O maior número é: %d\n", n1);
    } 
    else if (n2 > n1) // se o numero 2 for maior
    {
        printf("O maior número é: %d\n", n2);
    } 
    
    return 0; // finaliza a programação
}