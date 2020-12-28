#ifndef LISTACOLOR_H
#define LISTACOLOR_H
#include <iostream>

using namespace std;
/*
    Definicion del Tipo de dato para el manejo de Lista dinámica de Colores
    Atributos:
        data
        *sgte

    Axiomas:
        //
*/
//Definiciones de Tipos de Datos
struct NodoColor{
    std::string data;
    NodoColor *sgte;
};
/*------Definiciones de primitivas------*/
/*
Descripción del caso de uso: agrega un color a una lista dinámica, donde cada nodo es un color distinta. Los colores
 no se ordenan y se mantiene el orden de llegada / lectura.

Condiciones:
    PRE: Se debe haber creado al menos un color.
    POST: Figura agregada a la lista de figuras.

Parametros:
    referencia de la lista de colores (instancia sobre la cual se invoca la primitiva); color

Retorno: puntero a un elemento / color de la lista
*/
NodoColor* agregarNodo (NodoColor* inicio, std::string color);

#endif // LISTACOLOR_H
