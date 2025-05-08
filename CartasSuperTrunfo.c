#include <stdio.h>
#include <string.h>

// Função para exibir o menu de atributos
void exibirMenuAtributos(int opcao_excluida) {
    printf("\nEscolha um atributo para comparar:\n");
    if (opcao_excluida != 1) printf("1 - População\n");
    if (opcao_excluida != 2) printf("2 - Área\n");
    if (opcao_excluida != 3) printf("3 - PIB\n");
    if (opcao_excluida != 4) printf("4 - Pontos Turísticos\n");
    if (opcao_excluida != 5) printf("5 - Densidade Demográfica\n");
}

float obterValorAtributo(int opcao, unsigned long int pop, float area, float pib, int turistico, float densidade) {
    switch (opcao) {
        case 1: return (float)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)turistico;
        case 5: return densidade;
        default: return 0;
    }
}

const char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    // --- Declaração de variáveis ---
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char Cidade1[20], Cidade2[20];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Turistico1, Turistico2;

    float Densidade1, Densidade2;

    // --- Entrada de dados da carta 1 ---
    printf("\n--- Inserção de dados da Carta 1 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado1);
    printf("Insira o código do estado:\n");
    scanf("%s", Codigo1);
    printf("Insira o nome da cidade:\n");
    scanf("%s", Cidade1);
    printf("Insira a população:\n");
    scanf("%lu", &Populacao1);
    printf("Insira a área (km²):\n");
    scanf("%f", &Area1);
    printf("Insira o PIB (em bilhões):\n");
    scanf("%f", &PIB1);
    printf("Insira os pontos turísticos:\n");
    scanf("%d", &Turistico1);

    // --- Entrada de dados da carta 2 ---
    printf("\n--- Inserção de dados da Carta 2 ---\n");
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado2);
    printf("Insira o código do estado:\n");
    scanf("%s", Codigo2);
    printf("Insira o nome da cidade:\n");
    scanf("%s", Cidade2);
    printf("Insira a população:\n");
    scanf("%lu", &Populacao2);
    printf("Insira a área (km²):\n");
    scanf("%f", &Area2);
    printf("Insira o PIB (em bilhões):\n");
    scanf("%f", &PIB2);
    printf("Insira os pontos turísticos:\n");
    scanf("%d", &Turistico2);

    // --- Cálculo de densidade ---
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    // --- Escolha dos atributos ---
    int opcao1 = 0, opcao2 = 0;
    do {
        exibirMenuAtributos(0);
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &opcao1);
        if (opcao1 < 1 || opcao1 > 5) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao1 < 1 || opcao1 > 5);

    do {
        exibirMenuAtributos(opcao1);
        printf("Escolha o segundo atributo: ");
        scanf("%d", &opcao2);
        if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
            printf("Opção inválida ou repetida. Tente novamente.\n");
        }
    } while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1);

    // --- Comparações ---
    float valor1A = obterValorAtributo(opcao1, Populacao1, Area1, PIB1, Turistico1, Densidade1);
    float valor2A = obterValorAtributo(opcao1, Populacao2, Area2, PIB2, Turistico2, Densidade2);
    float valor1B = obterValorAtributo(opcao2, Populacao1, Area1, PIB1, Turistico1, Densidade1);
    float valor2B = obterValorAtributo(opcao2, Populacao2, Area2, PIB2, Turistico2, Densidade2);

    int v1 = (opcao1 == 5) ? (valor1A < valor2A) : (valor1A > valor2A);
    int v2 = (opcao2 == 5) ? (valor1B < valor2B) : (valor1B > valor2B);

    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Cartas comparadas: %s vs %s\n", Cidade1, Cidade2);
    printf("%s:\n  %s = %.2f\n  %s = %.2f\n  Soma = %.2f\n",
           Cidade1, nomeAtributo(opcao1), valor1A, nomeAtributo(opcao2), valor1B, soma1);
    printf("%s:\n  %s = %.2f\n  %s = %.2f\n  Soma = %.2f\n",
           Cidade2, nomeAtributo(opcao1), valor2A, nomeAtributo(opcao2), valor2B, soma2);

    if (soma1 > soma2) {
        printf("Resultado: %s venceu!\n", Cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado: %s venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
