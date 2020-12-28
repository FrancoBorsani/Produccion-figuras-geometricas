#include "listarectangulo.h"
#include "rectangulo.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoRectangulo* agregarNodo (NodoRectangulo* inicio, Rectangulo rectangulo){
    NodoRectangulo* nuevo = new NodoRectangulo;
    nuevo->data = rectangulo;
    nuevo->sgte = nullptr;
    if(inicio == nullptr || calcularArea(nuevo->data) < calcularArea (inicio->data)){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        NodoRectangulo* aux = inicio;
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
void imprimir(NodoRectangulo *inicio){
    double total = 0;
    for (NodoRectangulo* p = inicio; p!=nullptr; p=p->sgte){
            cout<<"Rectangulo " << "color: "<< getColor(p-> data)<< " base: "<< getBase (p->data)<< " altura: "<< getAltura (p->data)<< " area: "<< calcularArea(p->data)<<" " <<endl;
        total = total +calcularArea(p->data);
    }
        cout<<"La cantidad total de plastico de los rectangulos es: " << total << endl;
}
//----------------------------------------------------------//
void imprimirPorColor(NodoRectangulo *inicio, NodoColor *inicioColor){
    for (NodoColor* c = inicioColor; c!=nullptr; c=c->sgte){
        double total = 0;
        for (NodoRectangulo* p = inicio; p!=nullptr; p=p->sgte){
            if(getColor(p->data)==c->data){
                total = total + calcularArea(p->data);
            }
        }
       cout<<"La cantidad total de plastico de los rectangulos de color "<< c->data << " es: " << total << endl;
    }
}
