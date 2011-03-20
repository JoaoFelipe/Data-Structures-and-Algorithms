int soma(float *X, float *Y, int tamanho, float *retorno)
{
    if (tamanho > 0)
        *retorno = *X + *Y;
    else
        soma(X+1, Y+1, tamanho -1, retorno+1);
}

