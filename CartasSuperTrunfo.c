#include <stdio.h>

int main() {

    // Super Trunfo Cidades

    // Desafio Iniciante - Variáveis onde serão armazenadas as informações
    // Variáveis Estado 1
    char Estado1[3], IDcarta1[6], Cidade1[50]; 
    unsigned long int Popul1;       
    float areaKM1;             
    int PIB1, qtdpontosturisticos1;              

    // Variáveis Estado 2
    char Estado2[3], IDcarta2[6], Cidade2[50]; 
    unsigned long int Popul2;         
    float areaKM2;              
    int PIB2, qtdpontosturisticos2;          

    // Desafio Intermediário
    // Variáveis para cálculo da Densidade Populacional e PIB per capita
    float densidadePopul1, percapitaPIB1; 
    float densidadePopul2, percapitaPIB2;

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
    scanf("%lu", &Popul1);
    printf("Informe o tamanho da área (em Km²): ");
    scanf("%f", &areaKM1);
    printf("Informe o PIB da Cidade (ex: 500 para R$ 500 mil): ");
    scanf("%d", &PIB1);
    printf("Qual é a quantidade de pontos turísticos? ");
    scanf("%d", &qtdpontosturisticos1); 

    // Desafio Intermediário Carta 1 - Cálculo
    densidadePopul1 = (float) Popul1 / areaKM1;
    percapitaPIB1 = (float) PIB1 / Popul1;

    // ===== Carta 2 =====
    printf("\nSuper Trunfo - Carta Número 2\n");
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a sigla do Estado (2 caracteres): ");
    scanf("%s", Estado2);
    printf("Digite a ID da carta (Ex.: A sigla do Estado + número de 01 a 05, máx 5 caracteres): ");
    scanf("%s", IDcarta2);
    printf("Informe o número de habitantes (ex: 100 para 100 mil): ");
    scanf("%lu", &Popul2);
    printf("Informe o tamanho da área (em Km²): ");
    scanf("%f", &areaKM2);
    printf("Informe o PIB da Cidade (ex: 500 para R$ 500 mil): ");
    scanf("%d", &PIB2);
    printf("Qual é a quantidade de pontos turísticos? ");
    scanf("%d", &qtdpontosturisticos2); 

    // Desafio Intermediário Carta 2 - Cálculo
    densidadePopul2 = (float) Popul2 / areaKM2;
    percapitaPIB2 = (float) PIB2 / Popul2;

    // ===== Exibição das cartas =====
    printf("\n==== Informações das Cartas ====\n");
    printf("ID da Carta: %s || %s \n", IDcarta1, IDcarta2);
    printf("Estado: %s || %s \n", Estado1, Estado2);
    printf("Cidade: %s || %s \n", Cidade1, Cidade2);
    printf("População: %lu mil || %lu mil \n", Popul1, Popul2);
    printf("Área em KM²: %.2f KM² || %.2f KM²\n", areaKM1, areaKM2);
    printf("PIB: R$ %d mil || R$ %d mil \n", PIB1, PIB2);
    printf("Qtd de Pontos Turísticos: %d || %d \n", qtdpontosturisticos1, qtdpontosturisticos2);
    printf("PIB per capita: R$ %.2f mil || R$ %.2f mil\n", percapitaPIB1, percapitaPIB2);
    printf("Densidade populacional: %.2f hab/km² || %.2f hab/km² \n", densidadePopul1, densidadePopul2);

    // Desafio Mestre
    // Cálculo do Super Poder
    float superPoder1 = Popul1 + areaKM1 + PIB1 + qtdpontosturisticos1 + percapitaPIB1 + (1.0f / densidadePopul1);
    float superPoder2 = Popul2 + areaKM2 + PIB2 + qtdpontosturisticos2 + percapitaPIB2 + (1.0f / densidadePopul2);

    // Variáveis para indicar vencedor
    int vencedorPopul = 0;
    int vencedorArea = 0;
    int vencedorPIB = 0;
    int vencedorPontos = 0;
    int vencedorPercapita = 0;
    int vencedorDensidade = 0;
    int vencedorSuperPoder = 0;

    printf("\nO VENCEDOR É: \n");
    printf("\n");

    if (Popul1 > Popul2) {
        vencedorPopul = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorPopul);
        printf("População: %s venceu com %lu mil habitantes.\n", Cidade1, Popul1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorPopul);
        printf("População: %s venceu com %lu mil habitantes.\n", Cidade2, Popul2);
    }
      printf("\n");
    if (areaKM1 > areaKM2) {
        vencedorArea = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorArea);
        printf("Área: %s venceu com %.2f km².\n", Cidade1, areaKM1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorArea);
        printf("Área: %s venceu com %.2f km².\n", Cidade2, areaKM2);
    }
     printf("\n");
    if (PIB1 > PIB2) {
        vencedorPIB = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorPIB);
        printf("PIB: %s venceu com R$ %d mil.\n", Cidade1, PIB1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorPIB);
        printf("PIB: %s venceu com R$ %d mil.\n", Cidade2, PIB2);
    }
      printf("\n");
    if (qtdpontosturisticos1 > qtdpontosturisticos2) {
        vencedorPontos = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorPontos);
        printf("Pontos Turísticos: %s venceu com %d pontos.\n", Cidade1, qtdpontosturisticos1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorPontos);
        printf("Pontos Turísticos: %s venceu com %d pontos.\n", Cidade2, qtdpontosturisticos2);
    }
      printf("\n");
    if (percapitaPIB1 > percapitaPIB2) {
        vencedorPercapita = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorPercapita);
        printf("PIB per capita: %s venceu com R$ %.2f mil.\n", Cidade1, percapitaPIB1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorPercapita);
        printf("PIB per capita: %s venceu com R$ %.2f mil.\n", Cidade2, percapitaPIB2);
    }
      printf("\n");
    // Densidade populacional: vence quem tem menor densidade
    if (densidadePopul1 < densidadePopul2) {
        vencedorDensidade = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorDensidade);
        printf("Densidade Populacional: %s venceu com %.2f hab/km² (menor é melhor).\n", Cidade1, densidadePopul1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorDensidade);
        printf("Densidade Populacional: %s venceu com %.2f hab/km² (menor é melhor).\n", Cidade2, densidadePopul2);
    }
      printf("\n");
    if (superPoder1 > superPoder2) {
        vencedorSuperPoder = 1;
        printf("Vencedor da carta é o número: %d\n", vencedorSuperPoder);
        printf("Super Poder: %s venceu com %.2f pontos.\n", Cidade1, superPoder1);
    } else {
        printf("Vencedor da carta é o número: %d\n", vencedorSuperPoder);
        printf("Super Poder: %s venceu com %.2f pontos.\n", Cidade2, superPoder2);
    }

    return 0;
}
