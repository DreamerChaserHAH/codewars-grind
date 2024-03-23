/// Author : Htet Aung Hlaing
/// Created Date : 23rd March, 2024
/// <summary>
/// https://www.codewars.com/kata/5ce9c1000bab0b001134f5af
/// </summary>

#include <iostream>

int quarter_of(int month){
  return (month - 1) / 3 + 1;
}

int main(){
    std::cout << quarter_of(1) << std::endl;
    std::cout << quarter_of(3) << std::endl;
    std::cout << quarter_of(5) << std::endl;
    std::cout << quarter_of(7) << std::endl;
    std::cout << quarter_of(9) << std::endl;
    std::cout << quarter_of(11) << std::endl;
    return 0;
}