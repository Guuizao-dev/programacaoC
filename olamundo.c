#include <stdio.h>

int main (){
    char carta[10];
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    float populacao;
    float area_em_km;
    float PIB;
    int n_pontos_turisticos;
    float densidade_populacional;
    float per_capita;

    printf("Digite o numero de sua carta: \n");
    scanf(" %[^\n]", carta);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite a Area em KM²: \n");
    scanf("%f", &area_em_km);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos);

    // cálculo direto
    densidade_populacional = populacao / area_em_km;
    per_capita = PIB / populacao;

    printf("\n*** JOGO SUPERTRUNFO: ***\n");
    printf("Carta: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo_da_carta);
    printf("Nome da cidade: %s \n", nome_da_cidade);
    printf("População: %.0f \n", populacao);
    printf("Area: %.2f km² \n", area_em_km);
    printf("PIB: R$ %.2f \n", PIB);
    printf("Número de pontos turisticos: %d \n", n_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
    printf("PIB per capita: %.2f \n", per_capita);

    return 0;
}
