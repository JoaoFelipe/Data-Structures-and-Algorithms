#include "simplectest/tests.h"
#include "revisao_4_imprime_serie.c"

START_TESTS()

START_TEST("Testar Revisao_4_imprime_serie")

    TEST("Revisao_4_imprime_serie deve retornar 1");
    {
        ASSERT(imprime_serie() == 1);
    }
END_TEST()


END_TESTS()
