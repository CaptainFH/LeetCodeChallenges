class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int iterations = result.size();
        int iterator = 0;
        for(int i = 0; i < result.size(); i++){
            if((nums.at(i) % 2)  == 0){
                
                result.at(iterator) = nums.at(i);
                iterator++;
            }else{
                result.at(iterations-1) = nums.at(i);
                iterations--;
            }
        }
        return result;
    }
};
