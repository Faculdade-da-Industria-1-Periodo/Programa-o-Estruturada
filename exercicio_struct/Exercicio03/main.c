#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ENDERECO_COMERCIAL{
    char rua[20];
    int numero;
};

struct ENDERECO_RESIDENCIAL{
    char rua[20];
    int numero;
};

struct CADASTRO{
    char nome[16];
    int idade;
    struct ENDERECO_COMERCIAL comercial;
    struct ENDERECO_RESIDENCIAL residencial;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador;

    struct CADASTRO cadastro[5];

    for(contador = 0; contador < 5; contador++){
        printf("Cadastro %d\n", contador+1);

        printf("Digite um nome: ");
        scanf(" %[^\n]s", &cadastro[contador].nome);
        getchar();
        fflush(stdin);

        printf("Digite a idade: ");
        scanf("%d", &cadastro[contador].idade);
        getchar();
        fflush(stdin);

        printf("Digite o endereço comercial: ");
        scanf(" %[^\n]s", &cadastro[contador].comercial.rua);
        getchar();
        fflush(stdin);

        printf("Digite o número do endereço comercial: ");
        scanf("%d", &cadastro[contador].comercial.numero);
        getchar();
        fflush(stdin);

        printf("Digite o endereço residencial: ");
        scanf(" %[^\n]s", &cadastro[contador].residencial.rua);
        getchar();
        fflush(stdin);

        printf("Digite o número do endereço residencial: ");
        scanf("%d", &cadastro[contador].residencial.numero);
        getchar();
        fflush(stdin);

        if(contador < 4){
          printf("\n");
        }
    }

    printf("\n*******DADOS CADASTRADOS********\n");

    for(contador = 0; contador < 5; contador++){
        printf("Nome: %s\n", cadastro[contador].nome);
        printf("Idade: %d anos\n", cadastro[contador].idade);
        printf("Endereço Comercial: %s, %d\n", cadastro[contador].comercial.rua, cadastro[contador].comercial.numero);
        printf("Endereço Residencial: %s, %d", cadastro[contador].residencial.rua, cadastro[contador].residencial.numero);

        if(contador < 4){
            printf("\n\n");
        }
    }

    return 0;
}
