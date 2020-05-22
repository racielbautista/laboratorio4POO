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
    Punto punto1(3,4);
    punto1.getX();
    punto1.getY();
    punto1.setX(6);
    punto1.setY(9);
    punto1.getX();
    punto1.getY();
    return 0;
}
