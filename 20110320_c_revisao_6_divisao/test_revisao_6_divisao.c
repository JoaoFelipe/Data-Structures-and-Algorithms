#include "simplectest/tests.h"
#include "revisao_6_divisao.c"

START_TESTS()

START_TEST("Testar Revisao_6_divisao")

    TEST("Revisao_6_divisao deve retornar 1");
    ASSERT(revisao_6_divisao() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
