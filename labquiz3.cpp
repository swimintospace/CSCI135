#include <iostream>

int main()
{
    int x;
    int y;
    std::cout << "First value: ";
    std::cin >> x;
    std::cout << "Second value: ";
    std::cin >> y;

    if(x < y)
    {
        std::cout << y;
    }
    else{
        std::cout << x;
    }
}