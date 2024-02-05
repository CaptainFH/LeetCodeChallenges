class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int toBeCalculated[text1.length()+1][text2.length()+1];
        for (int i = 0;i < (text1.length() + 1); i++){
            toBeCalculated[i][0] = 0;
        }
        for (int i = 0;i < (text2.length()+1); i++){
            toBeCalculated[0][i] = 0;
        }
        int biggest = 0;
        //cout << sizeof(toBeCalculated) << endl;
        for(int i = 1; i <(text1.length() + 1); i++){
            for(int j = 1;j < (text2.length() + 1); j++){
                int temp;
                if (text1[i-1] == text2[j-1]){
                    toBeCalculated[i][j] = toBeCalculated[i-1][j-1] +1;
                }else{
                    if (toBeCalculated[i-1][j] > toBeCalculated[i][j-1]){
                        toBeCalculated[i][j] = toBeCalculated[i-1][j];
                    }else{
                        toBeCalculated[i][j] = toBeCalculated[i][j-1];
                    }
                }
                if (toBeCalculated[i][j] > biggest){
                    biggest = toBeCalculated[i][j];
                } 
                cout << &toBeCalculated[j-1]<< endl;
            }
        }
        return biggest;
    }
};
