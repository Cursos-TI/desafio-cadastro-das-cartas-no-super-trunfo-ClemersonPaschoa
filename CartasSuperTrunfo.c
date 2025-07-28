#include <stdio.h>
#include <string.h>

int main (){

    //declarando variaveis
    int populacao, pontostur, populacao1, pontostur1;
    char estado[5], estado1[5];
    float area, pib, area1, pib1;
    char codigo[10] = "A01", codigo1[10] = "B01";
    char cidade[20] = "", cidade1[20] = "";
    float densidade, ppc, densidade1, ppc1;
    float SuperPoder, SuperPoder1;
    float respop, resarea, respib, respontos, resdens, ressuper, resppc;

    // Solicitando a entrada de dados para cada informação da carta 1
    printf ("Carta 1\n");
    
    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    //para limpar o caracter residual acima.
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 20, stdin); //para poder inserir cidade com nomes compostos.
    //scanf("%s", &cidade);
    
    // Remove o '\n' do final da função fgets
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontostur);

    // Armazenando o resultado nas variaveis
    densidade = (float) populacao/area;
    ppc = (float) pib/populacao;
    SuperPoder = populacao + area + pib + pontostur + ppc + (1/densidade);


    // Solicitando a entrada de dados para cada informação da carta 2
    printf ("Carta 2\n");
    
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código: \n");
    scanf("%s", &codigo1);

    //para limpar o caracter residual acima.
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade1, 20, stdin); //para poder inserir cidade com nomes compostos.
        
    // Remove o '\n' do final da função fgets
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontostur1);

    // Armazenando o resultado nas variaveis
    densidade1 = (float) populacao1/area1;
    ppc1 = (float) pib1/populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontostur1 + ppc1 + (1/densidade1);


    //Comparação dos resultados
    resarea = area > area1;
    resdens = densidade > densidade1;
    respib = pib > pib1;
    respontos = pontostur > pontostur1;
    respop = populacao > populacao1;
    ressuper = SuperPoder > SuperPoder1;
    resppc = ppc > ppc1;

    // imprime os dados da carta 1
    printf ("Carta 1\n");
    printf ("Estado: %s\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Nome da Cidade: %s\n", cidade);
    printf ("População: %d\n", populacao);
    printf ("Área: %.2f Km²\n", area);
    printf ("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de pontos turísticos: %d\n", pontostur);
    printf ("Densidade Populacional: %.2f\n", densidade);
    printf ("PIB per capita: %.2f\n", ppc);
    printf ("Super poder: %.2f\n", SuperPoder);

    // imprime os dados da carta 2
    printf ("Carta 2\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f Km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Número de pontos turísticos: %d\n", pontostur1);
    printf ("Densidade Populacional: %.2f\n", densidade1);
    printf ("PIB per capita: %.2f\n", ppc1);
    printf ("Super poder: %.2f\n", SuperPoder1);

    // Comparação das cartas
    printf ("\nComparação das Cartas:\n");
    printf ("\nCarta 1 venceu se resultado for 1, e Carta 2 venceu se resultado for 0\n");
    printf ("\nPopulação = %d\n", (int)respop);
    printf ("Área = %d\n", (int)resarea);
    printf ("PIB = %d\n", (int)respib);
    printf ("Pontos Turísticos = %d\n", (int)respontos);
    printf ("Densidade Populacional = %d\n", (int)resdens);
    printf ("PIB Per Capita = %d\n", (int)resppc);
    printf ("Super Poder = %d\n", (int)ressuper);

    return 0;
}
