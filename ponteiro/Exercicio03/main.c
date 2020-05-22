#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CADASTRO {
    char nome[50], telefone[15];
};

int main()
{
    struct CADASTRO *cadastro;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Gustavo Rattmann");
    strcpy(cadastro->telefone, "(41) 99208-5757");

    printf("Nome: %s\n", cadastro->nome);
    printf("Telefone: %s\n", cadastro->telefone);

    free(cadastro);
    cadastro = NULL;

    return 0;
}
