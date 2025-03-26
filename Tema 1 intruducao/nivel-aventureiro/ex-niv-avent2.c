#include <stdio.h>

int main() {
    // Definição de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densipup1;  // Densidade populacional da Carta 1
    float pibpercapita1;  // PIB per capita da Carta 1

    // Definição de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densipup2;  // Densidade populacional da Carta 2
    float pibpercapita2;  // PIB per capita da Carta 2

    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes do %c é para consumir o \n restante da leitura anterior
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);  // Lê a string com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcular densidade populacional e PIB per capita da Carta 1
    densipup1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 * 1e9 / populacao1;  // Multiplicamos o PIB por 1e9 para converter de bilhões para reais

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcular densidade populacional e PIB per capita da Carta 2
    densipup2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 * 1e9 / populacao2;  // Multiplicamos o PIB por 1e9 para converter de bilhões para reais

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Cálculo da densidade populacional (população/área): %.2f habitantes/km²\n", densipup1);
    printf("Cálculo do PIB per Capita: %.2f reais por pessoa\n", pibpercapita1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Cálculo da densidade populacional (população/área): %.2f habitantes/km²\n", densipup2);
    printf("Cálculo do PIB per Capita: %.2f reais por pessoa\n", pibpercapita2);

    return 0;
}
