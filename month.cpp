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
//Something 

#include <iostream>
using namespace std;

int main()
{
    int year;
    int month;
    bool isLeapYear;

    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter month: " << endl;
    cin >> month;
 
    if(year % 4 != 0)
    {
        isLeapYear = false;
    }
    else if(year % 100 != 0)
    {
        isLeapYear = true;
    }
    else if(year % 400 != 0)
    {
        isLeapYear = false;
    }
    else 
    {
        isLeapYear = true;
    }


    if(month == 2)
    {
        if(isLeapYear == true)
        {
            cout << "29 days" << endl;
        }
        else
        {
            cout << "28 days" << endl;
        }
    }
    else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days" << endl;
    }
    else 
    {
        cout << "31 days" << endl;
    }

    return 0;
}