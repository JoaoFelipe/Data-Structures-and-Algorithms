int tamanho_string(char *string)
{

    if (*string == '\0')
        return 0;
    else
        return 1+tamanho_string(string+1);
}

int tamanhoString(char *a, int cont)
{
    if (a[cont] != '\0')
        tamanhoString(a, cont++);
    return cont;
}

