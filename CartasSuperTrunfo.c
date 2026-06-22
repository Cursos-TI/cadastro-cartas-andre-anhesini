#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char card1_uf, card2_uf;
    char card1_code[20], card2_code[20];
    char card1_city[20], card2_city[20];
    int card1_population, card2_population;
    float card1_area, card2_area;
    float card1_pib, card2_pib;
    int card1_turistpoints, card2_turistpoints;

  // Área para entrada de dados

    // Input for card 1
    printf("Vamos inserir os dados da Carta 1\n");

    printf("Insira o Estado - Letra de A a H: ");
    scanf(" %c", &card1_uf);
    printf("Insira o Código - Letra do Estado seguida de um numero de 01 a 04: ");
    scanf("%s", card1_code);
    printf("Insira o nome da cidade: ");
    scanf("%s", card1_city);
    printf("Insira o número de habitantes: ");
    scanf("%d", &card1_population);
    printf("Insira a área em quilômetros quadrados: ");
    scanf("%f", &card1_area);
    printf("Insira o PIB: ");
    scanf("%f", &card1_pib);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &card1_turistpoints);

    // Input for card 2
    printf("Agora, Vamos inserir os dados da Carta 2\n");

    printf("Insira o Estado - Letra de A a H: ");
    scanf(" %c", &card2_uf);
    printf("Insira o Código - Letra do Estado seguida de um numero de 01 a 04: ");
    scanf("%s", card2_code);
    printf("Insira o nome da cidade: ");
    scanf("%s", card2_city);
    printf("Insira o número de habitantes: ");
    scanf("%d", &card2_population);
    printf("Insira a área em quilômetros quadrados: ");
    scanf("%f", &card2_area);
    printf("Insira o PIB: ");
    scanf("%f", &card2_pib);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &card2_turistpoints);

    // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", card1_uf);
    printf("Código: %s\n", card1_code);
    printf("Cidade: %s\n", card1_city);
    printf("População: %d\n", card1_population);
    printf("Área: %.2f\n", card1_area);
    printf("PIB: %.2f\n", card1_pib);
    printf("Número de Pontos Turísticos: %d\n", card1_turistpoints);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", card2_uf);
    printf("Código: %s\n", card2_code);
    printf("Cidade: %s\n", card2_city);
    printf("População: %d\n", card2_population);
    printf("Área: %.2f\n", card2_area);
    printf("PIB: %.2f\n", card2_pib);
    printf("Número de Pontos Turísticos: %d\n", card2_turistpoints);

return 0;
} 
