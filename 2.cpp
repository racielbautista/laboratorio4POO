#include <iostream>
#include "ArregloDePuntos.h"
using namespace std;

void ArregloDePuntos::redimensionar(int n){        
        size = n;
}
void ArregloDePuntos::push_back(const Punto &p){        
        *(arr+size)=*p;
}
void ArregloDePuntos::insert(const int posicion, const Punto &p){        
        *(arr+posicion)=*p;
}
void ArregloDePuntos::remove(const int posicion){        
        //no se como remover un elemento
}
int ArregloDePuntos::getSize(){        
        return size;
}
void ArreglodePuntos::clear(){
        //se podria usar un for, pero no se como limpiar el arreglo
}
int main()
{
    const int arr1[3]={};
    int size1=3;
    const int arr2[4]={};
    int size2=4;
    const int arr3[4]={};
    int size3=4;

    ArregloDePuntos punto1(arr1, size1);
    ArregloDePuntos punto2(arr2, size2);
    ArregloDePuntos punto3(arr3, size3);
    ArregloDePuntos *p = punto3;
    ArregloDePuntos Punto[2] = {punto1, punto2};
    ArregloDePuntos *p = Punto[];
    Punto.push_back(p);
    Punto.insert(1, p);
    Punto.remove(1); //remover posicion 1
    cout<<punto1.getSize();
    Punto.clear();
    return 0;
}
