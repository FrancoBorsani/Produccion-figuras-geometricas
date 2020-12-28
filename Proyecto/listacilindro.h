#ifndef LISTACILINDRO_H_INCLUDED
#define LISTACILINDRO_H_INCLUDED

#include "cilindro.h"
#include "listacolor.h"

/*
    Definicion del Tipo de dato para el manejo de Lista dinámica de Cilindro
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
Descripción del caso de uso: agrega un cilindro a una lista dinámica, donde cada nodo es un cilindro. Además,
a medida que se ingresan se ordenan por área, por lo que no existe una función adicional para ordenar.


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
Descripción del caso de uso: imprime el color, radio, altura y área de los distintos cilindros
y la cantidad total de plástico utilizada por todos los cilindros existentes.

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
Descripción del caso de uso: muestra la cantidad total de plástico de los cilindros por color.

Condiciones:
    PRE: Debe existir algun cilindro para poder mostrar
    POST: Muestra por pantalla la cantidad de plàstico utilizada por figura-color (cilindro-color)

Parametros:
    referencia de la lista de cilindros (instancia sobre la cual se invoca la primitiva); lista de colores utilizados

Retorno: procedimiento (sin retorno).
*/
void imprimirPorColor(NodoCilindro *inicio, NodoColor *inicioColor);

#endif // LISTACILINDRO_H_INCLUDED
