class Solution {
public:
    string reformat(string s) {
        string result = "";
        int numIterator = 0;
        int charIterator = 0;
        bool needsNum = false;
        int iterator;
        int numbOfChars = 0;
        int numbOfDigits = 0;
        if(s.size() % 2 != 0){
            for(int i = 0; i < s.size(); i++){
                if(std::isdigit(s[i])){
                    numbOfDigits++;
                }
                else{
                    numbOfChars++;
                }
            }
            numbOfChars < numbOfDigits ? needsNum = true : needsNum = false;
        }
        while(result.size() != s.size()){
            needsNum ? iterator = numIterator : iterator = charIterator;
            for(iterator; iterator < s.size(); iterator++){
                if(needsNum && std::isdigit(s[iterator])){
                    numIterator = iterator+1;
                    result = result + s[iterator];
                    break;
                }else if(!(needsNum) && !(std::isdigit(s[iterator]))){
                    charIterator = iterator +1;
                    result = result + s[iterator];
                    break;
                }
            } 
            needsNum = !needsNum;
            if(iterator == s.size()){
                return "";
            }
        }
        return result;
    }
};
