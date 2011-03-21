#include <stdio.h>
#include "revisao_4_imprime_serie.c"

int main(void)
{
    int i, j, k;
    printf("Digite o valor inicial da serie\n");
    scanf("%d", &i);
    printf("Digite o valor maximo da serie\n");
    scanf("%d", &j);
    printf("Digite o intervalo entre elementos da serie\n");
    scanf("%d", &k);
    printf("Serie: ");
    imprime_serie_real(i, j, k);
    printf("\n");
}
