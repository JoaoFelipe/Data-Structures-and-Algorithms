#include <stdio.h>
#include <string.h>

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

void procurar_todos(float elemento, float *X, int tamanho, char *retorno){
    while 1 {
        int pos = procurar(elemento, X, tamanho);
        if (pos == -1)
            break;
        sprintf(retorno, "%s%s%d",retorno, strcmp(retorno,"")? "" : " ", pos);
    }
}
