void soma(float *X, float *Y, int tamanho, float *retorno)
{
    *retorno = *X + *Y;
    if (tamanho > 0)
        soma(X+1, Y+1, tamanho -1, retorno+1);
}

void subtrair(float *X, float *Y, int tamanho, float *retorno)
{
    *retorno = *X - *Y;
    if (tamanho > 0)
        subtrair(X+1, Y+1, tamanho -1, retorno+1);
}

int procurar(float elemento, float *X, int tamanho){
    for (int i=0; i<tamanho; i++){
        if (X[i] == elemento)
            return i;
    }
    return -1;
}
