class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        return plus(digits, digits.size()-1);
    }
    vector<int> plus(vector<int> digits,int currentIndex ){
        digits[currentIndex]++;
        if (digits[currentIndex] == 10){
            digits[currentIndex] = 0;
            if(currentIndex != 0){
                return plus(digits,currentIndex-1);
            }
            vector<int> newResult(digits.size()+1,0);
            newResult.at(0) = 1;
            return newResult;
        }
        return digits;
    }
};
