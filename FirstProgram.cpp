#include <iostream>

int getValueFromUser()
{
    int input{0};

    std::cout << "Enter a integer value: ";

    std::cin >> input;

    return input;
}

void printDouble(int x)
{
    std::cout << x << " doubleed is : " << 2 * x << '\n';
}

int main()
{
    // my first program
    printDouble(getValueFromUser());

    return 0;
}