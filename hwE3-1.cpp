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
    int input;
    cout << "Enter a number: ";
    cin >> input;


    if(input < 0)
    {
        cout << "Negative";
    }
    else if(input == 0)
    {
        cout << "Zero";
    }
    else 
    {
        cout << "Positive";
    }
}