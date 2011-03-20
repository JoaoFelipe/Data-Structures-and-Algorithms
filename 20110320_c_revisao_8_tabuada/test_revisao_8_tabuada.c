#include "simplectest/tests.h"
#include "revisao_8_tabuada.c"
#include "vector_test_functions.h"
void *malloc(size_t size);
void free(void *ptr);

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

START_TEST("Testar Tabuada de Tabela")
    
    TEST("Tabuada de tabela de n=3 deve retornar {1,2,3},{2,4,6},{3,6,9}");
    {
        int retorno[3][3] = {0};
        tabuada_tabela(3, retorno);
        int resultado[3][3] = {{1,2,3},{2,4,6},{3,6,9}};
        ASSERT(int_vectors(&retorno, &resultado, 9) == 1);
    }
    
    TEST("Tabuada de tabela de n=6 deve retornar {1,2,3,4,5,6},{2,4,6,8,10,12},{3,6,9,12,15,18},{4,8,12,16,20,24},{5,10,15,20,25,30},{6,12,18,24,30,36}");
    {
        int n = 6;
        int *retorno = NULL;
        retorno = (int *) malloc(n*n*sizeof(int));
        print_int_vector(retorno, n*n);
        tabuada_tabela(n, retorno);
        print_int_vector(retorno, n*n);
        int resultado[6][6] = {{1,2,3,4,5,6},{2,4,6,8,10,12},{3,6,9,12,15,18},{4,8,12,16,20,24},{5,10,15,20,25,30},{6,12,18,24,30,36}};
        ASSERT(int_vectors(&retorno, &resultado, n*n) == 1);
        free(retorno);
    }

END_TEST()

END_TESTS()
