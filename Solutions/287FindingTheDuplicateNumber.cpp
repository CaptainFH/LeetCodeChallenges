class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> copiedList(nums.size(),0);
        for(int i = 0; i < nums.size(); i++){
            if (copiedList.at(nums.at(i)) != 0){
                return nums.at(i);
            }
            copiedList.at(nums.at(i)) = nums.at(i);
        }
        return -1;
    }
};
