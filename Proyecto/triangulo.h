#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include <iostream>

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Circulos
    Atributos:
        color
        cMayor
        cMenor

    Axiomas:
        color != empty
        base > 0
        altura > 0
*/


//Definiciones de Tipos de Datos
typedef struct{
    string color;
    float cMayor;
    float cMenor;
}Triangulo;

/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: al tri�ngulo creado desde el main se le asigna el color, el cateto mayor y el cateto menor.

Condiciones:
    PRE: El triangulo no debe haber sido creado.
    POST: El triangulo queda creado para su posterior uso.

Parametros:
    referencia del triangulo (instancia sobre la cual se invoca la primitiva); color, cateto mayor y cateto menor que le ser�n asignados.

Retorno: procedimiento (sin retorno).
*/
void crearTriangulo(Triangulo &triangulo, string color, float cMayor, float cMenor);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: setea / modifica el valor del color del tri�ngulo que se env�a por par�metro.

Condiciones:
    PRE: Triangulo creado con crearTriangulo()
    POST: El campo color pasa a contener el color ingresado

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva; color: color a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setColor (Triangulo &triangulo, string color);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: retorna / devuelve el color de un determinado tri�ngulo.

Condiciones:
    PRE: Triangulo creado con crearTriangulo()
    POST: devuelve el dato contenido en el campo color

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva

Retorno: color como cadena de caracteres
*/
string getColor (Triangulo &triangulo);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: setea / modifica el valor del cateto mayor del tri�ngulo que se env�a por par�metro.

Condiciones:
    PRE: Triangulo creado con crearTriangulo()
    POST: El campo cMayor pasa a contener el cMayor ingresado

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva; cMayor: cMayor a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setCMayor (Triangulo &triangulo, float cMayor);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: devuelve / retorna el valor del cateto mayor de un determinado tri�ngulo.

Condiciones:
    PRE: Triangulo creado con crearTriangulo()
    POST: devuelve el dato contenido en el campo cMayor

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva

Retorno: cMayor como flotante
*/
float getCMayor (Triangulo &triangulo);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: setea / modifica el valor del cateto menor del tri�ngulo que se env�a por par�metro.

Condiciones:
    PRE: Triangulo creado con crearTriangulo()
    POST: El campo cMenor pasa a contener el cMenor ingresado

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva; cMenor: cMenor a ingresarse

Retorno: procedimiento (sin retorno).
*/
void setCMenor (Triangulo &triangulo, float cMenor);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: devuelve / retorna el valor del cateto menor de un determinado tri�ngulo.

Condiciones:
    PRE: Triangulo creado con crearTriangulo()
    POST: devuelve el dato contenido en el campo cMenor

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva

Retorno: cMenor como flotante
*/
float getCMenor (Triangulo &triangulo);


/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: calcula el area de un tri�ngulo con respecto al cateto mayor y al cateto menor del mismo.

Condiciones:
    PRE: Triangulo creado con crearTriangulo().
    POST: valor del area de la superficie del triangulo.

Parametros:
    triangulo: instancia sobre la cual se invoca la primitiva


Retorno: flotante con el area del triangulo.
*/
float calcularArea (Triangulo &triangulo);


#endif // TRIANGULO_H_INCLUDED
