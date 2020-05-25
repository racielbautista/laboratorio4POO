class Punto{
private:
    int x;
    int y;
public:    
    Punto(){
        x = 0;
        y = 0;
    }
    Punto(int x, int y){
        this-> x = x;
        this-> y = y;
    }
    void getX();
    void getY();
    void setX(int x);
    void setY(int y);
};

class ArregloDePuntos{
private:

public:   
    Punto* puntos;
    void redimensionar(int size); 

    ArregloDePuntos(){    
        puntos = new Punto[0];
        size = 0;
    }
    ArregloDePuntos(const Punto puntosExt[], int size){    
        puntos = new Punto[size];
        this-> size = size;
        for (int i = 0; i < size; i++){
            puntos[i] = puntosExt[i];
        }
    }
    ArregloDePuntos(ArregloDePuntos &o){    
        puntos = new Punto[size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            puntos[i] = o.puntos[i];
    }
    void redimensionar(int nuevoTam);
    void push_back(const Punto &p);
    void insert(const int posicion, const Punto &p);
    void remove(const int pos);
    int getSize();
    void clear();
    ~ArregloDePuntos(){
        delete[] puntos;
    }

};

