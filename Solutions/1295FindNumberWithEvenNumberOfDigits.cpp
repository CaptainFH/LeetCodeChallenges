class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // write your code here
        int base = 10;
        int digitNumber = 1;
        int result = 0;
        for(int e : nums){
            //std::cout << e << std::endl;
            while((e/base) != 0){
                digitNumber++;
                base = base*10;
            }
            //std::cout << digitNumber << std::endl;
            if((digitNumber%2) == 0){
                result++;
            }
            digitNumber = 1;
            base = 10;
        }
        return result;
    }
};
