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
        soma(&vet1, &vet2, tamanho, &retorno);
        float resultado[] = {2}
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

END_TEST()


END_TESTS()
