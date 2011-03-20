#include "simplectest/tests.h"
#include "revisao_4_imprime_serie.c"


START_TESTS()

START_TEST("Testar Revisao_4_imprime_serie")

    TEST("Imprime Serie de 1 até 1 com passo 1 deve retornar '1'");
    {
        char saida[80]="";
        ASSERT(char_vectors(imprime_serie(1, 1, 1, saida), "1") == 1);
    }
END_TEST()


END_TESTS()
