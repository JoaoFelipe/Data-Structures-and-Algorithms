char* imprime_serie(int i, int j, int k, char *result)
{
    sprintf(result, "%s%d", result, i);
    if ((k > 0 && i+k <= j) || (k < 0 && i+k >= j)) {
        sprintf(result, "%s ", result);
        imprime_serie(i+k, j, k, result);
    }
}

char* imprime_serie_real(int i, int j, int k)
{
    printf("%d", i);
    if ((k > 0 && i+k <= j) || (k < 0 && i+k >= j)) {
        printf(" ");
        imprime_serie_real(i+k, j, k);
    }
}

