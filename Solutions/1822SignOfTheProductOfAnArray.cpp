class Solution {
public:
    int arraySign(vector<int>& nums) {
        int result = 1;
        for(int i = 0; i < nums.size(); i++){
            result = result * signFunc(nums[i]);
        }
        return result;
    }

    int signFunc(int x){
        if (x == 0){
            return 0;
        }
        if (x < 0){
            return -1;
        }
        return 1;
    }
};
