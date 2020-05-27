#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor[5];

    vetor[0] = (int*) malloc(sizeof(vetor));
    vetor[0] = 20;
    printf("%d\n", vetor[0]);

    vetor[1] = (int*) malloc(sizeof(vetor));
    vetor[1] = 30;
    printf("%d\n", vetor[1]);

    vetor[2] = (int*) malloc(sizeof(vetor));
    vetor[2] = 99;
    printf("%d\n", vetor[2]);

    vetor[3] = (int*) malloc(sizeof(vetor));
    vetor[3] = 10;
    printf("%d\n", vetor[3]);

    vetor[4] = (int*) malloc(sizeof(vetor));
    vetor[4] = 70;
    printf("%d\n", vetor[4]);

    free(vetor[0]);
    free(vetor[1]);
    free(vetor[2]);
    free(vetor[3]);
    free(vetor[4]);
    vetor[0] = NULL;
    vetor[1] = NULL;
    vetor[2] = NULL;
    vetor[3] = NULL;
    vetor[4] = NULL;

    return 0;
}
