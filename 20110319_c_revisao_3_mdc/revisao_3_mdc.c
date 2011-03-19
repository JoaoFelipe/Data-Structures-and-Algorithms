int mdc(int x, int y)
{
    if (x < y)
        return mdc(y,x);
    if (x % y == 0)
        return y;
    return mdc(y, x % y);
}

