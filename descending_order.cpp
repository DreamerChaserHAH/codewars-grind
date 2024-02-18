#include <iostream>
#include <cinttypes>
#include <algorithm>
#include <vector>
#include <string>

// Smart ones learnt from the solution view
uint64_t descendingOrder(uint64_t a)
{
    std::string num_as_string = std::to_string(a);
    sort(num_as_string.rbegin(), num_as_string.rend());
    return std::stoul(num_as_string);
}

/* First version
uint64_t descendingOrder(uint64_t a)
{
    std::vector<short> digits;
    while (a > 0)
    {
        digits.emplace_back(a % 10);
        a /= 10;
    }
    std::sort(digits.begin(), digits.end(), std::greater<short>());
    uint64_t result = 0;
    for(short num: digits){
        result = result * 10 + num;
    }
    return result;
}*/

int main()
{
    std::cout << descendingOrder(12354) << std::endl;
    return 0;
}