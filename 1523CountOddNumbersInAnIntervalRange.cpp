class Solution {
public:
    int countOdds(int low, int high) {
        // write your code here
        bool isOdd;
        int result = 0;
        (low % 2) != 0 ? isOdd = true : isOdd =false;
        for(int i = low; i < (high+1); i++){
            if(isOdd){
                result++;
            }
            isOdd = !isOdd;
        }
        return result;
    }
};
