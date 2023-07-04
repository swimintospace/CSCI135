//Name: Eliyas Philip
//Email: eliyas.philip84@myhunter.cuny.edu 
//Course: CSCI-135
//Instru3ictor: Tong Yi
//Assignment: Lab1A

//When doing this program it prints out the smallest number out of the two that are inputted.
//Something
//Something
//Something
//Something

#include <iostream>
using namespace std;

int main()
{
    int first;
    int second;
    int third;
    cout <<  "Enter the first number: " << endl;
    cin >> first;
    cout << "Enter the second number: " << endl;
    cin >> second;  
    cout << "Enter the third number: " << endl;
    cin >> third;

    if(first < second)
    {
        if(first < third)
        {
            cout << "The smallest of the three is: " << first << endl;
        }
        else 
        {
            cout << "The smallest of the three is: " << third << endl;
        }
    }
    if(second < first)
    {
       if(second < third)
        {
            cout << "The smallest of the three is: " << second << endl;
        }
        else 
        {
            cout << "The smallest of the three is: " << third << endl;
        } 
    }

}


