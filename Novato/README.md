# Desafio Novato
## Guia de arquivos - 🔍
- `novato` — Arquivo que contém todo o código devidamente comentado, facilitando o entendimento e acompanhamento do desenvolvimento.
- `novato_limpo` — Arquivo contendo o código-fonte sem comentários, proporcionando uma visualização mais clara e objetiva da implementação.
- `novato.exe` — Arquivo executável gerado a partir do código-fonte, permitindo a execução do programa sem a necessidade de compilação prévia.
## O que foi utilizado - 📚

### Bibliotecas - 🧩

- `<stdio.h>` — Utilizada para entrada e saída de dados do usuário.
- `<locale.h>` — Permite o uso de caracteres especiais, com base na ISO 8859-1.

### Tipos de Variáveis - 🧠

- `int` — números inteiros.
- `float` — números decimais.
- `char[]` — strings (textos curtos).

### Funções Utilizadas - 🛠️

- `setlocale()` — Define o idioma e codificação para permitir caracteres especiais.
- `printf()` — Exibe mensagens e dados no terminal.
- `scanf()` — Lê dados do usuário.
- `getchar()` — Aguarda o pressionamento de uma tecla.
- `strcpy()` — Copia uma string para outra variável do tipo `char[]`.

---

## Código - 💾

### Declaração de variáveis - 📦 

```bash
char estado[20], card_id[4], city[20], estado1[20], card_id1[4], city1[20];
strcpy(card_id, "A01");
strcpy(card_id1, "B01");

int populacao, ponto_turistico, ponto_turistico1, populacao1;

float area, pib, area1, pib1;
```
### Strings (char[]) - 🧵

| Variável   | Descrição                          |
|------------|------------------------------------|
| estado     | Estado referente à primeira carta  |
| estado1    | Estado referente à segunda carta   |
| city       | Cidade referente à primeira carta  |
| city1      | Cidade referente à segunda carta   |
| card_id    | Código da primeira carta (A01)     |
| card_id1   | Código da segunda carta (B01)      |


+ *As variáveis card_id e card_id1 recebem os valores usando a função strcpy().*

### Inteiros (int) - 🔢 

| Variável         | Descrição                                         |
|------------------|---------------------------------------------------|
| populacao        | População da primeira cidade                      |
| populacao1       | População da segunda cidade                       |
| ponto_turistico  | Número de pontos turísticos da primeira cidade    |
| ponto_turistico1 | Número de pontos turísticos da segunda cidade     |

### Decimais (float) - 📏

*Exibem os valores com duas casas decimais.*

| Variável |	Descrição                            |
|----------|-----------------------------------------|
| area     |	Área da primeira cidade              |
| area1    | Área da segunda cidade                  |
| pib	   | Produto Interno Bruto da primeira       |
| pib1     | Produto Interno Bruto da segunda        |

### Solicitação de informacoes para a primeira carta - 📝

```bash
printf("Bem-vindo ao sistema de cadastro de cidades!\n\n");
```
- Mensagem de boas-vindas ao usuário.

```bash 
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
```
- Coleta os dados no formato apresentado anteriormente, sendo usados posteriomente para criação da primeira carta.

```bash
 printf("\nDados coletados com sucesso!\n\nIniciando o cadastramento da segunda carta, pressione Enter para continuar\n");
        getchar();
        getchar();
```
- Exibe mensagem de sucesso.
- Informa ao usuário que os dados foram salvos e espera ele pressionar `Enter` para continuar, O getchar() duplo é usado para limpar o buffer do scanf() e esperar o pressionamento da tecla.



### Solicitação de informacoes para a segunda carta - 📝

```bash
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
```
- Coleta os dados no formato apresentado anteriormente, sendo usados posteriomente a criação da segunda carta.

```bash
    printf("\nDados coletados com sucesso!\n\nPressione Enter para visualizar as cartas registradas\n\n");
        getchar();
        getchar();
```
- Informa ao usuário que os dados foram salvos e espera ele pressionar `Enter` para visualizar as cartas, O getchar() duplo é usado para limpar o buffer do scanf() e esperar o pressionamento da tecla.

### confecção das cartas - 🃏

```bash
    printf("------------CARTA-1-------------\n");
    printf("Código: %s\n", card_id);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", city);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", ponto_turistico);
    printf("\nPressione Enter para visualizar a segunda carta\n\n");
        getchar();
```
- Mostras os dados da primeira carta
- pede para o usuario precionar `enter` para visualizar a segunda carta.

```bash
    printf("------------CARTA-2-------------\n");
    printf("Código: %s\n", card_id1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", city1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);
    printf("\nObrigado por utilizar o sistema de cadastro de cidades!\n\nPressione Enter para finalizar o programa\n\n");
        getchar();
   ```
- Mensagem de adradecimento ao usuario
- pede para o usuario precionar `enter` para finalizar o programa.



## Miguel Lamazares.
