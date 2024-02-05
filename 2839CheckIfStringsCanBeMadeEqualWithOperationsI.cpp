class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        // write your code here
        char temp;
        for(int i = 0; i < 4; i++){
            //std::cout << s1[i] << s2[i] << std::endl;
            if(!(s1[i] == s2[i])){
                if(i == 0){
                    if(s1[i] == s2[2] && s2[i]  == s1[2]){
                        temp = s2[i];
                        s2[i] = s2[2];
                        s2[2] = temp;
                    }else{
                        return false;
                    }
                }
                else if(i == 1){
                    if(s1[i] == s2[3] && s2[i]  == s1[3]){
                        temp = s2[i];
                        s2[i] = s2[3];
                        s2[3] = temp;
                    }else{
                        return false;
                    }
                }
                else{
                    return false;    
                }
            }
            //std::cout << s1[i] << s2[i] << std::endl;
        }
        return true;
    }
};
