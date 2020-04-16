#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, contador;

    struct AUTOMOVEL{
        char marca[12], modelo[20];
        int ano;
        float preco;
    };

    struct AUTOMOVEL carro[quantidade];

    printf("Feirão de carros\n**************************\n\n");

    printf("Quantos carros deseja cadastrar? ");
    scanf("%d", &quantidade);

    if(quantidade > 0){
        // Recolher dados do carro cadastrado
        for(contador = 1; contador <= quantidade; contador++){
            printf("\nCadastrando %dº carro...\n", contador);
            printf("Marca: ");
            scanf(" %[^\n]s", &carro[contador].marca);
            printf("Modelo: ");
            scanf(" %[^\n]s", &carro[contador].modelo);
            printf("Ano: ");
            scanf("%d", &carro[contador].ano);
            printf("Preço (R$): ");
            scanf("%f", &carro[contador].preco);
        }

        printf("\n###################################\n");

        //Exibir dados do carro cadastrado
        for(contador = 1; contador <= quantidade; contador++){
            printf("\n%dº carro cadastrado.\n", contador);
            printf("Marca: %s\n", carro[contador].marca);
            printf("Modelo: %s\n", carro[contador].modelo);
            printf("Ano: %d\n", carro[contador].ano);
            printf("Preço: R$%.2f\n", carro[contador].preco);

            if(contador < quantidade){
                printf("\n---------------------------\n");
            }
        }
    }else{
        printf("\n*** Quantidade precisa ser maior que 0!!! ***\n");
        exit(0);
    }

    return 0;
}
