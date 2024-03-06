// Author : Htet Aung Hlaing
// Created Date: 6th March, 2024
// https://www.codewars.com/kata/5830e55fa317216de000001b/train/cpp

#include <iostream>

using namespace std;

int breakTheWeb(int strength, int width) {
    int total_elephant_count = 0;
    for(int row = width; row > 0; row--){
        for(int col = 0; col < row; col++){
            if(strength >= 1000 + 1000 * (width - row)){
                total_elephant_count += 1;
                strength -= 1000 + 1000 * (width - row);
                continue;
            }
            goto program_end;
        }
    }
program_end:
    return total_elephant_count;
}

int main(){
    int web = breakTheWeb(9200, 3);
    return 0;
}