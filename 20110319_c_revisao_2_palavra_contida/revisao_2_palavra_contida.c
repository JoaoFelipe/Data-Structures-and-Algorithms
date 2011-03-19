#include <stdio.h>
int palavra_contida(char *palavra, char *frase)
{
    int i = 0;
    while (*(frase + i) != '\0') {
        printf("%d, %d", *palavra, *(frase + i));
        if (*palavra == *(frase + i )){
            if (*++palavra == '\0')
                return 1;
        }
        i++;
    } 
    return 0;
}
 
