#ifndef LISTARECTANGULO_H_INCLUDED
#define LISTARECTANGULO_H_INCLUDED

#include "rectangulo.h"
#include "listacolor.h"

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista din�mica de Rectangulo
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
//Definiciones de Tipos de Datos
struct NodoRectangulo{
    Rectangulo data;
    NodoRectangulo *sgte;
};

/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: agrega un rect�ngulo a una lista din�mica, donde cada nodo es un rect�ngulo. Adem�s,
a medida que se ingresan se ordenan por �rea, por lo que no existe una funci�n adicional para ordenar.

Condiciones:
    PRE: Se debe haber creado al menos un rectangulo.
    POST: Rectangulo agregado a la lista de rectangulos.

Parametros:
    referencia de la lista de rectangulos (instancia sobre la cual se invoca la primitiva); Rectangulo

Retorno: puntero a un elemento / rectangulo de la lista
*/
NodoRectangulo* agregarNodo (NodoRectangulo* inicio, Rectangulo rectangulo);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: imprime el color, la base, la altura y �rea de los distintos rect�ngulos
y la cantidad total de pl�stico utilizada por todos los rect�ngulos existentes.

Condiciones:
    PRE: Debe existir algun rectangulo para poder mostrar
    POST: Muestra por pantalla cada uno de los rectangulos y el total de plastico utilizado por el total de rectangulos.

Parametros:
    referencia de la lista de rectangulos (instancia sobre la cual se invoca la primitiva);

Retorno: procedimiento (sin retorno).
*/
void imprimir(NodoRectangulo *inicio);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: muestra la cantidad total de pl�stico de los rect�ngulos por color.

Condiciones:
    PRE: Debe existir algun rectangulo para poder mostrar
    POST: Muestra por pantalla la cantidad de plastico utilizada por figura-color (rectangulo-color)

Parametros:
    referencia de la lista de rectangulos (instancia sobre la cual se invoca la primitiva); colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoRectangulo *inicio, NodoColor *inicioColor);

#endif // LISTARECTANGULO_H_INCLUDED
