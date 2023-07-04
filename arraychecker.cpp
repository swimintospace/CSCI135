#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
    int arraySize = 0;
    if(a_size != b_size){
        return false;
    }
    
    for(int i = 0; i < a_size; i++){
        if(a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}