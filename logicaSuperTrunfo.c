#include <stdio.h>

/*
    Desafio Super Trunfo Novato - Países
    Tema 2 - Comparação das Cartas - Alefe Cruz
*/

int main(){
    int Populacao, Populacao2, NumeroDePontosTuristicos, NumeroDePontosTuristicos2;
    float PIB, PIB2, Area, Area2;
    double DensidadePopulacional, DensidadePopulacional2;
    float PIBperCapita, PIBperCapita2;
    char CodigoDaCarta, CodigoDaCarta2;
    char Estado, Estado2;
    char NomeDaCidade[25], NomeDaCidade2[25];
    int Carta1, Carta2;
    
    printf("Para sua primeira carta digite as respostas abaixo: \n");

    printf("\nColoque a Letra do Estado de A a H: ");
    scanf("%c", &Estado);
    printf("Digite um código para o Estado entre 1 e 4: ");
    scanf(" %c", &CodigoDaCarta);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeDaCidade);
    printf("Digite a População dessa Cidade: ");
    scanf("%d", &Populacao);
    printf("Digite a Área dessa Cidade: ");
    scanf("%f", &Area);
    printf("Coloque o PIB da Cidade: ");
    scanf("%f", &PIB);
    printf("Coloque a quantidade de Pontos Turísticos dessa Cidade: ");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("\nPara sua segunda carta digite as respostas abaixo: \n");

    printf("\nColoque a Letra do Estado de A a H: ");
    scanf(" %c", &Estado2);
    printf("Digite um código para o Estado entre 1 e 4: ");
    scanf(" %c", &CodigoDaCarta2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeDaCidade2);
    printf("Digite a População dessa Cidade: ");
    scanf("%d", &Populacao2);
    printf("Digite a Área dessa Cidade: ");
    scanf("%f", &Area2);
    printf("Coloque o PIB da Cidade: ");
    scanf("%f", &PIB2);
    printf("Coloque a quantidade de Pontos Turísticos dessa Cidade: ");
    scanf("%d", &NumeroDePontosTuristicos2);

    DensidadePopulacional = Populacao / Area;
    DensidadePopulacional2 = Populacao2 / Area2;
    PIBperCapita = PIB / Populacao;
    PIBperCapita2 = PIB2 / Populacao2;

    float SuperPoder = (float)Populacao + Area + PIB + (float)NumeroDePontosTuristicos + PIBperCapita + (-1 * DensidadePopulacional);
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + (float)NumeroDePontosTuristicos2 + PIBperCapita2 + (-1 * DensidadePopulacional2);

    printf("\nCarta 1: \n");
    printf("\nEstado: %c\n", Estado);
    printf("Código: 0%c\n", CodigoDaCarta);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2fkm²\n", Area);
    printf("PIB: %.2f\nNúmero De Pontos Turísticos: %d\n", PIB, NumeroDePontosTuristicos);
    printf("Densidade Populacional: %.2fhab/km²\n", DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("\nCarta 2: \n");
    printf("\nEstado: %c\n", Estado2);
    printf("Código: 0%c\n", CodigoDaCarta2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2fkm²\n", Area2);
    printf("PIB: %.2f\nNúmero De Pontos Turísticos: %d\n", PIB2, NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", Populacao > Populacao2);
    printf("Área: %d\n", Area > Area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos Turísticos: %d\n", NumeroDePontosTuristicos > NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %d\n", DensidadePopulacional < DensidadePopulacional2);
    printf("PIB per Capita: %d\n", PIBperCapita2 > PIBperCapita2);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2);

    return 0;
}
