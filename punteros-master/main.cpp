#include <iostream>

using namespace std;

void imprimir(int *x, int size ){

    int *ptr = x;

    for (int i = 0 ; i < size ;i ++){
        cout<< *ptr <<'\t';
        ptr++;
    }
    cout<<'\n';
}

int suma(int *x , int size){

    int *ptr = x;
    int res = 0;

    for (int i = 0 ; i < size ; i++){
        res += *ptr;
        ptr++;
    }
    return res;
}

void invertir(int *x , int size ){
    int *ptr1 = x , *ptr2 = &x[size - 1];
    int aux = size/ 2;

    for (int i = 0 ; i < aux ; i++ ){
        int aux = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = aux;
        ptr1++;
        ptr2--;
    }
}

// int sumaR(int *x , int size){
//     if (size == 1)
//         return *ptr = &x[0];

//     return x[size - 1] + sumaR( x , size - 1);
// }

void burbuja(int *x , int size){

    int *ptr1 ,*ptr2;

    for (int i = 0 ; i < size ; i++){
        for ( int i = 0 ; i < size ; i++){
            ptr1 = &x[i] ;
            ptr2 = &x[i + 1];
            if ( *ptr1 > *ptr2 ){
                int aux = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = aux;   
            }
        }
    }
}

void insercion(int x[] , int size ){
    // 4 5 3 2 1
    for (int i = 1 ; i < size ; i ++){
        int *ptr1 = &x[i];
        int j = i - 1; 
        int *ptr2 = &x[j];
        int *ptr3 = &x[j + 1];

        while ( (*ptr2 > *ptr1) and ( j >= 0 )){
            *ptr3 = *ptr2;
            j--;
        }
        *ptr3 = *ptr1;
    }
}

int main(){
    int a[5] = {5,4,3,2,1};

    //suma(a,5);
    //invertir(a,5);
    //burbuja(a,5);
    insercion(a,5);
    imprimir(a,5);
    
    return 0;
}