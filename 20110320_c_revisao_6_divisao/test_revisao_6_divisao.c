#include "simplectest/tests.h"
#include "revisao_6_divisao.c"

START_TESTS()

START_TEST("Testar divisao")

    TEST("1 dividido por 1 retorna 1");
    ASSERT(divisao(1, 1) == 1);

    TEST("2 dividido por 1 retorna 2");
    ASSERT(divisao(2, 1) == 2);

    TEST("2 dividido por 2 retorna 1");
    ASSERT(divisao(2, 2) == 1);

    TEST("3 dividido por 2 retorna 1");
    ASSERT(divisao(3, 2) == 1);

END_TEST()


END_TESTS()
