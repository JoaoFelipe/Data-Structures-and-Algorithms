#include "simplectest/tests.h"
#include "revisao_5_tamanho_string.c"

START_TESTS()

START_TEST("Testar Tamanho da String")

    TEST("Tamanho da string '' deve retornar 0");
    ASSERT(tamanho_string("a") == 0);

    TEST("Tamanho da string 'a' deve retornar 1");
    ASSERT(tamanho_string("a") == 1);

    TEST("Tamanho da string 'ab' deve retornar 2");
    ASSERT(tamanho_string("ab") == 2);

END_TEST()


END_TESTS()
