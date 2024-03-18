/// Author : Victor Mak
/// Modified Date : 18th March, 2024
/// <summary>
/// https://www.codewars.com/kata/643af0fa9fa6c406b47c5399/train/cpp
/// </summary>

#include <iostream>

using namespace std;

int quadrant(int x, int y) {
    return x > 0? y > 0? 1: 4: y > 0? 2: 3;
}

int main(){
    return 0;
}