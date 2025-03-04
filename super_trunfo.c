#include <stdio.h>


int main() {

    char estado[4]; 
    char codigodacarta[4];
    char nomedacidade[50];
    int populacao, pontosturisticos;
    float area;
    float pib;

    char estado2[4]; 
    char codigodacarta2[4];
    char nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2;
    float pib2;
    
    
    
    printf("Cadastro de Cartas do Jogo Super Trunfo (cidades) \n");
    
    printf("Digite o Nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigodacarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);
    printf("\n");

    

    printf("Cadastre a Sua Segunda Carta: \n");
    
    printf("Digite o Nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigodacarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);
    printf("\n");


    
    
    printf("Carta 1 \n");
    printf("\n");


    printf("Estado: %s\n", &estado);
    printf("Código: %s\n", &codigodacarta);
    printf("Nome da Cidade: %s\n", &nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Números de Pontos Turisticos: %d\n", pontosturisticos);

    printf("\n");
    
    printf("Carta 2 \n");
    printf("\n");



    printf("Estado: %s\n", &estado2);
    printf("Código: %s\n", &codigodacarta2);
    printf("Nome da Cidade: %s\n", &nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Números de Pontos Turisticos: %d\n", pontosturisticos2);

    printf("\n");
    
   
   
   
   
   
    return 0;
}