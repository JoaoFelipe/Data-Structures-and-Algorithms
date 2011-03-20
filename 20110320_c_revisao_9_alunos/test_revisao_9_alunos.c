#include "simplectest/tests.h"
#include "revisao_9_alunos.h"
#include <string.h>

START_TESTS()
aluno ana;
novo_aluno(&ana, "Ana", 8.0, 8.0, 8.0, 8.0, 2010);
aluno bia;
novo_aluno(&bia, "Bia", 7.0, 7.0, 7.0, 7.0, 2009);
aluno clara;
novo_aluno(&clara, "Clara", 7.0, 8.0, 8.0, 7.0, 2008);
aluno debora;
novo_aluno(&debora, "Debora", 7.0, 8.0, 9.0, 10.0, 2010);

START_TEST("Testar Media Aluno")

    TEST("Media de Ana com notas 8.0,8.0,8.0 e 8.0 deve retornar 8,0");
    ASSERT_EQUALS_FLOAT(media(ana), 8.0);

    TEST("Media de Bia com notas 7.0,7.0,7.0 e 7.0 deve retornar 7,0");
    ASSERT_EQUALS_FLOAT(media(bia), 7.0);

    TEST("Media de Clara com notas 7.0,8.0,8.0 e 7.0 deve retornar 7,5");
    ASSERT_EQUALS_FLOAT(media(clara), 7.5);
   
    TEST("Media de Debora com notas 7.0,8.0,9.0 e 10.0 deve retornar 8,5");
    ASSERT_EQUALS_FLOAT(media(debora), 8.5);

END_TEST()

START_TEST("Testar Maior Media")

    TEST("Maior media entre Ana(8.0), Bia(7.0), Clara(7,5) e Debora(8,5) deve retornar Debora");
    aluno alunos[] = {ana, bia, clara, debora};
    char retorno[50] = "";
    maior_media(retorno, alunos);
    ASSERT(strcmp(retorno, "Debora") == 0);

END_TEST()


END_TESTS()
