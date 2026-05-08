#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Desafio Super Trunfo Aventureiro - Países
    Tema 2 - Comparação das Cartas 2 - Alefe Cruz
*/

int main(){
    char Estado, Estado2, CodigoDaCarta, CodigoDaCarta2, NomeDaCidade[30], NomeDaCidade2[30];
    int Populacao, Populacao2, NumeroDePontosTuristicos, NumeroDePontosTuristicos2;
    float Area, Area2, PIB, PIB2, PIBperCapita, PIBperCapita2;
    double DensidadePopulacional, DensidadePopulacional2;
    int atributoDesejado;

    srand(time(0));

    printf("Escolha qual atributo das cartas você quer comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &atributoDesejado);

    atributoDesejado = rand() % 6 + 1;

    //informações a serem pedidas da carta 1
    printf("\nPara sua primeira carta digite as respostas abaixo: \n");
    printf("\nColoque a Letra do Estado de A a H: ");
    scanf(" %c", &Estado);
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
    como novamente não foi pedido o superpoder, deixei como comentário para caso precise futuramente
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

    //comparação dos atributos
    switch (atributoDesejado) //aqui puxo o atributo que foi escolhido acima para comparar o dado pedido
    {    
    case 1: //código para comparar a população
        if (Populacao > Populacao2) {
            printf("\nEstado %c é a vencedora", Estado);
        } else if (Populacao < Populacao2) {
            printf("\nEstado %c é a vencedora", Estado2);
        } else {
            printf("\nEmpatou");
        }
        break;
    case 2: //código para comparar a área
        if (Area > Area2) {
            printf("\nEstado %c é a vencedora", Estado);
        } else if (Area < Area2) {
            printf("\nEstado %c é a vencedora", Estado2);
        } else {
            printf("\nEmpatou");
        }
        break;
    case 3: //código para comparar o PIB
        if (PIB > PIB2) {
            printf("\nEstado %c é a vencedora", Estado);
        } else if (PIB < PIB2) {
            printf("\nEstado %c é a vencedora", Estado2);
        } else {
            printf("\nEmpatou");
        }
        break;
    case 4: //código para comparar o número de pontos turísticos
        if (NumeroDePontosTuristicos > NumeroDePontosTuristicos2) {
            printf("\nEstado %c é a vencedora", Estado);
        } else if (NumeroDePontosTuristicos < NumeroDePontosTuristicos2) {
            printf("\nEstado %c é a vencedora", Estado2);
        } else {
            printf("\nEmpatou");
        }
        break;
    case 5: //código para comparar a densidade populacional
        if (DensidadePopulacional < DensidadePopulacional2) {  
            printf("\nEstado %c é a vencedora", Estado);
        } else if (DensidadePopulacional > DensidadePopulacional2) {
            printf("\nEstado %c é a vencedora", Estado2);
        } else {
            printf("\nEmpatou");
        }
        break;
    case 6: //código para comparar o PIB per capita
        if (PIBperCapita > PIBperCapita2) {
            printf("\nEstado %c é a vencedora", Estado);
        } else if (PIBperCapita < PIBperCapita2) {
            printf("\nEstado %c é a vencedora", Estado2);
        } else {
            printf("\nEmpatou");
        }
        break;
    default: //código para caso o jogador selecione um número que esteja fora das opções que dei
        printf("\nOpção inválida");
        break;
    }

    return 0;
}
