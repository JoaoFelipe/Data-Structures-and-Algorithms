int maior(int x, int y);
int menor(int x, int y);

float media(int *estoque, int tamanho)
{
    float media = 0;
    for (int i = 0; i < tamanho; i++){
        media += ((float) (estoque[i]))/ tamanho;
    }
    return media;
}

int extremo(int *estoque, int tamanho, int (*compare)(void*, void*))
{
    int *num = &estoque[0];
    for (int i = 1; i < tamanho; i++){
        if (compare(estoque[i], *num))
            num = &estoque[i];
    }
    return *num;
}

int minimo(int *estoque, int tamanho)
{
    return extremo(estoque, tamanho, menor);
}

int maximo(int *estoque, int tamanho)
{
    return extremo(estoque, tamanho, maior);
}

int maior(int x, int y)
{
    return x > y;
}

int menor(int x, int y)
{
    return x < y;
}
