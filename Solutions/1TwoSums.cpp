class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> groups;
        vector<int> result(2,-1);
        for(int i = 0; i < nums.size(); i++){
            if (groups.contains(target - nums[i])){
                result.at(0) = groups[target - nums[i]];
                result.at(1) = i;
                return result;
            }
            groups[nums[i]] = i;
        }
        return result;
    }
};
