#include <stdio.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL,"");
  float n1, n2, resultado;
  int operador;
   
   printf ("escolha a operação\n");
   printf ("1 - soma\n");
   printf ("2 - subtração\n");
   printf ("3 - multiplicação\n");
   printf ("4 - divisão\n");
   scanf ("%d", &operador);
   
   switch //  ele é usado para escolher o que fazer baseado no valor.
  {
      case 1:  //para a soma
      
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 + n2;
          printf ("O resultado da soma é: %.f", resultado);
          break;
     
     case 2:  // para subtração
     
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 - n2;
          printf ("O resultado da subtração é: %.f", resultado);
          break;
     
     case 3: // para a multiplicação
         
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 * n2;
          printf ("O resultado da multiplicação é: %.f", resultado);
          break;
          
     case 4:  // para a divisão
     
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 / n2;
          printf ("O resultado da divisão é: %.f", resultado);
          break;
          
  }
  return 0; // finalizar a programação
}