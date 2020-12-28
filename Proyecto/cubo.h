#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED
#include <iostream>

using namespace std;

/*
    Definicion del Tipo de dato para el manejo de Cubos
    Atributos:
        color
        lado

    Axiomas:
        color != empty
        lado > 0
*/

//Definiciones de Tipos de Datos
typedef struct{
    string color;
    float lado;
}Cubo;


/*------Definiciones de primitivas------*/
/*
Descripción del caso de uso: al cubo creado desde el main se le asigna el color y la longitud de un lado.

Condiciones:
    PRE: El cubo no debe hacer sido creado.
    POST: El cubo queda creado para su posterior uso.

Parametros:
    referencia del cubo (instancia sobre la cual se invoca la primitiva); color y longitud del lado que le serán asignados.

Retorno: procedimiento (sin retorno).
*/
void crearCubo(Cubo &cubo, string color, float lado);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor del color del cubo que se envía por parámetro.

Condiciones:
    PRE: Cubo creado con crearCubo()
    POST: El campo color pasa a contener el color ingresado

Parametros:
    cubo: instancia sobre la cual se invoca la primitiva; color: color a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setColor (Cubo &cubo, string color);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: retorna / devuelve el color de un determinado cubo.

Condiciones:
    PRE: Cubo creado con crearCubo()
    POST: devuelve el dato contenido en el campo color

Parametros:
    cubo: instancia sobre la cual se invoca la primitiva

Retorno: color como cadena de caracteres
*/
string getColor (Cubo &cubo);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor de la longitud de un lado del cubo que se envía por parámetro.

Condiciones:
    PRE: Cubo creado con crearCubo()
    POST: El campo lado pasa a contener el lado ingresado

Parametros:
    cubo: instancia sobre la cual se invoca la primitiva; lado: lado a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setLado (Cubo &cubo, float lado);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: devuelve / retorna la longitud de un lado de un determinado cubo.

Condiciones:
    PRE: Cubo creado con crearCubo()
    POST: devuelve el dato contenido en el campo lado

Parametros:
    cubo: instancia sobre la cual se invoca la primitiva

Retorno: longitud de un lado como flotante
*/
float getLado (Cubo &cubo);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: calcula el area de un cubo con respecto a la longitud de un lado.

Condiciones:
    PRE: Cubo creado con crearCubo().
    POST: valor del area de la superficie del cubo.

Parametros:
    cubo: instancia sobre la cual se invoca la primitiva


Retorno: flotante con el area del cubo.
*/
float calcularArea (Cubo &cubo);


#endif // CUBO_H_INCLUDED
