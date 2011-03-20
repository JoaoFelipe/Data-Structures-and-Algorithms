int tamanhoString(char *text, int cont)
{
    printf("%s", text);
    printf("%s", text[cont]);
    if (*(text+cont) != '\0'){
        tamanhoString(text, cont++);
    }
    return cont;
}

int tamanho_string(char *string)
{
    return tamanhoString(string, 0);
//    if (*string == '\0')
//        return 0;
//    else
//        return 1+tamanho_string(string+1);
}


