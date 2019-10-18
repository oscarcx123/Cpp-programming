#include <iostream>
int main()
{
    //错误 int i = { 3.14 };
    int i = (3.14);
    std::cout << i << std::endl;
    return 0;
}