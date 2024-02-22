#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>

std::string rgb_to_hex(int r, int g, int b)
{
    short rs = std::clamp(r, 0, 255);
    short gs = std::clamp(g, 0, 255);
    short bs = std::clamp(b, 0, 255);
    
    std::stringstream target_stream;
    target_stream << std::hex << std::setw(2) << std::setfill('0') << rs << std::setw(2) << std::setfill('0') << gs << std::setw(2) << std::setfill('0') << bs;

    std::string str = target_stream.str();
    for (char& c : str) {
        c = std::toupper(static_cast<unsigned char>(c));
    }
    return str;
}

int main(){
    std::cout << rgb_to_hex(-20,275,125) << std::endl;
    return 0;
}