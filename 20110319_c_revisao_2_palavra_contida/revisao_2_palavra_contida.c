int palavra_contida(char *palavra, char *frase)
{
    for (int i = 0; (*(frase + i) != '\0'); i++){
        if (*palavra == *(frase + i ))
            return 1;
    }
    return 0;
}
 
