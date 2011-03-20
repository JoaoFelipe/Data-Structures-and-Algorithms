#include <stdio.h>
#include <stdlib.h>
#include "revisao_1_atleta.c"
gi
void ler_numero_de_atletas(int *num)
{
    printf("Digite o numero de atletas\n");
    scanf("%d", num);
}

void ler_notas_dos_atletas(float *atletas, int num)
{
    for (int i = 0; i < num; i++){
        for (int j = 0; j< 6; j++) {
            printf("Digite a nota %d\n", j+1);
            scanf("%f", atletas+i*6 +j);
        }
    }
}

void imprimir_medias_dos_atletas(float *atletas, int num)
{
    printf("Medias:\n");
    for (int i = 0; i < num; i++){
        printf("Atleta %d: %f\n", i+1, media(atletas + 6*i, 6));
    }
}

void imprimir_ordem_de_vencedores(float *atletas, int num)
{
    int *ordem = (int *) malloc(num*sizeof(int));
    vencedores(atletas, num, 6, ordem);

    printf("Vencedores:\n");
    for (int i = 0; i < num; i++){
        printf("%d-Atleta %d: %f\n", i+1, ordem[i]+1, media(atletas + 6*ordem[i], 6));
    }

    free(ordem);
}


int main(void)
{
    int num;
    ler_numero_de_atletas(&num);
    float *atletas = (float *) malloc(num*6*sizeof(float));
    
    ler_notas_dos_atletas(atletas, num);
    printf("\n");
    imprimir_medias_dos_atletas(atletas, num);
    printf("\n");
    imprimir_ordem_de_vencedores(atletas, num);

    free(atletas);
}

