#include "simplectest/tests.h"
#include "palavra_contida.c"

START_TESTS()

START_TEST("Testar Palavra_contida")

    TEST("Palavra_contida deve retornar 1");
    ASSERT(palavra_contida() == 1);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
