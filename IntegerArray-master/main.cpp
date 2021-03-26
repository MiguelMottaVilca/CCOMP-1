#include <iostream>

using namespace std;

class IntegerArray {
		int *data;
        int size_;
    public:
        IntegerArray() {
            this -> size_ = 0;
			this -> data = new int[0];
        }
		IntegerArray(int arr[], int size_){
			this -> size_ = size_;
			this -> data = new int[size_];
			for(int i = 0; i < size_; i++){
				this -> data[i] = arr[i];
			}
		}
		int getSize(){
			return size_;
		}
		~IntegerArray(){
			delete[] this -> data;
		}
		void imprime();
		void pushBack(int num);
		void push(int num , int n);
		void borrar(int n);
			
};

void IntegerArray::imprime(){

	int *ptr;
	ptr = data;

	for(int i = 0 ; i < size_ ; i++ , ptr++){
		cout<<*ptr<<endl;
	}
}

void IntegerArray::pushBack(int num){
	
	int *tem = new int[size_ + 1];
	for(int i = 0; i < size_ ; i++){
		tem [i] = data[i];
	}
	tem[size_] = num;
	size_ ++;
	delete[] data; 
	data = tem;
}

void IntegerArray::push(int num , int n){

	int *tem = new int[size_ + 1];
	for(int i = 0 ; i < n ; i++){
		tem [i] = data[i];
	}
	tem[n- 1] = num;
	for(int i = n ; i <= size_ ; i++){
		tem [i] = data[i - 1];
	}

	size_ ++;q
	delete[] data; 
	data = tem;

}

void IntegerArray::borrar(int n){

	int *tem = new int[size_ - 1];
	int i = 0 , j = 0 ;
	while (i < size_ - 1 ){

		if ( i == n - 1 ){
			j++;
		}
		tem [i] = data[j];
		i++;
		j++;
		
	}
	delete[] data;
	data = tem;
	size_ --;

}

int main(){	

	int a[] = {1,2,3,4,5};

	IntegerArray arr( a ,5);
	
	// arr.pushBack(100);
	arr.push(100,3);
	// arr.borrar(3);

	arr.imprime();
		
    return 0;
}
