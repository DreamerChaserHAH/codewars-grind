/// Author : Htet Aung Hlaing
/// Created Date : 10th March, 2024
/// <summary>
/// https://www.codewars.com/kata/5873b2010565844b9100026d/train/cpp
/// </summary>

#include <iostream>
#include <array>
#include <string>
#include <sstream>

std::array<std::string, 2> oneTwoThree(const unsigned int n) {

  if(n == 0){
    return {"0", "0"};
  }
  std::string n_as_string = std::to_string(n);
  std::stringstream first_value;
  std::stringstream second_value;

  int iteration_count = n / 9;
  int additional_count = n % 9;
  for(int i = 0; i < iteration_count; i++){
    first_value << '9';
    second_value << "111111111";
  }
  if(additional_count != 0){
    first_value << additional_count;
    for(int i = 0; i < additional_count; i++){
        second_value << '1';
    }
  }

  return {first_value.str(), second_value.str()};
}

int main(){
    std::array<std::string,2> value = oneTwoThree(19);
    return 0;
}