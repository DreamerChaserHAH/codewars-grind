/// <summary>
/// Author : Htet Aung Hlaing
/// Created Date : 17th Feburary, 2024
/// </summary>

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string range_extraction(std::vector<int> args)
{

    std::stringstream ss;
    int starting_number = args[0];
    int last_number = args[0];

    auto append_value = [&]()
    {
        if (last_number == starting_number)
        {
            ss << last_number;
        }
        else
        {
            if(abs(last_number - starting_number) == 1){
                ss << starting_number << "," << last_number;
                return;
            }
            ss << starting_number << "-" << last_number;
        }
    };

    for (int index = 1; index < args.size(); index++)
    {
        if (last_number + 1 == args[index])
        {
            last_number = args[index];
        }
        else
        {
            append_value();
            ss << ',';
            starting_number = args[index];
            last_number = args[index];
        }
    }
    append_value();
    return ss.str();
}

/* First version
std::string range_extraction(std::vector<int> args)
{

    std::stringstream ss;
    int starting_number = nullptr;
    int last_number = nullptr;

    auto init = [&](int value)
    {
        starting_number = new int(value);
        last_number = new int(value);
    };

    auto append_value = [&]()
    {
        if (*last_number == *starting_number)
        {
            ss << *last_number;
        }
        else
        {
            if(abs(*last_number - *starting_number) == 1){
                ss << *starting_number << "," << *last_number;
                return;
            }
            ss << *starting_number << "-" << *last_number;
        }
    };

    for (int arg : args)
    {
        if (starting_number == nullptr)
        {
            init(arg);
            continue;
        }
        else
        {
            if (*last_number + 1 == arg)
            {
                *last_number = arg;
            }
            else
            {
                append_value();
                ss << ',';
                init(arg);
            }
        }
    }
    append_value();
    return ss.str();
}*/

int main()
{
    std::cout << range_extraction({-6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20}) << std::endl;
    return 0;
}