// Criado por Miguel Lamazares

/* IMPORTANDO BIBLIOTECAS NECESSÁRIAS
1- stdio.h: Para funções de entrada e saída
2- locale.h: Permitindo o uso de caracteres especiais
3- string.h: Para manipulação de strings
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    // Definindo o locale para o idioma português do Brasil com a ISO 8859-1
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declarando variáveis

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

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);

    // Exibindo mensagem de confirmação
    printf("\nDados coletados com sucesso!\n\nIniciando o cadastramento da segunda carta, pressione Enter para continuar\n");
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar Enter

    // Solicitando informações para a segunda carta
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

    // Cálculo da densidade populacional e PIB per capita
     DP = populacao / area;
    DP1 = populacao1 / area1;
    PC = pib / populacao;
    PC1 = pib1 / populacao1;

    // Exibindo mensagem de confirmação
    printf("\nDados coletados com sucesso!\n\nPressione Enter para visualizar as cartas registradas\n\n");
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar Enter

    // Confecção da carta 1
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
    getchar(); // aguarda o usuário pressionar Enter

    // Confecção da carta 2
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

    // finalizando o programa
    printf("\nObrigado por utilizar o sistema de cadastro de cidades!\n\nPressione Enter para finalizar o programa\n\n");
    getchar(); // aguarda o usuário pressionar Enter

    return 0; // encerra o programa
}
