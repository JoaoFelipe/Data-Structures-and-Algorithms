void remove_extremos(float notas[], int quantidade, float resultado[])
{
    float min = notas[0];
    float max = notas[1];
    if (min > max){
        float temp = min;
        min = max;
        max = temp;
    }

    int k = 0;
    for (int i = 2; i<quantidade; i++){
        if (notas[i] < min){
            resultado[k++] = min;
            min = notas[i];
        } else if (notas[i] > max) {
            resultado[k++] = max;
            max = notas[i];
        } else {
            resultado[k++] = notas[i];
        }
    }
}

float media(float notas[], int quantidade)
{
    float resultado[quantidade-2];
    remove_extremos(notas, quantidade, resultado);
    
    int i;
    float media = 0;
    for (i = 0; i<quantidade-2; i++){
        media += resultado[i]/6;
    }
    return media;
}


