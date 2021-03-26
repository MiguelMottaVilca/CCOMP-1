#include <iostream>
#include <string>

using namespace std;

class Point{
private:
    int x ,y ;
public:
    Point(int _x = 0 ,int _y = 0) : x (_x) , y (_y) {}
    ~Point(){cout<<"Se destruyo punto"<<endl;}
    void setPunto(int ,int);
    void mostrar();
    // ostream operator<<( ostream &output ,const Point );
    Point operator +(const Point &a, const Point &b);
};

void Point::setPunto(int x ,int y){
    this -> x = x;
    this -> y = y;
}
void Point::mostrar(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

Point Point::operator+(const Point &a,const Point &b){
    Point temp;
    temp.x = x + a.x;
    temp.y = y + a.y;
    
    return temp;
}
int main (){
    
    Point y(1,2);
    Point x(2,4);
    
    Point z = x + y;
    
    x.mostrar();
    
    return 0;
}

