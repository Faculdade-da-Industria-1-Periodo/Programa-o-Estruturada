#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct CORRESPONDENCIA {
    char rua[31], bairro[21], cidade[21], estado[21];
    long int cep;
    int numero;
} a, b;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o nome da rua: ");
    scanf(" %[^\n]s", &a.rua);
    getchar();
    fflush(stdin);

    printf("Digite o número: ");
    scanf("%d", &a.numero);
    getchar();
    fflush(stdin);

    printf("Digite o bairro: ");
    scanf(" %[^\n]s", &a.bairro);
    getchar();
    fflush(stdin);

    printf("Digite a cidade: ");
    scanf(" %[^\n]s", &a.cidade);
    getchar();
    fflush(stdin);

    printf("Digite o estado: ");
    scanf(" %[^\n]s", &a.estado);
    getchar();
    fflush(stdin);

    printf("Digite o CEP: ");
    scanf("%d", &a.cep);
    getchar();
    fflush(stdin);

    strcpy(b.rua, a.rua);
    strcpy(b.bairro, a.bairro);
    strcpy(b.cidade, a.cidade);
    strcpy(b.estado, a.estado);
    b.cep = a.cep;
    b.numero = a.numero;

    printf("\n\nRua: %s, %d\n", b.rua, b.numero);
    printf("Bairro: %s\n", b.bairro);
    printf("Cidade: %s\n", b.cidade);
    printf("Estado: %s\n", b.estado);
    printf("CEP: %ld\n", b.cep);

    return 0;
}
