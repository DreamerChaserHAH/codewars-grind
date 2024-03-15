/// Author : Htet Aung Hlaing
/// Created Date : 15th March, 2024
/// <summary>
/// https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp
/// </summary>

#include <iostream>
#include <string>
#include <sstream>

std::string vaporcode(const std::string &str) {
    std::stringstream ss;
    for(char c: str){
        if(c != ' '){
            ss << static_cast<char>(std::toupper(c));
            ss << "  ";
        }
    }
    return ss.str().substr(0, ss.str().length() - 2);
}

int main(){
    std::string s = "Let's go to the movies";
    std::cout << vaporcode(s) << std::endl;
    return 0;
}