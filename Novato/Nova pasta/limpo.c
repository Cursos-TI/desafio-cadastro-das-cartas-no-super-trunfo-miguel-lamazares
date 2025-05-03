#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char estado[20], card_id[4], city[20], estado1[20], card_id1[4], city1[20];
    strcpy(card_id, "A01");
    strcpy(card_id1, "B01");

    int populacao, ponto_turistico, ponto_turistico1, populacao1;
    float area, pib, area1, pib1;

    printf("Bem-vindo ao sistema de cadastro de cidades!\n\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", city);

    printf("Digite o n�mero de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a �rea da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o n�mero de pontos tur�sticos: ");
    scanf("%d", &ponto_turistico);

    printf("\nDados coletados com sucesso!\n\nIniciando o cadastramento da segunda carta, pressione Enter para continuar\n");
    getchar();
    getchar();

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", city1);

    printf("Digite o n�mero de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a �rea da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o n�mero de pontos tur�sticos: ");
    scanf("%d", &ponto_turistico1);

    printf("\nDados coletados com sucesso!\n\nPressione Enter para visualizar as cartas registradas\n\n");
    getchar();
    getchar();

    printf("------------CARTA-1-------------\n");
    printf("C�digo: %s\n", card_id);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", city);
    printf("Popula��o: %d\n", populacao);
    printf("�rea: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos tur�sticos: %d\n", ponto_turistico);
    printf("\nPressione Enter para visualizar a segunda carta\n\n");
    getchar();

    printf("------------CARTA-2-------------\n");
    printf("C�digo: %s\n", card_id1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", city1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos tur�sticos: %d\n", ponto_turistico1);

    printf("\nObrigado por utilizar o sistema de cadastro de cidades!\n\nPressione Enter para finalizar o programa\n\n");
    getchar(); 

    return 0; 
}
