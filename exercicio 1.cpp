#include <stdio.h>
#include <locale.h>

int main () {
    int n; // defina uma variável inteira
    
    printf("Digite o numero:\n"); // pedido para digitar o numero
    scanf("%d", &n); //Guardar uma variavel
    
    if (nume % 2 == 0) //denominar se o numero é par ou impar
    {
        printf("é Par!:\n");
    }
    else //se não for par
    {
        printf("É impar!:\n");
    }
    
    return 0; //finalizar a programação.