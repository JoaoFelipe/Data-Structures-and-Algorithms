#include <stdio.h>
int palavra_contida(char *palavra, char *frase)
{
    int i = 0;
    while (*(frase + i) != '\0') {
        printf("%d, %d\n", *palavra, *(frase + i));
        if (*palavra == *(frase + i )){
            printf("%d, %d\n", *palavra, *(frase + i));
            if (*++palavra == '\0'){
                printf("%d", *palavra);
                return 1;
                
            }
            printf("%d, %d\n", *palavra, *(frase + i));
        }
        i++;
    } 
    return 0;
}
 
