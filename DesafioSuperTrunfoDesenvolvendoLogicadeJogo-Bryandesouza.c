#include <stdio.h>

// Tema 2
// Desafio Super Trunfo - Desenvolvimento Lógica de Jogo

int main() {  
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[10]; // Código da carta (string)
    char nomeCidade1[50], nomeCidade2[50]; // Nome da cidade (string)
    unsigned long int populacao1, populacao2; // População
    int pontosTuristicos1, pontosTuristicos2; //  pontos turísticos
    double area1, area2; // Área
    double pib1, pib2; //  PIB
    double densidade1, densidade2; // Densidade populacional
    double pibPerCapita1, pibPerCapita2; // PIB per capita

    // Entrada de dados para a primeira carta
    printf("Informe o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c evita problemas com buffer

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1); // Lê string sem espaço

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê o nome completo da cidade

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%lf", &area1);

    printf("Informe o PIB: ");
    scanf("%lf", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("Informe o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê o nome completo da cidade

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%lf", &area2);

    printf("Informe o PIB: ");
    scanf("%lf", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    // Calculo da densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita1 = (pib1 * 1e9) / (double) populacao1;
    pibPerCapita2 = (pib2 * 1e9) / (double) populacao2;

    // Exibição dos dados da carta 1
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2lf habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2lf\n", pibPerCapita1);

    // Exibição dos dados da carta 2
    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2lf habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2lf\n", pibPerCapita2);

    // Logica de comparação entre as cartas
    if (populacao1 > populacao2) {
        printf("\nA Carta 1 venceu! Tem maior população.\n");
    } else if (populacao1 < populacao2) {
        printf("\nA Carta 2 venceu! Tem maior População.\n");
    } else {
        printf("\nEmpate! As cartas têm a mesma população.\n");
    }
    
return 0;
}
