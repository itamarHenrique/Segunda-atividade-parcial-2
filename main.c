#include <stdio.h>
#include <stdlib.h>

int main(){

    typedef struct{
        float metrosQuadrados;
        float largura;
        float comprimento;
        float valorPiso;
    }Comodo;

    int quantidadeComodo;
    printf("Quantos cômodos será instalada os pisos? ");
    scanf("%d", &quantidadeComodo);

    Comodo comodos [15] = {};

    for(int i = 0; i < quantidadeComodo; i++){
        printf("Quantos metros de largura tem o cômodo %d? ", i + 1);
        scanf("%f", &comodos[i].largura);
        printf("Quantos metros de comprimento tem o cômodo %d? ", i + 1);
        scanf("%f", &comodos[i].comprimento);
        printf("Qual é o valor do metro quadrado do piso que vai colocar no comodo %d? ", i + 1);
        scanf("%f", &comodos[i].valorPiso);
        comodos[i].metrosQuadrados = comodos[i].largura * comodos[i].comprimento;

    }

    float investimento = 0.0;

    printf("Relatorio:\n""=============================================================================\n");

    printf("%-20s%-20s%-20s%-20s%-20s%-20s\n", "Comodo", "Largura", "Comprimento", "TotalM2", "ValorM2", "Investimento");


    for(int i = 0; i < quantidadeComodo; i++){
        investimento = comodos[i].metrosQuadrados * comodos[i].valorPiso;
        comodos[i].metrosQuadrados = comodos[i].largura * comodos[i].comprimento;
        printf("%-20c%-20d%-20d%-20d%-20.2f%-20.2f\n", i + 65, comodos[i].largura, comodos[i].comprimento, comodos[i].metrosQuadrados, comodos[i].valorPiso, investimento);

        investimento = 0.0;
    }

    printf("=============================================================================================\n");


    return 0;

}
