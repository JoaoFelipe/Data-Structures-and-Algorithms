char* imprime_serie(int i, int j, int k, char *result)
{
    if ((k > 0 && i <= j) || (k < 0 && i >= j)) {
        sprintf(result, "%s%d", result, i);
        sprintf(result, "%s ", result);
        imprime_serie(i+k, j, k, result);
    }
}

