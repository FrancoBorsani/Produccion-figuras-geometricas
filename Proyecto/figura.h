#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

#include <iostream>

using namespace std;

/*
    Definicion del Tipo de dato para el manejo de Circulos
    Atributos:
        nombre
        color
        area

    Axiomas:
        color != empty
        radio > 0
        area = 2PI.r.h + 2PI r r || PI.r.r || 6 * cubo.lado * cubo.lado || base . h || (cMayor * cMenor) / 2;
*/

//Definiciones de Tipos de Datos
typedef struct{
    string nombre;
    string color;
    string atributos;
}Figura;

/*------Definiciones de primitivas------*/
/*
Descripción del caso de uso: a la figura creada desde el main se le asigna el nombre de la figura geométrica,
el color y el area de la misma. Se utiliza una figura "genérica" para facilitar la impresión por pantalla
por orden-color de carga.

Condiciones:
    PRE: La figura no debe hacer sido creada.
    POST: La figura queda creada para su posterior uso.

Parametros:
    referencia de la figura (instancia sobre la cual se invoca la primitiva); nombre, color y area que le serán asignados.

Retorno: procedimiento (sin retorno).
*/
void crearFigura(Figura &figura, string nombre, string color, string atributos);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor del nombre de la figura que se envía por parámetro.

Condiciones:
    PRE: Figura creada con crearFigura()
    POST: El campo nombre pasa a contener el nombre ingresado

Parametros:
    figura: instancia sobre la cual se invoca la primitiva; nombre: nombre a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setNombre (Figura &figura, string nombre);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: retorna / devuelve el color de un determinado circulo.

Condiciones:
    PRE: Figura creada con crearFigura()
    POST: devuelve el dato contenido en el campo nombre

Parametros:
    figura: instancia sobre la cual se invoca la primitiva

Retorno: nombre como cadena de caracteres
*/
string getNombre (Figura &figura);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: setea / modifica el valor del color de la figura que se envía por parámetro.

Condiciones:
    PRE: Figura creada con crearFigura()
    POST: El campo color pasa a contener el color ingresado

Parametros:
    figura: instancia sobre la cual se invoca la primitiva; color: color a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setColor (Figura &figura, string color);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: retorna / devuelve el color de una determinada figura.

Condiciones:
    PRE: Figura creada con crearFigura()
    POST: devuelve el dato contenido en el campo color

Parametros:
    figura: instancia sobre la cual se invoca la primitiva

Retorno: color como cadena de caracteres
*/
string getColor (Figura &figura);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor del atributo de la figura que se envía por parámetro.

Condiciones:
    PRE: Figura creada con crearFigura()
    POST: El campo atributos pasa a contener el atributo ingresado

Parametros:
    figura: instancia sobre la cual se invoca la primitiva; atributos: atributos a ingresarse

Retorno: procedimiento (sin retorno).
*/

void setAtributo (Figura &figura, string atributo);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: devuelve / retorna el area de una determinada figura.

Condiciones:
    PRE: Figura creada con crearFigura()
    POST: devuelve el dato contenido en el campo atributos

Parametros:
    figura: instancia sobre la cual se invoca la primitiva

Retorno: atributos de la figura como String
*/
string getAtributo (Figura &figura);


#endif // FIGURA_H_INCLUDED
