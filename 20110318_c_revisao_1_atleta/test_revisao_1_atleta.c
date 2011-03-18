#include "simplectest/tests.h"
#include "revisao_1_atleta.c"

void print_vector(float vector[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++){
        printf("%f ", vector[i]);
    }
    printf("]\n");

}
int vectors(float vector1[], float vector2[], int size)
{
    for (int i = 0; i < size; i++){
        if ((vector1[i] >= (vector2[i] + 0.0005)) || (vector1[i] <= (vector2[i] - 0.0005))){ 
            print_vector(vector1, size);
            print_vector(vector2, size);
            printf("%f != %f\n", vector1[i], vector2[i]);
            return(0);
        }
    }
    return(1);
}

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

END_TEST()

START_TEST("Remover extremos")

    
    TEST("Remover extremos de 1.0, 1.0, 4.0, 4.0, 7.0, 7.0 deve retornar 1.0, 4.0, 4.0, 7.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        float retorno[4] = {1.0, 4.0, 4.0, 7.0};
        float resultado[4] = {0};
        remove_extremos(notas, 6, resultado);
        ASSERT(vectors(resultado, retorno, 4) == 1);
    }
    
   

END_TEST()

END_TESTS()
