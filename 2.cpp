#include <iostream>
#include "ArregloDePuntos.h"
using namespace std;

    ArregloDePuntos(){
        x = 0;
        y = 0;
    }
    ArregloDePuntos(int x, int y){
        this-> x = x;
        this-> y = y;
    }
    void getX(){
        cout << x << endl;
    }
    void getY(){
        cout << y << endl;
    }
    void setX(int x){
        this-> x = x;
    }
    void setY(int y){
        this-> y = y;
    }
};

int main()
{
    const int arr1[3]={};
    int size1=3;
    const int arr2[4]={};
    int size2=4;
    ArregloDePuntos punto1(arr1, size1);
    ArregloDePuntos punto2(arr2, size2);
    ArregloDePuntos Punto[2] = {punto1, punto2};
    ArregloDePuntos *p = Punto[];
    
    return 0;
}
