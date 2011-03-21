#ifndef _ALUNO_HEADER_FILE_
#define _ALUNO_HEADER_FILE_


struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    int ano;
};

typedef struct Aluno aluno;

float media(aluno a);
void novo_aluno(aluno *a, char *nome, float nota1, float nota2, float nota3, float nota4, int ano);
void maior_media(char *retorno, aluno *alunos, int tamanho);
#endif
