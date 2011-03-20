#include "simplectest/tests.h"
#include "revisao_7_estoque.c"

START_TESTS()

START_TEST("Testar Revisao_7_estoque")

    TEST("Revisao_7_estoque deve retornar 1");
    ASSERT(revisao_7_estoque() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
