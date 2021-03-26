//
//  main.cpp
//  Fibonacci
//
//  Created by Miguel Motta on 2/27/19.
//  Copyright © 2019 Miguel Motta. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector <int> fibonacci(int n){
    int i , x ;
    vector <int> myVector = {1,2};
    
    i = 2 ;
    while (i < n){
        x = myVector[myVector.size() - 1] + myVector[myVector.size() - 2];
        myVector.push_back(x);
        i++ ;
    }
    return myVector;
}

int fibonacci(int a){
    int x = 0 , y = 1 , i = 1 , z = 0;
    //0 1 1 2 3 5 8
    while(i < a ){
        z = x + y ;
        x = y ;
        y = z ;
        i++ ;
    }
    return z ;
}

int main(){
    int n;
    cout<<"Numero de fibonacci: ";cin>>n;
    vector <int> x = fibonacci(n);
    cout<<"Resultado: "<< x[n - 1] <<endl;
    return 0;
}
