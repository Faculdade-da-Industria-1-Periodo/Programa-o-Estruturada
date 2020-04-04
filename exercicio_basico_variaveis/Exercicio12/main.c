#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, resultado;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);
    printf("Digite mais um número: ");
    scanf("%d", &z);

    resultado = ((x - 5) * y) - z;

    printf("Resultado: %d\n", resultado);

    return 0;
}
