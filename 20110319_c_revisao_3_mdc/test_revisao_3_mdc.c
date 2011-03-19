#include "simplectest/tests.h"
#include "revisao_3_mdc.c"

START_TESTS()

START_TEST("Testar Revisao_3_mdc")

    TEST("Revisao_3_mdc deve retornar 1");
    ASSERT(revisao_3_mdc() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
