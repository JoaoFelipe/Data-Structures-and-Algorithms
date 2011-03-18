int media(float notas[])
{
    float retorno = 0;
    for (int i = 0; i< sizeof(notas); i++){
        retorno += notas[i]/6;
    }
    return retorno;
}

