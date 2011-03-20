char* imprime_serie(int i, int j, int k, char *result)
{
    printf(result, "%s%d", result, i);
    if ((k > 0 && i+k <= j) || (k < 0 && i+k >= j)) {
        printf(result, "%s ", result);
        imprime_serie(i+k, j, k, result);
    }
}

