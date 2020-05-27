#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct CADASTRO {
    char nome[51], telefone[16];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct CADASTRO *cadastro;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    strcpy(cadastro->nome, "Pessoa");
    strcpy(cadastro->telefone, "(41) 99999-9999");

    printf("Nome: %s\n", cadastro->nome);
    printf("Telefone: %s\n", cadastro->telefone);

    free(cadastro);
    cadastro = NULL;

    return 0;
}
