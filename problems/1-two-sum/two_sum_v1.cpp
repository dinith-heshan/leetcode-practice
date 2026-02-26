#include <map>
#include <set>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                } 
            }
        }

        return {0,1};
    }
};

int main() {
    std::vector<int> nums;
    int target;

    Solution solution;
    
    nums = {2,7,11,15};
    target = 9;

    solution.twoSum(nums, target);
    
    nums = {3,2,4};
    target = 6;

    solution.twoSum(nums, target);
    
    nums = {3,3};
    target = 6;

    solution.twoSum(nums, target);

    return 0;
}
