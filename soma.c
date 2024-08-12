#include <stdio.h>

int main(){
  int num1, num2, soma;

  printf("CALCULADORA DE SOMA \n");
  printf("Digite dois números para realizar a adição\n");
  
  printf("Digite o primeiro número:\n");
  scanf("%d",&num1);
  
  printf("Digite o segundo número:\n");
  scanf("%d",&num2);

  soma = num1 + num2;

  printf("Soma: %d", soma);


return 0;
}
