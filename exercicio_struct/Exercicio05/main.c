#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {
  char nome[50];
  int idade;
};

int main()
{
    int contador, verificador, maior;

    struct CADASTRO cadastro[5];

    printf("===== Cadastro de pessoas =====\n");

    for(contador = 0; contador < 5; contador++) {
        printf("Cadastro da pessoa #%d\n", contador+1);
        printf("Nome: ");
        scanf(" %[^\n]s", &cadastro[contador].nome);
        printf("Idade: ");
        scanf("%d", &cadastro[contador].idade);

        if (contador < 4) {
            printf("\n");
        }
    }

    for(contador = 0; contador < 5; contador++) {
        if (contador > 0) {
            if (verificador < cadastro[contador].idade) {
                verificador = cadastro[contador].idade;
                maior = contador;
            }
        } else {
            verificador = cadastro[contador].idade;
            maior = 0;
        }
    }

    system("clear || cls");

    printf("===== Pessoa que possui maior idade =====\n");
    printf("Nome: %s\n", cadastro[maior].nome);
    printf("Idade: %d anos\n", cadastro[maior].idade);

    return 0;
}
