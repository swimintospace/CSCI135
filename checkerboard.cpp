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

    int width;
    int height;

    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height; 

    cout << "Shape: ";
    cout << endl;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++)
        {
            if((i + j) % 2 == 0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}