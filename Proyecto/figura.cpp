#include "figura.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

void crearFigura(Figura &figura, string nombre, string color, string atributos){
    figura.nombre = nombre;
    figura.color = color;
    figura.atributos = atributos;
}
//----------------------------------------------------------//
void setNombre (Figura &figura, string nombre){
    figura.nombre = nombre;
}
//----------------------------------------------------------//
string getNombre (Figura &figura){
    return figura.nombre;
}
//----------------------------------------------------------//
void setColor (Figura &figura, string color){
    figura.color = color;
}
//----------------------------------------------------------//
string getColor (Figura &figura){
    return figura.color;
}
//----------------------------------------------------------//
void setAtributo (Figura &figura, string atributos){
    figura.atributos = atributos;
}
//----------------------------------------------------------//
string getAtributo (Figura &figura){
    return figura.atributos;
}
