// Criado por Miguel Lamazares

/* IMPORTANDO BIBLIOTECAS NECESS�RIAS
1- stdio.h: Para fun��es de entrada e sa�da
2- locale.h: Permitindo o uso de caracteres especiais
3- string.h: Para manipula��o de strings
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    // Definindo o locale para o idioma portugu�s do Brasil com a ISO 8859-1
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declarando vari�veis

    // variaveis do tipo char para amazenar textos
    char estado[20], card_id[4], city[20], estado1[20], card_id1[4], city1[20];

    // codigos das cartas
    strcpy(card_id, "A01");
    strcpy(card_id1, "B01");

    // variaveis do tipo int para armazenar numeros inteiros
    int populacao, ponto_turistico, ponto_turistico1, populacao1;

    // variaveis do tipo float para armazenar numeros decimais
    float area, pib, area1, pib1;

    // variaveis do tipo float para armazenar numeros decimais
    // DP = Densidade populacional
    // PC = PIB per capita
    float DP, DP1, PC, PC1;

    // Exibindo mensagem de boas-vindas
    printf("Bem-vindo ao sistema de cadastro de cidades!\n\n");

    // Solicitando dados para a primeira carta
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

    // Exibindo mensagem de confirma��o
    printf("\nDados coletados com sucesso!\n\nIniciando o cadastramento da segunda carta, pressione Enter para continuar\n");
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usu�rio pressionar Enter

    // Solicitando informa��es para a segunda carta
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

    // C�lculo da densidade populacional e PIB per capita
     DP = populacao / area;
    DP1 = populacao1 / area1;
    PC = pib / populacao;
    PC1 = pib1 / populacao1;

    // Exibindo mensagem de confirma��o
    printf("\nDados coletados com sucesso!\n\nPressione Enter para visualizar as cartas registradas\n\n");
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usu�rio pressionar Enter

    // Confec��o da carta 1
    printf("------------CARTA-1-------------\n");
    printf("C�digo: %s\n", card_id);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", city);
    printf("Popula��o: %d\n", populacao);
    printf("�rea: %.2f km�\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos tur�sticos: %d\n", ponto_turistico);
    printf("Densidade populacional: %.2f\n", DP);
    printf("PIB per capita: %.2f\n", PC);
    printf("\nPressione Enter para visualizar a segunda carta\n\n");
    getchar(); // aguarda o usu�rio pressionar Enter

    // Confec��o da carta 2
    printf("------------CARTA-2-------------\n");
    printf("C�digo: %s\n", card_id1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", city1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos tur�sticos: %d\n", ponto_turistico1);
    printf("Densidade populacional: %.2f\n", DP1);
    printf("PIB per capita: %.2f\n", PC1);

    // finalizando o programa
    printf("\nObrigado por utilizar o sistema de cadastro de cidades!\n\nPressione Enter para finalizar o programa\n\n");
    getchar(); // aguarda o usu�rio pressionar Enter

    return 0; // encerra o programa
}
