#include <iostream>
#include "MyLib.h"

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

void printSum(int x, int y)
{
    std::cout << x << " + " << y << " = " << add(x, y) << '\n';
}

void printDiff(int x, int y);

void printSqrtRoot(double x)
{
    std::cout << " the sqare root of " << x << " is : " << sqrtRoot(x) << '\n';
}

int main()
{
    // my first program
    printDouble(getValueFromUser());

    printSum(getValueFromUser(), getValueFromUser());

    printDiff(getValueFromUser(), getValueFromUser());

    printSqrtRoot(getValueFromUser());

    return 0;
}

void printDiff(int x, int y)
{
    std::cout << x << " - " << y << " = " << diff(x, y) << '\n';
}