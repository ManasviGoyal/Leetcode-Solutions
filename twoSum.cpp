// Complexity - Time: O(n), Space: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> maps;

        for(int i=0; i<nums.size(); ++i) {
            int n = nums[i];
            int diff = target-n;
            if(maps.count(diff)) {
                return {i, maps[diff]};
            }
            maps[n] = i;
        }
        return {};
    }
};
