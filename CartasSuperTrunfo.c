#include <stdio.h>

int main()  {
   
    char estado1[3], estado2[3];                   // VARIAVEIS CARTA 1;CARTA 2    
    char codcarta1[5], codcarta2[5];
    char ncidade1[50], ncidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;
    float densidadec1;
    float densidadec2;
    float pibpcapita1;
    float pibpcapita2;
    int numswitch;

//-----------------------------------------------

    printf("Carta 1:\n");                          //PRIMEIRO CADASTRO

    printf("Digite o estado:\n");
    scanf("%s", estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", ncidade1); 

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
    scanf(" %s", ncidade2);

    printf("Digite o número da população:\n");          
    scanf("%i", &populacao2);
        
    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%i", &pturisticos2);
     
    
    densidadec1 = populacao1 / area1;
    densidadec2 = populacao2 / area2;
    pibpcapita1 = pib1 / populacao1;
    pibpcapita2 = pib2 / populacao2;
    
    //informações das cartas exibidas na tela
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codcarta1);
    printf("Cidade: %s\n", ncidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pturisticos1);
    printf("Densidade demografica: %f\n",densidadec1);
    printf(" PIB per capita: %f\n\n",pibpcapita1);


    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codcarta2);
    printf("Cidade: %s\n", ncidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pturisticos2);
    printf("Densidade populacional: %f\n",densidadec2);
    printf("PIB per capita: %f\n\n",pibpcapita2);
    
    
    printf(" Escolha os seguintes atributos para comparação\n");
    printf("1 - atributo populacao\n");
    printf("2 - atributo area\n");         
    printf("3 - atributo PIB\n");
    printf("4 - atributo pontos turisticos\n");
    printf("5 - atributo densidade demografica\n") ;
    printf("6 - atributo PIB per capita\n");
    printf("Digite o número:");
    scanf("%i",&numswitch);
  
switch(numswitch){
    case 1:
    printf("Comparação de cartas (atributo: População)\n");
    printf("Carta 1 %s - %d\n",ncidade1, populacao1 );
    printf("Carta 2 %s - %d\n",ncidade2, populacao2 );
    if( populacao1 == populacao2){
        printf("**EMPATE**\n");
    }else if(populacao1 > populacao2){
        printf("carta 1 (%s) venceu",ncidade1);
    }else{ printf("Resultado:carta 2 (%s) venceu",ncidade2);}
    break;
     default:
           printf("##Opção invalida##");
}
    return 0;  
}









/*printf("Comparação de cartas (atributo: População)\n");

printf("Carta 1 %s - %d\n",ncidade1, populacao1 );
printf("Carta 2 %s - %d\n",ncidade2, populacao2 );
if( populacao1 == populacao2){
    printf("**EMPATE**\n");
}else if(populacao1 > populacao2){
    printf("carta 1 (%s) venceu",ncidade1);
}else{ printf("Resultado:carta 2 (%s) venceu",ncidade2);}*/