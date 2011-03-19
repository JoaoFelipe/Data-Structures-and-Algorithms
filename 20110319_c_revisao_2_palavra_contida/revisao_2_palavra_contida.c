#include <stdio.h>
int palavra_contida(char *palavra, char *frase)
{
    int i = 0;
    while (*(frase + i) != '\0') {
        if (*palavra == *(frase + i ) && (*++palavra == '\0'))
            return 1;
        i++;
    } 
    return 0;
}
 
