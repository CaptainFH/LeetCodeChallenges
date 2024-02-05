class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for(int i = 1; i < (numRows+1); i++){
        vector<int> currentRow(i, 1);
        for(int j = 0; j < i; j++){
            if(j == 0 || j == (i-1)){
                currentRow.at(j) = 1;
            }else{
                currentRow.at(j) = result.at(i-2).at(j-1) + result.at(i-2).at(j); 
            }
        }
        result.push_back(currentRow);
    }
    return result;
    }
};
