/// Author : Htet Aung Hlaing
/// Created Date : 5th March, 2024
/// <summary>
/// https://www.codewars.com/kata/55733d3ef7c43f8b0700007c/train/cpp
/// </summary>

#include <iostream>
#include <string>
#include <sstream>

std::string pattern(int n){
    std::stringstream stream;
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            stream << n - j;
        }
        stream << "\n";
    }
    std::string result = stream.str();
    if(result.length() > 0){
        result.pop_back();
    }
	return result;
}

int main(){
    std::string value = pattern(5);
    return 0;
}