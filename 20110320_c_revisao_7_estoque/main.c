#include <stdio.h>
#include <stdlib.h>
#include "revisao_7_estoque.c"

void ler_numero_de_dias(int *dias)
{
    printf("Digite o numero de dias\n");
    scanf("%d", dias);
}

void ler_estoque(int *estoque, int dias)
{
    for (int i = 0; i < dias; i++){
        printf("Digite o estoque do dia %d : ", i+1);
        scanf("%d", estoque + i); 
    }
}

int main(void)
{
    int dias;
    ler_numero_de_dias(&dias);
        
    int *estoque = (int *) malloc(dias*sizeof(int));
    ler_estoque(estoque, dias);
    
    printf("Media: %.02f\n", media(estoque, dias));
    printf("Menor estoque: %d\n", minimo(estoque, dias));
    printf("Maior estoque: %d\n", maximo(estoque, dias));

    free(estoque);
}   
