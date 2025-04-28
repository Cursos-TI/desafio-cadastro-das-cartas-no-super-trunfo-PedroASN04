#include <stdio.h>

int main() {
    // --- Declaração de variáveis ---
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char Cidade1[20], Cidade2[20];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Turistico1, Turistico2;

    // Variáveis calculadas
    float Densidade1, Densidade2;
    float PIBPerCapita1, PIBPerCapita2;
    float SuperPoder1, SuperPoder2;

    // --- Entrada de dados da carta 1 ---
    printf("\n--- Inserção de dados da Carta 1 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado1);

    printf("Insira o código do estado (ex: A01):\n");
    scanf("%s", Codigo1);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade1);

    printf("Insira a quantidade da população:\n");
    scanf("%lu", &Populacao1);

    printf("Insira a extensão da área da cidade (em km²):\n");
    scanf("%f", &Area1);

    printf("Insira o PIB da cidade (em bilhões):\n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%d", &Turistico1);

    // --- Entrada de dados da carta 2 ---
    printf("\n--- Inserção de dados da Carta 2 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado2);

    printf("Insira o código do estado (ex: A01):\n");
    scanf("%s", Codigo2);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade2);

    printf("Insira a quantidade da população:\n");
    scanf("%lu", &Populacao2);

    printf("Insira a extensão da área da cidade (em km²):\n");
    scanf("%f", &Area2);

    printf("Insira o PIB da cidade (em bilhões):\n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%d", &Turistico2);

    // --- Cálculo de variáveis derivadas ---
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    PIBPerCapita1 = PIB1 * 1000000000 / Populacao1;
    PIBPerCapita2 = PIB2 * 1000000000 / Populacao2;

    SuperPoder1 = Populacao1 + Area1 + PIB1 + Turistico1 + PIBPerCapita1 + (1 / Densidade1);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Turistico2 + PIBPerCapita2 + (1 / Densidade2);

    // --- Impressão dos dados de cada carta ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n",
           Estado1, Codigo1, Cidade1, Populacao1, Area1, PIB1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n",
           Estado2, Codigo2, Cidade2, Populacao2, Area2, PIB2);

    // --- Comparação baseada na População ---
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");

    printf("\nCarta 1 - %s (%c): %lu habitantes", Cidade1, Estado1, Populacao1);
    printf("\nCarta 2 - %s (%c): %lu habitantes\n", Cidade2, Estado2, Populacao2);

    if (Populacao1 > Populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao2 > Populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("\nResultado: Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}
