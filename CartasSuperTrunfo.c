#include <stdio.h>

int main() {
    // Declarando variáveis
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char Cidade1[20], Cidade2[20];
    // troca de "int" para "unsigned long int"
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Turistico1, Turistico2;

    // Variáveis calculadas
    float Densidade1, Densidade2;
    float PIBPerCapita1, PIBPerCapita2;
    float SuperPoder1, SuperPoder2;

    // Inserção dos dados da carta 1
    printf("\n--- Inserção de dados da carta 1 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado1);

    printf("Insira o código do estado (ex: A01):\n");
    scanf("%s", Codigo1);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade1);

    printf("Insira a quantidade da população: \n");
    scanf("%lu", &Populacao1);

    printf("Insira a extensão da área da sua cidade: \n");
    scanf("%f", &Area1);

    printf("Insira o PIB da sua cidade (em bilhões): \n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico1);

    // Inserção dos dados da carta 2
    printf("\n--- Inserção de dados da carta 2 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado2);

    printf("Insira o código do estado (ex: A01):\n");
    scanf(" %s", Codigo2);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade2);

    printf("Insira a quantidade da população: \n");
    scanf("%lu", &Populacao2);

    printf("Insira a extensão da área da sua cidade: \n");
    scanf("%f", &Area2);

    printf("Insira o PIB da sua cidade (em bilhões): \n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico2);

    // Cálculo das variáveis adicionais
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    PIBPerCapita1 = PIB1 * 1000000000 / Populacao1;
    PIBPerCapita2 = PIB2 * 1000000000 / Populacao2;

    // Cálculo do Super Poder
    SuperPoder1 = Populacao1 + Area1 + PIB1 + Turistico1 + PIBPerCapita1 + (1 / Densidade1);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Turistico2 + PIBPerCapita2 + (1 / Densidade2);

    // Impressão dos dados
    printf("\n--- Dados da carta 1 ---\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nDensidade Populacional: %.2f hab/km²\nPIB per capita: R$ %.2f\nPontos Turísticos: %d\nSuper Poder: %.2f\n",
           Estado1, Codigo1, Cidade1, Populacao1, Area1, PIB1, Densidade1, PIBPerCapita1, Turistico1, SuperPoder1);

    printf("\n--- Dados da carta 2 ---\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nDensidade Populacional: %.2f hab/km²\nPIB per capita: R$ %.2f\nPontos Turísticos: %d\nSuper Poder: %.2f\n",
           Estado2, Codigo2, Cidade2, Populacao2, Area2, PIB2, Densidade2, PIBPerCapita2, Turistico2, SuperPoder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Turistico1 > Turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPerCapita1 > PIBPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}
