#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {
    char nome[51], telefone[16];
};

int main()
{
    struct CADASTRO *cadastro[5];

    printf("===== Realize seu cadastro =====\n");
    printf("Cadastre seu telefone no seguinte padrão:\nCelular: (ddd) xxxxx-xxxx\nTelefone fixo: (ddd) xxxx-xxxx\n\n");

    cadastro[0] = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));
    printf("Pessoa 1:\n");
    printf("Nome Completo: ");
    scanf("%[^\n]s", &cadastro[0]->nome);
    getchar();
    printf("Telefone: ");
    scanf("%[^\n]s", &cadastro[0]->telefone);
    getchar();

    cadastro[1] = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));
    printf("\nPessoa 2:\n");
    printf("Nome Completo: ");
    scanf("%[^\n]s", &cadastro[1]->nome);
    getchar();
    printf("Telefone: ");
    scanf("%[^\n]s", &cadastro[1]->telefone);
    getchar();

    cadastro[2] = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));
    printf("\nPessoa 3:\n");
    printf("Nome Completo: ");
    scanf("%[^\n]s", &cadastro[2]->nome);
    getchar();
    printf("Telefone: ");
    scanf("%[^\n]s", &cadastro[2]->telefone);
    getchar();

    cadastro[3] = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));
    printf("\nPessoa 4:\n");
    printf("Nome Completo: ");
    scanf("%[^\n]s", &cadastro[3]->nome);
    getchar();
    printf("Telefone: ");
    scanf("%[^\n]s", &cadastro[3]->telefone);
    getchar();

    cadastro[4] = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));
    printf("\nPessoa 5:\n");
    printf("Nome Completo: ");
    scanf("%[^\n]s", &cadastro[4]->nome);
    getchar();
    printf("Telefone: ");
    scanf("%[^\n]s", &cadastro[4]->telefone);
    getchar();

    system("clear || cls");

    printf("===== Dados cadastrados =====\n");
    printf("Pessoa 1:\n");
    printf("Nome: %s\n", cadastro[0]->nome);
    printf("Telefone: %s\n", cadastro[0]->telefone);

    printf("\nPessoa 2:\n");
    printf("Nome: %s\n", cadastro[1]->nome);
    printf("Telefone: %s\n", cadastro[1]->telefone);

    printf("\nPessoa 3:\n");
    printf("Nome: %s\n", cadastro[2]->nome);
    printf("Telefone: %s\n", cadastro[2]->telefone);

    printf("\nPessoa 4:\n");
    printf("Nome: %s\n", cadastro[3]->nome);
    printf("Telefone: %s\n", cadastro[3]->telefone);

    printf("\nPessoa 5:\n");
    printf("Nome: %s\n", cadastro[4]->nome);
    printf("Telefone: %s\n", cadastro[4]->telefone);

    free(cadastro[0]);
    free(cadastro[1]);
    free(cadastro[2]);
    free(cadastro[3]);
    free(cadastro[4]);
    cadastro[0] = NULL;
    cadastro[1] = NULL;
    cadastro[2] = NULL;
    cadastro[3] = NULL;
    cadastro[4] = NULL;

    return 0;
}
