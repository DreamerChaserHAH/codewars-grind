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

std::vector<std::string> permutations(std::string s, short current_length = -1, std::shared_ptr<std::string> pointer_string = nullptr) {
    
    std::vector<std::string> result_vector;
    current_length = (current_length == -1)? s.size() : current_length;

    if(!pointer_string){
        pointer_string = std::make_shared<std::string>();
        (*pointer_string).reserve(current_length);
    }

    if(current_length == 1){
        (*pointer_string).push_back(s[0]);
        result_vector.push_back(*pointer_string);
        return result_vector;
    }

    std::unordered_set<char> occurence_recorder;
    for(short counter = 0; counter < current_length; counter++){
        (*pointer_string).pop_back();
        if(occurence_recorder.find(s[counter]) != occurence_recorder.end()){
            /// does not find any occurences, hence loop to add value
            std::string new_string = s;
            new_string.erase(counter);

            occurence_recorder.insert(s[counter]);
            (*pointer_string).push_back(s[counter]);

            std::vector<std::string> available_content = permutations(new_string, current_length - 1, pointer_string);
            result_vector.insert(std::end(result_vector), std::begin(available_content), std::end(available_content));
        }
    }
  return result_vector;
}

int main(){
    std::cout << permutations("ab").size() << std::endl;
    return 0;
}