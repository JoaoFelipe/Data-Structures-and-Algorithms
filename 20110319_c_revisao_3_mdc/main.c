#include <stdio.h>
#include "revisao_3_mdc.c"

int main(void){
    int num1;
    int num2;
    printf("Digite o primeiro numero\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero\n");
    scanf("%d", &num2);
    printf("MDC entre %d e %d é %d\n", num1, num2, mdc(num1,num2));
    
}
