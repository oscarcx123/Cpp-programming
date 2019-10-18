#include <iostream>
int main()
{
    //（未声明wage）错误 double salary = wage = 9999.99;
    double wage;
    double salary = wage = 9999.99;
    std::cout << salary << wage << std::endl;
    return 0;
}