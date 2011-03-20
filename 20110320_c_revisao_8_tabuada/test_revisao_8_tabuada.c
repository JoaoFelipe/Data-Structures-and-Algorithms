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

    TEST("1 numero da Tabuada de 3 deve retornar 3");
    {
        int retorno[1] = {0};
        tabuada(3, 1, retorno);
        int resultado[1] = {3};
        ASSERT(int_vectors(retorno, resultado, 1) == 1);
    }

    TEST("2 numeros da Tabuada de 2 deve retornar 2 4");
    {
        int retorno[2] = {0};
        tabuada(2, 2, retorno);
        int resultado[2] = {2, 4};
        ASSERT(int_vectors(retorno, resultado, 2) == 1);
    }

    TEST("6 numeros da Tabuada de 2 deve retornar 2 4 6 8 10 12");
    {
        int retorno[6] = {0};
        tabuada(2, 6, retorno);
        int resultado[6] = {2, 4, 6, 8, 10, 12};
        ASSERT(int_vectors(retorno, resultado, 6) == 1);
    }

    TEST("6 numeros da Tabuada de 3 deve retornar 3 6 9 12 15 18");
    {
        int retorno[6] = {0};
        tabuada(3, 6, retorno);
        int resultado[6] = {3, 6, 9, 12, 15, 18};
        ASSERT(int_vectors(retorno, resultado, 6) == 1);
    }

END_TEST()


END_TESTS()
