#include "simplectest/tests.h"
#include "revisao_8_tabuada.c"
#include "vector_test_functions.h"

START_TESTS()

START_TEST("Testar Tabuada de numero")

    TEST("1 numero da Tabuada de 2 deve retornar 2");
    {
        int retorno[1] = {0};
        tabuada(2, 1, retorno);
        int resultado[1] = {2};
        ASSERT(int_vectors(retorno, resultado, 1) == 1);
    }
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
