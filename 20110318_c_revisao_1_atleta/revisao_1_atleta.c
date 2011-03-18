float media(float notas[], int quantidade)
{
    int i;
    float resultado = 0;
    for (i = 0; i<quantidade; i++){
        resultado += notas[i]/6;
    }
    return resultado;
}

void remove_extremos(float notas[], int quantidade, float resultado[])
{
    float min = notas[0];
    float max = notas[1];
    if (min > max){
        float temp = min;
        min = max;
        max = temp;
    }

    for (int i = 1; i<quantidade-1; i++){
        resultado[i-1] = notas[i];
    }
}
