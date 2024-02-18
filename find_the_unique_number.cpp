/// <summary>
/// Author : Victor Mak
/// https://www.codewars.com/kata/5467e4d82edf8bbf40000155
/// <summary>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float find_uniq(const std::vector<float> &v)
{
    if(v[0] != v[1] && v[0] != v[2]){
        return v[0];
    }
    int length = v.size();

    for(int counter = 1; counter < length; counter++){
        if(v[counter] != v[0]){
            return v[counter];
        }
    }
    return 0;
}

int main(){
    std::cout << find_uniq({0.5, 0.5, 0.4, 0.5}) << std::endl;
    return 0;
}