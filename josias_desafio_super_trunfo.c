#include <string.h> 

int main() {
    // Guardando as informações da primeira carta
    char estado1[3]; // O estado, tipo "SP" ou "RJ". Coloquei 3 pra caber 2 letras e um "fim de texto" invisível
    char codigo1[4]; // O código da carta, tipo "A01"
    char nomeCidade1[50]; // O nome da cidade. Pra caber nomes grandões
    unsigned long int populacao1; // População, que pode ser um número BEM GRANDE, então é "long int" e "unsigned" pra não ter número negativo
    float area1; 
    float pib1; 
    int pontosTuristicos1; // Pontos turísticos, número inteiro
    float densidadePopulacional1; 
    float pibPerCapita1; 
    float superPoder1; 

    // Guandando as informações da segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Cadastrar a primeira carta! ---
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", &estado1); 
    printf("Código (ex: A01): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1); // Pede a população e guarda na variável
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1; 

    // Cálculo do Super Poder da Carta 1 (USANDO PIB PER CAPITA)
    superPoder1 = (float)populacao1 + area1 + pibPerCapita1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // --- Agora a segunda carta! ---
    printf("Cadastro da Carta 2:\n");
    printf("Estado (ex: CE): ");
    scanf("%s", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nomeCidade2); // pra ler nomes com espaço
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder da Carta 2 (USANDO PIB PER CAPITA)
    superPoder2 = (float)populacao2 + area2 + pibPerCapita2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); // Use %lu para unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    // --- Dados da Carta 2: ---
    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2); // %lu para unsigned long int
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");
    
    // Hora da comparação
    printf("--- Resultado da Comparação ---\n");

    // Primeiro, a gente compara a População (maior população vence!)
    if (populacao1 > populacao2) { // Se a população da Carta 1 for maior...
        printf("A Carta 1 venceu no critério 'População'! UHU!\n");
    } else if (populacao2 > populacao1) { // Senão, se a população da Carta 2 for maior...
        printf("A Carta 2 venceu no critério 'População'! Ahhh...\n");
    } else { // Usando o PIB como critério de desempate!
        printf("Empate na População! Ambos têm %lu habitantes. Vamos ver quem tem o PIB maior para desempatar.\n", populacao1);

        // Desempate: quem tem mais PIB? (maior PIB vence!)
        if (pib1 > pib2) { // Se o PIB da Carta 1 for maior...
            printf("A Carta 1 venceu no PIB, desempatando a 'População'! Boa!\n");
        } else if (pib2 > pib1) { // Senão, se o PIB da Carta 2 for maior...
            printf("A Carta 2 venceu no PIB, desempatando a 'População'! Essa foi por pouco.\n");
        } else { // Se empatou na população E no PIB...
            printf("Empate TOTAL! Empatou na 'População' E no 'PIB'! Ninguém ganhou essa rodada.\n");
        }
    }
    return 0; 
}