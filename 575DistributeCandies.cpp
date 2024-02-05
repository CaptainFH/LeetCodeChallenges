class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        // write your code here
        int result = 0;
        unordered_map<int, int> candyCount;
        for(int e : candies){
            if(candyCount.find(e)== candyCount.end()){
                candyCount[e] = 1;
            }else{
                candyCount[e]++;
            }
            if(candyCount.size() == (candies.size()/2)){
                return candyCount.size();
            }
        }
        if(candyCount.size() >= (candies.size()/2)){
            return candies.size()/2;
        }
        return candyCount.size();
    }
};

