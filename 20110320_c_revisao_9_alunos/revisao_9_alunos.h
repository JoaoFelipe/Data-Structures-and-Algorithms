#ifndef _ALUNO_HEADER_FILE_
#define _ALUNO_HEADER_FILE_


struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
};

typedef struct Aluno aluno;

float media(aluno *a);

#endif
