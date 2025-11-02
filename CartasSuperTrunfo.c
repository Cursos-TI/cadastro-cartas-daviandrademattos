#include <stdio.h>

int main() {
    int populacao, pturistico, populacao2, pturistico2;
    float pib, pib2, area, area2;
    char estado[30], cidade[30], codigo[30], estado2[30], cidade2[30], codigo2[30];

    // Primeira carta
    printf("\nPrimeira carta \n");

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite o codigo: \n");
    scanf(" %[^\n]", codigo);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pturistico);

    // Segunda carta
    printf("\nAgora a segunda carta \n");

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o codigo: \n");
    scanf(" %[^\n]", codigo2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pturistico2);
    
    //Conta PIB e Densidade
    float densidade = (float) populacao / area;
    float densidade2 = (float) populacao2 / area2;
    float pibc = (pib * 1000000000) / populacao;
    float pibc2 = (pib2 * 1000000000) / populacao2;

    //Informações
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibc);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibc2);

    // Comparação de cada categoria

    int superPoder1 = 0;
    int superPoder2 = 0;

    printf("Comparação de Cartas:\n\n");

// População
if (populacao > populacao2) {
    printf("População: Carta 1 venceu (1)\n");
    superPoder1++;
} else if (populacao < populacao2) {
    printf("População: Carta 2 venceu (1)\n");
    superPoder2++;
} else {
    printf("População: Empate (0)\n");
}

// Área
if (area > area2) {
    printf("Área: Carta 1 venceu (1)\n");
    superPoder1++;
} else if (area < area2) {
    printf("Área: Carta 2 venceu (1)\n");
    superPoder2++;
} else {
    printf("Área: Empate (0)\n");
}

// PIB
if (pib > pib2) {
    printf("PIB: Carta 1 venceu (1)\n");
    superPoder1++;
} else if (pib < pib2) {
    printf("PIB: Carta 2 venceu (1)\n");
    superPoder2++;
} else {
    printf("PIB: Empate (0)\n");
}

// Pontos Turísticos
if (pturistico > pturistico2) {
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    superPoder1++;
} else if (pturistico < pturistico2) {
    printf("Pontos Turísticos: Carta 2 venceu (1)\n");
    superPoder2++;
} else {
    printf("Pontos Turísticos: Empate (0)\n");
}

// Densidade Populacional
if (densidade > densidade2) {
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
    superPoder1++;
} else if (densidade < densidade2) {
    printf("Densidade Populacional: Carta 2 venceu (1)\n");
    superPoder2++;
} else {
    printf("Densidade Populacional: Empate (0)\n");
}

// PIB per Capita
if (pibc > pibc2) {
    printf("PIB per Capita: Carta 1 venceu (1)\n");
    superPoder1++;
} else if (pibc < pibc2) {
    printf("PIB per Capita: Carta 2 venceu (1)\n");
    superPoder2++;
} else {
    printf("PIB per Capita: Empate (0)\n");
}

// Resultado final do Super Poder
printf("Super Poder: Carta 1 venceu %d categorias\n", superPoder1);
printf("Super Poder: Carta 2 venceu %d categorias\n", superPoder2);

if (superPoder1 > superPoder2)
    printf("Carta 1 venceu no final!\n");
else if (superPoder2 > superPoder1)
    printf("Carta 2 venceu no final!\n");
else
    printf("Empate no final!\n");

    return 0;
}