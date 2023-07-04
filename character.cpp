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
using namespace std;


int main(){
    string input;

    cout << "Enter string: " << endl;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        cout << input[i] << endl; 
    }
}