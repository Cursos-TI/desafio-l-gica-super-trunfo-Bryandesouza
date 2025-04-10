#include <stdio.h>
#include <stdlib.h>

// Protótipo da função
double getValor(int atributo, int carta, char estado1, char estado2, char codigoCarta1[5], char codigoCarta2[10],
                char nomeCidade1[50], char nomeCidade2[50], unsigned long int populacao1, unsigned long int populacao2,
                double area1, double area2, double pib1, double pib2, int pontosTuristicos1, int pontosTuristicos2,
                double densidade1, double densidade2, double pibPerCapita1, double pibPerCapita2);

int main() {
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[10];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    double area1, area2;
    double pib1, pib2;
    double densidade1, densidade2;
    double pibPerCapita1, pibPerCapita2;
    int escolha1, escolha2;

    // Entrada de dados da primeira carta
    printf("Informe o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%lf", &area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nInforme o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%lf", &area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Exibição dos dados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade demográfica: %.2lf hab/km²\n", densidade1);
    printf("PIB per capita: %.2lf\n", pibPerCapita1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2lf hab/km²\n", densidade2);
    printf("PIB per capita: %.2lf\n", pibPerCapita2);

    // Menu dinâmico para comparação
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade demográfica (vence menor valor)\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos turísticos\n");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Densidade demográfica (vence menor valor)\n", i); break;
                case 5: printf("%d - PIB per capita\n", i); break;
                case 6: printf("%d - Pontos turísticos\n", i); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // Obtemos os valores dos atributos escolhidos
    double valor1Carta1 = getValor(escolha1, 1, estado1, estado2, codigoCarta1, codigoCarta2,
                                   nomeCidade1, nomeCidade2, populacao1, populacao2,
                                   area1, area2, pib1, pib2, pontosTuristicos1, pontosTuristicos2,
                                   densidade1, densidade2, pibPerCapita1, pibPerCapita2);

    double valor1Carta2 = getValor(escolha1, 2, estado1, estado2, codigoCarta1, codigoCarta2,
                                   nomeCidade1, nomeCidade2, populacao1, populacao2,
                                   area1, area2, pib1, pib2, pontosTuristicos1, pontosTuristicos2,
                                   densidade1, densidade2, pibPerCapita1, pibPerCapita2);

    double valor2Carta1 = getValor(escolha2, 1, estado1, estado2, codigoCarta1, codigoCarta2,
                                   nomeCidade1, nomeCidade2, populacao1, populacao2,
                                   area1, area2, pib1, pib2, pontosTuristicos1, pontosTuristicos2,
                                   densidade1, densidade2, pibPerCapita1, pibPerCapita2);

    double valor2Carta2 = getValor(escolha2, 2, estado1, estado2, codigoCarta1, codigoCarta2,
                                   nomeCidade1, nomeCidade2, populacao1, populacao2,
                                   area1, area2, pib1, pib2, pontosTuristicos1, pontosTuristicos2,
                                   densidade1, densidade2, pibPerCapita1, pibPerCapita2);

    // Exibição da comparação
    printf("\n--- Comparação dos Atributos ---\n");

    printf("Atributo 1: Carta 1 = %.2lf | Carta 2 = %.2lf\n", valor1Carta1, valor1Carta2);
    printf("Atributo 2: Carta 1 = %.2lf | Carta 2 = %.2lf\n", valor2Carta1, valor2Carta2);

    double soma1 = valor1Carta1 + valor2Carta1;
    double soma2 = valor1Carta2 + valor2Carta2;

    if (soma1 > soma2) {
        printf("\nCarta 1 venceu a rodada!\n");
    } else if (soma2 > soma1) {
        printf("\nCarta 2 venceu a rodada!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}

// Implementação da função depois do main()
double getValor(int atributo, int carta, char estado1, char estado2, char codigoCarta1[5], char codigoCarta2[10],
                char nomeCidade1[50], char nomeCidade2[50], unsigned long int populacao1, unsigned long int populacao2,
                double area1, double area2, double pib1, double pib2, int pontosTuristicos1, int pontosTuristicos2,
                double densidade1, double densidade2, double pibPerCapita1, double pibPerCapita2) {
    double valor;
    switch (atributo) {
        case 1: valor = (carta == 1) ? populacao1 : populacao2; break;
        case 2: valor = (carta == 1) ? area1 : area2; break;
        case 3: valor = (carta == 1) ? pib1 : pib2; break;
        case 4: valor = (carta == 1) ? densidade1 : densidade2; break;
        case 5: valor = (carta == 1) ? pibPerCapita1 : pibPerCapita2; break;
        case 6: valor = (carta == 1) ? pontosTuristicos1 : pontosTuristicos2; break;
        default: valor = 0;
    }

    // Se o atributo for densidade, invertemos o valor para que o menor seja o "vencedor"
    if (atributo == 4) valor = -valor;

    return valor;
}