#include <iostream>                 //Libreria para input/output
#include <stdlib.h>                 //Define varias funciones de proposito general
#include <string.h>                 //Operaciones con strings / cadenas de caracteres
#include <fstream>                  //Define clases para operaciones de lectura, escritura y lectura / escritura en archivos
#include "circulo.h"                //Declaracion de circulo
#include "listacirculo.h"           //Declaracion de lista donde cada nodo contiene un circulo
#include "cilindro.h"               //Declaracion de cilindro
#include "listacilindro.h"          //Declaracion de lista donde cada nodo contiene un cilindro
#include "cubo.h"                   //Declaracion de cubo
#include "listacubo.h"              //Declaracion de lista donde cada nodo contiene un cubo
#include "triangulo.h"              //Declaracion de triangulo
#include "listatriangulo.h"         //Declaracion de lista donde cada nodo contiene un triangulo
#include "rectangulo.h"             //Declaracion de rectangulo
#include "listarectangulo.h"        //Declaracion de lista donde cada nodo contiene un rectangulo
#include "figura.h"                 //Declaracion de figura, la cual es un "modelo" que representa a cualquier figura
#include "listafigura.h"            //Declaracion de lista donde cada nodo contiene una figura
#include <string>
#include "listacolor.h"             //Declaracion de lista donde cada nodo contiene un color

using namespace std;                //Define el contexto en el que se definen los nombres. Evita hacer, por ejemplo, std::cout

//TODAS LAS FIGURAS QUE PODRÍAN SER CARGADAS.
enum tipoFigura {
    circulo,
    cilindro,
    cubo,
    triangulo,
    rectangulo,
    otro
};

/*
Descripción del caso de uso: ante la figura leida desde el archivo, se verifica qué tipo de figura es
y se retorna como enum, con el fin de poder hacer validaciones posteriormente.

Condiciones:
    PRE: La figura tuvo que haber sido leido del archivo
    POST: Tipo de figura como enum

Parametros:
    string para saber si corresponde a alguna de las figuras con las que se trabaja


Retorno: tipo de figura (enum)
*/
tipoFigura convertirTipo(const string &figura) {
    if (figura == "circulo")    return circulo;
    if (figura == "cilindro")   return cilindro;
    if (figura == "cubo")       return cubo;
    if (figura == "triangulo")  return triangulo;
    if (figura == "rectangulo") return rectangulo;
    return otro;
}

/*
Descripción del caso de uso: cambia el dato recibido, el cual contiene una coma para el decimal, en
un valor con una notación funcional (decimales con punto) para trabajar con el mismo.

Condiciones:
    PRE: El dato tuvo que haber sido leido del archivo
    POST: Conversión a notación formal del dato leido del archivo.

Parametros:
    dato de tipo string, donde se analiza el mismo en busca de una coma, esto con el fin de ser reemplazada con
    un punto para poder trabajar con el dato posteriormente.


Retorno: cadena de caracteres con el dato leido
*/
string cambiarComaPorPunto(string dato){
    for(int i=0; i<dato.size(); i++){
        if(dato[i]==','){
           dato[i]='.';
        }
    }
    return dato;
}
/*------------------------------------------------------------*/
/*
Descripción del caso de uso: todos los colores disponibles se guardan en una lista, por lo que el método
busca dentro de esta lista si el color leido del archivo anteriormente había sido cargado / leido.

Condiciones:
    PRE: Se haya leido un color de un archivo
    POST: Condición de color encontrado o, no encontrado para posteriormente agregarlo

Parametros:
    lista con colores, donde se recorre con el fin de buscar algun color que coincida con el atributo "color", el cual
    es leido del archivo


Retorno: boolean con respecto a la busqueda del color.
*/
bool bucarColor(NodoColor *inicio, string color){
    bool b =false;
    while (b==false && inicio != nullptr ){
        if (inicio->data == color){
            b=true;
        }
        inicio = inicio->sgte;
    }
    return b;
}



/*------------------------------------------------------------*/
int main()
{
    NodoCirculo *listaCirculo = nullptr;                //Crea "listaCirculo" que es una lista donde cada nodo contiene un circulo, y tiene un puntero al nodo siguiente
    NodoCilindro *listaCilindro = nullptr;              //Crea "listaCilindro" que es una lista donde cada nodo contiene un cilindro, y tiene un puntero al nodo siguiente
    NodoTriangulo *listaTriangulo = nullptr;            //Crea "listaTriangulo" que es una lista donde cada nodo contiene un triangulo, y tiene un puntero al nodo siguiente
    NodoCubo *listaCubo = nullptr;                      //Crea "listaCirculo" que es una lista donde cada nodo contiene un circulo, y tiene un puntero al nodo siguiente
    NodoRectangulo *listaRectangulo = nullptr;         //Crea "listaRectangulo" que es una lista donde cada nodo contiene un rectangulo, y tiene un puntero al nodo siguiente
    NodoFigura *listaFigura = nullptr;                  //Crea "listaFigura" que es una lista donde cada nodo contiene el nombre, color y area de la figura correspondiente
    NodoColor *listaColor = nullptr;                    //Crea "listaColor" que es una lista donde cada nodo contiene un color diferente;
    ifstream archivo;                                   //Crea una referencia para lectura
    Circulo circulo;                                    //Crea un Circulo
    Cilindro cilindro;                                  //Crea un Cilindro
    Triangulo triangulo;                                //Crea un Triangulo
    Cubo cubo;                                          //Crea un Cubo
    Rectangulo rectangulo;                              //Crea un Rectangulo
    Figura fig;                                         //Crea una figura
    string figura;                                      //Cadena que almacenara el tipo de figura
    string color;                                       //Cadena que almacenara el color de la figura
    string dato1;                                       //Cadena que tendra el primer valor de la figura
    string dato2;                                       //Cadena que tendra el segundo valor de la figura, en caso de corresponder
    bool seguir=true;                                   //se crea la variable para el menu
    int opc;                                            //se crea la variable para que el usuario seleccione opcion deseada
    float valor1;                                       //Tendra el valor del dato1 como flotante
    float valor2;                                       //Tendra el valor del dato2 como flotante
    tipoFigura objeto = otro;                           //Definicion dela variable enum
    int cantColores = 0;                                //variable que almacena la cantidad de colores que van a habere en el archivo
    archivo.open("FigurasEjemplo.txt", ios::in);        //Se abre el archivo en modo lectura
    if(archivo.fail()){                                 //Si el archivo no se encuentra o no esta disponible o presenta errores
        cout<<"No se pudo abrir el archivo";            //Muestra el error
        exit(1);                                        //Cierra el programa
    }
    while(!archivo.eof()){                              //Mientras no sea el final del archivo
    //Lee hasta que se encuentra con un espacio
        archivo >> figura;                              //Lee el tipo de figura
        archivo >> color;                               //Lee el color de la figura
        if(bucarColor(listaColor, color)==false && color!=""){     //Verifica si el color alguna vez fue cargado
            listaColor = agregarNodo(listaColor, color);           //Agrega el color a la lista con todos los colores.
            cantColores++;                                         //aumenta la cantidad de colores
}
        if(cantColores>10){                                       //Si hay más de 10 colores cargados se informará al usuario y se saldrá
                                                        //de la ejecución del programa.
            cout<<"Hay mas de 10 colores. Verifique el archivo de carga."<<endl;
            system("pause");
            exit(1);
            }

        archivo >> dato1;                               //Lee el primer valor de la figura
        if(figura.compare("cilindro") == 0 || figura.compare("rectangulo") == 0 || figura.compare("triangulo") == 0){   //Si la figura leida es un cilindro, rectangulo o un triangulo
            dato1.erase(dato1.length()-1);                      //Elimina el ";" del string
            archivo >> dato2;                                   //Lee el segundo valor
            dato2 = cambiarComaPorPunto(dato2);                 //Verifica si el segundo valor tiene decimales y lo cambia si es necesario
            valor2=stof(dato2);                                 //stof() pasa la variable "dato2" a float
        }
        if(dato1!=""){
            dato1 = cambiarComaPorPunto (dato1);
            valor1=stof(dato1);
        }

        objeto = convertirTipo(figura);                             //Convierte el string al valor del enum
        //VERIFICO DE QUÉ TIPO DE FIGURA DE TRATA.
        switch (objeto) {
            case 0: crearCirculo(circulo, color, valor1);
                    listaCirculo = agregarNodo(listaCirculo, circulo);
                    crearFigura(fig, figura, color, "("+dato1+")");
                    listaFigura = agregarNodo(listaFigura, fig);
                break;
            case 1: crearCilindro(cilindro, color, valor1, valor2);
                    listaCilindro = agregarNodo(listaCilindro, cilindro);
                    crearFigura(fig, figura, color, "("+dato1+"; "+dato2+")");
                    listaFigura = agregarNodo(listaFigura, fig);
                break;
            case 2: crearCubo(cubo, color, valor1);
                    listaCubo = agregarNodo(listaCubo, cubo);
                    crearFigura(fig, figura, color, "("+dato1+")");
                    listaFigura = agregarNodo(listaFigura, fig);
                break;
            case 3: crearTriangulo(triangulo, color, valor1, valor2);
                    listaTriangulo = agregarNodo(listaTriangulo, triangulo);
                    crearFigura(fig, figura, color, "("+dato1+"; "+dato2+")");
                    listaFigura = agregarNodo(listaFigura, fig);
                break;
            case 4: crearRectangulo(rectangulo, color, valor1, valor2);
                    listaRectangulo = agregarNodo(listaRectangulo, rectangulo);
                    crearFigura(fig, figura, color, "("+dato1+"; "+dato2+")");
                    listaFigura = agregarNodo(listaFigura, fig);
                break;
            default: std::cout << "Error" << endl;
        }
    }
    archivo.close();                                            //Cierra la referencia de lectura
    //MENÚ DEL USUARIO
    while(seguir == true){
        system("cls");
        cout << "Ingrese la opcion deseada: " << endl;
        cout << "1.- Listar figuras ordenadas por tamaño de sus areas junto con la cantidad de plastico que se uso por cada una" << endl;
        cout << "2.- Listar cantidad de plastico utilizado por figura y color " << endl;
        cout << "3.- Listar dentro de cada color, el orden en que se fueron produciendo las distintas figuras " << endl;
        cout << "0.- Finalizar " << endl;
        cin >> opc;

        switch (opc){
            case 0:
                system("cls");
                cout << "Gracias por utilizar nuestro sistema"<< endl;
                seguir = false;
            break;
            case 1:
                system("cls");
                imprimir(listaCirculo);
                cout<<endl;
                cout<<endl;
                imprimir(listaCilindro);
                cout<<endl;
                cout<<endl;
                imprimir(listaTriangulo);
                cout<<endl;
                cout<<endl;
                imprimir(listaCubo);
                cout<<endl;
                cout<<endl;
                imprimir(listaRectangulo);
                cout<<endl;
                cout<<endl;
                system("pause");
            break;
            case 2:
                system("cls");
                imprimirPorColor(listaCirculo, listaColor);
                cout<<endl;
                cout<<endl;
                imprimirPorColor(listaCilindro, listaColor);
                cout<<endl;
                cout<<endl;
                imprimirPorColor(listaTriangulo, listaColor);
                cout<<endl;
                cout<<endl;
                imprimirPorColor(listaCubo, listaColor);
                cout<<endl;
                cout<<endl;
                imprimirPorColor(listaRectangulo, listaColor);
                cout<<endl;
                cout<<endl;
                system("pause");
            break;
            case 3:
                system("cls");
                imprimirOrdenColor(listaFigura, listaColor);
                system("pause");
            break;
            default:
                system("cls");
                cout << "El valor ingresado es incorrecto. Ingrese nuevamente la opcion correcta";
                 system("pause");
        }
    }

    //LIBERA LA MEMORIA DE LAS REFERENCIAS A LAS LISTAS
    delete listaCirculo;
    delete listaCilindro;
    delete listaTriangulo;
    delete listaCubo;
    delete listaRectangulo;
    delete listaFigura;


    return 0;
}
