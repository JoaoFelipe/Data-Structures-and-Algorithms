#include "simplectest/tests.h"
#include "revisao_1_atleta.c"

START_TESTS()

START_TEST("Testar Medias")

    TEST("Media de 1.0, 4.0, 4.0, 4.0, 4.0, 10.0 deve retornar 4.0);
    ASSERT_EQUALS_FLOAT(media(1.0, 4.0, 4.0, 4.0, 4.0, 10.0) == 4.0);
//    ASSERT_EQUALS_FLOAT(1, 1);

END_TEST()


END_TESTS()
