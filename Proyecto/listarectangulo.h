#ifndef LISTARECTANGULO_H_INCLUDED
#define LISTARECTANGULO_H_INCLUDED

#include "rectangulo.h"
#include "listacolor.h"

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista dinámica de Rectangulo
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
Descripción del caso de uso: agrega un rectángulo a una lista dinámica, donde cada nodo es un rectángulo. Además,
a medida que se ingresan se ordenan por área, por lo que no existe una función adicional para ordenar.

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
Descripción del caso de uso: imprime el color, la base, la altura y área de los distintos rectángulos
y la cantidad total de plástico utilizada por todos los rectángulos existentes.

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
Descripción del caso de uso: muestra la cantidad total de plástico de los rectángulos por color.

Condiciones:
    PRE: Debe existir algun rectangulo para poder mostrar
    POST: Muestra por pantalla la cantidad de plastico utilizada por figura-color (rectangulo-color)

Parametros:
    referencia de la lista de rectangulos (instancia sobre la cual se invoca la primitiva); colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoRectangulo *inicio, NodoColor *inicioColor);

#endif // LISTARECTANGULO_H_INCLUDED
