int media(float notas[])
{
    int i;
    float retorno = 0;
    for (i = 0; i< sizeof(notas)/sizeof(notas[0]); i++){
        retorno += notas[i]/6;
    }
    return retorno;
}

