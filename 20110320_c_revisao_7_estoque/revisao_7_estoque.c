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
    return estoque[0];
}
