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
    struct CADASTRO *cadastro = NULL, *aux = NULL;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa 2");
    cadastro->idade = 20;
    cadastro->proximo = NULL;

    aux = cadastro;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa 1");
    cadastro->idade = 10;
    cadastro->proximo = NULL;

    cadastro->proximo = aux;

    printf("---- Primeira pessoa ----\n");
    printf("Endereço na memória: 0x%X\n", cadastro);
    printf("Nome: %s\n", cadastro->nome);
    printf("Idade: %d\n", cadastro->idade);
    printf("Próximo: 0x%X\n", cadastro->proximo);

    printf("\n---- Segunda pessoa ----\n");
    printf("Endereço na memória: 0x%X\n", aux);
    printf("Nome: %s\n", aux->nome);
    printf("Idade: %d\n", aux->idade);
    printf("Próximo: 0x%X\n", aux->proximo);

    free(cadastro);
    free(aux);
    cadastro = NULL;
    aux = NULL;

    return 0;
}
