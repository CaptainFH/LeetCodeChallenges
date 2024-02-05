class Solution {
public:
    bool isPalindrome(int x) {
        string toCheck =  to_string(x);
        int j = toCheck.length() - 1;
        for (int i = 0; i < (toCheck.length()) / 2; i++){
            if (toCheck[i] != toCheck[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};
