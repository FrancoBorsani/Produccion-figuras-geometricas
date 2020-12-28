#include "listacirculo.h"
#include "circulo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoCirculo* agregarNodo (NodoCirculo* inicio, Circulo circulo){
    NodoCirculo* nuevo = new NodoCirculo;
    nuevo->data = circulo;
    nuevo->sgte = nullptr;
    if(inicio == nullptr || calcularArea(nuevo->data) < calcularArea (inicio->data)){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        NodoCirculo* aux = inicio;
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
void imprimir(NodoCirculo *inicio){
    double total = 0;
    for (NodoCirculo* p = inicio; p!=nullptr; p=p->sgte){
            cout<<"Circulo " << "color: "<< getColor(p-> data)<< " radio: "<< getRadio (p->data)<< " area: "<< calcularArea(p->data)<<" " <<endl;
        total = total +calcularArea(p->data);
    }
        cout<<"La cantidad total de plastico de los circulos es: " << total <<endl;
}
//----------------------------------------------------------//
void imprimirPorColor(NodoCirculo *inicio, NodoColor *inicioColor){
    for (NodoColor* c = inicioColor; c!=nullptr; c=c->sgte){
        double total = 0;
        for (NodoCirculo* p = inicio; p!=nullptr; p=p->sgte){
            if(getColor(p->data)== c->data){
                total = total + calcularArea (p->data);
            }
        }
        std::cout<<"La cantidad total de plastico de los circulos de color "<< c->data << " es: " << total << std::endl;
    }
}
