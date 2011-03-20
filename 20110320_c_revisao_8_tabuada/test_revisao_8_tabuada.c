#include "simplectest/tests.h"
#include "revisao_8_tabuada.c"

START_TESTS()

START_TEST("Testar Revisao_8_tabuada")

    TEST("Revisao_8_tabuada deve retornar 1");
    ASSERT(revisao_8_tabuada() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
