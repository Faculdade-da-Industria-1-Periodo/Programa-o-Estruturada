#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

int main()
{
    int raio;
    float area;

    printf("Digite o raio da circunferência: ");
    scanf("%d", &raio);

    area = pow(raio, 2) * pi;

    printf("A área da circunferência é %g\n", area);

    return 0;
}
