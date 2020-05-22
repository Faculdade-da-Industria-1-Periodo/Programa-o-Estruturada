#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *numero[5];

    numero[0] = (int*) malloc(sizeof(int));
    printf("Digite um número: ");
    scanf("%d", numero[0]);

    numero[1] = (int*) malloc(sizeof(int));
    printf("Digite outro número: ");
    scanf("%d", numero[1]);

    numero[2] = (int*) malloc(sizeof(int));
    printf("Digite mais um número: ");
    scanf("%d", numero[2]);

    numero[3] = (int*) malloc(sizeof(int));
    printf("Digite mais um número: ");
    scanf("%d", numero[3]);

    numero[4] = (int*) malloc(sizeof(int));
    printf("Digite o último número: ");
    scanf("%d", numero[4]);

    printf("%d\n", *numero[0]);
    printf("%d\n", *numero[1]);
    printf("%d\n", *numero[2]);
    printf("%d\n", *numero[3]);
    printf("%d\n", *numero[4]);

    free(numero[0]);
    free(numero[1]);
    free(numero[2]);
    free(numero[3]);
    free(numero[4]);
    numero[0] = NULL;
    numero[1] = NULL;
    numero[2] = NULL;
    numero[3] = NULL;
    numero[4] = NULL;

    return 0;
}
