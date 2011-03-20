#include <stdio.h>
#include "revisao_2_palavra_contida.c"

int main(void)
{
    char palavra1[80], palavra2[80];
    printf("Digite a palavra\n");
    scanf("%[^\n]", palavra1); getchar();
    printf("Digite a frase\n");
    scanf("%[^\n]", palavra2);
    printf("'%s' %sestá contida em '%s'\n", palavra1, palavra_contida(palavra1,palavra2)? "" : "não ", palavra2);
}
