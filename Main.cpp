#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello, world! \n";
    std::cout << "Hello Simon how are you today? \n";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
