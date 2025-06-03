#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
       char Estado1[30];
       char Estado2[30];

       char Codigo_da_carta1[10];
       char Codigo_da_carta2[10];

       char Nome_da_cidade1[50];
       char Nome_da_cidade2[50];

       int populacao1;
       int populacao2;

       float Area1;
       float Area2;

       float Pib1;
       float Pib2;

       int Numero_de_ponto_Turisticos1;
       int Numero_de_ponto_Turisticos2;

       float Densidade_Populacional1;
       float Densidade_Populacional2;

       float PIB_per_capita1;
       float PIB_per_capita2;

    // Cadastro das Cartas:
       int Carta1;
       int Carta2;
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
                    printf("--- Cadastro da Carta 1 ---\n");

       printf("Digite o Seu Estado (Siglas,Ex: CE): \n");
       scanf(" %s", &Estado1);

       printf("Digite o Codigo do Carta (Ex: 0A1): \n");
       scanf(" %s", &Codigo_da_carta1);

       printf("Digite o Nome da Cidade: \n");
       scanf(" %s", &Nome_da_cidade1);

       printf("Digite a Populacao em: \n");
       scanf(" %s", &populacao1);

       printf("Digite a Area em (em km²): \n");
       scanf(" %s", &Area1);

       printf("Digite o pib (Em Bilhoes de R$): \n");
       scanf(" %s", &Pib1);

       printf("Digite os numero dos Pontos Turisticos: \n");
       scanf(" %s", &Nome_da_cidade1);

       Densidade_Populacional1 = populacao1 / Area1;
       PIB_per_capita1 = Pib1 / populacao1;

                  printf("--- Cadastro da Carta 2 ---\n");

       printf("Digite o Seu Estado: \n");
       scanf(" %s", &Estado2);

       printf("Digite o Codigo do Carta (Ex: 0B1): \n");
       scanf(" %s", &Codigo_da_carta2);

       printf("Digite o Nome da Cidade: \n");
       scanf(" %s", &Nome_da_cidade2);

       printf("Digite a Populacao em: \n");
       scanf(" %s", &populacao2);

       printf("Digite a Area em (em km²): \n");
       scanf(" %s", &Area2);

       printf("Digite o pib (Em Bilhoes de R$): \n");
       scanf(" %s", &Pib2);

       printf("Digite os numero dos Pontos Turisticos: \n");
       scanf(" %s", &Nome_da_cidade2);

        Densidade_Populacional2 = populacao2 / Area2;
        PIB_per_capita2 = Pib2 / populacao2;

    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
