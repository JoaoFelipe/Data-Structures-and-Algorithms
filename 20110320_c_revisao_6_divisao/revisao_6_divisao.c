int divisao(int a, int b)
{
    if (a-b < b)
        return 1;
    return 1+divisao(a-b , b);
}

