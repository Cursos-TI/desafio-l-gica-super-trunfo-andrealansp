#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[1], estado2[1];
    char cod_carta1[3],cod_carta2[2], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, quantidade_pontos_turisticos1,quantidade_pontos_turisticos2, cidade_vencedora;
    float area1, pib1, area2, pib2, 
    densidade_populacional1, densidade_populacional2,
    pib_percapita1, pib_percapita2, super_poder1, super_poder2 ;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Instrução para cadastro da carta
    printf("SUPER TRUNFO\n");
    printf("\n Cadastre os dados das cartas utilizada no SUPER TRUNFO!\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf("\n");
    printf("Informe os dados da primeira carta !\n");
    printf("\n");

    // Solicitando os dados da primeira carta
    printf("Informe a primeira letra do nome do estado:");
    scanf(" %s", &estado1);

    printf("Informe o código da carta: ");
    scanf(" %s", &cod_carta1);

    printf("Informe o nome da cidade: ");
    scanf(" %s", &nome_cidade1);

    printf("Entre com os dados populacionais: ");
    scanf(" %i", &populacao1);

    printf("Informe a área da Cidade: ");
    scanf(" %f", &area1);

    printf("Informe o PIB da Cidade: ");
    scanf(" %f", &pib1);

    printf("Infome a quantidade de pontos turísticos: ");
    scanf(" %i", &quantidade_pontos_turisticos1);
    printf("\n");

    densidade_populacional1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;

    printf("Informe os dados da segunda carta !\n");

    // Solicitando os dados da Segunda carta
    printf("Informe a primeira letra do nome do estado:");
    scanf(" %s", &estado2);

    printf("Informe o código da carta: ");
    scanf(" %s", &cod_carta2);

    printf("Informe o nome da cidade: ");
    scanf(" %s", &nome_cidade2);

    printf("Entre com os dados populacionais: ");
    scanf(" %i", &populacao2);

    printf("Informe a área da Cidade: ");
    scanf(" %f", &area2);

    printf("Informe o PIB da Cidade: ");
    scanf(" %f", &pib2);

    printf("Infome a quantidade de pontos turísticos: ");
    scanf(" %i", &quantidade_pontos_turisticos2);
    printf("\n");

    densidade_populacional2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if(populacao1>populacao2){
        printf("Cidade 1 tem maior população.\n");
    }else{
        printf("Cidade 2 tem maior população.\n");
    }

    printf("A cidade vencedora é: %s\n", cidade_vencedora);

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
