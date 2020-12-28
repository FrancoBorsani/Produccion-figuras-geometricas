#include "listafigura.h"

using namespace std;

//---------------IMPLEMENTACION DE PRIMITIVAS---------------//

NodoFigura* agregarNodo (NodoFigura* inicio, Figura figura){
    NodoFigura* nuevo = new NodoFigura;
    nuevo->data = figura;
    nuevo->sgte = nullptr;
    if(inicio == nullptr){
        inicio = nuevo;
    }
    else{
        NodoFigura* aux = inicio;
        while(aux->sgte!=nullptr){
            aux = aux->sgte;
        }
        aux->sgte = nuevo;
    }
    return inicio;
}
//----------------------------------------------------------//
void imprimirOrdenColor(NodoFigura *inicio, NodoColor *inicioColor){
    for (NodoColor* c = inicioColor; c!=nullptr; c=c->sgte){
        int num = 1;
        cout<<"Color "<< c->data << " por orden de llegada:  "  <<endl;
        for (NodoFigura* p = inicio; p!=nullptr; p=p->sgte){
            if(getColor(p->data)== c->data){
                cout<< num <<"- "<< getNombre (p->data)<< " "<< getAtributo(p->data) <<endl;
                num++;
            }
        }
        cout<<endl;
    }
}
