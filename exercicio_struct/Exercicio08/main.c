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

    FILE *arquivo;
    int contador;

    struct CADASTRO cadastro[5];

    printf("==== CADASTRO DE FUNCIONÁRIOS ====\n");
    printf("Cadastre seu telefone no seguinte padrão:\nCelular: (ddd) xxxxx-xxxx\nTelefone fixo: (ddd) xxxx-xxxx\n\n");

    arquivo = fopen("cadastro.txt" , "w" ); // Se arquivo de texto não existir, cria um novo, senão sobrescreve

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

        fprintf(arquivo, "Nome: ");
        fwrite(&cadastro[contador].nome, 1, sizeof(cadastro[contador].nome), arquivo);
        fprintf(arquivo, "\nE-mail: ");
        fwrite(&cadastro[contador].email, 1, sizeof(cadastro[contador].email), arquivo);
        fprintf(arquivo, "\nTelefone: ");
        fwrite(&cadastro[contador].telefone, 1, sizeof(cadastro[contador].telefone), arquivo);
        fprintf(arquivo, "\nCargo: ");
        fwrite(&cadastro[contador].cargo, 1, sizeof(cadastro[contador].cargo), arquivo);
        fprintf(arquivo, "\nSalário: R$");
        fwrite(&cadastro[contador].salario, 1, sizeof(cadastro[contador].salario), arquivo);

        if (contador < 4) {
            fprintf(arquivo, "\n---------------------------------\n\n");
            printf("\n\n");
        }
    }

    fclose(arquivo);

    system("clear || cls");

    printf("Dados Armazenados!!!\n\n");

    return 0;
}
