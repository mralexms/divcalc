#include "calc_volumes.h"

float calcVolumeCubo(float aresta){
    return aresta * aresta * aresta;
}
float calcVolumePiramide(float areaBase,float altura){
  return (areaBase * altura) / 3.0;
}

float calcVolumeCilindro(float raio,float altura){
	return 3.14 * raio * raio * altura;
} //Dayseanne

float CalcVolEsfera(float raio){
  return (4.0/3.0*3.14)*raio*raio*raio;
}

// Calculo do Cone Clairton.
float calcVolumeCone(float raio, float altura){
    return (3.14 * raio * raio * altura) / 3.0;
}
float calcVolumePrisma(float areaBase, float altura){
    return areaBase * altura;
}
// Cálculo do Tetraedro Regular (Arthur)
float calcVolumeTetraedro(float aresta) {
    return (pow(aresta, 3.0) * sqrt(2.0)) / 12.0;
}
