/*Este código é um simples programa que calcula a soma, a diferença, o produto e o quociente de dois números inseridos pelo usuário: */
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Realiza as operações aritméticas
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Verifica se o segundo número é diferente de zero antes de realizar a divisão
    if (num2 != 0) {
        quotient = (float) num1 / num2;
    } else {
        printf("Divisão por zero não é permitida.\n");
        return 1; // Sai do programa com código de erro
    }

    // Exibe os resultados
    printf("Soma: %d\n", sum);
    printf("Diferença: %d\n", difference);
    printf("Produto: %d\n", product);
    printf("Quociente: %.2f\n", quotient);

    return 0;
}
