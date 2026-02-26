#include <vector>
#include <map>
#include <set>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, vector<int>> id_map;
        set<int>

        for (int i = 0; i < nums.size(); i++) {
            id_map[nums[i]].push_back(i);
        }

        set<int> nums_set = nums(nums.begin(), nums.end());

        return {0,1};
    }
};
