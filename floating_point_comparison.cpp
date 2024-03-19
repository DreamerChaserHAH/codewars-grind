/// Author : Htet Aung Hlaing
/// Created Date : 19th March, 2024
/// <summary>
/// https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8/train/cpp
/// </summary>

#include <iostream>
#include <cmath>

using namespace std;

bool approx_equals(double a, double b) {
    return abs(a - b) <= 0.001;
}

int main(){
    bool a = approx_equals(175.9827, 82.25);
    bool b = approx_equals(-156.24037, -156.24038);
    bool c = approx_equals(123.2345, 123.234501);
    bool d = approx_equals(1456.3652, 1456.3641);
    bool e = approx_equals(-1.234, -1.233999);
    bool f = approx_equals(98.7655, 98.7654999);
    bool g = approx_equals(-7.28495, -7.28596);
    return 0;
}