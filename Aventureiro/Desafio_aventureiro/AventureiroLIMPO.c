#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char estado[20], card_id[4], city[20], estado1[20], card_id1[4], city1[20];
    strcpy(card_id, "A01");
    strcpy(card_id1, "B01");

    int populacao, ponto_turistico, ponto_turistico1, populacao1;
    float area, pib, area1, pib1;
    float DP, DP1, PC, PC1;

    printf("Bem-vindo ao sistema de cadastro de cidades!\n\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", city);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);

    printf("\nDados coletados com sucesso!\n\nIniciando o cadastramento da segunda carta, pressione Enter para continuar\n");
    getchar();
    getchar();

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", city1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);

    DP = populacao / area;
    DP1 = populacao1 / area1;
    PC = pib / populacao;
    PC1 = pib1 / populacao1;
    
    printf("\nDados coletados com sucesso!\n\nPressione Enter para visualizar as cartas registradas\n\n");
    getchar();
    getchar();

    printf("------------CARTA-1-------------\n");
    printf("Código: %s\n", card_id);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", city);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", ponto_turistico);
    printf("Densidade populacional: %.2f\n", DP);
    printf("PIB per capita: %.2f\n", PC);
    printf("\nPressione Enter para visualizar a segunda carta\n\n");
    getchar();

    printf("------------CARTA-2-------------\n");
    printf("Código: %s\n", card_id1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", city1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);
    printf("Densidade populacional: %.2f\n", DP1);
    printf("PIB per capita: %.2f\n", PC1);
    printf("\nObrigado por utilizar o sistema de cadastro de cidades!\n\nPressione Enter para finalizar o programa\n\n");
    getchar(); 

    return 0; 
}
