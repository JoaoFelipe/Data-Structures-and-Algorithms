#include "simplectest/tests.h"
#include "revisao_c_1_atleta.c"

START_TESTS()

START_TEST("Testar Revisao_c_1_atleta")

    TEST("Revisao_c_1_atleta deve retornar 1");
    ASSERT(revisao_c_1_atleta() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
