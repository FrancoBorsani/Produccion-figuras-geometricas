#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include <iostream>
using namespace std;

/*
    Definicion del Tipo de dato para el manejo de Circulos
    Atributos:
        color
        radio

    Axiomas:
        color != empty
        radio > 0
*/


//Definiciones de Tipos de Datos
typedef struct{
    string color;
    float radio;
}Circulo;


/*------Definiciones de primitivas------*/
/*
Descripción del caso de uso: al circulo creado desde el main se le asigna el color y el radio.

Condiciones:
    PRE: El circulo no debe haber sido creado.
    POST: El circulo queda creado para su posterior uso.

Parametros:
    referencia del circulo (instancia sobre la cual se invoca la primitiva); color y radio que le serán asignados.

Retorno: procedimiento (sin retorno).
*/
void crearCirculo(Circulo &circulo, string color, float radio);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor del color del circulo que se envía por parámetro.

Condiciones:
    PRE: Circulo creado con crearCirculo()
    POST: El campo color pasa a contener el color ingresado

Parametros:
    circulo: instancia sobre la cual se invoca la primitiva; color: color a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setColor (Circulo &circulo, string color);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: retorna / devuelve el color de un determinado circulo.

Condiciones:
    PRE: Circulo creado con crearCirculo()
    POST: devuelve el dato contenido en el campo color

Parametros:
    circulo: instancia sobre la cual se invoca la primitiva

Retorno: color como cadena de caracteres
*/
string getColor (Circulo &circulo);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: setea / modifica el valor del radio del circulo que se envía por parámetro.

Condiciones:
    PRE: Circulo creado con crearCirculo()
    POST: El campo radio pasa a contener el radio ingresado

Parametros:
    circulo: instancia sobre la cual se invoca la primitiva; radio: radio a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setRadio (Circulo &circulo, float radio);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: devuelve / retorna el radio de un determinado circulo.

Condiciones:
    PRE: Circulo creado con crearCirculo()
    POST: devuelve el dato contenido en el campo radio

Parametros:
    circulo: instancia sobre la cual se invoca la primitiva

Retorno: radio como flotante
*/
float getRadio (Circulo &circulo);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: calcula el area de un circulo con respecto al radio.

Condiciones:
    PRE: Circulo creado con crearCirculo().
    POST: valor del area de la superficie del circulo.

Parametros:
    circulo: instancia sobre la cual se invoca la primitiva


Retorno: flotante con el area del circulo.
*/
float calcularArea (Circulo &circulo);



#endif // CIRCULO_H_INCLUDED
