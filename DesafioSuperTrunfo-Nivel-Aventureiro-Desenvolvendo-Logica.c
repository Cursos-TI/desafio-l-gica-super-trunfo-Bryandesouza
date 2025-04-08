#include <stdio.h>
#include <stdlib.h>

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
    int escolha;

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

    // Mostrando os valores calculados
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

    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade demográfica (vence menor valor)\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos turísticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparações
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2)
                printf("\nCarta 1 venceu: Maior população.\n");
            else if (populacao1 < populacao2)
                printf("\nCarta 2 venceu: Maior população.\n");
            else
                printf("\nEmpate: População igual.\n");
            break;
        case 2:
            if (area1 > area2)
                printf("\nCarta 1 venceu: Maior área.\n");
            else if (area1 < area2)
                printf("\nCarta 2 venceu: Maior área.\n");
            else
                printf("\nEmpate: Áreas iguais.\n");
            break;
        case 3:
            if (pib1 > pib2)
                printf("\nCarta 1 venceu: Maior PIB.\n");
            else if (pib1 < pib2)
                printf("\nCarta 2 venceu: Maior PIB.\n");
            else
                printf("\nEmpate: PIBs iguais.\n");
            break;
        case 4:
            if (densidade1 < densidade2)
                printf("\nCarta 1 venceu: Menor densidade demográfica.\n");
            else if (densidade1 > densidade2)
                printf("\nCarta 2 venceu: Menor densidade demográfica.\n");
            else
                printf("\nEmpate: Densidade igual.\n");
            break;
        case 5:
            if (pibPerCapita1 > pibPerCapita2)
                printf("\nCarta 1 venceu: Maior PIB per capita.\n");
            else if (pibPerCapita1 < pibPerCapita2)
                printf("\nCarta 2 venceu: Maior PIB per capita.\n");
            else
                printf("\nEmpate: PIB per capita igual.\n");
            break;
        case 6:
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("\nCarta 1 venceu: Mais pontos turísticos.\n");
            else if (pontosTuristicos1 < pontosTuristicos2)
                printf("\nCarta 2 venceu: Mais pontos turísticos.\n");
            else
                printf("\nEmpate: Mesmo número de pontos turísticos.\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }

    return 0;
}