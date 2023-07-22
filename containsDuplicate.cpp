// Complexity - Time: O(n), Space: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for(auto& num: nums) {
            if(set.count(num))
                return true;
            set.insert(num);
        }
        return false;
    }
};