#include <stdio.h>

    int main (){
        int populacao1, pontosturistico1, populacao2, pontosturistico2;
        char codigo1[3], cidade1[50], codigo2[3], cidade2[50];
        char estado1[3], estado2[3];
        float area1, pib1, area2, pib2;

        //Carta 01

        printf("Informações da Carta 01 \n\nDigite a letra do Estado:");
        scanf("%s", &estado1);

        printf("Digite o código da carta:");
        scanf("%s", &codigo1);

        printf("Digite o nome da Cidade:");
        scanf("%s", &cidade1);
        
        printf("Digite a população:");
        scanf("%d", &populacao1);

        printf("Digite a área (em km²):");
        scanf("%f", &area1);

        printf("Digite o Produto Interno Bruto (PIB):");
        scanf("%f", &pib1);
        
        printf("Digite o número de Pontos Turísticos:");
        scanf("%d", &pontosturistico1);

        //Carta 02

        printf("\n\nInformações da Carta 02 \n\nDigite a letra do Estado:");
        scanf("%s", &estado2);

        printf("Digite o código da carta:");
        scanf("%s", &codigo2);

        printf("Digite o nome da Cidade:");
        scanf("%s", &cidade2);
        
        printf("Digite a população:");
        scanf("%d", &populacao2);

        printf("Digite a área (em km²):");
        scanf("%f", &area2);

        printf("Digite o Produto Interno Bruto (PIB):");
        scanf("%f", &pib2);
        
        printf("Digite o número de Pontos Turísticos:");
        scanf("%d", &pontosturistico2);

        //Impressão dos Dados

        printf("\n\n\nCarta 01\n\nEstado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f Bilhões de Reais \nNúmero de Pontos Turísticos: %d", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturistico1);
        printf("\n\n\nCarta 02\n\nEstado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f Bilhões de Reais \nNúmero de Pontos Turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturistico2);

        return 0;

    }