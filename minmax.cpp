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


    string date, min_date, max_date;
    double eastSt, eastEl, westSt, westEl;
    double min = INT_MAX;
    double max = INT_MIN;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        if (eastSt < min)
        {
            min = eastSt;
        }

        if(eastSt > max)
        {
            max = eastSt;
        }
    }

    cout << "Minimum storage in East Basin: " << min << " billion gallons"<< endl;
    cout << "Maximum storage in East Basin: " << max << " billion gallons" << endl;
    fin.close();
}
