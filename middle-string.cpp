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
#include <string>
using namespace std; 

string middle(string str) {
    int mid = 0;
    string middle; 

    if(str.length() % 2 == 0)
    {
        mid = str.length()/2;
        middle = str.substr(mid - 1, 2);
    }
    else 
    {
        mid = str.length()/2;
        middle = str.substr(mid, 1);
    }

    return middle;
}