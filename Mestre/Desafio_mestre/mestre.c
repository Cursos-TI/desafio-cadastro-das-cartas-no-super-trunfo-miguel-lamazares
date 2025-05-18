#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define GREEN "\033[1;92m"
#define RESET "\033[0m"

void super_poder(float area, float pib, unsigned long int populacao, )
{
    printf("Super Poder:\n");
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("População: %lu\n", populacao);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DP);
    printf("PIB por Capita: R$ %.2f\n", PC);
    printf("\n");
{

}
void carta()
{
    printf(GREEN "--------------------" RESET "X0NNNNNNNNNNNNNNNNNNNNNNX" GREEN "-----------------------------" RESET "X0NNNNNNNNNNNNNNNNNNNNNNX" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NlNX.cMMMMMMMMMMMMMMMMMMW" GREEN "-----------------------------" RESET "NlNX.cMMMMMMMMMMMMMMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "KNKNOKMMMMMMMMMMMMMMMMMMW" GREEN "-----------------------------" RESET "KNKNOKMMMMMMMMMMMMMMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMXXXXXXXXXXXXXMMMMMW" GREEN "-----------------------------" RESET "NMMMMMXXXXXXXXXXXXXMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMMMMMMMMMMMOMMMMMW" GREEN "------" RED "JOGO" GREEN "-" RED "SUPER" GREEN "-" RED "TRUNFO" GREEN "------" RESET "NMMMMMOMMMMMMMMMMMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMMMMK'xMMMMOMMMMMW" GREEN "-----------------------------" RESET "NMMMMMOMMMMK'xMMMMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMMMl   ,NMMOMMMMMW" GREEN "-----------------------------" RESET "NMMMMMOMMMl   ,NMMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMK.      OMOMMMMMW" GREEN "-----------------------------" RESET "NMMMMMOMK.      OMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMON         MOMMMMMW" GREEN "---" RED "SEJA" GREEN "-" RED "BEM" GREEN "-" RED "VINDO" GREEN "-" RED "AO" GREEN "-" RED "JOGO!" GREEN "---" RESET "NMMMMMON         MOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMXk0: dOOWMOMMMMMW" GREEN "-----------------------------" RESET "NMMMMMOMXk0: dOOWMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMMMMK0XMMMMOMMMMMW" GREEN "-----------------------------" RESET "NMMMMMOMMMMK0XMMMMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMOMMMMMMMMMMMOMMMMMW" GREEN "-----------------------------" RESET "NMMMMMOMMMMMMMMMMMOMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMXXXXXXXXXXXXXMMMMMW" GREEN "-----------------------------" RESET "NMMMMMXXXXXXXXXXXXXMMMMMW" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMMMMMMMMMMMMMMXkXNKX" GREEN "-----------------------------" RESET "NMMMMMMMMMMMMMMMMMMXkXNKX" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "NMMMMMMMMMMMMMMMMMMd.0McX" GREEN "-----------------------------" RESET "NMMMMMMMMMMMMMMMMMMd.0McX" GREEN "--------------------\n");
    printf(GREEN "--------------------" RESET "XNNNNNNNNNNNNNNNNNNNNNN0X" GREEN "-----------------------------" RESET "XNNNNNNNNNNNNNNNNNNNNNN0X" GREEN "--------------------\n");
    printf(RESET "");
}

void calculo(float area, float pib, unsigned long int populacao, float *DP, float *PC)
{
    *DP = populacao / area;
    *PC = pib / populacao;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char estado[20], card_id[4], city[20], estado1[20], card_id1[4], city1[20];
    strcpy(card_id, "A01");
    strcpy(card_id1, "B01");

    int ponto_turistico, ponto_turistico1;
    unsigned long int populacao, populacao1;
    float area, pib, area1, pib1;
    float DP, DP1, PC, PC1;
    int resultado;

    carta();
    system("pause");
    system("cls");

    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = 0;

    printf("Digite o ID do cartão: ");
    fgets(card_id, sizeof(card_id), stdin);
    card_id[strcspn(card_id, "\n")] = 0;

    do
    {
        printf("Digite a área do estado (em km²): ");
        resultado = scanf("%f", &area);
        while (getchar() != '\n')
            ;

        if (resultado != 1)
        {
            printf("Entrada inválida! Por favor, insira um número.\n");
        }
        else if (area <= 0)
        {
            printf("Área inválida! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || area <= 0);

    do
    {

        printf("Digite o PIB do estado (em Milhoes de R$): ");
        resultado = scanf("%f", &pib);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! Por favor, insira um número.\n");
        }
        else if (pib <= 0)
        {
            printf("PIB inválido! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || pib <= 0);

    do
    {

        printf("Digite a população do estado: ");
        resultado = scanf("%lu", &populacao);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! Por favor, insira um número.\n");
        }
        else if (populacao <= 0)
        {
            printf("População inválida! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || populacao <= 0);
    do
    {
        printf("Digite o número de pontos turísticos: ");
        resultado = scanf("%d", &ponto_turistico);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! Por favor, insira um número.\n");
        }
        else if (ponto_turistico <= 0)
        {
            printf("Número de pontos turísticos inválido! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || ponto_turistico <= 0);

    calculo(area, pib, populacao, &DP, &PC);
    printf("A primeira carta foi criada com sucesso!\n");
    printf(BLUE "-----------------------------------------------------\n");
    printf(RESET);
    printf("Pressione Enter para visualizar a primeira carta\n");
    getchar();
    system("cls");

    printf(BLUE "-----------------------------------------------------\n");
    printf(RESET);
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", city);
    printf("ID do cartão: %s\n", card_id);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("População: %lu\n", populacao);
    printf("Pontos turísticos: %d\n", ponto_turistico);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DP);
    printf("PIB por Capita: R$ %.2f\n", PC);
    printf("\n");
    printf(BLUE "-----------------------------------------------------\n");
    printf(RESET "pressione Enter para criar a segunda carta\n");
    getchar();
    system("cls");

    printf("Digite o nome do estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(city1, sizeof(city1), stdin);
    city1[strcspn(city1, "\n")] = 0;

    printf("Digite o ID do cartão: ");
    fgets(card_id1, sizeof(card_id1), stdin);
    card_id1[strcspn(card_id1, "\n")] = 0;

    do
    {
        printf("Digite a área do estado (em km²): ");
        resultado = scanf("%f", &area1);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! por favor, insira um número.\n");
        }
        else if (area1 <= 0)
        {
            printf("Área inválida! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || area1 <= 0);

    do
    {

        printf("Digite o PIB do estado (em R$): ");
        resultado = scanf("%f", &pib1);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! por favor, insira um número.\n");
        }
        else if (pib1 <= 0)
        {
            printf("PIB inválido! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || pib1 <= 0);

    do
    {

        printf("Digite a população do estado: ");
        resultado = scanf("%lu", &populacao1);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! por favor, insira um número.\n");
        }
            else if (populacao1 <= 0)
        {
            printf("População inválida! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || populacao1 <= 0);
    do
    {
        printf("Digite o número de pontos turísticos: ");
        resultado = scanf("%d", &ponto_turistico1);
        while (getchar() != '\n')
            ;
        if (resultado != 1)
        {
            printf("Entrada inválida! por favor, insira um número.\n");
        }
            else if (ponto_turistico1 <= 0)
        {
            printf("Número de pontos turísticos inválido! Por favor, insira um valor valido.\n");
        }
    } while (resultado != 1 || ponto_turistico1 <= 0);

    calculo(area1, pib1, populacao1, &DP1, &PC1);

    printf("A segunda carta foi criada com sucesso!\n");
    printf(BLUE"-----------------------------------------------------\n");
    printf(RESET"Pressione Enter para visualizar a segunda carta\n");
    getchar();
    system("cls");

    printf(BLUE"-----------------------------------------------------\n");
    printf("\n");
    printf(RESET"Estado: %s\n", estado1);
    printf("Cidade: %s\n", city1);
    printf("ID do cartão: %s\n", card_id1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("População: %lu\n", populacao1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DP1);
    printf("PIB por Capita: R$ %.2f\n", PC1);
    printf("\n");
    printf(BLUE"-----------------------------------------------------\n");

    printf(RESET"pressione Enter para comparar as cartas\n");
    getchar();
    system("cls");

    printf(BLUE"-----------------------------------------------------\n");
    printf(RESET"Comparando as cartas...\n");
    printf(BLUE"-----------------------------------------------------\n");
    system(RESET"pause");
}
