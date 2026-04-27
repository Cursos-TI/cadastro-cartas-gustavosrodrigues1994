#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Definição de variáveis para armazenar as propriedades das cidades
  // Variáveis da carta 1
  int carta1;
  char estado1, codigo1[10], nome_cidade1[50]; // strings do tipo char não se põe &
  unsigned long int populacao1;
  int card1_pontos_turisticos;
  double card1_area, card1_pib, card1_densidade_populacao, card1_pib_capta; 

  // Variáveis da carta 2
  int carta2;
  char estado2, codigo2[10], nome_cidade2[50];
  unsigned long int populacao2;
  int card2_pontos_turisticos;
  double card2_area, card2_pib, card2_densidade_populacao, card2_pib_capta;  

  // Área para entrada de dados 
  //Carta 1
  printf("Digite as informações da carta 1: \n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código: ");
  scanf("%s", &codigo1);

  printf("Nome cidade: ");
  scanf("%s", nome_cidade1);
    
  printf("Digite a população: ");
  scanf("%lu", &populacao1);

  printf("Digite a área: ");
  scanf("%lf", &card1_area);

  printf("Digite o PIB: ");
  scanf("%lf", &card1_pib);

  printf("Digite os pontos turísticos: ");
  scanf("%d", &card1_pontos_turisticos);

// Área para entrada de dados 
//Carta 2
  printf("\nDigite as informações da carta 2: \n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o código: ");
  scanf("%s", &codigo2);

  printf("Nome cidade: ");
  scanf("%s", nome_cidade2);
    
  printf("Digite a população: ");
  scanf("%lu", &populacao2);

  printf("Digite a área: ");
  scanf("%lf", &card2_area);

  printf("Digite o PIB: ");
  scanf("%lf", &card2_pib);

  printf("Digite os pontos turísticos: ");
  scanf("%d", &card2_pontos_turisticos);

// Área para cálculos da densidade, pib per capita e superpoder - carta 1 
card1_densidade_populacao = populacao1 / card1_area;
card1_pib_capta = (card1_pib * 1000000000.0) / populacao1;
float superpoder1 = (float) populacao1 + (float) card1_area + (float) card1_pib + (float) card1_pontos_turisticos + (float) card1_pib_capta + 1 / (float) card1_densidade_populacao;

// Área de exibição dos dados da carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2lf km²\n", card1_area);
  printf("PIB: %.2lf Bilhões de reais\n", card1_pib);
  printf("Número de pontos turísticos: %d\n", card1_pontos_turisticos);
  printf("Densidade populacional: %.2f hab/km²\n", card1_densidade_populacao);
  printf("PIB per capta: %.2f reais\n", card1_pib_capta);
  printf("O super poder da carta 1 é: %.2f\n", superpoder1);

// Área para cálculos da densidade, pib per capita e superpoder - Carta 2
card2_densidade_populacao = populacao2 / card2_area;
card2_pib_capta = (card2_pib * 1000000000.0) / populacao2;
float superpoder2 = (float) populacao2 + (float) card2_area + (float) card2_pib + (float) card2_pontos_turisticos + (float) card2_pib_capta + 1 / (float) card2_densidade_populacao;

// Área de exibição dos dados da carta 2 
  printf("\nCarta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2lf km²\n", card2_area);
  printf("PIB: %.2lf Bilhões de reais\n", card2_pib);
  printf("Número de pontos turísticos: %d\n", card2_pontos_turisticos);
  printf("Densidade populacional: %.2f hab/km²\n", card2_densidade_populacao);
  printf("PIB per capta: %.2f reais\n", card2_pib_capta);
  printf("O super poder da carta 2 é: %.2f\n", superpoder2);
   
  // Área de comparação de dados das cartas
  printf("\nComparação de cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", card1_area > card2_area);
  printf("PIB: Carta 1 venceu (%d)\n", card1_pib > card2_pib);
  printf("Pontos turísticos: Carta 1 venceu (%d)\n", card1_pontos_turisticos > card2_pontos_turisticos);
  printf("Densidade populacional: Carta 2 venceu (%d)\n", card1_densidade_populacao < card2_densidade_populacao);
  printf("PIB per capta: Carta 1 venceu (%d)\n", card1_pib_capta > card2_pib_capta);
  printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);


return 0;

} 
