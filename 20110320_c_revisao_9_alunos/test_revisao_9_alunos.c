#include "simplectest/tests.h"
#include "revisao_9_alunos.c"

START_TESTS()

START_TEST("Testar Media Aluno)

    TEST("Media de Ana com notas 7.0,8.0,9.0 e 10.0 deve retornar 8,5");
    aluno ana;
    ana.nome = "Ana";
    ana.nota1 = 7.0;
    ana.nota2 = 8.0;
    ana.nota3 = 9.0;
    ana.nota4 = 10.0;
    ASSERT_EQUALS_FLOAT(media(ana), 8.5);

END_TEST()


END_TESTS()
