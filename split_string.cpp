/// <summary>
/// 17th Feb, 2024
/// <summary<

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> solution_vector = std::vector<std::string>();

    for(auto iterator = s.begin(); iterator < s.end(); iterator += 2){
        std::string temporary = std::string();
        temporary.push_back(*iterator);
        temporary.push_back(iterator + 1 != s.end() ? *(iterator + 1): '_');
        solution_vector.emplace_back(temporary);
    }
    return solution_vector;
}

/* Version 1
std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> solution_vector = std::vector<std::string>();
    std::string* temporary_string = new std::string();

    for(auto iterator = s.begin(); iterator != s.end(); iterator++){
        temporary_string->push_back(*iterator);
        if(temporary_string->length() == 2){
            solution_vector.push_back(*temporary_string);
            temporary_string = new std::string();
            continue;
        }
        if(iterator == s.end() - 1){
            temporary_string->push_back('_');
            solution_vector.push_back(*temporary_string);
            break;
        }
    }
    return solution_vector;
}*/

int main(){
    solution("Hello");
    return 0;
}