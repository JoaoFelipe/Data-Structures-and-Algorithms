float media(int *estoque, int tamanho)
{
    float media = 0;
    for (int i = 0; i < tamanho; i++){
        media += ((float) (estoque[i]))/ tamanho;
    }
    return media;
}

int minimo(int *estoque, int tamanho)
{
    int *minimo = &estoque[0];
    for (int i = 1; i < tamanho; i++){
        if (*minimo > estoque[i]){
            minimo = &estoque[i];
        }
    }

    return *minimo;
}
