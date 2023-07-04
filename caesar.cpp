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

char shiftChar(char c, int rshift){
    int index = int(c);
    char returnChar;
    if(index >= 97 and index <= 122){
        index = index + rshift;
        if(index > 122){
            index = index - 122 + 97 - 1;
        }
    }
    else if(index >= 65 and index <= 90){
        index = index + rshift;
        if(index > 90){
            index = index - 90 + 65 - 1;
        }
 
    }
    else{
        index = index;
    }
    returnChar = index;
    return returnChar;
}

string encryptCaesar(string plaintext, int rshift){
    string result;
    for(int i = 0; i < plaintext.length(); i++){
        result += shiftChar(plaintext[i], rshift);
    }
    return result;
}

int main(){
    string plaintext;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    int shift;
    cout << "Enter shift: ";
    cin >> shift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, shift);
}