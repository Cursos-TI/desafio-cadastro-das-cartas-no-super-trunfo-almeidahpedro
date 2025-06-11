#include <stdio.h>

int main() {

    // Receberá as informações da carta 1
    char Estado1[3], IDcarta1[6], Cidade1[50]; 
    unsigned long int Popul1;       
    float areaKM1;             
    int PIB1, qtdpontosturisticos1; 

    //  Receberá as informações da carta 2
    char Estado2[3], IDcarta2[6], Cidade2[50]; 
    unsigned long int Popul2;         
    float areaKM2;              
    int PIB2, qtdpontosturisticos2; 


    //Variaveis para calcular densidade demografica

    float densidade1, densidade2;

    //Variavel opções
    int op1, op2;

    //Iniciar o Jogo
    printf("=== Super Trunfo ===\n");
    printf("Seja bem vindo!\n");
    printf("Preencha as informaoes a seguir para a carta 1 e carta 2\n");

    printf("\n--- Carta 1 ---\n");
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


    printf("\n--- Carta 2 ---\n");
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

    //Calculo da densidade demografica
    densidade1 = (float) Popul1 / areaKM1; // Carta 1
    densidade2 = (float) Popul2 / areaKM2; // Carta 1

    //Calculo do super poder
    float densidade_inv1 = 1 / densidade1;
    float densidade_inv2 = 1 / densidade2;
    float superPoder1 = areaKM1 + Popul1 + PIB1 + qtdpontosturisticos1 + densidade_inv1;
    float superPoder2 = areaKM2 + Popul2 + PIB2 + qtdpontosturisticos2 + densidade_inv2;

    //Switch - Menu 1 - Comparação para Atributo 1
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Área em KM²\n");
    printf("2 - População\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &op1);
    
    //Switch - Menu 2 - Comparação para Atributo 2, com condição para verificar
    printf("\nEscolha o SEGUNDO atributo para comparar:\n");
    if (op1 != 1) printf("1 - Área em KM²\n");
    if (op1 != 2) printf("2 - População\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos turísticos\n");
    if (op1 != 5) printf("5 - Densidade Demográfica\n");
    if (op1 != 6) printf("6 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &op2);

    //Se a opção 1(op1) for igual na opção 2(op2), a condição emitirá uma mensagem
    // de erro sobre ter selecionado atributo 2
    if (op1 == op2) {
        printf("\nErro: Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    //Variavel para armazenar as somas dos atributos, sendo que o valor1_A e valor2_A,
    //são para primeiro switch(op1) e o  valor1_B e valor2_B, para o segundo switch(op2)
    //char opcao[50];
    float valor1_A = 0, valor2_A = 0, valor1_B = 0, valor2_B = 0;
    float soma1 = 0, soma2 = 0;

    //Switch para armazenar os valores da primeira opção(op1)
    switch (op1)
    {
    // Valor Aréa KM, valor1_A = areaKM1 e valor2_A = areaKM2    
    case 1: valor1_A = areaKM1; valor2_A = areaKM2;  break;
    // Valor Populção, valor1_A = Popul1 e valor2_A = Popul2    
    case 2: valor1_A = Popul1; valor2_A = Popul2;  break; 
    // Valor PIB, valor1_A = PIB1 e valor2_A = PIB2    
    case 3: valor1_A = PIB1; valor2_A = PIB2;  break; 
    // Valor Pontos Turisticos, valor1_A = qtdpontosturisticos1 e valor2_A = qtdpontosturisticos2    
    case 4: valor1_A = qtdpontosturisticos1; valor2_A = qtdpontosturisticos2;  break; 
    // Valor Densidade, valor1_A = densidade1 e valor2_A = densidade2    
    case 5: valor1_A = densidade1; valor2_A = densidade2;  break; 
    // Valor Super Poder, valor1_A = superPoder1 e valor2_A = superPoder2    
    case 6: valor1_A = superPoder1; valor2_A = superPoder2; break;
    }

     switch (op2)
    {
    // Valor Aréa KM, valor1_B = areaKM1 e valor2_A = areaKM2    
    case 1: valor1_B = areaKM1; valor2_B = areaKM2;  break;
    // Valor Populção, valor1_B = Popul1 e valor2_A = Popul2    
    case 2: valor1_B = Popul1; valor2_B = Popul2;  break; 
    // Valor PIB, valor1_B = PIB1 e valor2_A = PIB2    
    case 3: valor1_B = PIB1; valor2_B = PIB2;  break; 
    // Valor Pontos Turisticos, valor1_B = qtdpontosturisticos1 e valor2_A = qtdpontosturisticos2    
    case 4: valor1_B = qtdpontosturisticos1; valor2_B = qtdpontosturisticos2;  break; 
    // Valor Densidade, valor1_B = densidade1 e valor2_A = densidade2    
    case 5: valor1_B = densidade1; valor2_B = densidade2;  break;
    // Valor Super Poder, valor1_A = superPoder1 e valor2_A = superPoder2    
    case 6: valor1_B = superPoder1; valor2_B = superPoder2; break;
    }

    printf("\n===COMPARAÇÃO DAS CARTAS===\n");

    printf("\nAtributo 1\n");  
    printf("%s : %.2f | %s: %.2f\n",Cidade1, valor1_A, Cidade2, valor2_A);
    printf("Resultado: ");
    if (op1 == 5) {
        if (valor1_A < valor2_A) printf("%s vence\n", Cidade1);
        else if (valor1_A > valor2_A) printf("%s vence\n", Cidade2);
        else printf("Empate\n");
    } else {
        if (valor1_A > valor2_A) printf("%s vence\n", Cidade1);
        else if (valor1_A < valor2_A) printf("%s vence\n", Cidade2);
        else printf("Empate\n");
    }

    printf("\nAtributo 2\n");  
    printf("%s : %.2f | %s: %.2f\n",Cidade1, valor1_B, Cidade2, valor2_B);
    printf("Resultado: ");
    if (op2== 5) {
        if (valor1_B < valor2_B) printf("%s vence\n", Cidade1);
        else if (valor1_B > valor2_B) printf("%s vence\n", Cidade2);
        else printf("Empate\n");
    } else {
        if (valor1_B > valor2_B) printf("%s vence\n", Cidade1);
        else if (valor1_B < valor2_B) printf("%s vence\n", Cidade2);
        else printf("Empate\n");
    }

     // Soma final dos dois atributos
    soma1 = valor1_A + valor1_B; // CARTA 1
    soma2 = valor2_A + valor2_B; // CARTA 2

    printf("\n===RESULTADO FINAL - ATRIBUTOS TOTAIS===\n");
    printf("\n%s = %.2f | %s = %.2f\n",Cidade1, soma1, Cidade2, soma2);
    if (soma1 > soma2) printf("Vencedora: %s\n", Cidade1);
    else if (soma2 > soma1) printf("Vencedora: %s\n", Cidade2);
    else printf("Empate Geral!\n");

    return 0;
}