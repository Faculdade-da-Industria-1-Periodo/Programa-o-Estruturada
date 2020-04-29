#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct CORRESPONDENCIA {
        char rua[30], bairro[20], cidade[20], estado[20];
        long int cep;
        int numero;
    } a, b;

    printf("Digite o nome da rua: ");
    scanf(" %[^\n]s", &a.rua);

    printf("Digite o número: ");
    scanf("%d", &a.numero);

    printf("Digite o bairro: ");
    scanf(" %[^\n]s", &a.bairro);

    printf("Digite a cidade: ");
    scanf(" %[^\n]s", &a.cidade);

    printf("Digite o estado: ");
    scanf(" %[^\n]s", &a.estado);

    printf("Digite o CEP: ");
    scanf("%d", &a.cep);

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
