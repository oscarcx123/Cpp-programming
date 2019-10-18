#include <iostream>
int main()
{
    int v1 = 0, v2 = 0, temp = 0;
    int cnt = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    if (v2 > v1) {
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
    cnt = v2;
    while (cnt <= v1) {
        std::cout << cnt << std::endl;
        ++cnt;
    }
    return 0;
}