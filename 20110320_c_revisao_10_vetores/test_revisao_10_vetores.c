#include "simplectest/tests.h"
#include "vector_test_functions.h"
#include "revisao_10_vetores.c"
#include <string.h>

START_TESTS()

START_TEST("Somar vetores")

    TEST("Vetor {1} somado a {1} deve retornar {2}");
    {
        float vet1[] = {1};
        float vet2[] = {1};
        float retorno[1] = {0};
        soma(vet1, vet2, 1, retorno);
        float resultado[] = {2};
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

    TEST("Vetor {2} somado a {1} deve retornar {3}");
    {
        float vet1[] = {2};
        float vet2[] = {1};
        float retorno[1] = {0};
        soma(vet1, vet2, 1, retorno);
        float resultado[] = {3};
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

    TEST("Vetor {2, 2} somado a {1, 1} deve retornar {3, 3}");
    {
        float vet1[] = {2, 2};
        float vet2[] = {1, 1};
        float retorno[2] = {0};
        soma(vet1, vet2, 2, retorno);
        float resultado[] = {3, 3};
        ASSERT(float_vectors(retorno, resultado, 2) == 1);
    }

    TEST("Vetor {2, 2, 1} somado a {1, 1, 5} deve retornar {3, 3, 6}");
    {
        float vet1[] = {2, 2, 1};
        float vet2[] = {1, 1, 5};
        float retorno[3] = {0};
        soma(vet1, vet2, 3, retorno);
        float resultado[] = {3, 3, 6};
        ASSERT(float_vectors(retorno, resultado, 3) == 1);
    }

END_TEST()

START_TEST("Subtrair vetores")

    TEST("Vetor {1} ssubtraido de {1} deve retornar {0}");
    {
        float vet1[] = {1};
        float vet2[] = {1};
        float retorno[1] = {0};
        subtrair(vet1, vet2, 1, retorno);
        float resultado[] = {0};
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

    TEST("Vetor {2} subtraido de {1} deve retornar {1}");
    {
        float vet1[] = {2};
        float vet2[] = {1};
        float retorno[1] = {0};
        subtrair(vet1, vet2, 1, retorno);
        float resultado[] = {1};
        ASSERT(float_vectors(retorno, resultado, 1) == 1);
    }

    TEST("Vetor {2, 2} subtraido de {1, 1} deve retornar {1, 1}");
    {
        float vet1[] = {2, 2};
        float vet2[] = {1, 1};
        float retorno[2] = {0};
        subtrair(vet1, vet2, 2, retorno);
        float resultado[] = {1, 1};
        ASSERT(float_vectors(retorno, resultado, 2) == 1);
    }

    TEST("Vetor {2, 2, 1} subtraido de {1, 1, 5} deve retornar {1, 1, -4}");
    {
        float vet1[] = {2, 2, 1};
        float vet2[] = {1, 1, 5};
        float retorno[3] = {0};
        subtrair(vet1, vet2, 3, retorno);
        float resultado[] = {1, 1, -4};
        ASSERT(float_vectors(retorno, resultado, 3) == 1);
    }

END_TEST()

START_TEST("Procurar Elemento")
    
    TEST("Procurar elemento 1 em {1} deve retornar 0");
    {
        float vet[] = {1};
        ASSERT(procurar(1, vet, 1) == 0);
    }
    
    TEST("Procurar elemento 1 em {2, 1} deve retornar 1");
    {
        float vet[] = {2, 1};
        ASSERT(procurar(1, vet, 2) == 1);
    }

    TEST("Procurar elemento 3 em {2, 1} deve retornar -1");
    {
        float vet[] = {2, 1};
        ASSERT(procurar(3, vet, 2) == -1);
    }

    TEST("Procurar elemento 2 em {2, 2, 1} deve retornar 0");
    {
        float vet[] = {2, 2, 1};
        ASSERT(procurar(2, vet, 3) == 0);
    }

END_TEST()

START_TEST("Procurar todos Elementos")

    TEST("Procurar todos elementos 1 em {1} deve retornar '0'");
    {
        float vet[] = {1};
        char retorno[50] = "";
        procurar_todos(1, vet, 1, retorno);
        ASSERT(strcmp(retorno, "0") == 0);
    }

    TEST("Procurar todos elementos 1 em {2} deve retornar ''");
    {
        float vet[] = {2};
        char retorno[50] = "";
        procurar_todos(1, vet, 1, retorno);
        ASSERT(strcmp(retorno, "") == 0);
    }

    TEST("Procurar todos elementos 1 em {2, 1} deve retornar '1'");
    {
        float vet[] = {2, 1};
        char retorno[50] = "";
        procurar_todos(1, vet, 2, retorno);
        ASSERT(strcmp(retorno, "1") == 0);
    }

    TEST("Procurar todos elementos 1 em {2, 1, 1} deve retornar '1 2'");
    {
        float vet[] = {2, 1, 1};
        char retorno[50] = "";
        procurar_todos(1, vet, 3, retorno);
        ASSERT(strcmp(retorno, "1 2") == 0);
    }

    TEST("Procurar todos elementos 1 em {2, 1, 2, 1} deve retornar '1 3'");
    {
        float vet[] = {2, 1, 2, 1};
        char retorno[50] = "";
        procurar_todos(1, vet, 4, retorno);
        ASSERT(strcmp(retorno, "1 3") == 0);
    }

END_TEST()

START_TEST("Mostrar vetor")

    TEST("Mostrar vetor {1}");
    {
        float vet[] = {1};
        char retorno[50] = "";
        mostrar(vet, 1, retorno);
        printf("%s", retorno);
        ASSERT(strcmp(retorno, "1") == 0);
    }

END_TEST()

END_TESTS()
