#include "simplectest/tests.h"
#include "revisao_3_mdc.c"

START_TESTS()

START_TEST("Testar MDC")

    TEST("MDC de 1 e 2 deve retornar 1");
    ASSERT(mdc(1, 2) == 1);

    TEST("MDC de 2 e 2 deve retornar 2");
    ASSERT(mdc(2, 2) == 2);

    TEST("MDC de 4 e 2 deve retornar 2");
    ASSERT(mdc(4, 2) == 2);

    TEST("MDC de 2 e 4 deve retornar 2");
    ASSERT(mdc(2, 4) == 2);

    TEST("MDC de 5 e 4 deve retornar 1");
    ASSERT(mdc(5, 4) == 1);

END_TEST()


END_TESTS()
