#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct CADASTRO {
    char nome[51], cargo[21], telefone[16], email[51];
    float salario;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador, maior, nenhum;
    float verificador, salario_total;

    struct CADASTRO cadastro[5];

    printf("==== CADASTRO DE FUNCIONÁRIOS ====\n");
    printf("Cadastre seu telefone no seguinte padrão:\nCelular: (ddd) xxxxx-xxxx\nTelefone fixo: (ddd) xxxx-xxxx\n\n");

    for(contador = 0; contador < 5; contador++) {
        printf("Cadastro do funcionário [#%d]\n", contador+1);
        printf("Nome: ");
        scanf("%[^\n]s", &cadastro[contador].nome);
        getchar();
        fflush(stdin);
        printf("E-mail: ");
        scanf("%[^\n]s", &cadastro[contador].email);
        getchar();
        fflush(stdin);
        printf("Telefone: ");
        scanf("%[^\n]s", &cadastro[contador].telefone);
        getchar();
        fflush(stdin);
        printf("Cargo: ");
        scanf("%[^\n]s", &cadastro[contador].cargo);
        getchar();
        fflush(stdin);
        printf("Salário: ");
        scanf("%f", &cadastro[contador].salario);
        getchar();
        fflush(stdin);

        if (contador < 4) {
            printf("\n\n");
        }
    }

    system("clear || cls");

    salario_total = cadastro[0].salario + cadastro[1].salario + cadastro[2].salario + cadastro[3].salario + cadastro[4].salario;

    printf("Salário total de todos os funcionários cadastrados: R$%02.f\n", salario_total);

    for (contador = 0; contador < 5; contador++) {
        if (contador > 0) {
            if (verificador < cadastro[contador].salario) {
                verificador = cadastro[contador].salario;
                maior = contador;
            }
        } else {
            verificador = cadastro[contador].salario;
            maior = 0;
        }
    }

    printf("Funcionário com maior salário: %s\n", cadastro[maior].nome);

    printf("Funcionário(s) com telefone em branco: ");

    nenhum = 0;

    for (contador = 0; contador < 5; contador++) {
        if (strlen(cadastro[contador].telefone) < 14) {
            printf("%s", cadastro[contador].nome);

            if (contador < 4) {
                printf(", ");
            }

            nenhum++;
        }
    }

    if (nenhum == 0) {
        printf("nenhum");
    }

    printf("\n");

    return 0;
}
