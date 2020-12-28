#include "cubo.h"

using namespace std;



//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

void crearCubo(Cubo &cubo, string color, float lado){
    cubo.color = color;
    cubo.lado = lado;
}
//----------------------------------------------------------//
void setColor (Cubo &cubo, string color){
    cubo.color = color;
}
//----------------------------------------------------------//
string getColor (Cubo &cubo){
    return cubo.color;
}
//----------------------------------------------------------//
void setLado (Cubo &cubo, float lado){
    cubo.lado = lado;
}
//----------------------------------------------------------//
float getLado (Cubo &cubo){
    return cubo.lado;
}
//----------------------------------------------------------//
float calcularArea (Cubo &cubo){
    return ( 6 * cubo.lado * cubo.lado );
}

