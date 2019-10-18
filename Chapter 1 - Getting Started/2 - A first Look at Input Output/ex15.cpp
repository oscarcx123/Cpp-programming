#include <iostream>
int main()
{
    std::cout << "Enter 2 numbers";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of 2 numbers is ";
    std::cout << v1 + v2;
    std::cout << std::endl;
    return 0;
}