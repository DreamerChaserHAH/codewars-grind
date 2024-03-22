/// Author : Htet Aung Hlaing
/// Created Date : 22nd March, 2024
/// <summary>
/// https://www.codewars.com/kata/5d59576768ba810001f1f8d6/train/cpp
/// </summary>

#include <iostream>
#include <tuple>

std::tuple<int, int, int> quadratic(int x1,int x2){
  return {1, -(x1) + -(x2), -(x1) * -(x2)}; // Answer in tuple
}
int main(){
    std::tuple<int, int, int> value = quadratic(0, 1);
    return 0;
}