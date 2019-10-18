#include <iostream>
int main()
{
    int i = 10, j = 20;
    int *pi = &i;
    std::cout << *pi << " " << pi << std::endl;
    pi = &j;
    std::cout << *pi << " " << pi << std::endl;
    *pi = 15;
    std::cout << *pi << " " << pi << std::endl;
    std::cout << j << std::endl;
}