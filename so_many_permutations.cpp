/// <summary>
/// Author : Victor Mak
/// Created Date : 20th Feb, 2024
/// https://www.codewars.com/kata/5254ca2719453dcc0b00027d/train/cpp
/// </summary>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

/// OKay, I basically reinvented the wheel
/// C++ has permutation function by default and I just had to remake it
/// damn lol
std::vector<std::string> permutations(std::string s, std::string *pointer_string = nullptr) {
    
    std::vector<std::string> result_vector;
    short current_length = s.size();

    // pointer string that will be alive until the end of time (memory is leaking :cry:)
    if(!pointer_string){
        pointer_string = new std::string;
        (*pointer_string).reserve(current_length);
    }

    // Edge case where empty string is put into the parameter
    if(current_length == 0){
        return {""};
    }

    // we are at the last call stack possible for this iteration
    // hence we put the value and return it
    if(current_length == 1){
        pointer_string->push_back(s[0]);
        result_vector.push_back(*pointer_string);
        pointer_string->pop_back();
        return result_vector;
    }

    // records whether if a character has appeared already or not
    std::unordered_set<char> occurence_recorder;
    for(short counter = 0; counter < current_length; counter++){
        if(occurence_recorder.find(s[counter]) == occurence_recorder.end()){
            /// does not find any occurences, hence loop to add value
            std::string new_string = s;
            new_string.erase(counter, 1);

            occurence_recorder.insert(s[counter]);

            pointer_string->push_back(s[counter]);
            std::vector<std::string> available_content = permutations(new_string, pointer_string);
            pointer_string->pop_back();

            // insert the value receive from the child iteration
            result_vector.insert(std::end(result_vector), std::begin(available_content), std::end(available_content));
        }
    }
  return result_vector;
}

int main(){
    std::vector<std::string> result_vector = permutations("aabb");
    std::cout << result_vector[0] << std::endl;
    return 0;
}