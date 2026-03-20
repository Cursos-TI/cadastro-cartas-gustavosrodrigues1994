#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta1, carta2;
  char estado1[8], estado2[8];
  char codigo1[10], codigo2[10];
  char nome_cidade1[50], nome_cidade2[50];
  int populacao1, populacao2;
  float area1, area2; 
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
  
  // Área para entrada de dados da carta 1
  printf("Digite o número da carta a ser cadastrada: "); 
  scanf("%d", &carta1);
  printf("Carta %d:\n", carta1);

  printf("Digite a letra do estado: ");
  scanf("%s", estado1);
  printf("Estado: %s\n", estado1);

  printf("Digite o código da carta: ");
  scanf("%s", codigo1);
  printf("Código: %s\n", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", nome_cidade1);
  printf("Nome da cidade: %s\n", nome_cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("População: %d\n", populacao1);

  printf("Digite a Área: ");
  scanf("%f", &area1);
  printf("Área: %.2f km²\n", area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("PIB: %.2f Bilhões de reais\n", pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);
  printf("Número de pontos turísticos: %d\n\n", pontos_turisticos1);
  
  // Área para entrada de dados da carta 2
  printf("Digite o número da carta a ser cadastrada: "); 
  scanf("%d", &carta2);
  printf("Carta %d:\n", carta2);

  printf("Digite a letra do estado: ");
  scanf("%s", estado2);
  printf("Estado: %s\n", estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigo2);
  printf("Código: %s\n", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nome_cidade2);
  printf("Nome da cidade: %s\n", nome_cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("População: %d\n", populacao2);

  printf("Digite a Área: ");
  scanf("%f", &area2);
  printf("Área: %.2f km²\n", area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("PIB: %.2f Bilhões de reais\n", pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);
  printf("Número de pontos turísticos: %d\n\n", pontos_turisticos2);
  
  // Área para exibição dos dados cadastrados da carta 1
  printf("Carta %d:\n", carta1);
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f Bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n\n", pontos_turisticos1);

  // Área para exibição dos dados cadastrados da carta 2
  printf("Carta %d:\n", carta2);
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f Bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

return 0;
} 