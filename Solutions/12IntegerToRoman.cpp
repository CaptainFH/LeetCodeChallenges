class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        while(num != 0){
            if(num >= 1000){
                num = num-1000;
                result = result + "M";
            }
            else if(num >=100){
                if(num >= 900){
                    num = num-900;
                    result = result + "CM";
                
                }else if (num >= 500){
                    num =  num-500;
                    result = result +"D";
                }
                else if(num >= 400){
                    num = num-400;
                    result = result + "CD";
                }else{
                    num = num-100;
                    result = result + "C";
                }
            }
            else if (num >= 10){
                if(num >= 90){
                    num = num - 90;
                    result = result + "XC";
                }
                else if (num >= 50){
                    num = num - 50;
                    result = result + "L";
                }
                else if(num >= 40){
                    num = num - 40;
                    result = result +"XL";
                }
                else {
                    num = num - 10;
                    result = result + "X";
                }
            }
            else{
                if (num >= 9){
                    num = num -9;
                    result = result + "IX";
                }
                else if (num >= 5){
                    num = num - 5;
                    result = result +"V";
                }
                else if (num >= 4){
                    num = num - 4;
                    result = result + "IV";
                }
                else{
                    num = num - 1;
                    result = result + "I";
                }
            }
        }
        return result;
    }       
 };
