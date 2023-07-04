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

void printRange(int left, int right){
    if(left <= right){
        cout << left << " ";
        printRange(left+ 1, right);
    }
}

int sumRange(int left, int right){

    if(right < left)

        return 0;

    if(left == right)

        return right;

    return left + sumRange(left+1, right);

}

int sumArray(int *arr, int size){

    if(size == 1)   return *arr;

    if(size <= 0)   return 0;

    return *arr + sumArray(arr + 1, size - 1);

}

bool isAlphanumeric(std::string s){

    if(s.length() == 0) return true;

    if(!isalnum(s[0]))  return false;

    return isAlphanumeric(s.substr(1));

}