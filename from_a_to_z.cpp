#include <iostream>
#include <string>
#include <sstream>

std::string gimme_the_letters(const std::string& sp)
{
    char current_character = sp[0];
    std::stringstream ss;
    do{
        ss << current_character;
        current_character++;
    }while(current_character <= sp[2]);
    return ss.str();
}

int main(){
    std::string hello = gimme_the_letters("a-z");
    return 0;
}