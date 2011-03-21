#include <stdio.h>
#include "revisao_5_tamanho_string.c"

int main(void)
{
    char texto[80];
    printf("Digite o texto\n");
    scanf("%[^\n]", texto); getchar();
    printf("%d caracteres\n", tamanho_string(texto));
}
