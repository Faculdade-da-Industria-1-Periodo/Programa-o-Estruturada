#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    printf("Soma: %d+%d=%d\n", num1, num2, num1 + num2);
    printf("Subtração: %d-%d=%d", num1, num2, num1 - num2);

    return 0;
}
