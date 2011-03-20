#include "simplectest/tests.h"
#include "revisao_5_tamanho_string.c"

START_TESTS()

START_TEST("Testar Tamanho da String")

    TEST("Tamanho da string '' deve retornar 0");
    ASSERT(tamanho_string("") == 0);
    ASSERT(tamanhoString("",0) == 0);

    TEST("Tamanho da string 'a' deve retornar 1");
    ASSERT(tamanho_string("a") == 1);
    ASSERT(tamanhoString("a",0) == 1);

    TEST("Tamanho da string 'ab' deve retornar 2");
    ASSERT(tamanho_string("ab") == 2);
    ASSERT(tamanhoString("ab",0) == 2);

END_TEST()


END_TESTS()
