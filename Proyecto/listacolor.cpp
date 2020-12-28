#include "listacolor.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoColor* agregarNodo (NodoColor* inicio, std::string color){
    NodoColor* nuevo = new NodoColor;
    nuevo->data = color;
    nuevo->sgte = nullptr;
    if(inicio == nullptr){
        inicio = nuevo;
    }
    else{
        NodoColor* aux = inicio;
        while(aux->sgte!=nullptr){
            aux = aux->sgte;
        }
        aux->sgte = nuevo;
    }
    return inicio;
}
