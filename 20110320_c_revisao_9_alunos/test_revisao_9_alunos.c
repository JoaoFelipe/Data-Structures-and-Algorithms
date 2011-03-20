#include "simplectest/tests.h"
#include "revisao_9_alunos.h"

START_TESTS()

START_TEST("Testar Media Aluno")

    TEST("Media de Ana com notas 8.0,8.0,8.0 e 8.0 deve retornar 8,0");
    aluno ana;
    sprintf(ana.nome, "%s", "Ana");
    ana.nota1 = 8.0;
    ana.nota2 = 8.0;
    ana.nota3 = 8.0;
    ana.nota4 = 8.0;
    ASSERT_EQUALS_FLOAT(media(ana), 8.0);

    TEST("Media de Bia com notas 7.0,7.0,7.0 e 7.0 deve retornar 7,0");
    aluno bia;
    sprintf(bia.nome, "%s", "Bia");
    bia.nota1 = 7.0;
    bia.nota2 = 7.0;
    bia.nota3 = 7.0;
    bia.nota4 = 7.0;
    ASSERT_EQUALS_FLOAT(media(bia), 7.0);

    TEST("Media de Clara com notas 7.0,8.0,8.0 e 7.0 deve retornar 7,5");
    aluno clara;
    sprintf(clara.nome, "%s", "Clara");
    clara.nota1 = 7.0;
    clara.nota2 = 8.0;
    clara.nota3 = 8.0;
    clara.nota4 = 7.0;
    ASSERT_EQUALS_FLOAT(media(clara), 7.5);
   
     TEST("Media de Debora com notas 7.0,8.0,9.0 e 10.0 deve retornar 8,5");
    aluno debora;
    sprintf(debora.nome, "%s", "Debora");
    debora.nota1 = 7.0;
    debora.nota2 = 8.0;
    debora.nota3 = 9.0;
    debora.nota4 = 10.0;
    ASSERT_EQUALS_FLOAT(media(clara), 8.5);

END_TEST()


END_TESTS()
