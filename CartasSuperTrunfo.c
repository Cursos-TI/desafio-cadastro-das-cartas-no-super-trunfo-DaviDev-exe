#include <stdio.h>
int main() {
    //carta 1
    char estado1[50];
    char codigo1[20];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //carta 2
    char estado2[50];
    char codigo2[20];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //cadastro das cartas

    printf("Carta 1\n");
    printf("Estado:");
    scanf(" %s", estado1);

    printf("Codigo Da Carta:");
    scanf(" %s", codigo1);

    printf("Nome Da Cidade:");
    scanf(" %s", nomedacidade1);

    printf("Populacao:");
    scanf(" %d", &populacao1);

    printf("Area:");
    scanf(" %f", &area1);

    printf("PIB:");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

    printf("Carta 2\n");
    printf("Estado:");
    scanf(" %s", estado2);

    printf("Codigo Da Carta:");
    scanf(" %s", codigo2);

    printf("Nome Da Cidade:");
    scanf(" %s", nomedacidade2);

    printf("Populacao:");
    scanf(" %d", &populacao2);

    printf("Area:");
    scanf(" %f", &area2);

    printf("PIB:");
    scanf(" %f", &pib2);

    printf("Numero De Pontos Turisticos:");
    scanf(" %d", &pontosturisticos2);

    //exibicao das Cartas
printf("\nCarta 1\n");
printf("Estado: %s\n", estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomedacidade1);
printf("Populacao: %d milhoes\n", populacao1);
printf("Area: %f km\n", area1);
printf("PIB: %f\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

printf("\nCarta 2\n");
printf("Estado: %s\n", estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomedacidade2);
printf("Populacao: %d milhoes\n", populacao2);
printf("Area: %f km\n", area2);
printf("PIB: %f\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;

}