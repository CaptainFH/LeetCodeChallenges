class Solution {
public:
    bool canJump(vector<int>& nums) {
        //disregared paths if the new route leads to the same as your main route. //if nums[i+1] >= index[i]-1
        //int neededReach = nums.size();
        if(nums.size() == 1){
            return true;
        }
        int currentRange = 1;
        for(int i = 0; i < (nums.size()-1); i++){
            currentRange--;
            if(nums.at(i) > currentRange){
                currentRange = nums.at(i);
            }
            if(currentRange == 0){
                return false;
            }
        }
        return true;
    }

    bool inJump(vector<int>& nums, int ci){
        if(ci >= nums.size()-1){
            return true;
        }
       // cout << nums[ci] << endl;
        if((!(nums[ci] == 0) )){
            if(nums[ci] + ci >= (nums.size()-1)){
                return true;
            }
            int j = 0;
            for(int nextJump = nums[ci]; nextJump > 0; nextJump--){
                if((nums[nextJump+ci]) > nums[ci]-nextJump){
                    //cout << "went by " << nextJump << endl; 
                    if(inJump(nums, nextJump + ci)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
