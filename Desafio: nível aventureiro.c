#include <stdio.h>

int main() {
    // --- Dados das Cartas (Pré-definidos, conforme a simplificação) ---
    // Carta 1: São Paulo
    char cidadeCarta1[] = "Ceara";
    char estadoCarta1[] = "CE";
    unsigned long int populacaoCarta1 = 12396372;
    float areaCarta1 = 1521.11f;
    float pibCarta1 = 789.7f; // Em bilhões de R$
    int pontosTuristicosCarta1 = 155;

    // Carta 2: Rio de Janeiro
    char cidadeCarta2[] = "Fortaleza";
    char estadoCarta2[] = "FR";
    unsigned long int populacaoCarta2 = 6775561;
    float areaCarta2 = 1200.32f;
    float pibCarta2 = 356.5f; // Em bilhões de R$
    int pontosTuristicosCarta2 = 210;

    // --- Cálculo dos Atributos Derivados ---
    float densidadePopulacionalCarta1 = (float)populacaoCarta1 / areaCarta1;
    float densidadePopulacionalCarta2 = (float)populacaoCarta2 / areaCarta2;

    // Variável para a escolha do jogador
    int opcao;

    // --- Menu Interativo ---
    printf("--- Super Trunfo: Comparação de Cartas ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área (km²)\n");
    printf("3. PIB (em bilhões de R$)\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica (hab/km²)\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // --- Lógica de Comparação usando switch ---
    switch (opcao) {
        case 1: // Comparar População (maior vence)
            printf("\n--- Comparando: População ---\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidadeCarta1, estadoCarta1, populacaoCarta1);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidadeCarta2, estadoCarta2, populacaoCarta2);
            if (populacaoCarta1 > populacaoCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeCarta1);
            } else if (populacaoCarta2 > populacaoCarta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparar Área (maior vence)
            printf("\n--- Comparando: Área ---\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidadeCarta1, estadoCarta1, areaCarta1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidadeCarta2, estadoCarta2, areaCarta2);
            if (areaCarta1 > areaCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeCarta1);
            } else if (areaCarta2 > areaCarta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparar PIB (maior vence)
            printf("\n--- Comparando: PIB ---\n");
            printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", cidadeCarta1, estadoCarta1, pibCarta1);
            printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", cidadeCarta2, estadoCarta2, pibCarta2);
            if (pibCarta1 > pibCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeCarta1);
            } else if (pibCarta2 > pibCarta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparar Pontos Turísticos (maior vence)
            printf("\n--- Comparando: Pontos Turísticos ---\n");
            printf("Carta 1 - %s (%s): %d pontos\n", cidadeCarta1, estadoCarta1, pontosTuristicosCarta1);
            printf("Carta 2 - %s (%s): %d pontos\n", cidadeCarta2, estadoCarta2, pontosTuristicosCarta2);
            if (pontosTuristicosCarta1 > pontosTuristicosCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeCarta1);
            } else if (pontosTuristicosCarta2 > pontosTuristicosCarta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparar Densidade Demográfica (MENOR vence)
            printf("\n--- Comparando: Densidade Demográfica ---\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidadeCarta1, estadoCarta1, densidadePopulacionalCarta1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidadeCarta2, estadoCarta2, densidadePopulacionalCarta2);
            if (densidadePopulacionalCarta1 < densidadePopulacionalCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeCarta1);
            } else if (densidadePopulacionalCarta2 < densidadePopulacionalCarta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Caso o jogador digite uma opção inválida
            printf("\nOpção inválida! Por favor, escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}