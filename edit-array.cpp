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

    int myData[10];
    int inputIndex;
    int inputValue;

     
    for(int i = 0; i < 10; i++)
    {
        myData[i] = 1;

    }

    do{
       
        for (int i = 0; i < 10; i++)
        {
            cout << myData[i] << " ";
        }
        cout << endl;
        cout << "Input Index: " << endl;
        cin >> inputIndex;
        cout << "Input Value: " << endl;
        cin >> inputValue;

        if(inputIndex >= 0 && inputIndex < 10){
            myData[inputIndex] = inputValue;
        }
        

    } while(inputIndex >= 0 && inputIndex < 10);

    cout << "Index out of range. Exit" << endl;
    return 0;
}
