#include <iostream> 
#include <string>
using namespace std;

int main ()
{
    string pyramid;

    cout << "Enter a word: ";
    getline(cin, pyramid);

    string result = "";
    for(int i = 0; i < pyramid.length(); i++){
        result += pyramid[i];
        cout << result << endl; 
    }
    for(int i = pyramid.length() - 1; i > 0; i--){
        result.pop_back();
        cout << result << endl;
    }
}
