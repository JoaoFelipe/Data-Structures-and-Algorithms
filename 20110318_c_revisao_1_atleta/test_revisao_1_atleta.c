#include "simplectest/tests.h"
#include "revisao_1_atleta.c"

START_TESTS()

START_TEST("Testar Medias")

    TEST("Media de 4.0, 4.0, 4.0, 4.0, 4.0, 4.0 deve retornar 4.0");
    float notas[6] = {4.0, 4.0, 4.0, 4.0, 4.0, 4.0};
    ASSERT_EQUALS_FLOAT(media(notas), 4.0);

END_TEST()


END_TESTS()
