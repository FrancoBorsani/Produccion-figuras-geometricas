#include "listacilindro.h"
#include "cilindro.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoCilindro* agregarNodo (NodoCilindro* inicio, Cilindro cilindro){
    NodoCilindro* nuevo = new NodoCilindro;
    nuevo->data = cilindro;
    nuevo->sgte = nullptr;
    if(inicio == nullptr || calcularArea(nuevo->data) < calcularArea (inicio->data)){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        NodoCilindro* aux = inicio;
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
void imprimir(NodoCilindro *inicio){
    double total = 0;
    for (NodoCilindro* p = inicio; p!=nullptr; p=p->sgte){
        cout<<"Cilindro " << "color: "<< getColor(p-> data)<< " radio: "<< getRadio (p->data)<< " altura: "<< getAltura (p->data)<< " area: "<< calcularArea(p->data)<<" " <<endl;
        total = total +calcularArea(p->data);
    }
        cout<<"La cantidad total de plastico de los cilindros es: " << total <<endl;
}
//----------------------------------------------------------//
void imprimirPorColor(NodoCilindro *inicio, NodoColor *inicioColor){
    for (NodoColor* c = inicioColor; c!=nullptr; c=c->sgte){
        double total = 0;
        for (NodoCilindro* p = inicio; p!=nullptr; p=p->sgte){
            if(getColor(p->data)==c->data){
                total = total + calcularArea(p->data);
            }
        }
       cout<<"La cantidad total de plastico de los cilindros de color "<< c->data << " es: " << total << endl;
    }
}
