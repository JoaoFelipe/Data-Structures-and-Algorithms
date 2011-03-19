#include <stdio.h>

void print_float_vector(float vector[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++){
        printf("%f%s", vector[i], (i == size - 1) ? "": " ");
    }
    printf("]\n");
}

int float_vectors(float vector1[], float vector2[], int size)
{
    for (int i = 0; i < size; i++){
        if ((vector1[i] >= (vector2[i] + 0.0005)) || (vector1[i] <= (vector2[i] - 0.0005))){ 
            print_float_vector(vector1, size);
            print_float_vector(vector2, size);
            printf("%f != %f\n", vector1[i], vector2[i]);
            return(0);
        }
    }
    return(1);
}

void print_int_vector(int vector[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++){
        printf("%d%s", vector[i], (i == size - 1) ? "": " ");
    }
    printf("]\n");
}

int int_vectors(int vector1[], int vector2[], int size)
{
    for (int i = 0; i < size; i++){
        if (vector1[i] != vector2[i]){ 
            print_int_vector(vector1, size);
            print_int_vector(vector2, size);
            printf("%d != %d\n", vector1[i], vector2[i]);
            return(0);
        }
    }
    return(1);
}

