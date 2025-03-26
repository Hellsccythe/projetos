#include <stdio.h>

int main() {
    // Definição de variáveis para a Carta 1
    char estado1[8];
    char codigo1[4];
    char cidade1[100];
    float area1;
    float pib1;
    int pontosTuristicos1, populacao1;

    // Definição de variáveis para a Carta 2
    char estado2[8];
    char codigo2[4];
    char cidade2[100];
    float area2;
    float pib2;
    int pontosTuristicos2, populacao2;

    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %s", &estado1);  // O espaço antes do %c é para consumir o \n restante da leitura anterior
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

    // Calculo densidade populacional e PIB per capita da Carta 1
    float densipup1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) pib1 * 1e9 / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %s", &estado2);
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
    float densipup2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) pib2 * 1e9 / populacao2;

    // Calcular o Super Poder da Carta 1
    float superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densipup1);

    // Calcular o Super Poder da Carta 2
    float superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densipup2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Cálculo da densidade populacional (população/área): %.2f hab/km²\n", densipup1);
    printf("Cálculo do PIB Per Capita: %.2f reais por pessoa\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Cálculo da densidade populacional (população/área): %.2f hab/km²\n", densipup2);
    printf("Cálculo do PIB Per Capita: %.2f reais por pessoa\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    
    //skip line
    printf("****************************************************\n");

    // Comparando População
    printf("População: População da cidade 1 (%s) é de %d e da cidade 2 (%s) é de %d, portanto a Carta %d venceu\n", cidade1, populacao1, cidade2, populacao2, (populacao1 > populacao2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    // Comparando Área
    printf("A área da cidade 1 (%s) é de %.2f e a área da cidade 2 (%s) é de %.2f portando a Carta %d venceu\n", cidade1, area1, cidade2, area2, (area1 > area2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    // Comparando PIB
    printf("O PIB da cidade 1 (%s) é de %.2f e da cidade 2 (%s) é de %.2f portanto a Carta %d venceu\n", cidade1, pib1, cidade2, pib2, (pib1 > pib2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    // Comparando Pontos Turísticos
    printf("Os Pontos Turísticos da cidade 1 (%s) são %d e da cidade 2 (%s) são %d portanto a Carta %d venceu\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    // Comparando Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional da cidade 1 (%s) é de %.2f hab/km² e da cidade 2 (%s) é de %.2f hab/km² portanto a Carta %d venceu\n", cidade1, densipup1, cidade2, densipup2, (densipup1 < densipup2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    // Comparando PIB per Capita
    printf("PIB per Capita da cidade 1 (%s) são de %.2f reais por pessoa e da cidade 2 (%s) são de %.2f reais por pessoa portanto a Carta %d venceu\n", cidade1, pib1, cidade2, pib2, (pibpercapita1 > pibpercapita2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    // Comparando Super Poder
    printf("Super Poder da cidade 1 (%s) é de %.2f e da cidade 2 (%s) é de %.2f portanto a Carta %d venceu\n", cidade1, superPoder1, cidade2, superPoder2, (superPoder1 > superPoder2) ? 1 : 2);

   //skip line
   printf("****************************************************\n");

    return 0;
}
