class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int currentListSize = nums.size();
        for(int i = 0; i < currentListSize; i++){
            if(nums[i] == val){
                currentListSize--;
                for(int j = i; j < currentListSize; j++){
                    nums[j] = nums[j+1];
                }
                i--;
            }
        }
        std::cout << currentListSize << std::endl;
        return currentListSize;
    }
};
