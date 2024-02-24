/// <summary>
/// Author : Htet Aung Hlaing
/// Created Date : 25th Feb, 2024
/// https://www.codewars.com/kata/59b710ed70a3b7dd8f000027/train/cpp
/// I actually wanted to do something with dynamic bitset
/// </summary>

#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

#include <vector>


bool isAllPossibilities(const std::vector<int> arr){
    
    if(arr.size() == 0){
        return false;
    }

    bool* possibilities_record = new bool[arr.size()]{false};

    for(int num: arr){
        if(num >= 0 && num < arr.size()){
            possibilities_record[num] = true;
        }
    }

    for(auto record = possibilities_record; record != possibilities_record + arr.size(); record++) {
        if(*record == false){
            return false;
        }
    }
    return true;
}

int main(){
    isAllPossibilities({0,2,19,4,4});
    return 0;
}