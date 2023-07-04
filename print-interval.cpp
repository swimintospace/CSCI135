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

int main() {

    int lower;
    int upper;
    cout << "Please enter L: " << endl;
    cin >> lower;
    cout << "Please enter U: " << endl;
    cin >> upper; 

    for(int i = lower; i < upper; i++)
    {
        cout << i << " ";
    }

    return 0;

}