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

    //Informações
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %c\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %i\n", area);
    printf("PIB: %i\n", pib);
    printf("Número de Pontos Turísticos: %i\n", pturistico);

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %c\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %i\n", area2);
    printf("PIB: %i\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pturistico2);

    return 0;
}