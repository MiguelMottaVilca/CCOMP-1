#include <iostream>

using namespace std;

void numero(int num){
    int aux;
    cout<<"Digite numero de 5 digitos: ";cin>>num;
    // 54321
    aux = num / 10000;
    cout<<aux<<'\t';
    num = num - (aux*10000);
    aux = num / 1000;
    cout<<aux<<'\t';
    num = num - (aux*1000);

    aux = num / 100;
    cout<<aux<<'\t';
    num = num - (aux*100);
    
    aux = num / 10;
    cout<<aux<<'\t';
    num = num - (aux*10);
    cout<<num % 10<<'\n';
}

int cont(int num){
    int i = 0 ;

    while(true){
        num = num / 10;
        if ( num > 0 ){
            i++; 
            continue;
        }
        i++;
        break;
    }
    return i ;
}

bool palindrome(int num){
    int aux1 , aux2 ;
    aux1 = num / 10000;
    aux2 = num % 10;
    if (aux1 == aux2) {
        num -=aux1*10000;
        num -=aux2;
        num /=10;
        if ( num / 100 == num % 10)
            return true;
    }
    return false;
}

int fibonacci(int n){
    int x = 0 , y = 1 , z = 1 ;

    int i = 1;
    while (i < n + 1){
        z = x + y;
        x = y;
        y = z; 
        i++;
    } 
    return z;
}

bool esNumero(char a){
    int n = static_cast<int>(a);
    if ( n > 47 and n < 58){
        return true;
    }
    else {
        return false;
    }
}

bool esLetra(char a){

    int n = static_cast<int>(a);
    if ( (n > 64 and n < 91) or ( n > 96 and n < 123))
        return true;

    else
        return false;
    
}

bool letras(char a){
    cout<<"ingresa dato: ";cin>>a;
    int n = static_cast<int>(a);
    if (n > 96 && n < 122 ){
        cout<<"es una minuscula"<<'\n';
        n -= 32;
        char aux = static_cast<int>(n);
        cout<< aux <<'\n';
    }
    else if ( n > 64 && n < 91 ){
        cout<<"es una mayuscula"<<'\n';
        n += 32;
        char aux = static_cast<int>(n);
        cout<< aux <<'\n';
    }
}

int main(){
    //numero(12345);
    cout<<fibonacci(5)<<endl;
    //cont();
    //cout<<palindrome(12321)<<endl;
    //cout<<esNumero('a')<<'\n';
    cout<<esLetra('a')<<'\n';
    //letras(a);

    return 0;
}