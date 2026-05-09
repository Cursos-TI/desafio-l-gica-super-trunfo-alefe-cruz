#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Desafio Super Trunfo Mestre - Países
    Tema 2 - Comparação das Cartas 3 - Alefe Cruz
*/

int main(){
    char Estado, Estado2, CodigoDaCarta, CodigoDaCarta2, NomeDaCidade[30], NomeDaCidade2[30];
    int Populacao, Populacao2, NumeroDePontosTuristicos, NumeroDePontosTuristicos2;
    float Area, Area2, PIB, PIB2, PIBperCapita, PIBperCapita2;
    double DensidadePopulacional, DensidadePopulacional2;
    char primeiroAtributo, segundoAtributo;
    char *atributoDesejado, *atributoDesejado2;
    int resultado1, resultado2;

    printf("Bem-vindo ao Super Trunfo - Países!\n");
    printf("Escolha qual atributo das cartas você quer comparar: \n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("I - PIB\n");
    printf("T - Pontos Turísticos\n");
    printf("D - Densidade Populacional\n");
    printf("C - PIB per Capita\n");
    scanf(" %c", &primeiroAtributo);
    switch (primeiroAtributo) {
    case 'P':
    case 'p':
        atributoDesejado = "População";
        break;
    case 'A':
    case 'a':
        atributoDesejado = "Área";
        break;
    case 'I':
    case 'i':
        atributoDesejado = "PIB";
        break;
    case 'T':
    case 't':
        atributoDesejado = "Pontos Turísticos";
        break;
    case 'D':
    case 'd':
        atributoDesejado = "Densidade Populacional";
        break;
    case 'C':
    case 'c':
        atributoDesejado = "PIB per Capita";
        break;
    default:
        printf("\nOpção inexistente");
        break;
    }
    printf("\nEscolha um segundo atributo para comparação: \n");
    scanf(" %c", &segundoAtributo);
    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê já escolheu esse atributo para comparação, escolha outro atributo: \n");
        scanf(" %c", &segundoAtributo);
        } else { switch (segundoAtributo) {
        case 'P':
        case 'p':
            atributoDesejado2 = "População";
            break;
        case 'A':
        case 'a':
            atributoDesejado2 = "Área";
            break;
        case 'I':
        case 'i':
            atributoDesejado2 = "PIB";
            break;
        case 'T':
        case 't':
            atributoDesejado2 = "Pontos Turísticos";
            break;
        case 'D':
        case 'd':
            atributoDesejado2 = "Densidade Populacional";
            break;
        case 'C':
        case 'c':
            atributoDesejado2 = "PIB per Capita";
            break;
        default:
            printf("\nOpção inexistente");
            break;
        }
    }

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
    switch (primeiroAtributo)
    {
    case 'P':
    case 'p': //código para comparar a população
        printf("\nPrimeiro atributo escolhido: %s\n", atributoDesejado);
        printf("População da Carta 1: %d\n", Populacao);
        printf("População da Carta 2: %d\n", Populacao2);
        resultado1 = Populacao > Populacao2 ? 1 : 0;
        break;
    case 'A':
    case 'a': //código para comparar a área
        printf("\nPrimeiro atributo escolhido: %s\n", atributoDesejado);
        printf("Área da Carta 1: %.2fkm²\n", Area);
        printf("Área da Carta 2: %.2fkm²\n", Area2);
        resultado1 = Area > Area2 ? 1 : 0;
        break;
    case 'I':
    case 'i': //código para comparar o PIB
        printf("\nPrimeiro atributo escolhido: %s\n", atributoDesejado);
        printf("PIB da Carta 1: %.2fbi\n", PIB);
        printf("PIB da Carta 2: %.2fbi\n", PIB2);
        resultado1 = PIB > PIB2 ? 1 : 0;
        break;
    case 'T':
    case 't': //código para comparar o número de pontos turísticos
        printf("\nPrimeiro atributo escolhido: %s\n", atributoDesejado);
        printf("Número de Pontos Turísticos da Carta 1: %d\n", NumeroDePontosTuristicos);
        printf("Número de Pontos Turísticos da Carta 2: %d\n", NumeroDePontosTuristicos2);
        resultado1 = NumeroDePontosTuristicos > NumeroDePontosTuristicos2 ? 1 : 0;
        break;
    case 'D':
    case 'd': //código para comparar a densidade populacional (lembrando que nesse caso o vencedor é o que tiver a menor densidade populacional)
        printf("\nPrimeiro atributo escolhido: %s\n", atributoDesejado);
        printf("Densidade Populacional da Carta 1: %.2fhab/km²\n", DensidadePopulacional);
        printf("Densidade Populacional da Carta 2: %.2fhab/km²\n", DensidadePopulacional2);
        resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
        break;
    case 'C':
    case 'c': //código para comparar o PIB per Capita
        printf("\nPrimeiro atributo escolhido: %s\n", atributoDesejado);
        printf("PIB per Capita da Carta 1: %.2fbi\n", PIBperCapita);
        printf("PIB per Capita da Carta 2: %.2fbi\n", PIBperCapita2);
        resultado1 = PIBperCapita > PIBperCapita2 ? 1 : 0;
        break;
    default:
        printf("\nComparação impossível de ser realizada");
        break;
    }

    switch (segundoAtributo)
    {
    case 'P':
    case 'p': //código para comparar a população
        printf("\nSegundo atributo escolhido: %s\n", atributoDesejado2);
        printf("População da Carta 1: %d\n", Populacao);
        printf("População da Carta 2: %d\n", Populacao2);
        resultado2 = Populacao > Populacao2 ? 1 : 0;
        break;
    case 'A':
    case 'a': //código para comparar a área
        printf("\nSegundo atributo escolhido: %s\n", atributoDesejado2);
        printf("Área da Carta 1: %.2fkm²\n", Area);
        printf("Área da Carta 2: %.2fkm²\n", Area2);
        resultado2 = Area > Area2 ? 1 : 0;
        break;
    case 'I':
    case 'i': //código para comparar o PIB
        printf("\nSegundo atributo escolhido: %s\n", atributoDesejado2);
        printf("PIB da Carta 1: %.2fbi\n", PIB);
        printf("PIB da Carta 2: %.2fbi\n", PIB2);
        resultado2 = PIB > PIB2 ? 1 : 0;
        break;
    case 'T':
    case 't': //código para comparar o número de pontos turísticos
        printf("\nSegundo atributo escolhido: %s\n", atributoDesejado2);
        printf("Número de Pontos Turísticos da Carta 1: %d\n", NumeroDePontosTuristicos);
        printf("Número de Pontos Turísticos da Carta 2: %d\n", NumeroDePontosTuristicos2);
        resultado2 = NumeroDePontosTuristicos > NumeroDePontosTuristicos2 ? 1 : 0;
        break;
    case 'D':
    case 'd': //código para comparar a densidade populacional (lembrando que nesse caso o vencedor é o que tiver a menor densidade populacional)
        printf("\nSegundo atributo escolhido: %s\n", atributoDesejado2);
        printf("Densidade Populacional da Carta 1: %.2fhab/km²\n", DensidadePopulacional);
        printf("Densidade Populacional da Carta 2: %.2fhab/km²\n", DensidadePopulacional2);
        resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
        break;
    case 'C':
    case 'c': //código para comparar o PIB per Capita
        printf("\nSegundo atributo escolhido: %s\n", atributoDesejado2);
        printf("PIB per Capita da Carta 1: %.2fbi\n", PIBperCapita);
        printf("PIB per Capita da Carta 2: %.2fbi\n", PIBperCapita2);
        resultado2 = PIBperCapita > PIBperCapita2 ? 1 : 0;
        break;
    default:
        printf("\nComparação impossível de ser realizada");
        break;
    }

    if (resultado1 && resultado2) {
        printf("\n%c%c %s (Carta 1) venceu", Estado, CodigoDaCarta, NomeDaCidade);
    } else if (resultado1 != resultado2) {
        printf("\nEmpate");
    } else { 
        printf("\n%c%c %s (Carta 2) venceu", Estado2, CodigoDaCarta2, NomeDaCidade2);
    }

    return 0;
}