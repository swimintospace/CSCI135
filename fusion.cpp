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

void gogeta(vector <int> &goku, vector <int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }

    vegeta.clear();
}