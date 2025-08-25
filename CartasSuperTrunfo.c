#include <stdio.h>

int main() {
    // carta 1
    char estado1[50];
    char codigo1[20];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superoder1;

    // carta 2
    char estado2[50];
    char codigo2[20];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // cadastro carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %s", estado1);

    printf("Codigo da Carta: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", nomedacidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB (em Bilhoes): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

    // cálculos carta 1 desafio aentureiro
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float)(pib1 * 1000000000) / populacao1;
    superoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibpercapita1 + (1.0f / densidadepopulacional1);  

    // cadastro carta 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Codigo da Carta: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomedacidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB (em Bilhoes): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos2);

    // cálculos carta 2 desafio aventureiro
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float)(pib2 * 1000000000) / populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibpercapita2 + (1.0f / densidadepopulacional2); 


//exibicao de resultados
printf("\n==========================\n");
printf("comparacao de cartas:\n");
printf("\n==========================\n");



    // exibição carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // exibição carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    //resultado
    printf("Populacao: Carta 1 Venceu (%d)\n", (populacao1 > populacao2));
    printf("Area: Carta 1 Venceu (%d)\n", (area1 > area2));
    printf("Pib: Carta 1 Venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turisticos: Carta 1 Venceu (%d)\n", (pontosturisticos1 > pontosturisticos2));
    printf("Densidade Populacional: Carta 1 Venceu (%d)\n", (densidadepopulacional1 > densidadepopulacional2));
    printf("Pib Per Capita: Carta 1 Venceu (%d)\n", (pibpercapita1 > pibpercapita2));
    printf("Super Poder: Carta 1 Venceu (%d)\n", (superoder1 > superpoder2));
    return 0;
}