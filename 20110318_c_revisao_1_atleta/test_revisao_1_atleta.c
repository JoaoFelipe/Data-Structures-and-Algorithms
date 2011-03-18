#include "simplectest/tests.h"
#include "revisao_1_atleta.c"

void ASSERT_FLOAT_VECTOR(float vector1[], float vector2[], int size)
{
    int i;
    for (i = 0; i < size; i++){
        ASSERT_EQUALS_FLOAT(vector1[i], vector2[i]);
    }
}

START_TESTS()

START_TEST("Testar Medias")
    
    TEST("Media de 4.0, 4.0, 4.0, 4.0, 4.0, 4.0 deve retornar 4.0");
    {    
        float notas[6] = {4.0, 4.0, 4.0, 4.0, 4.0, 4.0};
        ASSERT_EQUALS_FLOAT(media(notas, sizeof(notas)/sizeof(float)), 4.0);
    }

    TEST("Media de 5.0, 5.0, 5.0, 5.0, 5.0, 5.0 deve retornar 5.0");
    {    
        float notas[6] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        ASSERT_EQUALS_FLOAT(media(notas, sizeof(notas)/sizeof(float)), 5.0);
    }

    TEST("Media de 1.0, 1.0, 4.0, 4.0, 7.0, 7.0 deve retornar 4.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        ASSERT_EQUALS_FLOAT(media(notas, sizeof(notas)/sizeof(float)), 4.0);
    }

END_TEST()

START_TEST("Remover extremos")



END_TESTS()
