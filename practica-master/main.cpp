#include <iostream>

int problem1(int n){
    int resultado = 0 ;
    for(int i = 0 ; i < n ; i++){
        if ( (i % 3) == 0 or (i % 5)== 0){
            resultado += i;
        }
    }
    return resultado;
}

int power(int numero , int exponente){
    if (exponente == 0 ){
        return 1;
    }
    if (exponente == 1 ){
        return numero;
    }
    return numero * power(numero , exponente - 1);
}

void problem2(int n){
    int aux = n , cont , res = 0;
    while(aux){
        aux /=10;
        cont++;
    }//12345
    int i = 0;
    while (cont > 0 ){
        int aux = n / power(10 , cont - 1);
        n = n - aux* power(10 , cont - 1);
        res += aux*power(10,i);
        i++;
        cont--;
    }
    std::cout<<'\n';
    std::cout<< res << '\n';
}

int fibonacciR(int numero){
    if ( numero == 1 or numero == 0){
        return numero;
    }
    return fibonacciR(numero - 1) + fibonacciR(numero - 2);
}

int fibonacciI(int numero){
    int x = 0 , y = 1, z = 0;
    for (int i = 0 ; i < numero ; i++){
        std::cout<< z <<'\t';
        z = x + y ;
        x = y;
        y = z;
    }
    // std::cout<< '\n';
    return z;
}

int main(){
    // std::cout << problem1 << '\n';
    //fibonacciI(5);
    problem2(12345);


    return 0;
}