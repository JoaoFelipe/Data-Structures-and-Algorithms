#include "vector_test_functions.c"

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
    int nova_quantidade = quantidade-2;

    float resultado[nova_quantidade];
    remove_extremos(notas, quantidade, resultado);
    
    int i;
    float media = 0;
    for (i = 0; i<nova_quantidade; i++){
        media += resultado[i]/nova_quantidade;
    }
    return media;
}


void ordenar_reversamente_segundo_de_acordo_com_primeiro(float* primeiro, int* segundo, int tamanho)
{
    float medias[tamanho] = {0};
    memcpy(medias, primeiro, tamanho);
    for (int i = 0; i < tamanho; i++){
        float *atual;
        int *resultado; 
        atual = &medias[i];
        resultado = &segundo[i];
        for (int j = i + 1; j < tamanho; j++){
            if (*atual < medias[j]){
                atual = &medias[j];
                resultado = &segundo[j];
            }
        }
        float temp = *atual;
        *atual = medias[i];
        medias[i] = temp;
        temp = *resultado;
        *resultado = segundo[i];
        segundo[i] = temp;
    }
}

void vencedores(float** atletas, int no_atletas, int no_notas, int resultado[])
{
    float medias[no_atletas];
    for (int i = 0; i < no_atletas; i++){
        float *pos = atletas + i*no_notas;
        medias[i] = media(pos, no_notas);
        resultado[i] = i;
    }
    print_float_vector(medias, no_atletas);
    selection_sort(medias, no_atletas);
    print_float_vector(medias, no_atletas);
}




