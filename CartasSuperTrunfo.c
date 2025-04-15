#include <stdio.h>

int main() {
    // Declarando variáveis
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Turistico1, Turistico2;

    // Variáveis calculadas
    float Densidade1, Densidade2;
    float PIBPerCapita1, PIBPerCapita2;

    // adição das variáveis para calcular densidade e percapita, além da adição das informações da segunda carta 

    // Inserção dos dados da carta 1
    printf("\n--- Inserção de dados da carta 1 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado1);

    printf("Insira o código do estado (ex: A01):\n");
    scanf("%s", Codigo1);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade1);

    printf("Insira a quantidade da população: \n");
    scanf("%d", &Populacao1);

    printf("Insira a extensão da área da sua cidade: \n");
    scanf("%f", &Area1);

    printf("Insira o PIB da sua cidade: \n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico1);

    // Inserção dos dados da carta 2
    printf("\n--- Inserção de dados da carta 2 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado2);

    printf("Insira o código do estado (ex: A01):\n");
    scanf("%s", Codigo2);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade2);

    printf("Insira a quantidade da população: \n");
    scanf("%d", &Populacao2);

    printf("Insira a extensão da área da sua cidade: \n");
    scanf("%f", &Area2);

    printf("Insira o PIB da sua cidade: \n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico2);

    // Cálculo das variáveis adicionais
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    PIBPerCapita1 = PIB1 * 1000000000 / Populacao1; // PIB estava em bilhões
    PIBPerCapita2 = PIB2 * 1000000000 / Populacao2;

    // Impressão dos dados da carta 1
    printf(
        "\n--- Dados da carta 1 ---\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per capita: R$ %.2f\n"
        "Número de Pontos Turísticos: %d\n",
        Estado1, Codigo1, Cidade1, Populacao1, Area1, PIB1, Densidade1, PIBPerCapita1, Turistico1
    );

    // Impressão dos dados da carta 2
    printf(
        "\n--- Dados da carta 2 ---\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per capita: R$ %.2f\n"
        "Número de Pontos Turísticos: %d\n",
        Estado2, Codigo2, Cidade2, Populacao2, Area2, PIB2, Densidade2, PIBPerCapita2, Turistico2
    );

    return 0;
}
