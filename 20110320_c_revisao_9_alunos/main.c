#include <stdio.h>
#include <stdlib.h>
#include "revisao_9_alunos.h"

void ler_numero(char *mensagem, int *numero)
{
    printf("%s", mensagem);
    scanf("%d", numero);getchar();
}

void ler_nota(char *mensagem, char *nome, float *nota)
{
    printf("%s %s\n",mensagem, nome);
    scanf("%f", nota); getchar();
}

void ler_ano(char *mensagem, char *nome, int *ano)
{
    printf("%s %s\n",mensagem, nome);
    scanf("%d", ano); getchar();
}

void ler_nome(char *mensagem, int num, char *nome)
{
    printf("%s %d\n",mensagem, num);
    scanf("%[^\n]", nome); getchar();
}

void ler_alunos(aluno *alunos, int numero){
    for (int i = 0; i < numero; i++){
        aluno *a; a = (alunos + i);
        ler_nome("Digite o nome do aluno", i+1, (char *)&a->nome);
        ler_ano("Digite o ano de ingresso de", a->nome, &a->ano);
        ler_nota("Digite a primeira nota de", a->nome, &a->nota1);
        ler_nota("Digite a segunda nota de", a->nome, &a->nota2);
        ler_nota("Digite a terceira nota de", a->nome, &a->nota3);
        ler_nota("Digite a quarta nota de", a->nome, &a->nota4);
    }
}

int main(void)
{
    int numero;
    ler_numero("Digite o número de alunos\n", &numero);
    
    aluno *alunos = (aluno *) malloc(numero*sizeof(aluno));


    ler_alunos(alunos, numero);

    printf("Médias:\n");
    for (int i = 0; i < numero; i++){
        aluno *a; a = (alunos + i);
        printf("%s: %f\n", a->nome, media(*a));
    }

    char retorno[250] = "";
    maior_media(retorno, alunos, numero);
    printf("Maior(es) Media(s): %s\n", retorno);

    free(alunos);
}
