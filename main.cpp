#include <stdio.h>
#include <iostream>

template<typename TYPE1, typename TYPE2>
TYPE1 Min(TYPE1 a, TYPE2 b) {
    if (a >= b) {
        std::cout << a << std::endl;
        return a;
    }
    else {
        std::cout << b << std::endl;
        return static_cast<TYPE1>(b);
    }
}
template<>
char Min<char>(char a, char b) {
    printf("数字以外は代入できません\n");
    return 0;
}
int main() {
    Min<int, float>(200, 201.0f);
    Min<char, char>(200, 201.0f);
    Min<int, double>(200, 201.0);
    Min<double, float>(2.0, 2.1f);
    return 0;
}