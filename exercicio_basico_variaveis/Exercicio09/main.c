#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
    int raio;
    float circunferencia;

    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);

    circunferencia = 2 * pi * raio;

    printf("A circunferência do círculo é %g\n", circunferencia);

    return 0;
}
