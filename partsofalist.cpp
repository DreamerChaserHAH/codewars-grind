// Author : Htet Aung Hlaing
// Created Date : 14th March, 2024
// <summary>
// https://www.codewars.com/kata/56f3a1e899b386da78000732/train/cpp
// </summary>

#include <iostream>
#include <vector>
#include <sstream>

class PartList
{
public:
    static std::vector<std::pair <std::string, std::string>> partlist(std::vector<std::string> &arr);
};

std::vector<std::pair <std::string, std::string>> PartList::partlist(std::vector<std::string> &arr){

    std::vector<std::pair <std::string, std::string>> final_result;
    final_result.reserve(arr.size());

    for(int i = 0; i < arr.size() - 1; i++){
        std::stringstream first_value;
        std::stringstream second_value;
        for(int j = 0; j <= i; j++){
            first_value << arr[j];
            if(j != i){
                first_value << " ";
            }
        }

        for(int k = i + 1; k < arr.size(); k++){
            second_value << arr[k];
            if(k != arr.size() - 1){
                second_value << " ";
            }
        }

        final_result.push_back({first_value.str(), second_value.str()});
    }
    return final_result;
}

int main(){
    std::vector<std::string> s = {"vJQ", "anj", "mQDq", "sOZ"};
    std::vector<std::pair <std::string, std::string>> value = PartList::partlist(s);
    return 0;
}