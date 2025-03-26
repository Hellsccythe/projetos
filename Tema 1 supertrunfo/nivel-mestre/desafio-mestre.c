#include <stdio.h>

int main() {
    // Definição de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Definição de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes do %c é para consumir o \n restante da leitura anterior
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);  // Lê a string com espaços
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo densidade populacional e PIB per capita da Carta 1
    float densipup1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) pib1 * 1e9 / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcular densidade populacional e PIB per capita da Carta 2
    float densipup2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) pib2 * 1e9 / populacao2;

    // Calcular o Super Poder da Carta 1
    float superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densipup1);

    // Calcular o Super Poder da Carta 2
    float superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densipup2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Cálculo da densidade populacional (população/área): %.2f hab/km²\n", densipup1);
    printf("Cálculo do PIB Per Capita: %.2f reais por pessoa\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Cálculo da densidade populacional (população/área): %.2f hab/km²\n", densipup2);
    printf("Cálculo do PIB Per Capita: %.2f reais por pessoa\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);

    // Comparando Área
    printf("Área: Carta %d venceu\n", (area1 > area2) ? 1 : 2);

    // Comparando PIB
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);

    // Comparando Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta %d venceu\n", (densipup1 < densipup2) ? 1 : 2);

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta %d venceu\n", (pibpercapita1 > pibpercapita2) ? 1 : 2);

    // Comparando Super Poder
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);

    return 0;
}
