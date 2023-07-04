/*
Name: Eliyas Philip
Email: eliyas.philip84@myhunter.cuny.edu 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This program
displays the first 60 digits in
the Fibonacci sequence. 

I see in the later parts of the sequence 
that the results come out negative. 

It's because the values are exceeding the maximum value
for integer which causes it to loop back around to the minimum value.
*/

#include <iostream>
using namespace std;

int main(){
    int fib[60];

    fib[0] = 0;
    cout << fib[0] << endl;
    fib[1] = 1;
    cout << fib[1] << endl;

    for(int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }
    return 0;
}