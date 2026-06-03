#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char pais1[20], pais2[20];
    char estado1, estado2;
    char cod_carta1[3],cod_carta2[2], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, quantidade_pontos_turisticos1,quantidade_pontos_turisticos2, cidade_vencedora;
    float area1, pib1, area2, pib2, 
    densidade_populacional1, densidade_populacional2,
    pib_percapita1, pib_percapita2, super_poder1, super_poder2 ;
    int opção;

    printf("Informe os dados da primeira carta !\n");
    printf("\n");

    // Solicitando os dados da primeira carta
    printf("Digite o primeiro país: ");
    scanf(" %19[^\n]", pais1);

    printf("Informe a primeira letra do nome do estado:");
    scanf(" %s", &estado1);

    printf("Informe o código da carta: ");
    scanf(" %s", cod_carta1);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("Entre com os dados populacionais: ");
    scanf(" %i", &populacao1);

    printf("Informe a área da Cidade: ");
    scanf(" %f", &area1);

    printf("Informe o PIB da Cidade: ");
    scanf(" %f", &pib1);

    printf("Infome a quantidade de pontos turísticos: ");
    scanf(" %i", &quantidade_pontos_turisticos1);
    printf("\n");

    // Inserindo dados da carta 2.
    printf("\n");
    printf("---------------------------------------\n");
    printf("\n");

    densidade_populacional1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;

    printf("Digite o segundo país: ");
    scanf(" %19[^\n]", pais2);

    printf("Informe a primeira letra do nome do estado:");
    scanf(" %s[1]", &estado2);

    printf("Informe o código da carta: ");
    scanf(" %s", &cod_carta2);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nome_cidade2);

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

    // Criando Menu. 
    printf("***-SUPER TRUNFO-***\n");
    printf("Escolha o atributo a ser comparado!\n");
    printf("Atributos:\n");
    printf("1 - População:\n");
    printf("2 - Área:\n");
    printf("3 - PIB:\n");
    printf("4 - Número de pontos turísticos:\n");
    printf("5 - Densidade demográfica:\n");
    printf("6 - Sair\n");

    printf("Escolha dentre as opções disponíveis !\n");
    scanf("%d",&opção);

    switch(opção){
        case 1:
            printf("\n*** RESULTADO ***\n");
            printf("\nAtributo a ser comparado: População !\n");
            printf("\nPaís 1: %s \n", pais1);
            printf("\nPaís 2: %s \n", pais2);
            printf("População Cidade 1: %s \n População Cidade 2: %s \n", populacao1, populacao2);
            if(populacao1 > populacao2){   
                printf("Carta 1 Venceu!\n");
            } else if(populacao1< populacao2){
                printf("Carta 2 Venceu!\n");
            }else{
                printf("Empate!\n");
            }
        break;
        case 2:
            printf("\n*** RESULTADO ***\n");
            printf("\nPaís 1: %s \n", pais1);
            printf("\nPaís 2: %s \n", pais2);
            printf("\nAtributo a ser comparado: Área da cidade !\n");
            printf("\nÁrea da Cidade 1: %s \n Área da Cidade 2: %s \n", area1, area2);
            if(area1 > area2){
                printf("Carta 1 Venceu!\n");
            } else if(area1 < area2){
                printf("Carta 2 Venceu!\n");
            }else{
                printf("Empate!\n");
            }
        break; 
        case 3:
            printf("\n*** RESULTADO ***\n");
            printf("\nAtributo a ser comparado: PIB !\n");
            printf("\nPaís 1: %s \n", pais1);
            printf("\nPaís 2: %s \n", pais2);
            printf("\nPIB da Cidade 1: %s \n PIB da Cidade 2: %s \n", pib1, pib2);
            if(pib1 > pib2){    
                printf("Carta 1 Venceu!\n");
            } else if(pib1< pib2){
                printf("Carta 2 Venceu!\n");
            }else{
                printf("Empate!\n");
            }
        break; 
        case 4:
            printf("\n*** RESULTADO ***\n");
            printf("\nAtributo a ser comparado: Números de Pontos Turísticos !\n");
            printf("\nPaís 1: %s \n", pais1);
            printf("\nPaís 2: %s \n", pais2);
            printf("\nQuantidade de Pontos Turísticos da Cidade 1: %s \n Quantidade de Pontos Turísticos da Cidade 2: %s \n", quantidade_pontos_turisticos1, quantidade_pontos_turisticos2);
            if(densidade_populacional1 < densidade_populacional2){
                printf("Carta 1 Venceu!");
            } else if(densidade_populacional1 > densidade_populacional2){
                printf("Carta 2 Venceu!\n");
            }else{
                printf("Empate!\n");
            }
        break; 
        case 5:
            printf("\n*** RESULTADO ***\n");
            printf("\nAtributo a ser comparado: Números de Pontos Turísticos !\n");
            printf("\nPaís 1: %s \n", pais1);
            printf("\nPaís 2: %s \n", pais2);
            printf("\nQuantidade de Pontos Turísticos da Cidade 1: %s \n Quantidade de Pontos Turísticos da Cidade 2: %s \n", quantidade_pontos_turisticos1, quantidade_pontos_turisticos2);
            if(quantidade_pontos_turisticos1 > quantidade_pontos_turisticos2){
                printf("Carta 1 Venceu!\n");
            } else if(quantidade_pontos_turisticos1< quantidade_pontos_turisticos2){
                printf("Carta 2 Venceu!\n");
            }else{
                printf("Empate!\n");
            }
        break; 
        case 6:
            printf("Programa Finalizado !\n");
        break; 
        default: 
           printf("Opção Inválida !\n");
        break;
    }
    return 0;
}
