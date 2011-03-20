#include "simplectest/tests.h"
#include "revisao_7_estoque.c"

START_TESTS()

START_TEST("Testar Media")

    TEST("Media do estoque 1,2,3,4,5,6,7 de uma semana deve retornar 7");
    {
        int estoque[7] = { 1, 2, 3, 4, 5, 6, 7 };
        ASSERT_EQUALS_FLOAT(media(estoque, 7), 4.0);
    }
    
    TEST("Media do estoque 6,2,3,4,5,6,9 de uma semana deve retornar 7");
    {
        int estoque[7] = { 6, 2, 3, 4, 5, 6, 9 };
        ASSERT_EQUALS_FLOAT(media(estoque, 7), 5.0);
    }

END_TEST()

START_TEST("Testar Mínino e Maximo")

    TEST("Estoque: 1,2,3,4,5,6,7. Mínimo = 1; Maximo = 7");
    {
        int estoque[7] = { 1, 2, 3, 4, 5, 6, 7 };
        ASSERT(minimo(estoque, 7) == 1);
        ASSERT(maximo(estoque, 7) == 7);
    }

    TEST("Estoque: 0,2,3,4,5,6,8. Mínimo = 0; Maximo = 8");
    {
        int estoque[7] = { 0, 2, 3, 4, 5, 6, 8 };
        ASSERT(minimo(estoque, 7) == 0);
        ASSERT(maximo(estoque, 7) == 8);
    }

    TEST("Estoque: 6,2,3,4,5,9,6. Mínimo = 2; Máximo = 9");
    {
        int estoque[7] = { 6, 2, 3, 4, 5, 9, 6 };
        ASSERT(minimo(estoque, 7) == 2);
        ASSERT(maximo(estoque, 7) == 9);
    }

    TEST("Estoque: 6,4,10,3,5,6,9. Mínimo = 3; Máximo = 10");
    {
        int estoque[7] = { 6, 4, 10, 3, 5, 6, 9 };
        ASSERT(minimo(estoque, 7) == 3);
        ASSERT(maximo(estoque, 7) == 10);
    }

END_TEST()


END_TESTS()
