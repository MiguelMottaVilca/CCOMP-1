#include <iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(void){
            x = 0;
            y = 0;
        }
        Point(int x , int y){
            this -> x = x;
            this -> y = y;
        }
        ~Point(void){
            cout << "SE DESTRUYO EL PUNTO" << '\n';
        }
        int getX(void){
            return x;
        }
        int getY(void){
            return y;
        }

};

int main(){

    

    return 0 ;
}