#include <iostream>
#include <vector>
using namespace std;

vector <int> makeVector(int n){
    vector<int> vec;
    if(n > 0){
        for(int i = 0; i < n; i++){
            vec.push_back(i);
        }
    }

    return vec;
}

