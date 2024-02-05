class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int divisor = 1000000000;
        int increassor = 1;
        bool swap = false;
        int totalToMax = std::numeric_limits< int >::max();
        
        if(x < 1){
            if (x < (totalToMax*(-1))){
                return 0;
            }
            x = x*(-1);
            swap = true;;
        }
        while(divisor >= 1){
        if(x / divisor >= 1){
            int temp = (int)(x / divisor);
            if (increassor  == 1000000000 ){
            std::cout << "got here" << std::endl;
                if ((int)(x / divisor) > 3){
                    return 0;
                } 
            }
            if (increassor*(temp) > totalToMax){
               std::cout << increassor*((int)(x / divisor)) << std::endl;
               std::cout <<  totalToMax << std::endl;
                return 0;
            }
            //std::cout << totalToMax << std::endl;
            result +=   increassor*temp;
            x = x -  ( divisor * temp);
            totalToMax = totalToMax - increassor*(temp);
            if (increassor ==  1000000000){
                
            }else{
            increassor =  increassor*10;
            }
        }else if (increassor > 1) {
            increassor = increassor*10;
        }
        divisor = divisor /10;
        //std::cout << result << std::endl;
        }
        if (swap){
            result = result * (-1);
        }
        return result;
    }
};
