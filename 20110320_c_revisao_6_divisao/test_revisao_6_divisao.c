#include "simplectest/tests.h"
#include "revisao_6_divisao.c"

START_TESTS()

START_TEST("Testar divisao")

    TEST("1 dividido por 1 retorna 1");
    ASSERT(divisao(1, 1) == 1);

END_TEST()


END_TESTS()
