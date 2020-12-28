#include "cilindro.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

void crearCilindro(Cilindro &cilindro, string color, float radio, float altura){
    cilindro.color = color;
    cilindro.radio = radio;
    cilindro.altura = altura;
}
//----------------------------------------------------------//
void setColor (Cilindro &cilindro, string color){
    cilindro.color = color;
}
//----------------------------------------------------------//
string getColor (Cilindro &cilindro){
    return cilindro.color;
}
//----------------------------------------------------------//
void setRadio (Cilindro &cilindro, float radio){
    cilindro.radio = radio;
}
//----------------------------------------------------------//
float getRadio (Cilindro &cilindro){
    return cilindro.radio;
}
//----------------------------------------------------------//
void setAltura (Cilindro &cilindro, float altura){
    cilindro.altura = altura;
}
//----------------------------------------------------------//
float getAltura (Cilindro &cilindro){
    return cilindro.altura;
}
//----------------------------------------------------------//
float calcularArea (Cilindro &cilindro){
    return ( (2 * 3.14159 * cilindro.radio * cilindro.altura) + (2 * 3.14159 * cilindro.radio * cilindro.radio) );
}
