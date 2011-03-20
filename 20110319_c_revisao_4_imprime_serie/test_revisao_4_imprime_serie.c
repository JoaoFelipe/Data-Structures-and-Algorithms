#include "simplectest/tests.h"
#include "revisao_4_imprime_serie.c"
#include "string.h"


START_TESTS()

START_TEST("Testar Revisao_4_imprime_serie")

    TEST("Imprime Serie de 1 até 1 com passo 1 deve retornar '1'");
    {
        char saida[80] = "";
        char resultado[80] = "1";
        imprime_serie(1, 1, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 2 até 2 com passo 1 deve retornar '2'");
    {
        char saida[80] = "";
        char resultado[80] = "2";
        imprime_serie(2, 2, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 2 até 3 com passo 1 deve retornar '2 3'");
    {
        char saida[80] = "";
        char resultado[80] = "2 3";
        imprime_serie(2, 3, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 2 até 4 com passo 1 deve retornar '2 3 4'");
    {
        char saida[80] = "";
        char resultado[80] = "2 3 4";
        imprime_serie(2, 4, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 2 até 4 com passo 2 deve retornar '2 4'");
    {
        char saida[80] = "";
        char resultado[80] = "2 4";
        imprime_serie(2, 4, 2, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

END_TEST()


END_TESTS()
