#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para a Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê a linha inteira, incluindo espaços
    printf("População: ");
    scanf("%lu", &populacao1); // Especificador de formato para unsigned long int
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Calcula a Densidade Populacional e PIB per Capita da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1; // Conversão para float
    pibPerCapita1 = pib1 * 1000000000.0 / populacao1; // PIB em reais

    // Cálculo do Super Poder da Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000.0 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê a linha inteira, incluindo espaços
    printf("População: ");
    scanf("%lu", &populacao2); // Especificador de formato para unsigned long int
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2; // Conversão para float
    pibPerCapita2 = pib2 * 1000000000.0 / populacao2; // PIB em reais

    // Cálculo do Super Poder da Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000.0 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos Dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    // Exibição dos Dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação das Cartas
    printf("Comparação de Cartas:\n");

    // População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    // Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    // PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}