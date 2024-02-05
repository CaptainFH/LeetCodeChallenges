class Solution {
public:
    int subtractProductAndSum(int n) {
        // write your code here
        int originalNum = n;
        int totalProduct = 1;
        int totalSum = 0;
        int dividing = 100000;
        bool reached = false;
        while(dividing >= 10){
            //std::cout << n/dividing << std::endl;
            if(!((n/dividing) == 0) || reached){
                totalProduct = totalProduct*(n/dividing);
                totalSum += n/dividing;
                n = n %dividing;
                reached = true;
                //std::cout << totalProduct << " " << totalSum << std::endl;
            }
            dividing = dividing/10;
        }
        totalProduct = totalProduct * (originalNum%10);
        totalSum += originalNum%10;
        //std::cout << totalProduct << " " << totalSum << std::endl;
        return totalProduct - totalSum;
    }
};
