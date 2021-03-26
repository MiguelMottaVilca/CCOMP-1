#ifndef TIME_H
#define TIME_H

#include <iostream> 
#include <string>
#include <vector>

using namespace std;

class Time{
    private:
        vector <int> myTime ;
    public:
        Time(){
            cout<<"Digite la fecha de la siguiente manera:"<<endl;
            cout<<"dia/mes/año hora:minutos"<<endl;
            cout<<"02/02/02 02:02"<<endl;
            cout<<endl;
            string time , aux;
            string operador = "/ :";
            getline(cin , time);
            time +="/"; 

            for(int i = 0 ; i < time.size() ; i++){
                if ((time[i] != operador[0]) ^ (time[i] != operador[1]) ^ (time[i] != operador[2]) ){
                    aux += time[i];
                    continue;
                }
                int num = stoi(aux);
                myTime.push_back(num);
                aux.clear();
            }
        }
        void mostrar(){
            for (int i = 0; i < myTime.size() ; i++)
                cout << myTime[i] << '\t';
        }
       
        // friend ostream &operator<<(ostream &o , const Time t);
};

// ostream &operator<<(ostream &o ,const Time t){

//     o << t[0]<< '/' << t[1] << '/' << t[2] <<"  "<< t[3] << ':' << t[4]  ;

//     return o;
// }

#endif  //TIME_H