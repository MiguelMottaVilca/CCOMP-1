#include <iostream>
using namespace std;

class Polygon{
    protected:
        int width,height;
    public:
        Polygon(){width = 0 , height = 0 ;}
        Polygon(int a ,int b) : width(a) , height(b) {}
        virtual int area (void){return 0;}
        void printarea(){
            cout<< this ->  area() <<endl;
        }
};

class Rectangle : public Polygon{
    public:
        Rectangle(){width = 0 , height = 0 ;}
        Rectangle(int a, int b): Polygon(a,b){}
        int area(void){
            return width * height ;
        }
};

class Triangle : public Polygon{
    public:
        Triangle(){width = 0 , height = 0 ;}
        Triangle(int a ,int b): Polygon(a,b){}
        int area(void){
            return (width * height)/2 ;
        }
};

class arreglo{
    private:
        int size;
        Polygon *data;
    public:
        arreglo(){
            this -> size = 0;
            this -> data = new Polygon[0];
        }
        arreglo(int size,Polygon arr[]){
            this -> size = size;
            this -> data = new Polygon[size];
            for (int i = 0 ; i < size ; i++){
                data[i] = arr[i];
            }
        }
        void pushBack(Polygon x);
        void push(int pos ,Polygon x);
        void eliminar(int pos);
};

void arreglo::pushBack(Polygon x){

    Polygon *tem = new Polygon[size++];
    for(int i = 0 ; i < size ; i++){
        tem[i] = data[i];
    }
    tem[size] = x;
    size++;
    delete[] data;
    data = tem;
}
void arreglo::push(int pos ,Polygon x){

    Polygon *tem = new Polygon[size++];
    for(int i = 0 ; i < pos-- ; i++){
        tem[i] = data[i];
    }
    tem[pos--] = x;
    for(int i = pos-- ; i < size-- ; i++){
        tem[i] = data[i];
    }
    size++;
    delete[] data;
    data = tem;
}
void arreglo::eliminar(int pos){
    Polygon *tem =  new Polygon[size--];
	int i = 0 , j = 0 ;
	while (i < size - 1 ){

		if ( i == pos - 1 ){
			j++;
		}
		tem [i] = data[j];
		i++;
		j++;
		
	}
	delete[] data;
	data = tem;
	size --;
}

int main(){

    Rectangle aux_1(4,5);
    Triangle aux_2(4,5);
    Rectangle aux_3(10,12);
    Triangle aux_4(10,12);

    Polygon arr[4] = {aux_1,aux_2,aux_3,aux_4};

    arreglo(4 , arr);

    arr[0].area();

    arr[0].printarea();

    

    return 0;
}