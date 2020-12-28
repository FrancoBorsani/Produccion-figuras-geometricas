#include "listatriangulo.h"
#include "triangulo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoTriangulo* agregarNodo (NodoTriangulo* inicio, Triangulo triangulo){
    NodoTriangulo* nuevo = new NodoTriangulo;
    nuevo->data = triangulo;
    nuevo->sgte = nullptr;
    if(inicio == nullptr || calcularArea(nuevo->data) < calcularArea (inicio->data)){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        NodoTriangulo* aux = inicio;
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
void imprimir(NodoTriangulo *inicio){
    double total = 0;
    for (NodoTriangulo* p = inicio; p!=nullptr; p=p->sgte){
        cout<<"Triangulo " << "color: "<< getColor(p-> data)<< " cateto mayor: "<< getCMayor (p->data)<< " cateto menor: "<< getCMenor (p->data)<< " area: "<< calcularArea(p->data)<<" " <<endl;
        total = total +calcularArea(p->data);
    }
    cout<<"La cantidad total de plastico de los triangulos es: " << total <<endl;
}
//----------------------------------------------------------//
void imprimirPorColor(NodoTriangulo *inicio, NodoColor *inicioColor){
    for (NodoColor* c = inicioColor; c!=nullptr; c=c->sgte){
        double total = 0;
        for (NodoTriangulo* p = inicio; p!=nullptr; p=p->sgte){
            if(getColor(p->data)==c->data){
                total = total + calcularArea(p->data);
            }
        }
        cout<<"La cantidad total de plastico de los triangulos de color "<< c->data << " es: " << total <<endl;
    }
}
