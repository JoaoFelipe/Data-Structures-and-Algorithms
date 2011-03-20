char* imprime_serie(int i, int j, int k, char *result)
{
    sprintf(result, "%s%d", result, i);
    if ((k > 0 && i+k <= j) || (k < 0 && i+k >= j)) {
        sprintf(result, "%s ", result);
        imprime_serie(i+k, j, k, result);
    }
}

