#include "rectangulo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

void crearRectangulo(Rectangulo &rectangulo, string color, float base, float altura){
    rectangulo.color = color;
    rectangulo.base = base;
    rectangulo.altura = altura;
}
//----------------------------------------------------------//
void setColor (Rectangulo &rectangulo, string color){
    rectangulo.color = color;
}
//----------------------------------------------------------//
string getColor (Rectangulo &rectangulo){
    return rectangulo.color;
}
//----------------------------------------------------------//
void setBase (Rectangulo &rectangulo, float base){
    rectangulo.base = base;
}
//----------------------------------------------------------//
float getBase (Rectangulo &rectangulo){
    return rectangulo.base;
}
//----------------------------------------------------------//
void setAltura (Rectangulo &rectangulo, float altura){
    rectangulo.altura = altura;
}
//----------------------------------------------------------//
float getAltura (Rectangulo &rectangulo){
    return rectangulo.altura;
}
//----------------------------------------------------------//
float calcularArea (Rectangulo &rectangulo){
    return rectangulo.base * rectangulo.altura;
}

