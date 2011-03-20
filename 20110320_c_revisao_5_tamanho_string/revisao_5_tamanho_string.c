int tamanho_string(char *string)
{
    if (*string == '\0')
        return 0;
    return 1+tamanho_string(string+1);
}


