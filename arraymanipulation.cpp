#include <iostream>

int main(){
    int numbers[10];
    for(int i = 0; i < 10; i++)
    {
        numbers[i] = i + 1;
        std::cout << numbers[i]<< std::endl;
    }
}