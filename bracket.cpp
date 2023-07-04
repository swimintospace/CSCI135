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

int unbalanced_brackets(string input){
    int open = 0;
    int close = 0;
    for(char& x: input){
        if(x == '{'){
            open++;
        }
        else if(x == '}'){
            close++;
        }
        else{
            return 0;
        }
        return (open - close);
    }
}

int main(){
    string b = "{{}}";
    cout << unbalanced_brackets(b);
}