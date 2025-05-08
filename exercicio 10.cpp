#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    //Declaração de variavel e seu tipo;
    int i, n, res=1;
    
    //solicitar número ao usuário e guardar na variavel
    printf("Inisira o número que deseja calcular o fatorial:\n");
    scanf("%d", &n);
    
    //Apagar informações
    system ("clear");
    
    //Cálculo
    for (i=1; i<=n; i++){
        res= res*i;
    }
    
    //obter resultado na tela
     printf ("O fatorial é : %d", res);
     
    //finalização da programação
    return 0;
}