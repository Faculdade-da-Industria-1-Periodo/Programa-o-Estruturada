#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define litro 12
#define preco 2.60

int main()
{
    float distancia, litro_gastar, preco_gastar;

    printf("Digite a distância da sua casa até o local que deseja (km): ");
    scanf("%f", &distancia);

    litro_gastar = distancia / litro;
    preco_gastar = litro_gastar * preco;

    printf("\n");
    printf("Quantidade de litros de gasolina para essa viagem: %.2g\n", litro_gastar);
    printf("Preço total que vai gastar com gasolina: R$%.2f\n", preco_gastar);

    return 0;
}
