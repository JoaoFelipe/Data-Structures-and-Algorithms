int soma(float *X, float *Y, int tamanho, float *retorno)
{
    *retorno = *X + *Y;
    if (tamanho > 0)
        soma(X+1, Y+1, tamanho -1, retorno+1);
}

