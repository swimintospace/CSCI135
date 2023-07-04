/*
Name: Eliyas Philip
Email: eliyas.philip84@myhunter.cuny.edu 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program
takes input from
an external text file 
and appends all the numbers
and produces one final sum. 
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> sumPairWise(const vector <int> &v1, const vector <int> &v2){
    vector <int> vec;
    vector <int> smaller;
    vector <int> bigger;
    if(v1 < v2){
        smaller = v1;
        bigger = v2;
    }
    else{
        smaller = v2;
        bigger = v1;
    }
    int i = 0;
    while(i < smaller.size()){
        vec.push_back(smaller[i] + bigger[i]);
        i++;
    }
    while(i < bigger.size()){
        vec.push_back(bigger[i]);
        i++;
    }
    return vec;
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector <int> v3 = sumPairWise(v1, v2); 
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << endl;
    }
}