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

#include <iomanip>

#include<cmath>

#include<fstream>



using namespace std;



int main(){

    int num, total = 0;

    char operation;

    char pre = '+';

    cin >> num;



    while (cin >> operation) 

    {

       if (operation == '^')////squ

       {

           num = num*num;

           cin >> operation;

       }

       if (pre == '+')

       {

           total += num;

       } else if (pre == '-')

       {

           total -= num;

       }

       pre = operation;

       cin >> num;

       if (pre == ';')////result

       {

           cout << total << endl;

           total = 0;

           pre = '+';

       }

   }

return 0;

}