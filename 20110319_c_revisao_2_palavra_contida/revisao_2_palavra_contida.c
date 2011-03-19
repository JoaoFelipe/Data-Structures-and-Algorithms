int palavra_contida(char *palavra, char *frase)
{
    int i = 0;
    do {
        if (*palavra == *(frase + i )){
            if (*++palavra == '\0')
                return 1;
        }
        i++;
    } while (*(frase + i) != '\0');
    return 0;
}
 
