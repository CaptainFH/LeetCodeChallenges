class Solution {
public:
	int findComplement(int num) {
		// write your code here
		//std::cout << std::flip(num) << std::endl;
		string inBytes = std::bitset<32>(num).to_string();
		//std::cout << inBytes << std::endl;
		bool pastFirstVal = false;
		int result = 0;
		for(int i = 0; i < inBytes.size(); i++){
		    if(inBytes[i] == '1' && !(pastFirstVal)){
		        pastFirstVal = true;
		    }
		    if(pastFirstVal){
		        if(inBytes[i] == '0'){
                    result += std::pow(2,(32-(i+1)));
		        }
		    }
		}
		return (result) ;
	}
};

