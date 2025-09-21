#include <stdio.h>

int main() {
    int opcao;

    // MENU PRINCIPAL
    printf("### Super Trunfo ###\n");
    printf("1. Iniciar Desafio\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair do Jogo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // ===== CADASTRO CARTA 1 =====
        char estado1[50], nomedacidade1[50];
        int populacao1, pontosturisticos1;
        float area1, pib1, densidadepopulacional1, pibpercapita1;

        printf("\n--- Carta 1 ---\n");
        printf("Estado: ");
        scanf("%s", estado1);
        printf("Cidade: ");
        scanf("%s", nomedacidade1);
        printf("Populacao: ");
        scanf("%d", &populacao1);
        printf("Area: ");
        scanf("%f", &area1);
        printf("PIB: ");
        scanf("%f", &pib1);
        printf("Pontos Turisticos: ");
        scanf("%d", &pontosturisticos1);

        densidadepopulacional1 = populacao1 / area1;
        pibpercapita1 = (pib1 * 1000000000) / populacao1;

        // ===== CADASTRO CARTA 2 =====
        char estado2[50], nomedacidade2[50];
        int populacao2, pontosturisticos2;
        float area2, pib2, densidadepopulacional2, pibpercapita2;

        printf("\n--- Carta 2 ---\n");
        printf("Estado: ");
        scanf("%s", estado2);
        printf("Cidade: ");
        scanf("%s", nomedacidade2);
        printf("Populacao: ");
        scanf("%d", &populacao2);
        printf("Area: ");
        scanf("%f", &area2);
        printf("PIB: ");
        scanf("%f", &pib2);
        printf("Pontos Turisticos: ");
        scanf("%d", &pontosturisticos2);

        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = (pib2 * 1000000000) / populacao2;

        // ===== MENU DE ATRIBUTOS =====
        int atributo;
        printf("\nEscolha o atributo para comparar:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        scanf("%d", &atributo);

        switch (atributo) {
            case 1: // População
                printf("\nComparando Populacao...\n");
                printf("%s: %d habitantes\n", nomedacidade1, populacao1);
                printf("%s: %d habitantes\n", nomedacidade2, populacao2);

                if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (populacao2 > populacao1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 2: // Área
                printf("\nComparando Area...\n");
                if (area1 > area2)
                    printf("Resultado: Carta 1 venceu!\n");
                else if (area2 > area1)
                    printf("Resultado: Carta 2 venceu!\n");
                else
                    printf("Resultado: Empate!\n");
                break;

            case 3: // PIB
                printf("\nComparando PIB...\n");
                if (pib1 > pib2)
                    printf("Resultado: Carta 1 venceu!\n");
                else if (pib2 > pib1)
                    printf("Resultado: Carta 2 venceu!\n");
                else
                    printf("Resultado: Empate!\n");
                break;

            case 4: // Pontos turísticos
                printf("\nComparando Pontos Turisticos...\n");
                if (pontosturisticos1 > pontosturisticos2)
                    printf("Resultado: Carta 1 venceu!\n");
                else if (pontosturisticos2 > pontosturisticos1)
                    printf("Resultado: Carta 2 venceu!\n");
                else
                    printf("Resultado: Empate!\n");
                break;

            case 5: // Densidade (regra invertida: menor vence!)
                printf("\nComparando Densidade Populacional...\n");
                if (densidadepopulacional1 < densidadepopulacional2)
                    printf("Resultado: Carta 1 venceu!\n");
                else if (densidadepopulacional2 < densidadepopulacional1)
                    printf("Resultado: Carta 2 venceu!\n");
                else
                    printf("Resultado: Empate!\n");
                break;

            case 6: // PIB per capita
                printf("\nComparando PIB per Capita...\n");
                if (pibpercapita1 > pibpercapita2)
                    printf("Resultado: Carta 1 venceu!\n");
                else if (pibpercapita2 > pibpercapita1)
                    printf("Resultado: Carta 2 venceu!\n");
                else
                    printf("Resultado: Empate!\n");
                break;

            default:
                printf("Atributo invalido!\n");
                break;
        }
    }
    else if (opcao == 2) {
        printf("\nRegras do jogo:\n");
        printf("1. Se o atributo empatar, vence quem tiver mais pontos turisticos.\n");
        printf("2. Ganha quem fizer 3 pontos primeiro.\n");
    }
    else {
        printf("\nSaindo do jogo...\n");
    }

    return 0;
}