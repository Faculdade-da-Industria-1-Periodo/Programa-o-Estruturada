#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct COMERCIAL {
    char endereco[51], bairro[26], cidade[31], uf[3], cep[11];
    int numero;
};


struct RESIDENCIAL {
    char endereco[51], bairro[26], cidade[31], uf[3], cep[11];
    int numero;
};

struct CADASTRO {
    char nome[50], telefone[16];
    int idade;
    struct COMERCIAL end_comercial;
    struct RESIDENCIAL end_residencial;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct CADASTRO *cadastro;

    cadastro = (struct CADASTRO*) malloc(sizeof(struct CADASTRO));

    printf("===== Realize seu cadastro =====\n");
    printf("Por favor, cadastre o CEP no seguinte padrão: xxxxx-xxx\n");
    printf("Cadastre seu telefone no seguinte padrão:\nCelular: (ddd) xxxxx-xxxx\nTelefone fixo: (ddd) xxxx-xxxx\n\n");

    printf("Nome Completo: ");
    scanf("%[^\n]s", &cadastro->nome);
    getchar();
    printf("Idade: ");
    scanf("%d", &cadastro->idade);
    getchar();
    printf("Telefone: ");
    scanf("%[^\n]s", &cadastro->telefone);
    getchar();

    printf("\n----- Endereço Comercial -----\n");
    printf("Endereço: ");
    scanf("%[^\n]s", &cadastro->end_comercial.endereco);
    getchar();
    printf("Nº: ");
    scanf("%d", &cadastro->end_comercial.numero);
    getchar();
    printf("Bairro: ");
    scanf("%[^\n]s", &cadastro->end_comercial.bairro);
    getchar();
    printf("Cidade: ");
    scanf("%[^\n]s", &cadastro->end_comercial.cidade);
    getchar();
    printf("UF: ");
    scanf("%[^\n]s", &cadastro->end_comercial.uf);
    getchar();
    printf("CEP: ");
    scanf("%[^\n]s", &cadastro->end_comercial.cep);
    getchar();

    printf("\n----- Endereço Residencial -----\n");
    printf("Endereço: ");
    scanf("%[^\n]s", &cadastro->end_residencial.endereco);
    getchar();
    printf("Nº: ");
    scanf("%d", &cadastro->end_residencial.numero);
    getchar();
    printf("Bairro: ");
    scanf("%[^\n]s", &cadastro->end_residencial.bairro);
    getchar();
    printf("Cidade: ");
    scanf("%[^\n]s", &cadastro->end_residencial.cidade);
    getchar();
    printf("UF: ");
    scanf("%[^\n]s", &cadastro->end_residencial.uf);
    getchar();
    printf("CEP: ");
    scanf("%[^\n]s", &cadastro->end_residencial.cep);
    getchar();

    system("clear || cls");

    printf("===== Dados cadastrados =====\n");
    printf("Nome: %s\n", cadastro->nome);
    printf("Idade: %d anos\n", cadastro->idade);
    printf("Telefone: %s\n", cadastro->telefone);
    printf("Endereço comercial: %s, %u - %s - %s/%s - %s\n", cadastro->end_comercial.endereco, cadastro->end_comercial.numero, cadastro->end_comercial.bairro, cadastro->end_comercial.cidade, cadastro->end_comercial.uf, cadastro->end_comercial.cep);
    printf("Endereço residencial: %s, %u - %s - %s/%s - %s\n", cadastro->end_residencial.endereco, cadastro->end_residencial.numero, cadastro->end_residencial.bairro, cadastro->end_residencial.cidade, cadastro->end_residencial.uf, cadastro->end_residencial.cep);

    free(cadastro);
    cadastro = NULL;

    return 0;
}
