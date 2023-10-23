﻿#include <stdio.h>
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
   Min<int, float>(5, 6.0f);
   Min<char, char>('a', 'b');
   Min<int, double>(5, 6.0f);
   Min<double, float>(5.0, 6.0f);
    return 0;
}