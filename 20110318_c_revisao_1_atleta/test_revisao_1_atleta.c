#include "simplectest/tests.h"
#include "revisao_1_atleta.c"
#include "vector_test_functions.c"

START_TESTS()

START_TEST("Testar Medias")
    
    TEST("Media de 4.0, 4.0, 4.0, 4.0, 4.0, 4.0 deve retornar 4.0");
    {    
        float notas[6] = {4.0, 4.0, 4.0, 4.0, 4.0, 4.0};
        ASSERT_EQUALS_FLOAT(media(notas, 6), 4.0);
    }

    TEST("Media de 5.0, 5.0, 5.0, 5.0, 5.0, 5.0 deve retornar 5.0");
    {    
        float notas[6] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        ASSERT_EQUALS_FLOAT(media(notas, 6), 5.0);
    }

    TEST("Media de 1.0, 1.0, 4.0, 4.0, 7.0, 7.0 deve retornar 4.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        ASSERT_EQUALS_FLOAT(media(notas, 6), 4.0);
    }

    TEST("Media de 1.0, 2.0, 4.0, 4.0, 6.0, 9.0 deve retornar 4.0");
    {    
        float notas[6] = {1.0, 2.0, 4.0, 4.0, 6.0, 9.0};
        ASSERT_EQUALS_FLOAT(media(notas, 6), 4.0);
    }

END_TEST()

START_TEST("Remover extremos")

    TEST("Remover extremos de 1.0, 1.0, 4.0, 4.0, 7.0, 7.0 deve retornar 1.0, 4.0, 4.0, 7.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        float retorno[4] = {1.0, 4.0, 4.0, 7.0};
        float resultado[4] = {0};
        remove_extremos(notas, 6, resultado);
        ASSERT(float_vectors(resultado, retorno, 4) == 1);
    }
    
    TEST("Remover extremos de 4.0, 1.0, 4.0, 1.0, 7.0, 7.0 deve retornar 1.0, 4.0, 4.0, 7.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        float retorno[4] = {1.0, 4.0, 4.0, 7.0};
        float resultado[4] = {0};
        remove_extremos(notas, 6, resultado);
        ASSERT(float_vectors(resultado, retorno, 4) == 1);
    }

END_TEST()

START_TEST("Atletas")
    
    TEST("Notas do Atleta 0: 1.0, 8.0, 7.0, 7.0, 10.0, 10.0 - Media 8.0; \
          Notas do Atleta 1: 0.0, 0.0, 1.0, 0.0, 1.0, 1.0 - Media 0,5; \
          Notas do Atleta 2: 10.0, 10.0, 10.0, 10.0, 10.0, 10.0 - Media 10.0; \
          Deve retornar 2, 0, 1");
    {
        float atletas[3][6] = {{1.0, 8.0, 7.0, 7.0, 10.0, 10.0}, {0.0, 0.0, 1.0, 0.0, 1.0, 1.0}, {10.0, 10.0, 10.0, 10.0, 10.0, 10.0}};
        int retorno[3] = {2, 0, 1};
        int resultado[3] = {0};
        svencedores(atletas, 3, 6, resultado);
        ASSERT(int_vectors(resultado, retorno, 3) == 1);
    }

END_TEST()


END_TESTS()
