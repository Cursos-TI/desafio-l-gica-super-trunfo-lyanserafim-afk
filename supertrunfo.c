#include <stdio.h>

int main() {
         
        printf("Desafio CartasSuperTrunfo!\n");

    //       Carta1
    char Estado1 = 'A';
    char Código1[] = "A01";
    char NomeCidade1[] = "São Paulo";
    int População1 = 12325000;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int NúmerodePontosTurísticos1 = 50;
    float DensidadePopulacional1 = 8102.47;
    float PibperCapita1 = 56724.32;

    //       Carta2
    char Estado2 = 'B';
    char Código2[] = "B02";
    char NomedaCidade2[] = "Rio de Janeiro";
    int População2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int NúmerodePontosTurísticos2 = 30;
    float DensidadePopulacional2 = 5622.24;
    float PIBperCapita2 = 44532.91;

    if (População1 > População2) {
    printf("População1 vence\n");
    }else {
    printf("População2 venceu\n");
    }

    if (Area1 > Area2) {
    printf("Area1 venceu\n");
    }else { 
    printf("Area2 venceu\n");
    }

    if (PIB1 > PIB2) {
    printf("PIB1 venceu\n");
    }else {
    printf("PIB2 venceu\n");
    }

    if (NúmerodePontosTurísticos1 > NúmerodePontosTurísticos2) {
    printf("NúmerodePontosTurísticos1 venceu\n");
    }else {
    printf("NúmerodePontosTurísticos2 venceu\n");
    }
    
    if (DensidadePopulacional1 < DensidadePopulacional2) {
    printf("DensidadePopulacional1 venceu\n");
    }else
    printf("DensidadePopulacional2 venceu\n");
    }

    if (PibperCapita1 < PIBperCapita2) {
    printf("PIBperCapita1 venceu\n");
    }else {
    printf("PIBperCapita2 venceu\n");
    }



     printf("A cidade vencedora é: %s\n", "São Paulo");





     return0;
