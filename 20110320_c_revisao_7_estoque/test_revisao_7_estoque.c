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
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()