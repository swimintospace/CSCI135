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
    int size;
    cout << "Please input size: ";
    cin >> size;
    cout << endl;
    
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row <= col)
            {
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