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
    int gallons;
    double efficieny;
    double price;

    double gallons100mi;
    double price100mi;
    double drive;

    cout << "Enter the number of gallons in the the tank: " << endl;
    cin >> gallons;
    cout << "Enter the fuel efficieny in miles per gallon: " << endl;
    cin >> efficieny;
    cout << "Enter the price of gas per gallon" << endl;
    cin >> price;

    gallons100mi = 100/efficieny;
    price100mi = gallons100mi * price;
    drive = gallons * efficieny;

    cout.precision(2);
    cout << "The cost of gas for 100 miles is: " << fixed << price100mi << endl;
    cout.precision(0);
    cout << "With the gas you have, you can go: " << fixed << drive << endl;
    


}