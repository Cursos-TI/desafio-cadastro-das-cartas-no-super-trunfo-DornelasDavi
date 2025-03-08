#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as informações da primeira carta
    char estado[4]; 
    char codigodacarta[4];
    char nomedacidade[50];
    int populacao, pontosturisticos;
    float area, pib;

    // Declaração das variáveis para armazenar as informações da segunda carta
    char estado2[4]; 
    char codigodacarta2[4];
    char nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;
    
    printf("Cadastro de Cartas do Jogo Super Trunfo (cidades) \n");
    
    // Cadastro da primeira carta
    printf("Digite o Nome do Estado (Uma letra de 'A' a 'H' representando um estado): \n");
    scanf("%s", estado);

    printf("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04, ex: A01, B03): \n");
    scanf("%s", codigodacarta);

    printf("Digite o Nome da Cidade (Apenas o primeiro nome, ex: Rio de Janeiro -> Rio): \n");
    scanf("%s", nomedacidade);

    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);
    printf("\n");
    
    // Cadastro da segunda carta
    printf("Cadastre a Sua Segunda Carta: \n");
    
    printf("Digite o Nome do Estado (Uma letra de 'A' a 'H' representando um estado): \n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04, ex: A01, B03): \n");
    scanf("%s", codigodacarta2);

    printf("Digite o Nome da Cidade (Apenas o primeiro nome, ex: Rio de Janeiro -> Rio): \n");
    scanf("%s", nomedacidade2);

    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);
    printf("\n");
    
    // Exibição das informações da primeira carta
    printf("Carta 1 \n");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos);
    printf("\n");
    
    // Exibição das informações da segunda carta
    printf("Carta 2 \n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("\n");
    
    return 0;
}
