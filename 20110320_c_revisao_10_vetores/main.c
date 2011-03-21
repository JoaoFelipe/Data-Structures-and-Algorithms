#include <stdio.h>
#include <stdlib.h>
#include "revisao_10_vetores.c"

void ler_tamanho(char *mensagem, int *tamanho)
{
    printf("%s", mensagem);
    scanf("%d", tamanho); getchar();
}

void preencher_elementos(float *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++){
        printf("Digite o valor do elemento %d\n", i+1);
        scanf("%f", vetor + i);
    }
}

void imprimir_vetor(char *nome, float *vetor, int tamanho)
{
    char texto[250] = "";
    mostrar(vetor, tamanho, texto);
    printf("%s: [%s]\n", nome, texto);
}

void procurar_elemento(float *vetor, int tamanho)
{
    printf("Digite o elemento que você deseja procurar\n");
    float elemento;
    scanf("%f", &elemento);
    printf("%d\n", procurar(elemento, vetor, tamanho));
}

void imprimir_ocorrencias(float elemento, float *vet, int tamanho)
{
    char texto[250] = "";
    procurar_todos(elemento, vet, tamanho, texto);
    printf("Posicoes: %s\n", texto);
}

void procurar_elementos(float *vetor, int tamanho)
{
    printf("Digite o elemento que você deseja procurar todas as ocorrencias\n");
    float elemento;
    scanf("%f", &elemento);
    imprimir_ocorrencias(elemento, vetor, tamanho);
}

void opera(char* mensagem, float *vetor1, float *vetor2, int tamanho, void func(float *, float *, int, float *))
{
    float *resultado = (float *) malloc(tamanho*sizeof(float));
    func(vetor1, vetor2, tamanho, resultado);
    imprimir_vetor(mensagem, resultado, tamanho);
    free(resultado);
}

void main_loop(float *vetor1, float *vetor2, int tamanho)
{
    while (1) { 
        printf("O que você deseja fazer?\n");
        printf("0- Mostrar vetores\n");
        printf("1- Preencher elementos do vetor X\n");
        printf("2- Preencher elementos do vetor Y\n");
        printf("3- Operacao X + Y\n");
        printf("4- Operacao X - Y\n");
        printf("5- Operacao Y - X\n");
        printf("6- Procurar primeira ocorrencia de elemento em X\n");
        printf("7- Procurar primeira ocorrencia de elemento em Y\n");
        printf("8- Procurar todas as ocorrencias de elemento em X\n");
        printf("9- Procurar todas as ocorrencias de elemento em Y\n");
        printf("-1- Sair\n");
        int operacao;
        scanf("%d", &operacao);
        switch ( operacao ){
            case 0:
                imprimir_vetor("X", vetor1, tamanho);
                imprimir_vetor("Y", vetor2, tamanho);
                break;
            case 1:
                printf("Preencher elementos de X:\n");  
                preencher_elementos(vetor1, tamanho);
                break;
            case 2:
                printf("Preencher elementos de Y:\n");  
                preencher_elementos(vetor2, tamanho);
                break;
            case 3:
                opera("X+Y", vetor1, vetor2, tamanho, soma);
                break;
            case 4:
                opera("X-Y", vetor1, vetor2, tamanho, subtrair);
                break;
            case 5:
                opera("Y-X", vetor2, vetor1, tamanho, subtrair);
                break;
            case 6:
                procurar_elemento(vetor1, tamanho);
                break;
            case 7:
                procurar_elemento(vetor2, tamanho);
                break;
            case 8:
                procurar_elementos(vetor1, tamanho);
                break;
            case 9:
                procurar_elementos(vetor2, tamanho);
                break;
            case -1:
                return;
            
                
        }
    }
}


int main(void)
{
    int tamanho;
    ler_tamanho("Digite o tamanho dos vetores\n", &tamanho);
    
    float *vetor1 = (float *) malloc(tamanho*sizeof(float));
    float *vetor2 = (float *) malloc(tamanho*sizeof(float));
    
    printf("Preenchendo vetor X:\n");
    preencher_elementos(vetor1, tamanho);
    printf("Preenchendo vetor y:\n");
    preencher_elementos(vetor2, tamanho);

    main_loop(vetor1, vetor2, tamanho);

    free(vetor2);
    free(vetor1);
}
