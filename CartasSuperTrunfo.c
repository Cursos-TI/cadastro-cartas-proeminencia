#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_1 = ' ', estado_2 = ' ';
    char codigo_1[4] = "", codigo_2[4] = "";
    char cidade_1[30] = "", cidade_2[30] = "";
    int populacao_1 = 0, populacao_2 = 0;
    float area_1 = 0, area_2 = 0;
    float pib_1 = 0, pib_2 = 0;
    int pontosTuristicos_1 = 0, pontosTuristicos_2 = 0;

    // Área para entrada de dados
    // Carta 1
    printf("----- Carta 1 ----- \n");

    printf("Estado: ");
    scanf(" %c", &estado_1);

    printf("Código: ");
    scanf("%s", codigo_1);

    printf("Nome da cidade: ");
    scanf("%s", cidade_1);

    printf("População da cidade: ");
    scanf("%d", &populacao_1);

    printf("Área: ");
    scanf("%f", &area_1);

    printf("PIB: ");
    scanf("%f", &pib_1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_1);

    // Carta 2
    printf("----- Carta 2 ----- \n");

    printf("Estado: ");
    scanf(" %c", &estado_2);

    printf("Código: ");
    scanf("%s", codigo_2);

    printf("Nome da cidade: ");
    scanf("%s", cidade_2);

    printf("População da cidade: ");
    scanf("%d", &populacao_2);

    printf("Área: ");
    scanf("%f", &area_2);

    printf("PIB: ");
    scanf("%f", &pib_2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_2);



    // Área para exibição dos dados da cidade
    printf("--- Exibição dos dados ---\n");
    printf("--- Carta 1 --- \n");

    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km^2\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos_1);
    printf("Densidade Populacional: %.2f hab/km^2\n", (populacao_1 / area_1));
    printf("PIB per Capita: %.2f reais\n", (pib_1 * 1000000000 / populacao_1));


    printf("--- Carta 2 --- \n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km^2\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos_2);
    printf("Densidade Populacional: %.2f hab/km^2\n", (populacao_2 / area_2));
    printf("PIB per Capita: %.2f reais\n", (pib_2 * 1000000000 / populacao_2));

    return 0;
} 