void tabuada(int num, int quantidade, int *retorno)
{
    for (int i = 0; i < quantidade; i++){
        retorno[i] = num * (i + 1);
    }
}

void tabuada_tabela(int n, int *retorno)
{
    for (int i = 0; i < n; i++){
        tabuada(n, n, (retorno+(i*n)));
    }
}

