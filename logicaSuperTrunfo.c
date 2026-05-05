#include <stdio.h>

/*
    Desafio Super Trunfo Novato - Países
    Tema 2 - Comparação das Cartas - Alefe Cruz
*/

int main(){
    char Estado, Estado2, CodigoDaCarta, CodigoDaCarta2, NomeDaCidade[30], NomeDaCidade2[30];
    int Populacao, Populacao2, NumeroDePontosTuristicos, NumeroDePontosTuristicos2;
    float Area, Area2, PIB, PIB2, PIBperCapita, PIBperCapita2;
    double DensidadePopulacional, DensidadePopulacional2;

    //informações a serem pedidas da carta 1
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

    //informações a serem pedidas da carta 2
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

    //cálculo da densidade populacional e do PIB per capita para as duas cartas
    DensidadePopulacional = Populacao / Area;
    DensidadePopulacional2 = Populacao2 / Area2;
    PIBperCapita = PIB / Populacao;
    PIBperCapita2 = PIB2 / Populacao2;

    /*
    como foi pedido o mesmo código do desafio anterior assim o fiz, porém no desafio não pediu superpoder, então deixei como comentário para caso precise futuramente
    float SuperPoder = (float)Populacao + Area + PIB + (float)NumeroDePontosTuristicos + PIBperCapita + (-1 * DensidadePopulacional);
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + (float)NumeroDePontosTuristicos2 + PIBperCapita2 + (-1 * DensidadePopulacional2);
    */

    //impressão dos dados da carta 1
    printf("\nCarta 1: \n");
    printf("\nEstado: %c\n", Estado);
    printf("Código: 0%c\n", CodigoDaCarta);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2fkm²\n", Area);
    printf("PIB: %.2f\nNúmero De Pontos Turísticos: %d\n", PIB, NumeroDePontosTuristicos);
    printf("Densidade Populacional: %.2fhab/km²\n", DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita);
    //printf("Super Poder: %.2f\n", SuperPoder);

    //impressão dos dados da carta 2
    printf("\nCarta 2: \n");
    printf("\nEstado: %c\n", Estado2);
    printf("Código: 0%c\n", CodigoDaCarta2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2fkm²\n", Area2);
    printf("PIB: %.2f\nNúmero De Pontos Turísticos: %d\n", PIB2, NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    //printf("Super Poder: %.2f\n", SuperPoder2);

    //no desafio foi pedido para escolher apenas um atributo da carta para comparação, sendo assim escolhi "densidade populacional"
    //comparação das cartas usando a densidade populacional, onde a carta com a menor densidade populacional é a vencedora
    //deixei alguns comentários feitos com o copilot pois facilita o entendimento do código e mostra como eu explicaria meu raciocínio tambem
    printf("\nComparação de Cartas:\n");
    printf("Carta 1 - %c (Densidade Populacional): %.2f hab/km²\n", Estado, DensidadePopulacional);
    printf("Carta 2 - %c (Densidade Populacional): %.2f hab/km²\n", Estado2, DensidadePopulacional2);

    if (DensidadePopulacional < DensidadePopulacional2) {
        printf("Resultado: Carta 1 (%c), venceu!\n", Estado);
    } else {
        printf("Resultado: Carta 2 (%c), venceu!\n", Estado2);
    }

    /*
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", Populacao > Populacao2);
    printf("Área: %d\n", Area > Area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos Turísticos: %d\n", NumeroDePontosTuristicos > NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %d\n", DensidadePopulacional < DensidadePopulacional2);
    printf("PIB per Capita: %d\n", PIBperCapita > PIBperCapita2);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2);
    */

    return 0;
}
