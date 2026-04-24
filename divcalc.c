#include <stdio.h>

#include "calc_areas.h"
#include "calc_volumes.h"

int main(void){
    
    float b, h;
    float area;

    printf("Cálculo da área do triângulo\n");
    printf("Digite o valor da base: ");
    scanf("%f", &b);

    printf("Digite o valor da altura: ");
    scanf("%f", &h);

    area = calcAreaTriangulo(b, h);

    printf("A área do triângulo é: %f\n", area);
    return 0;
}
