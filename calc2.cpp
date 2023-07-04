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
using namespace std;

int main(){
    int input;
    std::cin >> input;
    char x;
    int results = 0;

    results += input;

    while(cin >> x){

        cin >> input;
        if(x == ';')
        {
            std::cout << results << std::endl;
            results = input;
        }
        else if(cin.peek() == '^')
        {
            results += input * input;
        }
        else if(x == '+')
        {
            results += input;
        }
        else
        {
            results -= input;
        }
    }


    return 0;

}