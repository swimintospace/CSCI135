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

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;


int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1);
    }

    string junk;
    getline(fin, junk);


    string date, input_date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;

    cout << "Please enter a date: ";
    cin >> input_date;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        if(input_date == date)
        {
            cout << "East basin storage: " << eastSt << " billion gallons";
        }
    }

    fin.close();
}
