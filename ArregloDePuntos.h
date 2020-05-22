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
    void redimensionar(int n){
        size = n;
    }
    void push_back(){
        
    }
    ~ArregloDePuntos(){

    }

};