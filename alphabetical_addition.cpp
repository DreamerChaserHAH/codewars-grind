/// <summary>
/// Author : Victor Mak
/// Created Date: 26th Frb, 2024
/// </summary>

#include <iostream>
#include <vector>

char add_letters(std::vector<char> letters) {
  int final_character = 26;
  for(char character: letters){
    final_character += character - 96;
    final_character %= 26;
  }

  return (final_character == 0)? 'z' : char(final_character) + 96;
}

int main(){
    char final_char = add_letters({'y', 'c', 'b'});
    std::cout << final_char << std::endl; 
}