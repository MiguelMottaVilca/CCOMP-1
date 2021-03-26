#include <iostream>

using namespace std;

void pow_while(){

    int D , aux = 2;
    cout<<"Digite en numero: " ;cin >> D;

    while (true){
        int r ;
        r = D % 2;
        if (r != 0){
            cout<<"no es potencia de dos "<<endl;
            break;
        }
        D = r;
        if (D == 0){
            cout<<"si es potencia de dos"<<endl;
            break;
        } 
    }
}

// void pow_for(){
//     int D
//     cout<<"Digite en numero: " ;cin >> D;

//     for( ; D != 0 ; D = r ){
//         r = D % 2 ;
//         if (r != 0){
//             cout<<"no es potencia de dos "<<endl;
//         }
//     }
// }

int pow(int num , int potencia){
    if (potencia == 0){
        return 1;
    }
    int mult = num;
    for (int i  = 1 ; i < potencia ; i++ ){
        num *=mult;
    }
    return num;
}
void decimalBinario(int num){

    

}

void binarioDecimal(int num , int tam){
// 11  => 3
    int aux = 10 , i = 0 , resultado = 0; 
    while ( i < tam ){
        int val = num % aux;
        if ( val != 0 ){
            resultado += pow(2 , i);
        }
        aux*= 10;
        num -=val;
        i++;
    }
    cout<<resultado<<endl;
}

void fibonacci(){
    int num , i = 0 ,x = 0 , y = 1;
    cout<<"Digite en numero: " ;cin >> num;
 //0 1 1 2 3 5 8
    while ( i < num){
        int aux = x + y;
        cout<< aux <<endl;
        y = x;
        x = aux;
        i++;
    }
}

int main(){
    // pow_while();
    //fibonacci();
    binarioDecimal(11,3);

    return 0;
}