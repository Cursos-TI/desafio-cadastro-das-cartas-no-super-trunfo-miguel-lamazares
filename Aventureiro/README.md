# Desafio Aventureiro

## Documentação do Projeto 📄

Este projeto consiste em um sistema de cadastro de cidades para um jogo de cartas no estilo Super Trunfo. O objetivo é registrar informações de duas cidades e calcular indicadores relevantes para comparação.

---

## Guia de Arquivos 🔍

- `aventureiro` — Código-fonte comentado para facilitar o entendimento.
- `aventureiro_limpo` — Código-fonte sem comentários para consulta rápida.
- `aventureiro.exe` — Executável do programa.

---

## Tecnologias Utilizadas 📚

### Bibliotecas 🧩

- `<stdio.h>` — Entrada e saída de dados.
- `<locale.h>` — Suporte a caracteres especiais em português.
- `<string.h>` — Manipulação de strings.

### Tipos de Variáveis 🧠

- `int` — Números inteiros.
- `float` — Números decimais.
- `char[]` — Strings.

### Funções Principais 🛠️

- `setlocale()` — Define a localidade para uso de acentuação.
- `printf()` — Exibe mensagens e dados.
- `scanf()` — Lê dados do usuário.
- `getchar()` — Aguarda pressionamento de tecla.
- `strcpy()` — Copia strings.

---

## Estrutura do Código 💾

### Declaração das Variáveis 📦

```c
char estado[20], card_id[4], city[20], estado1[20], card_id1[4], city1[20];
int populacao, ponto_turistico, ponto_turistico1, populacao1;
float area, pib, area1, pib1;
float DP, DP1, PC, PC1; 
```

#### Strings (char[])

| Variável | Descrição                              |
|----------|----------------------------------------|
| estado   | Estado da primeira carta               |
| estado1  | Estado da segunda carta                |
| city     | Cidade da primeira carta               |
| city1    | Cidade da segunda carta                |
| card_id  | Código da primeira carta (ex: A01)     |
| card_id1 | Código da segunda carta (ex: B01)      |

*As variáveis `card_id` e `card_id1` recebem valores via `strcpy()`.*

#### Inteiros (int)

| Variável         | Descrição                                         |
|------------------|---------------------------------------------------|
| populacao        | População da primeira cidade                      |
| populacao1       | População da segunda cidade                       |
| ponto_turistico  | Pontos turísticos da primeira cidade              |
| ponto_turistico1 | Pontos turísticos da segunda cidade               |

#### Decimais (float)

| Variável | Descrição                                    |
|----------|----------------------------------------------|
| area     | Área da primeira cidade                      |
| area1    | Área da segunda cidade                       |
| pib      | PIB da primeira cidade                       |
| pib1     | PIB da segunda cidade                        |
| DP       | Densidade populacional da primeira cidade    |
| DP1      | Densidade populacional da segunda cidade     |
| PC       | PIB per capita da primeira cidade            |
| PC1      | PIB per capita da segunda cidade             |

---

## Passo a Passo do Programa 🚦

### 1. Cadastro da Primeira Carta 📝

O programa solicita ao usuário os dados da primeira cidade: estado, cidade, população, área, PIB e pontos turísticos. Após o preenchimento, aguarda o usuário pressionar Enter para prosseguir.

```c
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
```

### 2. Cadastro da Segunda Carta 📝

Repete o processo para a segunda cidade, armazenando os dados em variáveis distintas.

```c
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

printf("\nDados coletados com sucesso!\n\nPressione Enter para visualizar as cartas registradas\n\n");
getchar();
getchar();
```

### 3. Cálculos dos Indicadores 📊

Após o cadastro, o programa calcula:

```c
DP = populacao / area;      // Densidade populacional da primeira cidade
DP1 = populacao1 / area1;   // Densidade populacional da segunda cidade
PC = pib / populacao;       // PIB per capita da primeira cidade
PC1 = pib1 / populacao1;    // PIB per capita da segunda cidade
```

### 4. Exibição das Cartas 🃏

Os dados de cada cidade são exibidos em formato de carta, incluindo os indicadores calculados.

```c
printf("------------CARTA-1-------------\n");
printf("Código: %s\n", card_id);
printf("Estado: %s\n", estado);
printf("Cidade: %s\n", city);
printf("População: %d\n", populacao);
printf("Área: %.2f\n", area);
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
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", ponto_turistico1);
printf("Densidade populacional: %.2f\n", DP1);
printf("PIB per capita: %.2f\n", PC1);
printf("\nObrigado por utilizar o sistema de cadastro de cidades!\n\nPressione Enter para finalizar o programa\n\n");
getchar();
```

---

## Observações

- O programa utiliza variáveis separadas para cada cidade, facilitando a comparação.
- Os cálculos são feitos logo após a coleta dos dados.
- O fluxo é sequencial e interativo, guiando o usuário durante todo o processo.

---

## Autor

Miguel Lamazares
