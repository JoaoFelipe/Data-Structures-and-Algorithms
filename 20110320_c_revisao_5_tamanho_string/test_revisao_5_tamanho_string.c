#include "simplectest/tests.h"
#include "revisao_5_tamanho_string.c"

START_TESTS()

START_TEST("Testar Revisao_5_tamanho_string")

    TEST("Revisao_5_tamanho_string deve retornar 1");
    ASSERT(revisao_5_tamanho_string() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
