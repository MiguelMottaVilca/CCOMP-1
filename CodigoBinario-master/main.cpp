//
//  main.cpp
//  Codigo Binario
//
//  Created by Miguel Motta on 3/6/19.
//  Copyright © 2019 Miguel Motta. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string abc2 = "abcdefghijklmnopqrstuvwxyz" ;
    
    int binario [26][8] = {
        {0,1,1,0,0,0,0,1}, //a
        {0,1,1,0,0,0,1,0}, //b
        {0,1,1,0,0,0,1,1}, //c
        {0,1,1,0,0,1,0,0}, //d
        {0,1,1,0,0,1,0,1}, //e
        {0,1,1,0,0,1,1,0}, //f
        {0,1,1,0,0,1,1,1}, //g
        {0,1,1,0,1,0,0,0}, //h
        {0,1,1,0,1,0,0,1}, //i
        {0,1,1,0,1,0,1,0}, //j
        {0,1,1,0,1,0,1,1}, //k
        {0,1,1,0,1,1,0,0}, //l
        {0,1,1,0,1,1,0,1}, //m
        {0,1,1,0,1,1,1,0}, //n
        {0,1,1,0,1,1,1,1}, //o
        {0,1,1,1,0,0,0,0}, //p
        {0,1,1,1,0,0,0,1}, //q
        {0,1,1,1,0,0,1,0}, //r
        {0,1,1,1,0,0,1,1}, //s
        {0,1,1,1,0,1,0,0}, //t
        {0,1,1,1,0,1,0,1}, //u
        {0,1,1,1,0,1,1,0}, //v
        {0,1,1,1,0,1,1,1}, //w
        {0,1,1,1,1,0,0,0}, //x
        {0,1,1,1,1,0,0,1}, //y
        {0,1,1,1,1,0,1,0}};//z
    
    //cout << abc2.find('b')<<endl;
    
    string texto;
    
    cout<<"DIGITE TEXTO: ";cin >> texto;
    
    int tam = texto.size();
    
    
    for (int j = 0; j<tam ; j++){
        for (int i = 0; i<8; i++){
            cout << binario[abc2.find(texto[j])][i];
            
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
