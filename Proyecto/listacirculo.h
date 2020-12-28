#ifndef LISTACIRCULO_H_INCLUDED
#define LISTACIRCULO_H_INCLUDED


#include "circulo.h"
#include "listacolor.h"

using namespace std;

/*
    Definicion del Tipo de dato para el manejo de Lista din�mica de Circulo
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
//Definiciones de Tipos de Datos
struct NodoCirculo{
    Circulo data;
    NodoCirculo *sgte;
};

/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: agrega un circulo a una lista din�mica, donde cada nodo es un circulo. Adem�s,
a medida que se ingresan se ordenan por �rea, por lo que no existe una funci�n adicional para ordenar.

Condiciones:
    PRE: Se debe haber creado al menos un circulo.
    POST: Circulo agregado a la lista de C�rculos.

Parametros:
    referencia de la lista de circulos (instancia sobre la cual se invoca la primitiva); Circulo

Retorno: puntero a un elemento / circulo de la lista
*/
NodoCirculo* agregarNodo (NodoCirculo* inicio, Circulo circulo);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: imprime el color, radio y �rea de los distintos circulos
y la cantidad total de pl�stico utilizada por todos los circulos existentes.

Condiciones:
    PRE: Debe existir algun circulo para poder mostrar
    POST: Muestra por pantalla cada uno de los circulos y el total de plastico utilizado por el total de circulos.

Parametros:
    referencia de la lista de circulos (instancia sobre la cual se invoca la primitiva);

Retorno: procedimiento (sin retorno).
*/
void imprimir(NodoCirculo *inicio);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: muestra la cantidad total de pl�stico de los circulos por color.

Condiciones:
    PRE: Debe existir algun circulo para poder mostrar
    POST: Muestra por pantalla la cantidad de plastico utilizada por figura-color (circulo-color)

Parametros:
    referencia de la lista de circulos (instancia sobre la cual se invoca la primitiva); colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoCirculo *inicio, NodoColor *inicioColor);


#endif // LISTACIRCULO_H_INCLUDED
