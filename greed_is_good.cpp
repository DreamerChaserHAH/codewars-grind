/// Author : Htet Aung Hlaing
/// Created Date : 4th March, 2024
/// Three 1's => 1000 points
/// Three 6's =>  600 points
/// Three 5's =>  500 points
/// Three 4's =>  400 points
/// Three 3's =>  300 points
/// Three 2's =>  200 points
/// One   1   =>  100 points
/// One   5   =>   50 point
/// <summary>
/// Link : https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
/// </summary>

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int score(const std::vector<int>& dice) {
    short final_score = 0;
    short triple_score_set[6] {1000, 200, 300, 400, 500, 600};
    short single_score_set[6] {100, 0, 0, 0, 50, 0};
    std::unordered_map<short, short> occurence_counter;
    for(auto i : dice){
        occurence_counter[i]++;
    }
    for(auto i : occurence_counter){
        if(i.second >= 3){
            final_score += triple_score_set[i.first - 1] * (i.second / 3);
        }
        final_score += single_score_set[i.first - 1] * (i.second % 3);
    }
    return final_score; // your code here
}

int main(){
    int final_score = score({3, 3, 3, 3, 3});
    return 0;
}