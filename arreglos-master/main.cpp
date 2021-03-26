#include <iostream>

using namespace std;

void imprimir(int x[] , int size ){

    for (int i = 0 ; i < size ;i ++){
        cout<<x[i]<<'\t';
    }
    cout<<'\n';
}


int suma(int x[] , int size){
    int res = 0;

    for (int i = 0 ; i < size ; i++){
        res += x[i];
    }
    return res;
}

int sumaR(int x[] , int size){
    if (size == 1)
        return x[0];

    return x[size - 1] + sumaR( x , size - 1);
}

void invertir(int x[] , int size ){
    int aux = size/ 2;

    for (int i = 0 ; i < aux ; i++ ){
        int aux = x[i];
        x[i] = x [size - 1];
        x [size - 1] = aux;
        size--;
    }

}

// void invertirR(int x[] , int size){

// }

void burbuja(int x[] , int size){

    for (int i = 0 ; i < size ; i++){
        for ( int i = 0 ; i < size ; i++){
            if ( x[i] > x [i + 1]){
                int aux = x[i];
                x[i] = x [i + 1];
                x [i + 1] = aux;   
            }
        }
    }
}

// void insercion(int x[] , int size ){
//     // 4 5 3 2 1
// }

// void quicksort(int x[] , int size){

// }

int main(){

    int a[5] = {5,4,3,2,1};
   //cout<<suma(a, 5)<<'\n';
   cout<<sumaR(a, 5)<<'\n';
   //invertir(a , 5);
   //burbuja(a , 5);
   //insercion(a , 5);
   imprimir(a , 5);

   

    return 0;
}