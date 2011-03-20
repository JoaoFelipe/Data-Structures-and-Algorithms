void tabuada(int num, int quantidade, int *retorno)
{
    for (int i = 0; i < quantidade; i++){
        retorno[i] = num * (i + 1);
        printf("%d, %d", i, retorno[i]);
    }
}

