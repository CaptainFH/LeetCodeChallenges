class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        long long temp;
        uint32_t two = 2;
        //std::cout << n << std::endl;
        for(uint32_t i = 32; i != -1; i--){
            temp = std::pow(two,i);
            std::cout << temp << std::endl;
            if(n == 0){
                break;
            }else if(temp <= n){
                //std::cout << i <<" "<< temp << " " << n  << std::endl;
                result++;
                n = n - temp;
            }
        }
        //std::cout << n  << std::endl;
        return result;
    }
};
