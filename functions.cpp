#include<vector>
#include<iostream>

// returns a vector with true for even numbers and false for odd numbers
std::vector<bool> EvenMask(std::vector<int> nums){
	std::vector<bool> evens;
	int size = nums.size();
	for(int i = 0; i < size; i++){
		if(nums[i] % 2){
			evens.push_back(false); 
		} else {
			evens.push_back(true);
		}
	}

	return evens;

}

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int> nums){
    std::vector<bool> odds;
	int size = nums.size();
	for(int i = 0; i < size; i++){
		if(nums[i] % 2){
			odds.push_back(true); 
		} else {
			odds.push_back(false);
		}
	}

	return odds;
}

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}