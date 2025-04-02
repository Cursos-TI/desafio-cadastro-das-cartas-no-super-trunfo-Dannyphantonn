#include <stdio.h>

int main()  {
   
    char estado1[3], estado2[3];                   // VARIAVEIS CARTA 1;CARTA 2    
    char codcarta1[5], codcarta2[5];
    char Ncidade1[50], Ncidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;
    float densidadec1;
    float densidadec2;

    densidadec1 = populacao1 / area1;
    densidadec2 = populacao2 / area2;

    printf("Carta 1:\n");                          //PRIMEIRO CADASTRO

    printf("Digite o estado:\n");
    scanf("%s", estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", Ncidade1); 

    printf("Digite o número da população:\n");          
    scanf("%i", &populacao1);
        
    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%i", &pturisticos1);

    printf("\nCarta 2:\n");                        // SEGUNDO CADASTRO ---------------------

    printf("Digite o estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", Ncidade2);

    printf("Digite o número da população:\n");          
    scanf("%i", &populacao2);
        
    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%i", &pturisticos2);
                                                    //informações das cartas exibidas na tela
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codcarta1);
    printf("Cidade: %s\n", Ncidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n\n", pturisticos1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codcarta2);
    printf("Cidade: %s\n", Ncidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pturisticos2);

    return 0;  
}
