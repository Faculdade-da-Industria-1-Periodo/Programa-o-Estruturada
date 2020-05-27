#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CADASTRO {
  char nome[50];
  int idade;
  struct CADASTRO *proximo;
};

int main()
{
    struct CADASTRO *cadastro = NULL, *aux1 = NULL, *aux2 = NULL, *aux3 = NULL;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa 4");
    cadastro->idade = 10;
    cadastro->proximo = NULL;

    aux3 = cadastro;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa 3");
    cadastro->idade = 20;
    cadastro->proximo = NULL;

    aux2 = cadastro;

    cadastro->proximo = aux3;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa 2");
    cadastro->idade = 50;
    cadastro->proximo = NULL;

    aux1 = cadastro;

    cadastro->proximo = aux2;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa 1");
    cadastro->idade = 40;
    cadastro->proximo = NULL;

    cadastro->proximo = aux1;

    printf("---- Primeira pessoa ----\n");
    printf("Endereço na memória da pessoa 1: 0x%X\n", cadastro);
    printf("Nome: %s\n", cadastro->nome);
    printf("Idade: %d\n", cadastro->idade);
    printf("Próximo: 0x%X\n", cadastro->proximo);

    printf("\n---- Segunda pessoa ----\n");
    printf("Endereço na memória da pessoa 2: 0x%X\n", aux1);
    printf("Nome: %s\n", aux1->nome);
    printf("Idade: %d\n", aux1->idade);
    printf("Próximo: 0x%X\n", aux1->proximo);

    printf("\n---- Terceira pessoa ----\n");
    printf("Endereço na memória da pessoa 3: 0x%X\n", aux2);
    printf("Nome: %s\n", aux2->nome);
    printf("Idade: %d\n", aux2->idade);
    printf("Próximo: 0x%X\n", aux2->proximo);

    printf("\n---- Quarta pessoa ----\n");
    printf("Endereço na memória da pessoa 4: 0x%X\n", aux3);
    printf("Nome: %s\n", aux3->nome);
    printf("Idade: %d\n", aux3->idade);
    printf("Próximo: 0x%X\n", aux3->proximo);

    free(cadastro);
    free(aux1);
    free(aux2);
    free(aux3);
    cadastro = NULL;
    aux1 = NULL;
    aux2 = NULL;
    aux3 = NULL;

    return 0;
}
