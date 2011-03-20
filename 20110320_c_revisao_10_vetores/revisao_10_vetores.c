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
    if (*X == elemento)
        return 0;
    if (tamanho == 0)
        return -1;
    return 1+procurar(elemento, X+1, tamanho -1);
}
