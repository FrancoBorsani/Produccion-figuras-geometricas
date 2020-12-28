#include "listacubo.h"
#include "cubo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoCubo* agregarNodo (NodoCubo* inicio, Cubo cubo){
    NodoCubo* nuevo = new NodoCubo;
    nuevo->data = cubo;
    nuevo->sgte = nullptr;
    if(inicio == nullptr || calcularArea(nuevo->data) < calcularArea (inicio->data)){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        NodoCubo* aux = inicio;
        //evaluo del segundo en adelante
        while(aux->sgte!=nullptr && calcularArea(aux->sgte->data) < calcularArea(nuevo->data)){
            aux = aux->sgte;
        }
        if(aux->sgte!=nullptr){
            nuevo->sgte = aux->sgte;
        }
        aux->sgte = nuevo;
    }
    return inicio;
}
//----------------------------------------------------------//
void imprimir(NodoCubo *inicio){
    double total = 0;
    for (NodoCubo* p = inicio; p!=nullptr; p=p->sgte){
            cout<<"Cubo " << "color: "<< getColor(p-> data)<< " lado: "<< getLado (p->data)<< " area: "<< calcularArea(p->data)<<" " <<endl;
        total = total +calcularArea(p->data);
    }
    cout<<"La cantidad total de plastico de los Cubos es: " << total <<endl;
}
//----------------------------------------------------------//
void imprimirPorColor(NodoCubo *inicio, NodoColor *inicioColor){
    for (NodoColor* c = inicioColor; c!=nullptr; c=c->sgte){
        double total = 0;
        for (NodoCubo* p = inicio; p!=nullptr; p=p->sgte){
            if(getColor(p->data)==c->data){
                total = total + calcularArea(p->data);
            }
        }
            cout<<"La cantidad total de plastico de los cubos de color "<< c->data << " es: " << total << endl;
    }
}
