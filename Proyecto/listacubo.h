#ifndef LISTACUBO_H_INCLUDED
#define LISTACUBO_H_INCLUDED

#include "cubo.h"
#include "listacolor.h"

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista dinámica de Cubo
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
Descripción del caso de uso: agrega un cubo a una lista dinámica, donde cada nodo es un cubo. Además,
a medida que se ingresan se ordenan por área, por lo que no existe una función adicional para ordenar.

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
Descripción del caso de uso: imprime el color, longitud de un lado y el area de los distintos cubos
y la cantidad total de plástico utilizada por todos los cubos existentes.

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
Descripción del caso de uso: muestra la cantidad total de plástico de los cubos por color.

Condiciones:
    PRE: Debe existir algun cubo para poder mostrar
    POST: Muestra por pantalla la cantidad de plastico utilizada por figura-color (cubo-color)

Parametros:
    referencia de la lista de cubos (instancia sobre la cual se invoca la primitiva); colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoCubo *inicio, NodoColor *inicioColor);

#endif // LISTACUBO_H_INCLUDED
