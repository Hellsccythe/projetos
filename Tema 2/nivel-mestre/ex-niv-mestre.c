#include <stdlib.h>
#include <time.h>
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
    scanf(" %s", estado1);  // O espaço antes do %c é para consumir o \n restante da leitura anterior
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

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    float densipup1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) pib1 * 1e9 / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %s", estado2);
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

    // Escolha de atributos para comparação
    int escolhaAtrib1, escolhaAtrib2;

    printf("\n#### Escolha os Atributos para comparação (não pode ser o mesmo atributo duas vezes) ####\n");
    
    // Menu de escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    printf("5- Densidade populacional\n");
    printf("6- PIB per Capita\n");
    printf("7- Super Poder\n");
    scanf("%d", &escolhaAtrib1);

    // Menu de escolha do segundo atributo
    printf("Escolha o segundo atributo para comparação (não pode ser o mesmo que o primeiro):\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    printf("5- Densidade populacional\n");
    printf("6- PIB per Capita\n");
    printf("7- Super Poder\n");
    scanf("%d", &escolhaAtrib2);

    // Garantir que os atributos escolhidos são diferentes poderia ser feito com o if e else mas então eu teria que recomeçar o codigo toda vez... dessa forma o codigo vai prosseguir apenas quando os números forem diferentes... 
    while (escolhaAtrib1 == escolhaAtrib2) {
        printf("Os atributos não podem ser iguais. Por favor, escolha outro atributo para o segundo valor.\n");
        scanf("%d", &escolhaAtrib2);
    }

    // Comparar os dois atributos escolhidos
    printf("\n\n***### RESULTADO FINAL ###***\n");
    printf("Cidades comparadas: %s (Cidade 1) e %s (Cidade 2)\n", cidade1, cidade2);
    
    // Variáveis para armazenar as somas dos atributos
    float somaCarta1 = 0, somaCarta2 = 0;

    // Atributo 1
    switch (escolhaAtrib1) {
        case 1: // População
            printf("Atributo 1 - População: Cidade 1 (%s) = %d, Cidade 2 (%s) = %d\n", cidade1, populacao1, cidade2, populacao2);
            somaCarta1 += populacao1;
            somaCarta2 += populacao2;
            break;
        case 2: // Área
            printf("Atributo 1 - Área: Cidade 1 (%s) = %.2f km², Cidade 2 (%s) = %.2f km²\n", cidade1, area1, cidade2, area2);
            somaCarta1 += area1;
            somaCarta2 += area2;
            break;
        case 3: // PIB
            printf("Atributo 1 - PIB: Cidade 1 (%s) = %.2f bilhões, Cidade 2 (%s) = %.2f bilhões\n", cidade1, pib1, cidade2, pib2);
            somaCarta1 += pib1;
            somaCarta2 += pib2;
            break;
        case 4: // Pontos Turísticos
            printf("Atributo 1 - Pontos Turísticos: Cidade 1 (%s) = %d, Cidade 2 (%s) = %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            somaCarta1 += pontosTuristicos1;
            somaCarta2 += pontosTuristicos2;
            break;
        case 5: // Densidade Populacional
            printf("Atributo 1 - Densidade Populacional: Cidade 1 (%s) = %.2f hab/km², Cidade 2 (%s) = %.2f hab/km²\n", cidade1, densipup1, cidade2, densipup2);
            somaCarta1 += densipup1;
            somaCarta2 += densipup2;
            break;
        case 6: // PIB per Capita
            printf("Atributo 1 - PIB per Capita: Cidade 1 (%s) = %.2f, Cidade 2 (%s) = %.2f\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            somaCarta1 += pibpercapita1;
            somaCarta2 += pibpercapita2;
            break;
        case 7: // Super Poder
            printf("Atributo 1 - Super Poder: Cidade 1 (%s) = %.2f, Cidade 2 (%s) = %.2f\n", cidade1, superPoder1, cidade2, superPoder2);
            somaCarta1 += superPoder1;
            somaCarta2 += superPoder2;
            break;
    }

    // Atributo 2
    switch (escolhaAtrib2) {
        case 1: // População
            printf("Atributo 2 - População: Cidade 1 (%s) = %d, Cidade 2 (%s) = %d\n", cidade1, populacao1, cidade2, populacao2);
            somaCarta1 += populacao1;
            somaCarta2 += populacao2;
            break;
        case 2: // Área
            printf("Atributo 2 - Área: Cidade 1 (%s) = %.2f km², Cidade 2 (%s) = %.2f km²\n", cidade1, area1, cidade2, area2);
            somaCarta1 += area1;
            somaCarta2 += area2;
            break;
        case 3: // PIB
            printf("Atributo 2 - PIB: Cidade 1 (%s) = %.2f bilhões, Cidade 2 (%s) = %.2f bilhões\n", cidade1, pib1, cidade2, pib2);
            somaCarta1 += pib1;
            somaCarta2 += pib2;
            break;
        case 4: // Pontos Turísticos
            printf("Atributo 2 - Pontos Turísticos: Cidade 1 (%s) = %d, Cidade 2 (%s) = %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            somaCarta1 += pontosTuristicos1;
            somaCarta2 += pontosTuristicos2;
            break;
        case 5: // Densidade Populacional
            printf("Atributo 2 - Densidade Populacional: Cidade 1 (%s) = %.2f hab/km², Cidade 2 (%s) = %.2f hab/km²\n", cidade1, densipup1, cidade2, densipup2);
            somaCarta1 += densipup1;
            somaCarta2 += densipup2;
            break;
        case 6: // PIB per Capita
            printf("Atributo 2 - PIB per Capita: Cidade 1 (%s) = %.2f, Cidade 2 (%s) = %.2f\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            somaCarta1 += pibpercapita1;
            somaCarta2 += pibpercapita2;
            break;
        case 7: // Super Poder
            printf("Atributo 2 - Super Poder: Cidade 1 (%s) = %.2f, Cidade 2 (%s) = %.2f\n", cidade1, superPoder1, cidade2, superPoder2);
            somaCarta1 += superPoder1;
            somaCarta2 += superPoder2;
            break;
    }

    // Determinar o vencedor
    if (somaCarta1 > somaCarta2) {
        printf("A Carta 1 venceu a comparação!\n");
    } else if (somaCarta2 > somaCarta1) {
        printf("A Carta 2 venceu a comparação!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
