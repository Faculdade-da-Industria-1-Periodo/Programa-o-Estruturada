#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, peso1, peso2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite um peso para essa nota: ");
    scanf("%f", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite um peso para essa nota: ");
    scanf("%f", &peso2);

    media = ((nota1 * peso1) + (nota2 * peso2)) / 2;

    printf("A média ponderada da nota %.1f mais a nota %.1f é %.1f\n", nota1, nota2, media);

    return 0;
}
