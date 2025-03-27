#include <stdio.h>

int main() { 
    // Declarando variáveis
    char Estado;
    char Codigo[4];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Turistico;

    // Inserção dos dados requisitados
    printf("Insira a letra do estado:\n");
    scanf(" %c", &Estado); // Adicionado espaço antes de %c para evitar problemas com buffer

    printf("Insira o código do estado(ex: A01):\n");
    scanf("%s", Codigo);

    printf("Insira o nome da cidade sem espaço:\n");
    scanf("%s", Cidade);

    printf("Insira a quantidade da população: \n");
    scanf("%d", &Populacao);

    printf("Insira a extensão da área da sua cidade: \n");
    scanf("%f", &Area);

    printf("Insira o PIB da sua cidade: \n");
    scanf("%f", &PIB);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico);

    // Impressão dos dados inseridos
    printf(
        "\nEstado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Área: %.2f\n"
        "PIB: %.2f\n bilhões de reais"
        "Número de Pontos Turísticos: %d\n", 
        Estado, Codigo, Cidade, Populacao, Area, PIB, Turistico
    );

    return 0;
}
