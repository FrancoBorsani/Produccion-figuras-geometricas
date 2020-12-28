#ifndef LISTATRIANGULO_H_INCLUDED
#define LISTATRIANGULO_H_INCLUDED

#include "triangulo.h"
#include "listacolor.h"

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista din�mica de Triangulo
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
//Definiciones de Tipos de Datos
struct NodoTriangulo{
    Triangulo data;
    NodoTriangulo *sgte;
};


/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: agrega un tri�ngulo a una lista din�mica, donde cada nodo es un tri�ngulo. Adem�s,
a medida que se ingresan se ordenan por �rea, por lo que no existe una funci�n adicional para ordenar.

Condiciones:
    PRE: Se debe haber creado al menos un triangulo.
    POST: Triangulo agregado a la lista de triangulos.

Parametros:
    referencia de la lista de triangulos (instancia sobre la cual se invoca la primitiva); Triangulo

Retorno: puntero a un elemento / cubo de la lista
*/
NodoTriangulo* agregarNodo (NodoTriangulo* inicio, Triangulo Triangulo);
/*------------------------------------------------------------*/
/*
Descripci�n del caso de uso: imprime el color, cateto mayor, cateto menor y �rea de los distintos tri�ngulos
y la cantidad total de pl�stico utilizada por todos los tri�ngulos existentes.

Condiciones:
    PRE: Debe existir algun triangulo para poder mostrar
    POST: Muestra por pantalla cada uno de los triangulos y el total de plastico utilizado por el total de triangulos.

Parametros:
    referencia de la lista de triangulos (instancia sobre la cual se invoca la primitiva);

Retorno: procedimiento (sin retorno).
*/
void imprimir(NodoTriangulo *inicio);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: muestra la cantidad total de pl�stico de los tri�ngulos por color.

Condiciones:
    PRE: Debe existir algun triangulo para poder mostrar
    POST: Muestra por pantalla la cantidad de plastico utilizada por figura-color (triangulo-color)

Parametros:
    referencia de la lista de triangulos (instancia sobre la cual se invoca la primitiva); colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoTriangulo *inicio, NodoColor *inicioColor);


#endif // LISTATRIANGULO_H_INCLUDED
