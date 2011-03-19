#include "simplectest/tests.h"
#include "revisao_3_mdc.c"

START_TESTS()

START_TEST("Testar MDC")

    TEST("MDC de 1 e 2 deve retornar 1");
    ASSERT(mdc(1, 2) == 1);

END_TEST()


END_TESTS()
