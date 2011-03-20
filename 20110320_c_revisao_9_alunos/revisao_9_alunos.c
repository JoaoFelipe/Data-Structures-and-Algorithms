#include "revisao_9_alunos.h"
#include <stdio.h>

float media(aluno a)
{
    return (a.nota1 + a.nota2 + a.nota3 + a.nota4) / 4;
}

void novo_aluno(aluno *a, char *nome, float nota1, float nota2, float nota3, float nota4, int ano){
    sprintf(a->nome,"%s", nome);
    a->nota1 = nota1;
    a->nota2 = nota2;
    a->nota3 = nota3;
    a->nota4 = nota4;
    a->ano = ano;
}

void *maior_media(char *retorno, aluno alunos[], int tamanho){
    aluno *maior;
    maior = &alunos[0];
    sprintf(retorno, "%s", maior->nome);
    for (int i = 0; i < tamanho; i++){
        if (media(alunos[i]) > media(maior)){
            maior = &alunos[i];
            sprintf(retorno, "%s", maior->nome);
        }
    }
}

