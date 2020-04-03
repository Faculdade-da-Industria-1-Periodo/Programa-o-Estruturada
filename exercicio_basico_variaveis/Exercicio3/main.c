#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, media;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    media = (num1 + num2) / 2;

    printf("A média de %d + %d é %d", num1, num2, media);

    return 0;
}
