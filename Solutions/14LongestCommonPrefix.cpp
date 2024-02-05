class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::cout << strs[0].size() << std::endl;
       if (strs.size() == 1){
           return strs[0];
       }
       string result = "";
       bool done = false;
       for(int j = 0; j < strs[0].length(); j++){
        for(int i = 1; i < strs.size(); i++){
           if(j != strs[i].length() && strs[0].at(j) == strs[i].at(j)){

           }
           else{
               done = true;
           }
        }
        if (done){
            return result;
        }
        else{
            result = result + strs[0].at(j);
        }
       }
       return result;
    }
};
