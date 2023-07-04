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
    int first;
    int second;
    int third;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second; 
    cout << "Enter third number: ";
    cin >> third; 

    if(first < second and second < third)
    {
        cout << "Increasing";
    }
    else if(first > second and second > third)
    {
        cout << "Decreasing";
    }
    else 
    {
        cout << "Neither";
    }
}