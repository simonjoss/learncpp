#include <iostream>

int getIntergerFromUser()
{
    int input{0};

    std::cout << "Enter a integer value: ";

    std::cin >> input;

    return input;
}

int main()
{
    // my first program
    int num{getIntergerFromUser()};

    std::cout << num << " doubleed is : " << 2 * num << '\n';
    return 0;
}