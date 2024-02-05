class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int listSize = nums.size();
        int lastSeen = nums[0];
        for(int i = 1; i < listSize; i++){
            if(nums[i] == lastSeen){
                for(int j = i; j < listSize; j++){
                    if( (j+1) >= listSize){
                        std::cout << nums[i] << std::endl;
                        break;
                    }
                    nums[j] = nums[j+1];
                }
                listSize--;
                i--;
            }
            lastSeen = nums[i];
        }
        return listSize;
    }
};
