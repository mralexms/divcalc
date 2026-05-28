#include <stdio.h>
#include <locale.h>

#include "calc_areas.h"
#include "calc_volumes.h"


/*
  Menu Principal do Sistema
  Responsavel por eibir as opções de calculos feita pelos alunos
*/

//Créditos a Caio, ele fez o codigo, eu apenas corrigi algumas coisas como erros de variaveis (como que o individuo usa uma variavel que ele nem declarou) e fiz a comit.
void menuPrincipal(void){ // Aqui ele vai exibir o menu principal do sistema.
    setlocale(LC_ALL, "pt_BR.UTF-8"); // passei quase duas horas pra arrumar a formatação, más deu certo. 
    printf("\n====================================\n");
    printf(" Calculadora de Volumes e Áreas (UAU!) \n"); 
    printf("====================================\n");

    printf("1. Calcular Volume \n");
    printf("2. Calcular Área \n");
    printf("3. Sair \n");

    printf("====================================\n");

    printf("Escolha uma das opções: ");
}

void menuVolumes(void) { //  Aqui é o menu responsável pelos cálculos de volumes 

    int opcao;

    float aresta;
    float areaBase;
    float raio;
    float altura;
    float resultado;

    printf("\n============== VOLUMES ==============\n");

    printf("1. Volume do Cubo \n");
    printf("2. Volume da Pirâmide \n");
    printf("3. Volume do Cilindro \n");
    printf("4. Volume da Esfera \n");
    printf("5. Volume do Cone \n");
    printf("6. Volume do Prisma \n");
    printf("7. Voltar \n");

    printf("\n====================================\n");

    printf("Escolha um dos formatos: ");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:

            printf("Digite o valor da aresta do cubo: ");
            scanf("%f", &aresta);

            resultado = calcVolumeCubo(aresta);

            printf("O Volume do Cubo é: %.2f\n", resultado);

            break;

        case 2:

            printf("Digite o valor da área da base da Pirâmide: ");
            scanf("%f", &areaBase);

            printf("Digite o valor da altura da Pirâmide: ");
            scanf("%f", &altura);

            resultado = calcVolumePiramide(areaBase, altura);

            printf("O volume da Pirâmide é: %.2f\n", resultado);

            break;

        case 3:

            printf("Digite o valor do raio do Cilindro: ");
            scanf("%f", &raio);

            printf("Digite o valor da altura do Cilindro: ");
            scanf("%f", &altura);

            resultado = calcVolumeCilindro(raio, altura);

            printf("O volume do Cilindro é: %.2f\n", resultado);

            break;

        case 4:

            printf("Digite o valor do raio da Esfera: ");
            scanf("%f", &raio);

            resultado = CalcVolEsfera(raio);

            printf("O volume da Esfera é: %.2f\n", resultado);

            break;

        case 5:

            printf("Digite o valor do raio do Cone: ");
            scanf("%f", &raio);

            printf("Digite o valor da altura do Cone: ");
            scanf("%f", &altura);

            resultado = calcVolumeCone(raio, altura);

            printf("O volume do Cone é: %.2f\n", resultado);

            break;

        case 6:

            printf("Digite o valor da área da base do Prisma: ");
            scanf("%f", &areaBase);

            printf("Digite o valor da altura do Prisma: ");
            scanf("%f", &altura);

            resultado = calcVolumePrisma(areaBase, altura);

            printf("O Volume do Prisma é: %.2f\n", resultado);

            break;

        case 7:

            printf("Voltando para o início...\n");

            break;

        default:

            printf("\nOpção inválida.\n");
    }
}

void menuAreas(void) { // Aqui é outro menu só que agora é o menu de áreas

    int opcao;

    float lado;
    float base;
    float altura;
    float raio;
    float resultado;

    printf("\n============== ÁREAS ==============\n");

    printf("1. Área do Quadrado\n");
    printf("2. Área do Retângulo\n");
    printf("3. Área do Círculo\n");
    printf("4. Voltar\n");

    printf("\n====================================\n");

    printf("Escolha uma opção: ");

    scanf("%d", &opcao);

    switch (opcao) {

        case 1:

            printf("\nDigite o valor do lado do quadrado: ");
            scanf("%f", &lado);

            resultado = calcAreaQuadrado(lado);

            printf("Área do quadrado é: %.2f\n", resultado);

            break;

        case 2:

            printf("\nDigite o valor da base do retângulo: ");
            scanf("%f", &base);

            printf("Digite o valor da altura do retângulo: ");
            scanf("%f", &altura);

            resultado = calcAreaRetangulo(base, altura);

            printf("Área do retângulo é: %.2f\n", resultado);

            break;

        case 3:

            printf("\nDigite o raio do círculo: ");
            scanf("%f", &raio);

            resultado = calcAreaCirculo(raio);

            printf("Área do círculo é: %.2f\n", resultado);

            break;

        case 4:

            printf("\nVoltando ao início...\n");

            break;

        default:

            printf("\nOpção inválida.\n");
    }
}

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int opcaoPrincipal;

    do {

        menuPrincipal();

        scanf("%d", &opcaoPrincipal);

        switch (opcaoPrincipal) {

            case 1:

                menuVolumes();

                break;

            case 2:

                menuAreas();

                break;

            case 3:

                printf("\nPrograma encerrado.\n");

                break;

            default:

                printf("\nOpção inválida. Tente novamente.\n");
        }

    } while (opcaoPrincipal != 3);

    return 0; // Como ta funcionando? só Deus sabe
}