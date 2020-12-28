#include "triangulo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

void crearTriangulo(Triangulo &triangulo, string color, float cMayor, float cMenor){
    triangulo.color = color;
    triangulo.cMayor = cMayor;
    triangulo.cMenor = cMenor;
}
//----------------------------------------------------------//
void setColor (Triangulo &triangulo, string color){
    triangulo.color = color;
}
//----------------------------------------------------------//
string getColor (Triangulo &triangulo){
    return triangulo.color;
}
//----------------------------------------------------------//
void setCMayor (Triangulo &triangulo, float cMayor){
    triangulo.cMayor = cMayor;
}
//----------------------------------------------------------//
float getCMayor (Triangulo &triangulo){
    return triangulo.cMayor;
}
//----------------------------------------------------------//
void setCMenor (Triangulo &triangulo, float cMenor){
    triangulo.cMenor = cMenor;
}
//----------------------------------------------------------//
float getCMenor (Triangulo &triangulo){
    return triangulo.cMenor;
}
//----------------------------------------------------------//
float calcularArea (Triangulo &triangulo){
    return triangulo.cMayor * triangulo.cMenor / 2;
}
