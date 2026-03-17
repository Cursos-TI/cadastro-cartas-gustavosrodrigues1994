#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta;
  char estado [8];
  char codigo [10];
  char nome_cidade [50];
  int populacao;
  float area; 
  float pib;
  int pontos_turisticos;
  
  // Área para entrada de dados
  printf("Digite o número da carta a ser cadastrada: "); // importante informar se será a carta 1, 2, 3 ... para identificação de cadastro.
  scanf("%d", &carta);
  printf("Carta %d:\n", carta);

  printf("Digite a letra do estado: ");
  scanf("%s", estado);
  printf("Estado: %s\n", estado);

  printf("Digite o código da carta: ");
  scanf("%s", codigo);
  printf("Código: %s\n", codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", nome_cidade);
  printf("Nome da cidade: %s\n", nome_cidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);
  printf("População: %d\n", populacao);

  printf("Digite a Área: ");
  scanf("%f", &area);
  printf("Área: %.2f km²\n", area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);
  printf("PIB: %.2f Bilhões de reais\n", pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);
  printf("Número de pontos turísticos: %d\n\n", pontos_turisticos);
  
  // Área para exibição dos dados da cidade
  printf("Carta %d:\n", carta);
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f Bilhões de reais\n", pib);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos);

  
return 0;
} 
