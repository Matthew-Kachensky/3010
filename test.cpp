// #include <catch2/catch_test_macros.hpp>
// Make an include for the catch header 
#define CONFIG_CATCH_MAIN

#include "catch.hpp"
#include "functions.cpp"
#include <vector>

TEST_CASE("Evens are found", "[EvenMask]"){
    std::vector<int> v{1, 6, 12, 0, 19, 581, 28, 5, 9, 7, 8};
    std::vector<bool> act = EvenMask(v);
    std::vector<bool> exp{0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1};
    REQUIRE(act.size() == exp.size());
    for(int i = 0; i < act.size(); i++){
        REQUIRE(act[i] == exp[i]);        
    }
}

TEST_CASE("Odds are found", "[OddMask]"){
    std::vector<int> v{1, 6, 12, 0, 19, 581, 28, 5, 9, 7, 8};
    std::vector<bool> act = OddMask(v);
    std::vector<bool> exp{1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0};
    REQUIRE(act.size() == exp.size());
    for(int i = 0; i < act.size(); i++){
        REQUIRE(act[i] == exp[i]);
    }
}

TEST_CASE("Found sum","[Sum]"){
    std::vector<int> v{1, 6, 12, 0, 19, 581, 28, 5, 9, 7, 8};
    int act = Sum(v);
    int exp = 676;
    REQUIRE(act == exp);
}