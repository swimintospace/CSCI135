//Name: Eliyas Philip
//Email: eliyas.philip84@myhunter.cuny.edu 
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Lab1A

//When doing this program it prints out the smallest number out of the two that are inputted.
//Something
//Something


#include <iostream>
using namespace std;

int main()
{
    int first;
    int second;
    cout <<  "Enter the first number: " << endl;
    cin >> first;
    cout << "Enter the second number: " << endl;
    cin >> second;  

    if(first < second)
    {
        cout << "The smaller of the two is" << first << endl;
     
    }
    else 
    {
        cout << "The smaller of the two is " << second << endl;
    }
}