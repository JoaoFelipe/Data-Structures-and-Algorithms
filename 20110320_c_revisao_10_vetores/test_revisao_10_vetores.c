#include "simplectest/tests.h"
#include "vector_test_functions.h"
#include "revisao_10_vetores.c"

START_TESTS()

START_TEST("Somar vetores")

    TEST("Vetor {1} somado a {1} deve retornar {2}");
    {
        float vet1[] = {1};
        float vet2[] = {1};
        float retorno[1] = {0};
        soma(vet1, vet2, 1, retorno);
        float resultado[] = {2};
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

    TEST("Vetor {2} somado a {1} deve retornar {3}");
    {
        float vet1[] = {2};
        float vet2[] = {1};
        float retorno[1] = {0};
        soma(vet1, vet2, 1, retorno);
        float resultado[] = {3};
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

    TEST("Vetor {2, 2} somado a {1, 1} deve retornar {3, 3}");
    {
        float vet1[] = {2, 2};
        float vet2[] = {1, 1};
        float retorno[2] = {0};
        soma(vet1, vet2, 2, retorno);
        float resultado[] = {3, 3};
        ASSERT(float_vectors(retorno, resultado, 2) == 1);
    }

    TEST("Vetor {2, 2, 1} somado a {1, 1, 5} deve retornar {3, 3, 6}");
    {
        float vet1[] = {2, 2, 1};
        float vet2[] = {1, 1, 5};
        float retorno[3] = {0};
        soma(vet1, vet2, 3, retorno);
        float resultado[] = {3, 3, 6};
        ASSERT(float_vectors(retorno, resultado, 3) == 1);
    }

END_TEST()


END_TESTS()
