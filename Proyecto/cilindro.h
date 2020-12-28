#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED
#include <iostream>

using namespace std;

/*
    Definicion del Tipo de dato para el manejo de Cilindros
    Atributos:
        color
        radio
        altura

    Axiomas:
        color != empty
        radio > 0
        altura >= 0
*/

//Definiciones de Tipos de Datos
typedef struct{
    string color;
    float radio;
    float altura;
}Cilindro;

/*------Definiciones de primitivas------*/
/*
Descripción del caso de uso: al cilindro creado desde el main se le asigna el color, radio y altura.

Condiciones:
    PRE: El cilindro no debe hacer sido creado.
    POST: El cilindro queda creado para su posterior uso.

Parametros:
    referencia del cilindro (instancia sobre la cual se invoca la primitiva); color, radio y altura que le serán asignados.

Retorno: procedimiento (sin retorno).
*/
void crearCilindro(Cilindro &cilindro, string color, float radio, float altura);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: setea / modifica el valor del color del cilindro que se envía por parámetro.

Condiciones:
    PRE: Cilindro creado con crearCilindro()
    POST: El campo color pasa a contener el color ingresado

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva; color: color a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setColor (Cilindro &cilindro, string color);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: retorna / devuelve el color de un determinado cilindro.

Condiciones:
    PRE: Cilindro creado con crearCilindro()
    POST: devuelve el dato contenido en el campo color

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva

Retorno: color como cadena de caracteres
*/
string getColor (Cilindro &cilindro);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor del radio del cilindro que se envía por parámetro.

Condiciones:
    PRE: Cilindro creado con crearCilindro()
    POST: El campo radio pasa a contener el radio ingresado

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva; radio: radio a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setRadio (Cilindro &cilindro, float radio);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: devuelve / retorna el radio de un determinado cilindro.

Condiciones:
    PRE: Cilindro creado con crearCirculo()
    POST: devuelve el dato contenido en el campo radio

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva

Retorno: radio como flotante
*/

float getRadio (Cilindro &cilindro);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: setea / modifica el valor de la altura del cilindro que se envía por parámetro.

Condiciones:
    PRE: Cilindro creado con crearCilindro()
    POST: El campo altura pasa a contener la altura ingresada

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva; altura: altura a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setAltura (Cilindro &cilindro, float altura);
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: retorna / devuelve la altura de un determinado cilindro.

Condiciones:
    PRE: Cilindro creado con crearCirculo()
    POST: devuelve el dato contenido en el campo altura

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva

Retorno: radio como flotante
*/
float getAltura (Cilindro &cilindro);
/*------------------------------------------------------------*/

/*
Descripción del caso de uso: calcula el area de un cilindro con respecto al radio y la altura.

Condiciones:
    PRE: Cilindro creado con crearCirculo().
    POST: valor del area de la superficie del cilindro.

Parametros:
    cilindro: instancia sobre la cual se invoca la primitiva

Retorno: flotante con el area del cilindro.
*/
float calcularArea (Cilindro &cilindro);



#endif // CILINDRO_H_INCLUDED
