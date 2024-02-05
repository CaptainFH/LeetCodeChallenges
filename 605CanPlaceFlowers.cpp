class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            cout << i << endl;
            if((flowerbed.at(i) == 0 && ( i+1 == flowerbed.size() ||flowerbed.at(i+1) == 0)) && ( i == 0 || flowerbed.at(i-1) == 0)){
                flowerbed.at(i) = 1;
                n--;
            }
            if (n <= 0){
                    return true;
                }
        }
        return false;    
    }
};
