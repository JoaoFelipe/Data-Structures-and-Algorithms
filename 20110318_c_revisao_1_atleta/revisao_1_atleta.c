float media(float notas[], int quantidade)
{
    float resultado = 0;
    for (int i = 0; i<quantidade; i++){
        resultado += notas[i]/6;
    }
    return resultado;
}

void remove_extremos(float notas[], int quantidade, float resultado[])
{
    for (int i = 1; i<quantidade-1; i++){
        resultado[i-1] = notas[i];
    }
}
