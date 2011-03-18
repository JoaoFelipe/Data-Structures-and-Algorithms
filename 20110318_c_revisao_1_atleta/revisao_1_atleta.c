int media(float notas[])
{
    float retorno = 0;
    for (int i = 0; i< length(notas); i++){
        retorno += notas[i]/6;
    }
    return retorno;
}

