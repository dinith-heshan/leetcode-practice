#include <map>
#include <set>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, std::vector<int>> id_map;

        if (target > 0) {
            std::multiset<int> inf_zero, zero_target, target_inf;

            for (int i = 0; i < nums.size(); i++) {
                id_map[nums[i]].push_back(i);

                if (nums[i] < 0) {
                    inf_zero.insert(nums[i]);
                } else if (nums[i] < target + 1){
                    zero_target.insert(nums[i]);
                } else {
                    target_inf.insert(nums[i]);
                }
            }

            for (std::multiset<int>::iterator iter_i = zero_target.begin(); iter_i != zero_target.end(); ++iter_i) {
                for (std::multiset<int>::iterator iter_j = iter_i + 1; iter_j != zero_target.end(); ++iter_j) {
                for (int j = 0; j < zero_target.size(); i++)
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            id_map[nums[i]].push_back(i);

            if (target > 0) {
                ta
            }
        }

        // std::set<int> nums_set = nums(nums.begin(), nums.end());
    }
};

int main() {
    std::vector<int> nums;
    int target;

    Solution solution;
    
    nums = {2,7,11,15};
    target = 9;

    solution.twoSum(nums, target);
    
    // nums = {3,2,4};
    // target = 6;

    // solution.twoSum(nums, target);
    
    // nums = {3,3};
    // target = 6;

    // solution.twoSum(nums, target);

    return 0;
}
