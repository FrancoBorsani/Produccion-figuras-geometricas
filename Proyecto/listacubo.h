#ifndef LISTACUBO_H_INCLUDED
#define LISTACUBO_H_INCLUDED

#include "cubo.h"
#include "listacolor.h"

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista din�mica de Cubo
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
//Definiciones de Tipos de Datos
struct NodoCubo{
    Cubo data;
    NodoCubo *sgte;
};

/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: agrega un cubo a una lista din�mica, donde cada nodo es un cubo. Adem�s,
a medida que se ingresan se ordenan por �rea, por lo que no existe una funci�n adicional para ordenar.

Condiciones:
    PRE: Se debe haber creado al menos un cubo.
    POST: Cubo agregado a la lista de cubos.

Parametros:
    referencia de la lista de cubos (instancia sobre la cual se invoca la primitiva); Cubo

Retorno: puntero a un elemento / cubo de la lista
*/
NodoCubo* agregarNodo (NodoCubo* inicio, Cubo cubo);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: imprime el color, longitud de un lado y el area de los distintos cubos
y la cantidad total de pl�stico utilizada por todos los cubos existentes.

Condiciones:
    PRE: Debe existir algun cubo para poder mostrar
    POST: Muestra por pantalla cada uno de los cubos y el total de plastico utilizado por el total de cubos.

Parametros:
    referencia de la lista de cubos (instancia sobre la cual se invoca la primitiva);

Retorno: procedimiento (sin retorno).
*/

void imprimir(NodoCubo *inicio);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: muestra la cantidad total de pl�stico de los cubos por color.

Condiciones:
    PRE: Debe existir algun cubo para poder mostrar
    POST: Muestra por pantalla la cantidad de plastico utilizada por figura-color (cubo-color)

Parametros:
    referencia de la lista de cubos (instancia sobre la cual se invoca la primitiva); colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoCubo *inicio, NodoColor *inicioColor);

#endif // LISTACUBO_H_INCLUDED
