#include <iostream>

using namespace std;

template <typename T>
class Array {
private:
    T *data;
    int size;
    void resize(int newSize) {
        T *arr = new T[size];
        int minSize = (newSize > size ? size : newSize);
        for(int i = 0; i < minSize; i++){
            arr[i]=data[i];
        }
        delete[] data;
        this->size = newSize;
        data = arr;
    }
public:
    Array() {
        data = new T[0];
        this->size = 0;
    }
    Array(T arr[], int size) {
        this->data = new T[size];
        this->size = size;
        for (int i = 0; i < size; ++i)
            data[i] = arr[i];
    }
    Array(Array &o) {
        data = new T[o.size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            data[i] = o.data[i];
    }

    void push_back(T val) {
        resize(size + 1);
        this->data[size-1] = val;
    }

    void insert(const T val, int pos) {
        resize(size + 1);

        for( int i = size-1; i > pos; i--){
            data[i]= data[i-1];
        }
        data[pos] = val;
    }

    void remove(T pos) {
        if(pos >= 0 && pos < size) {
            for(int i=pos; i<size-1; i++)
            {
                data[i] = data[i+1];
            }
            resize(size - 1);
        }
    }

    void print() {
        for(int i =0; i < size; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    ~Array() {
        delete[] data;
    }

    Array operator+( T a[] , T b[]){
        T temp[] = {};
        int size_a = sizeof(a)/sizeof(*a);
        int size_b = sizeof(b)/sizeof(*b);
        int i = 0;
        while (i < size_a - 1){
            temp[i] = a[i];
            i++;
        }
        for(int j = 0 ; i < size_b - 1 ;j++){
            temp[i] = b[j]; 
            i++;
        }
        
        return temp ;
    }
};

int main() {
    int arr_1[] = {1,2,3,4,5};
    int arr_2[] = {6,7,8,9,10};
    Array<int> a(arr_1, 5);
    Array<int> b(arr_2, 5);

    Array<int> c = a + b ;
   
}
