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

void maior_media(char *retorno, aluno *alunos, int tamanho){
    aluno *maior;
    maior = alunos;
    sprintf(retorno, "%s", maior->nome);
    for (int i = 1; i < tamanho; i++){
        aluno *a; a = (alunos + i);
        float media_aluno = media(*a);
        float media_maior = media(*maior);
        if (media_aluno > media_maior){
            maior = a;
            sprintf(retorno, "%s", maior->nome);
        } else if (media_aluno == media_maior){
            sprintf(retorno, "%s e %s",retorno, a->nome);
        }
    }
}

