#ifndef LISTAFIGURA_H_INCLUDED
#define LISTAFIGURA_H_INCLUDED

#include "figura.h"
#include "listacolor.h"

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista din�mica de Figura
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
//Definiciones de Tipos de Datos
struct NodoFigura{
    Figura data;
    NodoFigura *sgte;
};
/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: agrega una figura a una lista din�mica, donde cada nodo es un figura distinta (o igual,
seg�n corresponda). Las figuras no se ordenan y se mantiene el orden de llegada / lectura.

Condiciones:
    PRE: Se debe haber creado al menos una figura.
    POST: Figura agregada a la lista de figuras.

Parametros:
    referencia de la lista de figuras (instancia sobre la cual se invoca la primitiva); Figura

Retorno: puntero a un elemento / figura de la lista
*/

NodoFigura* agregarNodo (NodoFigura* inicio, Figura figura);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: imprime el color y el �rea de las figuras por orden de llegada.

Condiciones:
    PRE: Debe existir alguna figura para poder mostrar
    POST: Muestra por color cada una de las figuras por orden de llegada

Parametros:
    referencia de la lista de figuras (instancia sobre la cual se invoca la primitiva); colores

Retorno: procedimiento (sin retorno).
*/

void imprimirOrdenColor(NodoFigura *inicio, NodoColor *inicioColor);

#endif // LISTAFIGURA_H_INCLUDED
