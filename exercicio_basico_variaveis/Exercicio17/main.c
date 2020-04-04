#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int segundos_digitado, segundos, minutos, horas;

    printf("Digite a quantidade de segundos para conversão: ");
    scanf("%d", &segundos_digitado);

    horas = floor(segundos_digitado / 3600);
    minutos = floor((segundos_digitado - (horas * 3600)) / 60);
    segundos = floor(segundos_digitado % 60);

    printf("Segundos convertido em hora(s), minuto(s) e segundo(s): %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
