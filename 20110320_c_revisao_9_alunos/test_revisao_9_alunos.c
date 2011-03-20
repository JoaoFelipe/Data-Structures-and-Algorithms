#include "simplectest/tests.h"
#include "revisao_9_alunos.c"

START_TESTS()

START_TEST("Testar Revisao_9_alunos")

    TEST("Revisao_9_alunos deve retornar 1");
    ASSERT(revisao_9_alunos() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
