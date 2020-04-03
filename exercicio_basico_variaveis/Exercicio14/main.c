#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, centigrados;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrados = ((fahrenheit - 32) * 5) / 9;

    printf("A temperatura em Fahrenheit convertida em graus célsius é %.1f\n", centigrados);

    return 0;
}
