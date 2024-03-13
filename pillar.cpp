/// <summary>
/// Author : Htet Aung Hlaing
/// Created Date : 10th March, 2024
/// https://www.codewars.com/kata/5bb0c58f484fcd170700063d
/// </summary>

#include <iostream>

long pillars(int num_of_pillars, int distance, int width) {
  long total_distance = 0;
  for(int i = 1; i < num_of_pillars; i++){
    total_distance += distance * 100;
    if(i == num_of_pillars - 1){
      continue;
    }
    total_distance += width;
  }
  return total_distance;
}

int main(){
    long total_pillar_distance = pillars(1, 10, 20);
    return 0;
}