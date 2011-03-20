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

char *maior_media(char *retorno, aluno alunos[]){
    aluno *maior;
    maior = &alunos[0];
    sprintf(retorno, "%s", media(*maior));
    return retorno;
}

