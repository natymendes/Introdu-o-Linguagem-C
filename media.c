#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os três números e a média entre eles
    float num1, num2, num3, media;


    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);


    printf("Digite o segundo numero: ");
    scanf("%f", &num2);


    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    // Calcula a média dos três números
    media = (num1 + num2 + num3) / 3;


    printf("A media dos tres numeros e: %.2f\n", media);

    return 0;
}
