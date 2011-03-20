#include "simplectest/tests.h"
#include "revisao_8_tabuada.c"
#include "vector_test_functions"

START_TESTS()

START_TEST("Testar Revisao_8_tabuada")

    TEST("Revisao_8_tabuada deve retornar 1");
    ASSERT(tabuada() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
