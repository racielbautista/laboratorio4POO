class ArregloDePuntos{
private:
    int *arr;
    int size;

public:    
    ArregloDePuntos(const int *arr, int size){    
        this-> size = size;
    }
    ArregloDePuntos(const int &o){    
        this-> size = size;
    }
    void redimensionar(int n);
    void push_back(const Punto &p);
    void insert(const int posicion, const Punto &p);
    void remove(const int pos);
    int getSize();
    void clear();
    ~ArregloDePuntos();

};