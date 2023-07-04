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
    int results;

    while(cin >> x >> results){
        if(x == ';')
        {
            input = 0;
            std::cout << input << std::endl;
        }
        else if(x == "+")
        {
            input += results;
        }
        else 
        {
            input -= results;
        }
    }

    std::cout << input << std::endl;

    return 0;

}