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


    string dates_arr[400];
    double westEl_arr[400];
    int index = 0;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        
       if(min_date <= date and date <= max_date)
       {
           dates_arr[index] = date;
           westEl_arr[index] = westEl;
           index++;
       }

    }

    for(int i = index - 1; i >= 0; i--){
           cout << dates_arr[i] << " " << westEl_arr[i] << " ft" << endl;
       }

    
    fin.close();
}
