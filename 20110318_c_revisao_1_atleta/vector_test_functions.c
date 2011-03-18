void print_vector(float vector[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++){
        printf("%f%s", vector[i], (i == size - 1) ? "": " ");
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
