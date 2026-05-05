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
//esther
float calcAreaTrapezio(float base_menor, float base_maior, float altura){
	return (base_menor + base_maior) * altura / 2;
}
//Vitor Hugo
float calcAreaCirculo(float raio){
	return 3.14 * (raio * raio); 
}
// Pedro Lucas
float calcAreaEsfera(float raio){
	return 4 * 3,14 * (raio * raio)
}
