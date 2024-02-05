class Solution {
public:
    int lengthOfLastWord(string s) {
        bool foundWord = false;
        int wordLenght = 0;
        for(int i = s.size()-1; i > -1; i--){
            std::cout<< i << std::endl;
            if(!foundWord){
                if (s[i] != ' '){
                    foundWord = true;
                }
            }
            if (foundWord){
                if(s[i] == ' '){
                    break;
                }else{
                    wordLenght++;
                }
            }
        }
        return wordLenght;
    }
};
