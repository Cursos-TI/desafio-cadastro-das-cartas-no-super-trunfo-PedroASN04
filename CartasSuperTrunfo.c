#include <stdio.h>
#include <string.h>

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

    // --- Menu de comparação ---
    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n", Cidade1, Cidade2);

    switch (opcao) {
        case 1: // População
            printf("População:\n%s: %lu habitantes\n%s: %lu habitantes\n",
                   Cidade1, Populacao1, Cidade2, Populacao2);
            if (Populacao1 > Populacao2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else if (Populacao2 > Populacao1) {
                printf("Resultado: %s venceu!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área:\n%s: %.2f km²\n%s: %.2f km²\n",
                   Cidade1, Area1, Cidade2, Area2);
            if (Area1 > Area2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else if (Area2 > Area1) {
                printf("Resultado: %s venceu!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB:\n%s: %.2f bilhões\n%s: %.2f bilhões\n",
                   Cidade1, PIB1, Cidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: %s venceu!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turísticos:\n%s: %d pontos\n%s: %d pontos\n",
                   Cidade1, Turistico1, Cidade2, Turistico2);
            if (Turistico1 > Turistico2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else if (Turistico2 > Turistico1) {
                printf("Resultado: %s venceu!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade (menor valor vence)
            printf("Densidade Demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n",
                   Cidade1, Densidade1, Cidade2, Densidade2);
            if (Densidade1 < Densidade2) {
                printf("Resultado: %s venceu (menor densidade)!\n", Cidade1);
            } else if (Densidade2 < Densidade1) {
                printf("Resultado: %s venceu (menor densidade)!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
