#ifndef LISTACILINDRO_H_INCLUDED
#define LISTACILINDRO_H_INCLUDED

#include "cilindro.h"
#include "listacolor.h"

/*
    Definicion del Tipo de dato para el manejo de Lista din�mica de Cilindro
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
using namespace std;

//Definiciones de Tipos de Datos
struct NodoCilindro{
    Cilindro data;
    NodoCilindro *sgte;
};


/*------Definiciones de primitivas------*/
/*
Descripci�n del caso de uso: agrega un cilindro a una lista din�mica, donde cada nodo es un cilindro. Adem�s,
a medida que se ingresan se ordenan por �rea, por lo que no existe una funci�n adicional para ordenar.


Condiciones:
    PRE: Se debe haber creado al menos un cilindro.
    POST: Cilindro agregado a la lista de cilindros.

Parametros:
    referencia de la lista de cilindros (instancia sobre la cual se invoca la primitiva); Cilindro

Retorno: puntero a un elemento / cilindro de la lista
*/
NodoCilindro* agregarNodo (NodoCilindro* inicio, Cilindro cilindro);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: imprime el color, radio, altura y �rea de los distintos cilindros
y la cantidad total de pl�stico utilizada por todos los cilindros existentes.

Condiciones:
    PRE: Debe existir algun cilindro para poder mostrar
    POST: Muestra por pantalla cada uno de los cilindros y el total de plastico utilizado por el total de cilindros.

Parametros:
    referencia de la lista de cilindros (instancia sobre la cual se invoca la primitiva);

Retorno: procedimiento (sin retorno).
*/
void imprimir(NodoCilindro *inicio);
/*------------------------------------------------------------*/

/*
Descripci�n del caso de uso: muestra la cantidad total de pl�stico de los cilindros por color.

Condiciones:
    PRE: Debe existir algun cilindro para poder mostrar
    POST: Muestra por pantalla la cantidad de pl�stico utilizada por figura-color (cilindro-color)

Parametros:
    referencia de la lista de cilindros (instancia sobre la cual se invoca la primitiva); lista de colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoCilindro *inicio, NodoColor *inicioColor);

#endif // LISTACILINDRO_H_INCLUDED
