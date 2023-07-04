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

    cout << "Please enter starting date: ";
    cin >> min_date;
    cout << "Please enter ending date: ";
    cin >> max_date;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        
       if(min_date <= date and date <= max_date)
       {
           if(eastEl > westEl)
           {
               cout << date << " East" << endl;
           }
           else if(westEl > eastEl)
           {
               cout << date << " West" << endl;
           }
           else 
           {
               cout << date << " Equal" << endl;
           }
       }
    }

    
    fin.close();
}
