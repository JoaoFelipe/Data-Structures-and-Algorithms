#include "simplectest/tests.h"
#include "revisao_8_tabuada.c"
#include "vector_test_functions.h"

START_TESTS()

START_TEST("Testar Tabuada de numero")

    TEST("Tabuada de 2 deve retornar 2, 4, 6, 8, 10, 12");
    {
        int retorno[6] = {0};
        tabuada(2, 6, retorno);
        int resultado[6] = {2, 4, 6, 8, 10, 12};
        ASSERT(int_vectors(retorno, resultado, 6) == 1);
    }
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
