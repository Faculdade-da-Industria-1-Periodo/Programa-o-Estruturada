#include <stdio.h>
#include <stdlib.h>
#define DESCONTO 10
#define PARCELA 3

int main()
{
    float cobranca, valor_descontado, valor_parcela, comissao_vista, comissao_parcela;

    printf("Digite o valor da cobrança (R$): ");
    scanf("%f", &cobranca);

    valor_descontado = cobranca - ((cobranca * DESCONTO) / 100);
    valor_parcela = cobranca / PARCELA;
    comissao_vista = (valor_descontado * 5) / 100;
    comissao_parcela = (cobranca * 5) / 100;

    printf("\n");
    printf("Total a pagar com %d%% de desconto: R$%.2f\n", DESCONTO, valor_descontado);
    printf("Valor de cada parcela, no parcelamento de %dx sem juros: R$%.2f\n", PARCELA, valor_parcela);
    printf("Comissão do vendedor em venda à vista: R$%.2f\n", comissao_vista);
    printf("Comissão do vendor em venda parcelada: R$%.2f\n", comissao_parcela);

    return 0;
}
