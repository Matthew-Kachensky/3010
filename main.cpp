// #include "header.h"
#include<vector>
#include<iostream>

#include "functions.cpp"

int main(){

    std::vector<int> vec1{1, 6, 12, 0, 19, 581, 28, 5, 9, 7, 8};
    std::vector<bool> vec1Res = EvenMask(vec1);
    for(int i = 0; i < vec1Res.size(); i++){
        std::cout << "index " << i << ": " << vec1Res[i] << std::endl;
    }


    std::vector<bool> vec2Res = OddMask(vec1);
    for(int i = 0; i < vec2Res.size(); i++){
        std::cout << "index " << i << ": " << vec1Res[i] << std::endl;
    }

    std::cout << "Sum: " << Sum(vec1) << std::endl;
    std::cout << "test" << std::endl;

    return 0;
}