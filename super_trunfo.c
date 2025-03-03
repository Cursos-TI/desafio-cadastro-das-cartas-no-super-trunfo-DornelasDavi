#include <stdio.h>


int main() {

    char estado; 
    char codigodacarta[4];
    char nomedacidade[50];
    int populacao, pontosturisticos;
    float area;
    float pib;

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
    



    return 0;
}
