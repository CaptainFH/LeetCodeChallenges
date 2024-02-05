class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned long base = 2147483648;
        std::string notMyDay = "";
        while(base != 0){
            //std::cout << n << std::endl;
            if (n < base){
                notMyDay = notMyDay +"0" ;
            }else{
                n = n - base;
                notMyDay = notMyDay + "1";
            }
            //std::cout << notMyDay << std::endl;  
            base = base/2;
        }
        std::cout << notMyDay << std::endl;
        unsigned long base2 = 2147483648;
        uint32_t result = 0;
        for(int i = notMyDay.length(); i > 0; i--){
            std::cout << notMyDay[i-1] << std::endl;
            if (notMyDay[i-1] == '1'){
                result= result + base2;
            }
            base2 = base2/2;
        }
        return result;
    }
};
