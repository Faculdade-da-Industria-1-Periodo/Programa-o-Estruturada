#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3, perimetro;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("O perímetro do triângulo é: %d\n", perimetro);

    return 0;
}
