int palavra_contida(char *palavra, char *frase)
{
    for (int i = 0; (*(frase + i) != '\0') || (*palavra == '\0'); i++) {
        if (*palavra == *(frase + i )) 
            palavra++;
    } 
    return (*palavra == '\0' ? 1 : 0);
}
 
