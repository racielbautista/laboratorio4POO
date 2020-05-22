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
