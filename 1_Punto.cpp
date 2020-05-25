#include <iostream>
#include "Punto.h"
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

int main()
{
    Punto punto(3,4);
    punto.getX();
    punto.getY();
    punto.setX(6);
    punto.setY(9);
    punto.getX();
    punto.getY();
    return 0;
}
