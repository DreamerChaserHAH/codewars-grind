/// <summary>
/// Author : Htet Aung Hlaing
/// Created Date : 21th Feb, 2024
/// Link : https://www.codewars.com/kata/5ac5e9aa3853da25d9000102
/// </summary>

#include <iostream>
#include <vector>

int get_value(const std::vector<int>& target_array, int index, const int& optional_value){
    return index < target_array.size() ? target_array[index]: optional_value;
};

std::vector<int> orArrays(const std::vector<int>& arr1, const std::vector<int>& arr2, int optional_value = 0){
    int final_array_length = (arr1.size() > arr2.size())? arr1.size() : arr2.size();
    std::vector<int> result_array;
    result_array.reserve(final_array_length);

    for(int i = 0; i < final_array_length; i++){
        result_array.push_back(get_value(arr1, i, optional_value) | get_value(arr2, i, optional_value));
    }

    return result_array;
}

int main(){
    std::cout << orArrays({1,2,3}, {4,5,6})[0] << std::endl;
    return 0;
}