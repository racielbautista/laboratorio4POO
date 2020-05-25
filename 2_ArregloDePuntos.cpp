#include <iostream>
#include "ArregloDePuntos.h"
using namespace std;

void Punto::getX(){
        cout << x << endl;
    }
void Punto::getY(){
        cout << y << endl;
    }
void Punto::setX(int x){
        this-> x = x;
    }
void Punto::setY(int y){
        this-> y = y;
    }

void ArregloDePuntos::redimensionar(int nuevoTam){        
        Punto *pts = new Punto[n];
        int tamMenor = (nuevoTam > size ? size : nuevoTam);        
        for (int i = 0; i < tamMenor; i++)
                pts [i] = puntos [i];
        delete[] puntos;
        size = nuevoTam;
        puntos = pts;
}

void ArregloDePuntos::push_back(const Punto &p){        
        redimensionar(size + 1);
        puntos[size - 1] = p;
}

void ArregloDePuntos::insert(const int posicion, const Punto &p){        
        redimensionar(size + 1);
        for ( int i = size - 1; i > posicion; i--){
                puntos[i] = puntos[i-1];
        }
        puntos[posicion] = p;

}
void ArregloDePuntos::remove(const int posicion){        
        if(posicion >= 0 && posicion < size){
                for(int i = posicion; i < size -2; i++){
                        puntos[i] = puntos[i + 1];
                }
                redimensionar(size - 1);
        }
}
int ArregloDePuntos::getSize(){        
        return size;
}
void ArreglodePuntos::clear(){
        redimensionar(0);
}


int main()
{
    Punto punto1(3,4);
    Punto punto2(7,8);
    Punto punto3(1,2);
    Punto punto4(6,2);
    punto1.getY();
    
    ArregloDePuntos arr1;
    //arr1.puntos[0].getX();
        
    Punto.push_back(punto3);
    Punto.insert(1, punto4);
    Punto.remove(1); //remover posicion 1
    Punto.clear();
    
}
