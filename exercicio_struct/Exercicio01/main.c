#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct AUTOMOVEL{
    char marca[21], modelo[21];
    int ano;
    float preco;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade, contador;

    printf("Feirão de carros\n**************************\n\n");

    printf("Quantos carros deseja cadastrar? ");
    scanf("%d", &quantidade);

    struct AUTOMOVEL carro[quantidade];

    if(quantidade > 0){
        // Recolher dados do carro cadastrado
        for(contador = 0; contador < quantidade; contador++){
            printf("\nCadastrando %dº carro...\n", contador+1);
            printf("Marca: ");
            scanf(" %[^\n]s", &carro[contador].marca);
            getchar();
            fflush(stdin);
            printf("Modelo: ");
            scanf(" %[^\n]s", &carro[contador].modelo);
            getchar();
            fflush(stdin);
            printf("Ano: ");
            scanf("%d", &carro[contador].ano);
            getchar();
            fflush(stdin);
            printf("Preço (R$): ");
            scanf("%f", &carro[contador].preco);
            getchar();
            fflush(stdin);
        }

        printf("\n###################################\n");

        //Exibir dados do carro cadastrado
        for(contador = 0; contador < quantidade; contador++){
            printf("\n%dº carro cadastrado.\n", contador+1);
            printf("Marca: %s\n", carro[contador].marca);
            printf("Modelo: %s\n", carro[contador].modelo);
            printf("Ano: %d\n", carro[contador].ano);
            printf("Preço: R$%.2f\n", carro[contador].preco);

            if(contador < quantidade-1){
                printf("\n---------------------------\n");
            }
        }
    }else{
        printf("\n*** Quantidade precisa ser maior que 0!!! ***\n");
        exit(0);
    }

    return 0;
}
