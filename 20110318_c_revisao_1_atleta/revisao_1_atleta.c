int media(float notas[])
{
    int i;
    float retorno = 0;
    for (i = 0; i< sizeof(notas); i++){
        retorno += notas[i]/6;
    }
    return retorno;
}

