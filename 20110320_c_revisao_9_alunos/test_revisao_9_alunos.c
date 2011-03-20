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
    aluno ana;
    sprintf(ana.nome, "%s", "Bia");
    ana.nota1 = 7.0;
    ana.nota2 = 7.0;
    ana.nota3 = 7.0;
    ana.nota4 = 7.0;
    ASSERT_EQUALS_FLOAT(media(ana), 7.0);

END_TEST()


END_TESTS()
