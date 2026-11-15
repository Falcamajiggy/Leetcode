#include <iostream>
#include <vector>
using namespace std;

std::vector<int> twoSum(vector<int> &nums, int target);

int main(){
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 8;

    std::vector<int> output = twoSum(nums, target);
    cout << "{";
    for(auto i: output){
        cout << i << ",";
    }
    cout << "}";
}


vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == target - nums[i]) {
                return {i, j};
            }
        }
    }
    // Return an empty vector if no solution is found
    return {};
}
