#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variáveis Estado 1
    char Estado1[3];            // Nome do Estado 1 (ex: SP)
    char IDcarta1[6];           // Identificação da Carta 1 (ex: SP01)
    char Cidade1[50];           // Nome da Cidade 1
    float Popul1;               // Quantidade de População 1
    float areaKM1;              // Números em Área em KM 1
    float PIB1;                 // Valor do Produto Interno Bruto 1
    int qtdpontosturisticos1;   // Quantidade de Pontos Turísticos 1

    // Variáveis Estado 2
    char Estado2[3];            // Nome do Estado 2
    char IDcarta2[6];           // Identificação da Carta 2
    char Cidade2[50];           // Nome da Cidade 2
    float Popul2;               // Quantidade de População 2
    float areaKM2;              // Numeros em Area em KM 2
    float PIB2;                 // Valor do Produto Interno bruto 2
    int qtdpontosturisticos2;   // Quantidade de Pontos Turísticos 2

     // Desafio Intermediário
    // Os calculos se encontram na linha 54 e 55 para a carta 1 e as linha 75 e 76 para a carta 2
    float densidadePopul1;
    float percapitaPIB1;
    float densidadePopul2;
    float percapitaPIB2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // ===== Carta 1 =====
    printf("Desafio Super Trunfo!!!\n");
    printf("Preencha as informações conforme solicitadas!\n\n");
    printf("Super Trunfo - Carta Número 1\n");

    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("Digite a sigla do Estado (2 caracteres): ");
    scanf("%s", Estado1);
    printf("Digite a ID da carta (Ex.: A sigla do Estado + número de 01 a 05, máx 5 caracteres): ");
    scanf("%s", IDcarta1);
    printf("Informe o número de habitantes (ex: 100 para 100 mil): ");
    scanf("%f", &Popul1);
    printf("Informe o tamanho da área (em Km²): ");
    scanf("%f", &areaKM1);
    printf("Informe o PIB da Cidade (ex: 500 para R$ 500 mil): ");
    scanf("%f", &PIB1);
    printf("Qual é a quantidade de pontos turísticos? ");
    scanf("%d", &qtdpontosturisticos1); 

    // Cálculo da Carta 1
    densidadePopul1 = Popul1 / areaKM1;
    percapitaPIB1 = PIB1 / Popul1;

     // ===== Carta 2 =====
    printf("\nSuper Trunfo - Carta Número 2\n");
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a sigla do Estado (2 caracteres): ");
    scanf("%s", Estado2);
    printf("Digite a ID da carta (Ex.: A sigla do Estado + número de 01 a 05, máx 5 caracteres): ");
    scanf("%s", IDcarta2);
    printf("Informe o número de habitantes (ex: 100 para 100 mil): ");
    scanf("%f", &Popul2);
    printf("Informe o tamanho da área (em Km²): ");
    scanf("%f", &areaKM2);
    printf("Informe o PIB da Cidade (ex: 500 para R$ 500 mil): ");
    scanf("%f", &PIB2);
    printf("Qual é a quantidade de pontos turísticos? ");
    scanf("%d", &qtdpontosturisticos2); 

    // Cálculo da carta 2
    densidadePopul2 = Popul2 / areaKM2;
    percapitaPIB2 = PIB2 / Popul2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n==== Resultado das Cartas ====\n");
    printf("ID da Carta: %s || %s \n", IDcarta1, IDcarta2);
    printf("Estado: %s || %s \n", Estado1, Estado2);
    printf("Cidade: %s || %s \n", Cidade1, Cidade2);
    printf("População: %.0f mil || %.0f mil \n", Popul1, Popul2);
    printf("Área em KM²: %.2f KM² || %.2f KM²\n", areaKM1, areaKM2);
    printf("PIB: R$ %.2f mil || R$ %.2f mil \n", PIB1, PIB2);
    printf("Qtd de Pontos Turísticos: %d || %d \n", qtdpontosturisticos1, qtdpontosturisticos2);
    printf("PIB per capita: R$ %.2f mil || R$ %.2f mil\n", percapitaPIB1, percapitaPIB2);
    printf("Densidade populacional: %.2f hab/km² || %.2f hab/km² \n", densidadePopul1, densidadePopul2);

    return 0;
}
