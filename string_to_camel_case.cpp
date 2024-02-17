#include <iostream>
#include <string>
#include <cctype>

using namespace std;

std::string to_camel_case(std::string text) {
    std::string result;
    result.reserve(text.length());
    for(auto iterator = text.begin(); iterator != text.end(); iterator++){
        if(*iterator == '_' || *iterator == '-'){
            iterator++;
            result.push_back(toupper(*iterator));
            continue;
        }
        result.push_back(*iterator);
    }
    return result;
}
int main(){
    cout << to_camel_case("") << ":Result"<< endl;
    return 0;
}