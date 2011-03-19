int palavra_contida(char *palavra, char *frase)
{
    int i = 0;
    while (*(frase + i) != '\0') {
        if (*palavra == *(frase + i )){
            if (*(palavra + 1) == '\0')
                return 1;
        }
        i++;
    } 
    return 0;
}
 
