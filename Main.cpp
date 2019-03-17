#include <iostream>
#include <limits>

int main()
{
    // my first cpp code ;-)
    std::cout << "Hello, world! \n";
    std::cout << "Hello Simon how are you today? \n";

    // uniform init
    int x{5};
    int y{};

    std::cout << "The value of x is: " << x << '\n';
    std::cout << "Enter a value for y: ";
    std::cin >> y;

    std::cout << "The sum of x and y is : " << y + x << '\n';

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}