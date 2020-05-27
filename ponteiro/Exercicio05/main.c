#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct PRODUTO_ESTATICO {
    int quantidade;
    char descricao[50];
    float valor;
};

struct PRODUTO_DINAMICO {
    int quantidade;
    char descricao[50];
    float valor;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct PRODUTO_ESTATICO estatico;
    struct PRODUTO_DINAMICO *dinamico;

    printf("----- Cadastro do produto -----\n");
    printf("Quantidade: ");
    scanf("%d", &estatico.quantidade);
    getchar();
    printf("Descrição: ");
    scanf("%[^\n]s", &estatico.descricao);
    getchar();
    printf("Valor (R$): ");
    scanf("%f", &estatico.valor);
    getchar();

    dinamico = (struct PRODUTO_DINAMICO*) malloc(sizeof(struct PRODUTO_DINAMICO));

    dinamico->quantidade = estatico.quantidade;
    strcpy(dinamico->descricao, estatico.descricao);
    dinamico->valor = estatico.valor;

    printf("\n----- Dados do Produto -----\n");
    printf("Quantidade: %d\n", dinamico->quantidade);
    printf("Descrição: %s\n", dinamico->descricao);
    printf("Valor: R$%0.2f\n", dinamico->valor);

    return 0;
}
