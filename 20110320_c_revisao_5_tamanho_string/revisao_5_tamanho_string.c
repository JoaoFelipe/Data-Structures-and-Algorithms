int tamanhoString(char text[], int cont)
{
    if (text[cont] != '\0'){
        tamanhoString(text, (cont++ +1));
    }
    return cont;
}

int tamanho_string(char *string)
{
    int t= tamanhoString(string, 0);
    printf("%d\n", t);
    return t;
//    if (*string == '\0')
//        return 0;
//    else
//        return 1+tamanho_string(string+1);
}


