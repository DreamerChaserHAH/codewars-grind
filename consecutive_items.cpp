/// <summary>
/// Author : Htet Aung Hlaing
/// Created Date : 22nd Feb, 2024
/// https://www.codewars.com/kata/5f6d533e1475f30001e47514
/// </summary>

#include <iostream>
#include <vector>
#include <algorithm>

bool consecutive(std::vector<int>arr, int a,int b){
    auto element_a_iter = std::find(std::begin(arr), std::end(arr), a);
    if(element_a_iter == arr.end()){
        return false;
    }
    auto element_b_iter = std::find(std::begin(arr), std::end(arr), b);
    if(element_b_iter == arr.end()){
        return false;
    }
    return abs(std::distance(arr.begin(), element_a_iter) - std::distance(arr.begin(), element_b_iter)) == 1;
}

int main(){
    bool result = consecutive({1, 2, 3, 4, 5, 6, 7, 8, 9}, 2, 8);
    result = consecutive({1, 2, 3, 4, 5, 6, 7, 8, 9}, 2, 3);
    std::cout << result << std::endl;
    return 0;
}