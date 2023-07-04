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

vector <int> goodVibes(const vector <int> v){
    vector <int> vec;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            vec.push_back(v[i]);
        }
    }
    return vec;
} 