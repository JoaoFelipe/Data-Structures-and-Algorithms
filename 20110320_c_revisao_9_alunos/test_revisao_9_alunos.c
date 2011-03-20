#include "simplectest/tests.h"
#include "revisao_9_alunos.h"

START_TESTS()

START_TEST("Testar Media Aluno")

    TEST("Media de Ana com notas 8.0,8.0,8.0 e 8.0 deve retornar 8,0");
    aluno ana;
    novo_aluno(&ana, "Ana", 8.0, 8.0, 8.0, 8.0);
    ASSERT_EQUALS_FLOAT(media(ana), 8.0);

    TEST("Media de Bia com notas 7.0,7.0,7.0 e 7.0 deve retornar 7,0");
    aluno bia;
    novo_aluno(&bia, "Bia", 7.0, 7.0, 7.0, 7.0);
    ASSERT_EQUALS_FLOAT(media(bia), 7.0);

    TEST("Media de Clara com notas 7.0,8.0,8.0 e 7.0 deve retornar 7,5");
    aluno clara;
    novo_aluno(&clara, "Clara", 7.0, 8.0, 8.0, 7.0);
    ASSERT_EQUALS_FLOAT(media(clara), 7.5);
   
     TEST("Media de Debora com notas 7.0,8.0,9.0 e 10.0 deve retornar 8,5");
    aluno debora;
    novo_aluno(&debora, "Clara", 7.0, 8.0, 9.0, 10.0);
    ASSERT_EQUALS_FLOAT(media(debora), 8.5);

END_TEST()


END_TESTS()
