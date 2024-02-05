class Solution {
public:
    string sortVowels(string s) {
        // write your code here
         vector<char> charsToBeSorted;
        vector<int> elementsToBeSwapped;
         for(int i = 0; i < s.size(); i++){
             if(isVowel(s[i])){
                 charsToBeSorted.push_back(s[i]);
                 elementsToBeSwapped.push_back(i);
             }
         }
         std::sort(charsToBeSorted.begin(), charsToBeSorted.end());
         for(int i = 0; i < charsToBeSorted.size(); i++){
             s[elementsToBeSwapped.at(i)] = charsToBeSorted.at(i);
         }
        return s;
    }
    
    bool isVowel(char isIt){
        return (isIt ==  'a'|| isIt ==  'A'|| isIt == 'e' || isIt == 'E' || isIt == 'i' || isIt == 'I' || isIt == 'o' || isIt == 'O' || isIt ==  'u' || isIt == 'U');
    }
};
