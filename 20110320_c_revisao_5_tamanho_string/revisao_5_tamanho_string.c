int tamanhoString(char text[], int cont)
{
    if (text[cont] != '\0'){
        tamanhoString(text, (cont++));
    }
    return cont;
}

int tamanho_string(char *string)
{
    int t = 0;

    return tamanhoString(string, t);
//    if (*string == '\0')
//        return 0;
//    else
//        return 1+tamanho_string(string+1);
}


