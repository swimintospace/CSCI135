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
//
//
//
//
//
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
        if(index < 97)
        {
            index = 122 - (97 - index) + 1;
        }
    }
    else if(index >= 65 and index <= 90){
        index = index + rshift;
        if(index > 90){
            index = index - 90 + 65 - 1;
        }
        if(index < 65)
        {
            index = 90 - (65 - index) + 1;
        }
    }
    else{
        index = index;
    }
    returnChar = index;
    return returnChar;
}

string encryptVigenere(string plaintext, string keyword){
    string result = "";
    int keyword_index = 0;
    int keyword_len = keyword.length();

    int index = 0; 
    while(index < plaintext.length()){
        char c = plaintext[index];
        if(c >= 'A' and c <= 'Z' || c >= 'a' || c >= 'z'){
            int shift = keyword[keyword_index] - 'a';
            result += shiftChar(c, shift);
            keyword_index = (keyword_index + 1) % keyword_len;
        }
        else{
            result += plaintext[index];
        }

        index++;
    }

    return result;
}

string encryptCaesar(string plaintext, int rshift){
    string result;
    for(int i = 0; i < plaintext.length(); i++){
        result += shiftChar(plaintext[i], rshift);
    }
    return result;
}

string decryptCaesar(string cyphertext, int lshift)
{
    string plaintext = "";
    for(char& c: cyphertext){
        if(isalpha(c)){
            plaintext += shiftChar(c, -lshift);
        }
        else {
            plaintext += c;
        }
    }

    return plaintext;
}

string decryptVigenere(string cyphertext, string keyword)
{
    string plaintext = "";
    int keyword_index = 0;
    int keyword_len = keyword.length();

    int index = 0;
    while(index < cyphertext.length()){
        char c = cyphertext[index];
        if(isalpha(c)){
            int shift = keyword[keyword_index] - 'a';
            plaintext += shiftChar(c, -shift);
            keyword_index = (keyword_index + 1) % keyword_len;
        }
        else{
            plaintext += cyphertext[index];
        }

        index++;
    }

    return plaintext;
}


int main(){
    string input;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, input);
    cout << "= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> shift;
    string cypher = encryptCaesar(input, shift);
    cout << "Ciphertext: " << cypher << endl;
    cout << "Decrypted: " << decryptCaesar(cypher, shift) << endl;
    cout << endl;
    cout << "= Vignere =" << endl;
    string keyword;
    cout << "Enter keyword: ";
    cin >> keyword;
    string vignere = encryptVigenere(input, keyword);
    cout << "Ciphertext: " << vignere << endl;
    cout << "Decrypted: " << decryptVigenere(vignere, keyword) << endl;
}