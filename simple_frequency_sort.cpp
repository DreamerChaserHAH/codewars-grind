#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<int> solve(const std::vector<int> &vec) {
    std::unordered_map<int, int> counter;
    for(int value: vec){
        counter[value]++;
    }
    std::vector result_vec(vec.begin(), vec.end());

    std::sort(result_vec.begin(), result_vec.end(), [&counter](int a, int b){
        return counter[a] == counter[b]? a < b: counter[a] > counter[b];
    });
    return result_vec;
}

int main(){
    std::vector<int> v = {2,3,5,3,7,9,5,3,7};
    auto result = solve(v);
    return 0;
}