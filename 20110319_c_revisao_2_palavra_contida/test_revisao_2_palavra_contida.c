#include "simplectest/tests.h"
#include "revisao_2_palavra_contida.c"

START_TESTS()

START_TEST("Testar Revisao_2_palavra_contida")

    TEST("Revisao_2_palavra_contida deve retornar 1");
    ASSERT(revisao_2_palavra_contida() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
