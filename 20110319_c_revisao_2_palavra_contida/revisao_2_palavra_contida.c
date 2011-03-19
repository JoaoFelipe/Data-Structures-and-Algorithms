int palavra_contida(char *palavra, char *frase)
{
    for (int i = 0; (*(frase + i) != '\0'); i++){
        if (*palavra == *(frase + i )){
            if (*palavra == '\0')
                return 1;
            palavra++;
        }
    }
    return 0;
}
 
