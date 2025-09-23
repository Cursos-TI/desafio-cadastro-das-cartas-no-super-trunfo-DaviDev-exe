#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[3], codigo1[5], cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2[3], codigo2[5], cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // Cadastro da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB (Bilhoes): "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cadastro da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB (Bilhoes): "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibindo cartas
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Escolha de atributos
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Populacional\n");
    if (atributo1 != 6) printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo2);

    // Pegando valores dos atributos
    float valorC1A1, valorC2A1, valorC1A2, valorC2A2;

    switch(atributo1) {
        case 1: valorC1A1 = populacao1; valorC2A1 = populacao2; break;
        case 2: valorC1A1 = area1; valorC2A1 = area2; break;
        case 3: valorC1A1 = pib1; valorC2A1 = pib2; break;
        case 4: valorC1A1 = pontos1; valorC2A1 = pontos2; break;
        case 5: valorC1A1 = densidade1; valorC2A1 = densidade2; break;
        case 6: valorC1A1 = pibPerCapita1; valorC2A1 = pibPerCapita2; break;
    }

    switch(atributo2) {
        case 1: valorC1A2 = populacao1; valorC2A2 = populacao2; break;
        case 2: valorC1A2 = area1; valorC2A2 = area2; break;
        case 3: valorC1A2 = pib1; valorC2A2 = pib2; break;
        case 4: valorC1A2 = pontos1; valorC2A2 = pontos2; break;
        case 5: valorC1A2 = densidade1; valorC2A2 = densidade2; break;
        case 6: valorC1A2 = pibPerCapita1; valorC2A2 = pibPerCapita2; break;
    }

    // Comparação
    printf("\n--- Comparacao ---\n");

    if (atributo1 == 5) // densidade: menor vence
        printf("Atributo 1: %s venceu\n", (valorC1A1 < valorC2A1) ? cidade1 : cidade2);
    else
        printf("Atributo 1: %s venceu\n", (valorC1A1 > valorC2A1) ? cidade1 : cidade2);

    if (atributo2 == 5) // densidade: menor vence
        printf("Atributo 2: %s venceu\n", (valorC1A2 < valorC2A2) ? cidade1 : cidade2);
    else
        printf("Atributo 2: %s venceu\n", (valorC1A2 > valorC2A2) ? cidade1 : cidade2);

    // Soma dos atributos
    float somaC1 = valorC1A1 + valorC1A2;
    float somaC2 = valorC2A1 + valorC2A2;

    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", cidade1, somaC1, cidade2, somaC2);

    if (somaC1 > somaC2)
        printf("Resultado Final: %s venceu!\n", cidade1);
    else if (somaC2 > somaC1)
        printf("Resultado Final: %s venceu!\n", cidade2);
    else
        printf("Resultado Final: Empate!\n");

    return 0;
}