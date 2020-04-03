#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, perimetro;

    printf("Digite o primeiro lado do quadrado: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do quadrado: ");
    scanf("%d", &lado2);

    perimetro = (lado1 + lado2) * 2;

    printf("O perímetro do quadrado é: %d\n", perimetro);

    return 0;
}
