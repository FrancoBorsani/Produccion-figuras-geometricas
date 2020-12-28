#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include <iostream>

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Circulos
    Atributos:
        color
        base
        altura

    Axiomas:
        color != empty
        base > 0
        altura > 0
*/


//Definiciones de Tipos de Datos
typedef struct{
    string color;
    float base;
    float altura;
}Rectangulo;


/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: al rect�ngulo creado desde el main se le asigna el color, la medida de la base y de la altura.

Condiciones:
    PRE: El rectangulo no debe haber sido creado.
    POST: El rectangulo queda creado para su posterior uso.

Parametros:
    referencia del rectangulo (instancia sobre la cual se invoca la primitiva); color, longitud de la base y altura que le ser�n asignados.

Retorno: procedimiento (sin retorno).
*/
void crearRectangulo(Rectangulo &rectangulo, string color, float base, float altura);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: setea / modifica el valor del color del rect�ngulo que se env�a por par�metro.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo()
    POST: El campo color pasa a contener el color ingresado

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva; color: color a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setColor (Rectangulo &rectangulo,  string color);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: retorna / devuelve el color de un determinado rect�ngulo.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo()
    POST: devuelve el dato contenido en el campo color

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva

Retorno: color como cadena de caracteres
*/
string getColor (Rectangulo &rectangulo);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: setea / modifica el valor de la base del rect�ngulo que se env�a por par�metro.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo()
    POST: El campo base pasa a contener la base ingresada

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva; base: base a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setBase (Rectangulo &rectangulo, float base);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: devuelve / retorna la base de un determinado rect�ngulo.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo()
    POST: devuelve el dato contenido en el campo base

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva

Retorno: base como flotante
*/
float getBase (Rectangulo &rectangulo);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: setea / modifica el valor de la altura del rect�ngulo que se env�a por par�metro.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo()
    POST: El campo altura pasa a contener la altura ingresada

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva; altura: altura a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setAltura (Rectangulo &rectangulo, float altura);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: devuelve / retorna la altura de un determinado rect�ngulo.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo()
    POST: devuelve el dato contenido en el campo altura

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva

Retorno: altura como flotante
*/
float getAltura (Rectangulo &rectangulo);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: calcula el area de un rect�ngulo con respecto a la base y la altura del mismo.

Condiciones:
    PRE: Rectangulo creado con crearRectangulo().
    POST: valor del area de la superficie del rectangulo.

Parametros:
    rectangulo: instancia sobre la cual se invoca la primitiva


Retorno: flotante con el area del rectangulo.
*/
float calcularArea (Rectangulo &rectangulo);


#endif // RECTANGULO_H_INCLUDED
