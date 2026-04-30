#include "calc_areas.h"

float calcAreaQuadrado(float lado){
        return lado * lado;
}

float calcAreaTriangulo(float base, float altura){
    return base * altura*0.5;
}

float calcAreaRetangulo(float base, float altura){
    return base * altura;
}
float calcAreaTrianguloIsosceles(float base, float altura){
	return (base * altura)/2.0; //Lauanna 
}
//João Pedro
float calcAreaLosango(float diagonal_maior , float diagonal_menor){
    return (diagonal_maior * diagonal_menor)/2.0;
}