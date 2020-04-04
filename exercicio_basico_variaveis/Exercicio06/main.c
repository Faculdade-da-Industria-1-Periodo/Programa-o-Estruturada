#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, area;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d", &lado2);

    area = (lado1 * lado2) / 2;

    printf("A área do triângulo é: %d\n", area);

    return 0;
}
