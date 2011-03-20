#include "simplectest/tests.h"
#include "revisao_10_vetores.c"

START_TESTS()

START_TEST("Testar Revisao_10_vetores")

    TEST("Revisao_10_vetores deve retornar 1");
    ASSERT(revisao_10_vetores() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
