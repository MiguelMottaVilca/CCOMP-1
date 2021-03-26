//
//  main.cpp
//  Rufini
//
//  Created by Miguel Motta on 2/15/19.
//  Copyright © 2019 Miguel Motta. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <int> rufini(vector <int> divisores ,vector <int> myVector){
    // a = {1,6,11,6,0};
    // d = {-1,1,2,-2,3,-3,6,-6};
    int x = myVector.size() - 2 ;// x = 5 - 2
    vector <int> raices ;
    int suma = 0 , mult = 0 ;
    int i = 0 ,  j = 0 ;
    
    while ( i <= x ){

        suma = mult + myVector[i];
        
        if (i == x and suma == 0){
            raices.push_back(divisores[j]);
        }
        if (i == x and suma != 0){
            i = 0 ;
            suma = 0 ;
            mult = 0 ;
            j++ ;
            suma = mult + myVector[i];
        }
        mult = suma * divisores[j];
        i++ ;
    }
    return raices ;
}


vector <int> divisores(int a){
    
    vector <int> myVector = {1,-1};
    
    for ( int i=2 ; i <= a ; i++ ){
        if (a % i == 0){
            myVector.push_back(i);
            myVector.push_back(-i);
        }
    }
    return myVector ;
}


vector <int> introducir(){
    
    vector <int> ecuacion;
    cout<<"a_1^n + a_2^n-1 + a_3^n-2 + ... + a_(n-1)x + a_n"<<endl;
    
    bool status = true;
    int aux;
    int n = 1 ;
    while (status){
        cout<<"a_"<<n<<": ";cin>>aux;
        
        if (aux == 0 ){
            status = false;
        }
        ecuacion.push_back(aux);
        n++ ;
    }
    return ecuacion;
}


int main (){
    
    int  tam , x ;
    vector <int> e = introducir();
    
    tam = e.size();
    
    cout<< "size: " << tam <<endl;

    x = e[tam - 2];
    cout<<"nElemento: "<<x<<endl;
    
    vector <int> aux = divisores(x);

    vector <int> aux_1 = rufini(aux,e);
    
    cout<<"Resultado"<<aux_1[0]<<endl;

    return 0;
}
