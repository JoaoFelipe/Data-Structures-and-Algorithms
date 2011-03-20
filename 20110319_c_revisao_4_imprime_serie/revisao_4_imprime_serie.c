char* imprime_serie(int i, int j, int k, char *result)
{
    sprintf(result, "%d", i);
    if (i+k <= j){
        sprintf(result, " ");
        imprime_serie(i+k, j, k, result);
    }
    
    return result;
}

