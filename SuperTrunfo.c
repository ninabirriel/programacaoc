#include <stdio.h>

int main(){ 

    char Letra1[2], Letra2[2];
    char Numero1[5], Numero2[5];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;

    printf("Bem-vindo ao jogo Super Trunfo!\n"); // Introducao ao jogo
    printf("Vamos começar cadastrando as cartas.\n");
    
    printf("Digite o Estado da carta 1: \n"); // Inicio do cadastro da carta 1
    scanf(" %c", Letra1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s", Numero1); 

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s", Cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &Pontosturisticos1);

    printf("\nCarta 1 cadastrada com sucesso!\n\n"); // Impressao dos dados da carta 1
    printf("Código: %s%s\n", Letra1, Numero1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", Pontosturisticos1);

    printf("\nVamos agora cadastrar a carta 2.\n\n"); // Inicio do cadastro da carta 2

    printf("Digite o Estado da carta 2: \n");
    scanf(" %s", Letra2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s", Numero2); 

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s", Cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &Pontosturisticos2);

    printf("\nCarta 2 cadastrada com sucesso!\n\n"); // Impressao dos dados da carta 2
    printf("Código: %s%s\n", Letra2, Numero2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", Pontosturisticos2);

    return 0;

}
