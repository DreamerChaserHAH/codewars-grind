/// <summary>
/// https://www.youtube.com/watch?v=mWgmBBz0y8c <- lambda functions
/// https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/cpp <- Problem
/// </summary>

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    unordered_map<int, int> number_and_occurences = unordered_map<int, int>();

    arr.erase(std::remove_if(arr.begin(), arr.end(),
        [&](int &num){
            return ++number_and_occurences[num] > n;
        }
    ), arr.end());
    return arr;
}

int main(){
    std::vector<int> integer_array = std::vector<int>();
    integer_array.push_back(10);
    integer_array.push_back(20);
    integer_array.push_back(10);
    integer_array = deleteNth(integer_array, 1);
    cout << integer_array.size() << endl;
    return 0;
}