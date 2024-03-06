/// Author : Htet Aung Hlaing
/// Created Date : 7th March, 2024
/// https://www.codewars.com/kata/563cf89eb4747c5fb100001b

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
    if(numbers.size() == 0){
        return std::vector<unsigned int>();
    }

    std::vector<unsigned int> final_array(numbers);
    auto min_index = std::min_element(final_array.begin(), final_array.end());
    final_array.erase(min_index);
    return final_array;
}

int main(){
    return 0;
}