/// Author : Htet Aung Hlaing
/// Created Date : 19th March, 2024
/// <summary>
/// https://www.codewars.com/kata/5f1804560873b20023e8244a/train/cpp
/// </summary> 

#include <iostream>

using namespace std;

// return binary representation as integer
int convert_to_int(float f) {
  return *reinterpret_cast<int*>(&f);
}

int main(){
    float result = convert_to_int(10.0);
    return 0;
}