#include <stdio.h>
#include <stdlib.h>
#include "revisao_8_tabuada.c"

void imprime_vetor(int *vetor, int tamanho)
{
    printf("%d", *vetor);
    if (tamanho-1 > 0){
        printf(" ");
        imprime_vetor(vetor+1, tamanho-1);
    } 
}

void imprime_tabela(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++){
        imprime_vetor(vetor + i*tamanho, tamanho);
        printf("\n");
    }
}

void ler_numero(char *mensagem, int *numero)
{
    printf("%s", mensagem);
    scanf("%d", numero);
}

void mostrar_tabela_tabuada(int tamanho)
{
    int *tabela = (int *) malloc(tamanho*tamanho*sizeof(int));
    tabuada_tabela(tamanho, tabela);

    printf("Tabuada: \n");
    imprime_tabela(tabela, tamanho);
    
    free(tabela);
}

void tabuadas_individuais(int tamanho)
{
    int numero;
    ler_numero("Digite um numero\n", &numero);
    for (numero; numero >= 0; ler_numero("Digite um numero\n", &numero)){
        int *valores = (int *) malloc(tamanho*sizeof(int));

        tabuada(numero, tamanho, valores);
        imprime_vetor(valores, tamanho);
        printf("\n");

        free(valores);
    } 
}

int main(void)
{
    int tamanho;
    ler_numero("Digite o tamanho da tabuada\n", &tamanho);
    
    mostrar_tabela_tabuada(tamanho);
    tabuadas_individuais(tamanho);
}

