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

bool isDivisibleBy(int n, int d){
    if(d == 0)
    {
        return false;
    }
    else if(n % d == 0)
    {
        return true;
    }
    else{
        return false;
    }
}


bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0){
            return false;
        }
    }
    
    return true;
}

int nextPrime(int n){
    bool primeFound = false;
    int nextNum = n + 1;

    while(primeFound == false)
    {
        if(isPrime(nextNum) == true)
        {
            return nextNum;
            primeFound = true;
        }
        else 
        {
            nextNum++;
        }
    }

    return 0;
}

int countPrimes(int a, int b)
{
    int counter = 0;

    for(int i = a; i <= b; i++)
    {
        if(isPrime(i) == true)
        {
            counter++;
        }
    }

    return counter;
}

bool isTwinPrime(int n){
    if(isPrime(n))
    {
        if(isPrime(n+2) == true or (isPrime(n-2) == true)){
        return true;
    }
    }
    return false; 
    
}

int nextTwinPrime(int n){
    bool found = false;
    int num = n + 1;

    while(found == false){
        if(isTwinPrime(num)){
            return num;
        }
        num++;
    }

    return 0;
}


int largestTwinPrime(int a, int b)
{
    bool found = false;
    int num = b;

    while(found == false && num >= a)
    {
        if(isTwinPrime(num)){
            return num;
        }

        num--;
    }

    return -1;
}

