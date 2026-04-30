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
