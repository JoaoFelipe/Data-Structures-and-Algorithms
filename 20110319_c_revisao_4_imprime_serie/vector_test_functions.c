#include <stdio.h>


int char_vectors(char *vector1, char *vector2)
{
    if (*vector1 != *vector2){
        return 0;
    } else if (*vector1 == '\0'){
        return 1;
    }
    return char_vectors(vector1 + 1, vector2 + 1);
}



