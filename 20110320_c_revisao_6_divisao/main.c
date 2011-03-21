#include <stdio.h>
#include "revisao_6_divisao.c"

int main(void)
{
    int dividendo;
    int divisor;
    printf("Digite o Dividendo\n");
    scanf("%d", &dividendo);
    printf("Digite o Divisor\n");
    scanf("%d", &divisor);
    printf("O quociente é %d\n", divisao(dividendo, divisor));

}
