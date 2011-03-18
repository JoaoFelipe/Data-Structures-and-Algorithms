float media(float notas[], int quantidade)
{
    int i;
    float resultado = 0;
    for (i = 0; i<quantidade; i++){
        resultado += notas[i]/6;
    }
    return resultado;
}

