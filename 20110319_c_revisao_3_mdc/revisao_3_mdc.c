int mdc(int x, int y)
{
    if (x % y == 0)
        return y;
    if (x < y)
        return mdc(y,x);
    return 1;
}

