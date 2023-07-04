//Name: Eliyas Philip
//Email: eliyas.philip84@myhunter.cuny.edu 
//Course: CSCI-135
//Instru3ictor: Tong Yi
//Assignment: Lab1A

//When doing this program it prints out the smallest number out of the two that are inputted.
//Something
//Something
//Something
//Somethin
        
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: " << endl;
    cin >> year;

    if(year !% 4)
    {
        cout << "Common Year" << endl;
    }
    else if(year !% 100)
    {
        cout << "Leap Year" << endl;
    }
    else if(year !% 400)
    {
        cout << "Common Year" << endl;
    }
    else 
    {
        cout << "Leap Year" << endl;
    }
}