class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // write your code here
        int result = 0;
        int arraySize = 1;
        while(arraySize < arr.size()){
            for(int i = 0; i < arr.size(); i++){
                if(!(arraySize > (arr.size()) - i)){
                    for(int j = 0; j < arraySize; j++){
                       // std::cout << arr.at(i+j);
                        result += arr.at(i+j);
                    }
                    //std::cout << "--" << std::endl;
                }
            }
            arraySize += 2;
        }
        if((arr.size()%2) != 0){
        for(int e : arr){
            result += e;
        }
        }
        return result;
    }
};
