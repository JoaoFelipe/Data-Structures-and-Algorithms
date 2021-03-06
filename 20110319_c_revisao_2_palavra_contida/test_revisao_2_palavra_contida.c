#include "simplectest/tests.h"
#include "revisao_2_palavra_contida.c"

START_TESTS()

START_TEST("Testar Palavra Contida")

    TEST("'a' contido em 'b' deve retornar 0");
    ASSERT(palavra_contida("a", "b") == 0);
    
    TEST("'a' contido em 'a' deve retornar 1");
    ASSERT(palavra_contida("a", "a") == 1);
    
    TEST("'a' contido em 'ab' deve retornar 1");
    ASSERT(palavra_contida("a", "ab") == 1);
    
    TEST("'a' contido em 'ba' deve retornar 1");
    ASSERT(palavra_contida("a", "ba") == 1);
    
    TEST("'ac' contido em 'ba' deve retornar 0");
    ASSERT(palavra_contida("ac", "ba") == 0);
    
    TEST("'ab' contido em 'ab' deve retornar 1");
    ASSERT(palavra_contida("ab", "ab") == 1);

    TEST("'ab' contido em 'ba' deve retornar 0");
    ASSERT(palavra_contida("ab", "ba") == 0);

    TEST("'ab' contido em 'bab' deve retornar 1");
    ASSERT(palavra_contida("ab", "bab") == 1);

    TEST("'' contido em 'bab' deve retornar 1");
    ASSERT(palavra_contida("", "bab") == 1);

    TEST("'' contido em '' deve retornar 1");
    ASSERT(palavra_contida("", "") == 1);

    TEST("'lanterna' contido em 'No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença.' deve retornar 1");
    ASSERT(palavra_contida("lanterna", "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença.") == 1);

END_TEST()


END_TESTS()
