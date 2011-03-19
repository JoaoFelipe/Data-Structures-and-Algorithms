#include "simplectest/tests.h"
#include "revisao_2_palavra_contida.c"

START_TESTS()

START_TEST("Testar Palavra_contida")

    TEST("'a' contido em 'b' deve retornar 0");
    ASSERT(palavra_contida("a", "b") == 0);
    
    TEST("'a' contido em 'a' deve retornar 1");
    ASSERT(palavra_contida("a", "a") == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
