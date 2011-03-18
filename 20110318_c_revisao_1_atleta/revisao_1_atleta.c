int media(float notas[], quantidade)
{
    int i;
    int tamanho = sizeof(notas);
    printf("%d\n",tamanho);
    return tamanho;
    float retorno = 0;

    for (i = 0; i< sizeof(notas)/sizeof(notas[0]); i++){
        retorno += notas[i]/6;
    }
    return retorno;
}

