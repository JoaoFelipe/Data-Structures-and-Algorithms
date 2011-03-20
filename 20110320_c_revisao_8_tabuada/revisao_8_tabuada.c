void tabuada(int num, int quantidade, int *retorno)
{
    for (int i = 0; i < quantidade; i++){
        retorno[i] = num * (i + 1);
    }
}

void tabuada_tabela(int n, int *retorno)
{
    print_int_vector(retorno, n*n);
    for (int i = 0; i < n; i++){
        tabuada(i+1, n, (retorno+(i*n)));
        print_int_vector(retorno, n*n);
    }
}

