#include "circulo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

void crearCirculo(Circulo &circulo, string color, float radio){
    circulo.color= color;
    circulo.radio = radio;
}
//----------------------------------------------------------//
void setColor (Circulo &circulo, string color){
    circulo.color = color;
}
//----------------------------------------------------------//
string getColor (Circulo &circulo){
    return circulo.color;
}
//----------------------------------------------------------//
void setRadio (Circulo &circulo, float radio){
    circulo.radio = radio;
}
//----------------------------------------------------------//
float getRadio (Circulo &circulo){
    return circulo.radio;
}
//----------------------------------------------------------//
float calcularArea (Circulo &circulo){
    return 3.14159 * circulo.radio * circulo.radio;
}
